#include <iostream>
#include <string>


using namespace std;
int amount;
void input(){
    cout << "Amount:";
    cin >> amount;
}
int wood(int quant){
    int conta = (quant/4)/64;
    return conta;
}
int woodrest(int quant){
    int conta = (quant/4)%64;
    return conta;
}
int quartz(int quant){
    int conta = (quant * 4)/64;
    return conta;
}
int quartzrest(int quant){
    int conta = (quant * 4)%64;
    return conta;
}
int ladder(int quant){
    int conta = ((quant * 2)/3)/64;
    return conta;
}
int concrete(int quant){
    int conta = quant/2;
    return conta;
}
int slabs(int quant){
    int conta = quant/2;
    return conta;
}
int slabsrest(int quant){
    int conta = quant%2;
    return conta;
}
int stairs(int quant){
    int conta = (3 * quant)/2;
    return conta;
}
int glasspane(int quant){
    int conta = (3 * quant)/8;
    return conta;
}
int pack(int quant){
    int conta = quant / 64;
    return conta;
}
int packrest(int quant){
    int conta = quant % 64;
    return conta;
}
int main()
{
int type;
cout << "0: Convert a large number to packs" << endl;
cout << "1:Planks to logs" << endl;
cout << "2:Quartz block to quartz ore" << endl;
cout << "3:Ladder to planks" << endl;
cout << "4:Concrete powder resources" << endl;
cout << "5:Slabs to planks" << endl;
cout << "6: Stairs to planks " << endl;
cout << "7: Glass pane to glass" << endl;
while(1){
cout << "Number of the operation(list above):";
cin >> type;
switch(type){
    case 1:
    input();
    cout << "You need:" << wood(amount) <<  " packs and "  << woodrest(amount) << " blocks " << endl;
    break;
    case 2:
    input();
    cout << "You need:" <<  quartz(amount) << " packs and " << quartzrest(amount) << " blocks " << endl;
    break;
    case 3:
        input();
        cout << "You need:" << ladder(amount) << " packs " << endl;
    break;
    case 4:
        input();
        cout << "Sand and Gravel:" << concrete(amount) << endl;
        cout << "Dye:" << amount/8 << endl;
        break;
    case 5:
        input();
        cout << "You need:" << slabs(amount) << " planks and " <<   slabsrest(amount) << " blocks " << endl;
        break;
    case 6:
        input();
        cout << "You need:" << stairs(amount) << " planks " << endl;
        break;
    case 7:
        input();
        cout << "You need:" << glasspane(amount) << " glasses " << endl;
        break;
    case 0:
        input();
        cout << "Result:" << pack(amount) << " packs and " << packrest(amount) << " blocks " << endl;
        break;
    default:
        cout << "Type not identified" << endl;

 }
}
return 0;
}
