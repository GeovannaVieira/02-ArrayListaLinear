@@ -25,7 +25,7 @@ int main()
void menu()
{
	int op = 0;
	while (op != 7) {
	while (op != 6) {
		system("cls"); // somente no windows
		cout << "Menu Lista Linear";
		cout << endl << endl;
@@ -101,6 +101,7 @@ void inserirElemento()

}
// deve ser implementada como resposta ao exercicio
void buscarElemento()
{

	int pos = -1;
	int busca=0;

		cout << "Digite o elemento desejado: \n";
		cin >> busca;

		//backup cout << "O valor e': " << busca << endl;

		for (int n = 0; n < nElementos; n++)
		{
			if (busca == lista[n]) {

				cout << "Encontrado pos: " << n << endl;
				pos = n;
			}
		}

		if (pos == -1)
		{
			cout << "Nao encontrado\n" << endl;
		}