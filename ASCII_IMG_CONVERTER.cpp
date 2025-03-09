#include <iostream>
#include <string>



        enum class Season {
            Spring = 2, 
            Summer = 3 , 
            Autumn = 5,
            Winter = 8,
        };
        
        int main()
        {
            Season current_season { Season::Spring };
            
            std::cout << current_season  << std::endl;


            return 0;
        }



