#include "rus.h"

структура Человек {
    символ *имя;
    число возраст;
};

союз Советский {
    дробь время;
    короткое день; 
};

число основной(пустота)
{
    константа число один = 1;
    беззнаковый символ a = {0x00};

    если (один равно 1 и один больше 0) 
    {
        печать("С словарными условиями\n");        
    }
    иначе если (один == 1 || a == 0x00) 
    {
        печать("HEX %#x\n", a);
    }
    иначе 
    {
        число мини = 0;
        делай {
            печать("Хуй!\n");
            мини += 1;
            выход;
        }
        пока (мини меньше 3);
    }
    
    символ буффер[8]; // safe?
    ввод("%s", буффер);
    возврат 0; 
}
