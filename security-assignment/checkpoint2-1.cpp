#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text = "cz uczsdj qv lcf day vjqyq vdos ws kwz icwavgo ygsm sq zcm fqqy-lmd sq skd fgdzsz. jguqgjz qv zsjcafd dedasz kcy lm aqn zijdcy coo qedj skd vwdoy, lgs vjqyq nqgoy qaom zcm aq yqgls dedjmskwaf nwoo ld todcjdy gi wa skd uqjawaf.clqgs uwyawfks tcjjwcfdz tcud vqj skd wuiqjscas vqox.qad lm qad skdm jqoody cncm, vwoody nwsk vgoo lgs edjm gazcswzvwdy kqllwsz. fcjydadjz tcud lm cjjcafdudas, cay jduqedy wa nkddo - lcjjqnz skqzd skcs kcy wacyedjsdasom jducwady ldkway. awfks zoqnom ";
    map <char, char>key={
        {'d','e'},
        {'s','t'},
        {'q','o'},
        {'c','a'},
        {'a','n'},
        {'j','r'},
        {'w','i'},
        {'y','d'},
        {'o','l'},
        {'z','s'},
        {'k','h'},
        {'l','b'},
        {'m','y'},
        {'g','u'},
        {'v','f'},
        {'f','g'},
        {'u','m'},
        {'n','w'},
        {'e','v'},
        {'i','p'},
        {'t','c'},
        {'x','k'},
    };

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
        {
            continue;
        }
        
        text[i] = key[text[i]];
    }

    cout << text << endl;
}