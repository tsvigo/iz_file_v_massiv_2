#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <list>
using namespace std;
//template<class T>
/// 
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    try
    {
        std::ifstream f("/home/viktor/my_projects_qt_2/Funkciya_podachi_signalov_na_vhod/neyroni_i_signal.txt");
        if(!f)
        {
            std::cerr << "ERROR: Cannot open '/home/viktor/my_projects_qt_2/Funkciya_podachi_signalov_na_vhod/neyroni_i_signal.txt'!" << std::endl;
            exit(1);
        }
        std::string line;
       // QString line;
      //  template<class T>
         std::list<unsigned long long//int
                  > my_list = { //12, 5, 10
        };
       // std::list mylist;   
        while (std::getline(f,line))
        {
            my_list.push_back(
                std::atoll // строку в unsigned long long
              //  atoi
                              ( line.c_str() )  );  // atoi( line.c_str() )   
           // std::cout << my_list.back() << std::endl;
            // вывод в текстэдит
            ui->textEdit->append (QString::number(my_list.back()));
        }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/////
//        std::list<std::string> letters;
        
//        letters.push_back("abc");
//        std::string s{"def"};
//        letters.push_back(std::move(s));
        
//        std::cout << "std::list letters holds: ";
//        for (auto&& e : letters)
//            std::cout << std::quoted(e) << ' ';
        
//        std::cout << "\nMoved-from string s holds: " << std::quoted(s) << '
/// 
/// 
/// 
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////         
    }
    catch(const std::exception& ex)
    {
        std::cerr << "Exception: '" << ex.what() << "'!" << std::endl;
        exit(1);
    }
  //  exit(0);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
}

Dialog::~Dialog()
{
    delete ui;
}

