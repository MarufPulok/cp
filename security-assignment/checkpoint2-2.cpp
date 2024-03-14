#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text = "cej amxziu, gobxm om zbz uij kiqhmj wfwqdx'a gwqubuh, zbz uij jobul ik bj gbjo wud hqmwj zmhqmm ik niunmujqwjbiu. oba kiqjbmjo cbqjozwd nwfm wuz gmuj--gbjo jom eaewx vadnoixihbnwx cxig. kiqjd! om gwa uij dieuh wud xiuhmq. xbkm ui xiuhmq ajqmjnomz cmkiqm obf wa w ywaj eunowqjmz kbmxz, bja oiqbpiu xiaj bu jom zbajwunm. om owz cmmu iu jqwujiq kiq mbhoj dmwqa wuz jom jbfm owz vwaamz tebnlxd. wuijomq mbhoj dmwqa wuz om giexz cm umwqxd kbkjd. ixz whm giexz cm xiifbuh. wuz om owz uij mymu fwzm w zmnmuj cmhbuubuh bu vadnoiobajiqd! dehi wfwqdx avilm cqbhojxd ik xwga wuz giqlmz iej oba mtewjbiua cd fwlbuh zwqbuh waaefvjbiua cwamz iu bujebjbiu. cej oig niexz ium viaabcxd jmaj joiam waaefvjbiua? vadnoiobajiqd gwa uij dmj wu msvmqbfmujwx anbmunm. jom nifvxmjm ajezd ik vadnoiobajiqd giexz qmtebqm msvmqbfmuja jowj giexz buyixym giqxza ik vmivxm, nmujeqbma ik jbfm--wuz w jijwx xwnl ik mjobnwx qmaviuabcbxbjd. bj viamz wu bfviaabcxm vqicxmf wuz om qmamujmz owybuh ji avmuz wud jbfm gowjmymq iu zmvwqjfmujwx jwala, ai om gwxlmz oifm wj jom muz ik jom zwd bu w fiqiam fiiz. iqzbuwqbxd om niexz wxgwda nieuj iu w gwxl joqieho jom nwfvea ji qieam oba avbqbja. ajqmmxbuh eubymqabjd gwa obho-zifmz wuz jom nwfvea hwym jom kmmxbuh ik cmbuh iej bu jom ivmu gbjoiej jom umnmaabjd ik muzeqbuh jom lbuz ik gmwjomq om owz msvmqbmunmz iu oba ium (wuz iuxd) ybabj ji jom bfvmqbwx vwxwnm. jomqm gmqm jqmma, xwgua, gwxla, wxfiaj wa joieho om gmqm iu jom nwfvea ik oba ixz nixxmhm iu oba oifm giqxz ik omxbniu. jom bxxeabiu ik nxiezbumaa owz cmmu wqqwuhmz kiq jom zwd gbjo jom aeuxbhoj (ui aeu, ik nieqam, reaj aeuxbhoj) wvvmwqbuh wuz zbawvvmwqbuh wj izz bujmqywxa. wuz bj gwa w xbjjxm niix, reaj w xbjjxm. bj ammfmz ji amxziu jowj jom niix zwda nwfm w xbjjxm fiqm kqmtemujxd jowu jomd eamz ji. gwa jqwujiq awybuh mumqhd? gwa bj bunqmwabuh bumkkbnbmund? iq (wuz om anigxmz bugwqzxd wa om joiehoj bj) gwa om hmjjbuh ixz wuz gwa oba cxiiz hmjjbuh jobu? om vxwnmz oba owuza bu";
    map <char, char>key={
        {'m','e'},
        {'j','t'},
        {'i','o'},
        {'u','n'},
        {'w','a'},
        {'b','i'},
        {'a','s'},
        {'o','h'},
        {'x','l'},
        {'z','d'},
        {'q','r'},
        {'e','u'},
        {'h','g'},
        {'d','y'},
        {'n','c'},
        {'g','w'},
        {'v','p'},
        {'f','m'},
        {'k','f'},
        {'c','b'},
        {'l','k'},
        {'y','v'},
        {'t','q'},
        {'s','x'},
        {'r','j'},
        {'p','z'}
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