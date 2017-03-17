#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Build on this from here...
//And leave better Comments too
int main()

{
    char USERINPUT[30];
    char *K = "Kingdom Hearts";
    {
        printf("Welcome to FanPaper! \n");

        printf("FanPaper will help you search for wallpapers from your favorite franchise. \n");

        printf("What kind of wallpaper are you looking for?: ");
        scanf("%s", USERINPUT);

        if (strcmp(USERINPUT, K) != 0)

        {
            printf("Try these websites. (or add your own in Settings!) \n");
            printf("http://theotaku.com/wallpapers/category/kingdom_hearts/ \n");
            printf("https://www.khinsider.com/wallpapers \n");
            //One more HERE
        }
    }
    return 0;
}

