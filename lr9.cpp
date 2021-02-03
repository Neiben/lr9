// lr9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;



template <typename T>
struct tree_element {
    tree_element* left = nullptr;
    tree_element* right = nullptr;
    T value;
    int elem_height;
};

template <typename T>
struct tree_struct {
    tree_element<T>* root = nullptr;
    int height;
};


template <typename T>
void constructor(tree_struct<T>& avl_t ){
    avl_t.height = 0;
    avl_t.root = nullptr;
}

template <typename T>
void push(tree_struct<T>& avl_t, T val) {
    if (avl_t.root == nullptr) {
        tree_element<T>* abc = new tree_element<T>;
        abc->value = val;
        avl_t.root = abc;
    }
    else {
        tree_element<T>* abc = new tree_element<T>;
        abc->value = val;
        tree_element<T>* def = avl_t.root;
            while (def->right != nullptr) {
                if (abc->value > def->value) {
                    def = def->right;
                }
                else {                                     
                    while (def->left != nullptr) {                           
                        if (abc->value < def->value) {
                            def = def->left;                         
                        }
                    }
                    def->left = abc;
                }              
            }
            def->right = abc;
            
        }
      
 }
        

    
   
    


int main()
{

    tree_struct<int> avl_t;
    constructor(avl_t);
    push(avl_t, 5);
    push(avl_t, 7);
    push(avl_t, 4);
    push(avl_t, 9);
    push(avl_t, 8);

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
