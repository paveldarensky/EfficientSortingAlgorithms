#include "Sort.h"
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <random>

double generateRandomDouble(double a, double b) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<double> dis(a, b);
	return dis(gen);
}

void main()
{
	int n;
	std::cout << "Enter the n: ";
	std::cin >> n;

	double** MasPtrShell_1 = new double* [n];
	double** MasPtrShell_2 = new double* [n];
	double** MasPtrShell_3 = new double* [n];
	double** MasPtrBinHeap_1 = new double* [n];
	double** MasPtrBinHeap_2 = new double* [n];
	double** MasPtrBinHeap_3 = new double* [n];

	/* 1 */

	std::cout << "\nStart Massive_1:\n";
	for (int i = 0; i < n; i++)
	{
		MasPtrShell_1[i] = new double(i); MasPtrBinHeap_1[i] = new double(i);
	//	std::cout << *MasPtrShell_1[i] << " ";
	}
	//std::cout << "\n\n";

	/* SortShell */
	int count = Sort<double>::SortShell(MasPtrShell_1, n);
	std::cout << "Sort Massive (SortShell):\n";
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << *MasPtrShell_1[i] << " ";
	//}
	//std::cout << "\n";
	std::cout << "Count of comparing = " << count << "\n";
	bool flagcheck = Sort<double>::CheckSort(MasPtrShell_1, n);
	if (flagcheck) { std::cout << "check was completed successfully!\n\n"; }
	else { std::cout << "check was completed not successfully!\n\n"; }

	/* SortBinHeap */
	count = Sort<double>::SortBinHeap(MasPtrBinHeap_1, n);
	std::cout << "Sort Massive (SortBinHeap):\n";
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << *MasPtrBinHeap_1[i] << " ";
	//}
	//std::cout << "\n";
	std::cout << "Count of comparing = " << count << "\n";
	flagcheck = Sort<double>::CheckSort(MasPtrBinHeap_1, n);
	if (flagcheck) { std::cout << "check was completed successfully!\n"; }
	else { std::cout << "check was completed not successfully!\n"; }
	std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";

	/* 2 */

	std::cout << "Start Massive_2:\n";
	for (int i = 0; i < n; i++)
	{
		MasPtrShell_2[i] = new double(n - i); MasPtrBinHeap_2[i] = new double(n - i);
	//	std::cout << *MasPtrShell_2[i] << " ";
	}
	//std::cout << "\n\n";

	/* SortShell */
	count = Sort<double>::SortShell(MasPtrShell_2, n);
	std::cout << "Sort Massive (SortShell):\n";
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << *MasPtrShell_2[i] << " ";
	//}
	//std::cout << "\n";
	std::cout << "Count of comparing = " << count << "\n";
	flagcheck = Sort<double>::CheckSort(MasPtrShell_2, n);
	if (flagcheck) { std::cout << "check was completed successfully!\n\n"; }
	else { std::cout << "check was completed not successfully!\n\n"; }

	/* SortBinHeap */
	count = Sort<double>::SortBinHeap(MasPtrBinHeap_2, n);
	std::cout << "Sort Massive (SortBinHeap):\n";
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << *MasPtrBinHeap_2[i] << " ";
	//}
	//std::cout << "\n";
	std::cout << "Count of comparing = " << count << "\n";
	flagcheck = Sort<double>::CheckSort(MasPtrBinHeap_2, n);
	if (flagcheck) { std::cout << "check was completed successfully!\n"; }
	else { std::cout << "check was completed not successfully!\n"; }
	std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";

	/* 3 */

	std::cout << "Start Massive_3:\n";
	for (int i = 0; i < n; i++)
	{
		double num = generateRandomDouble(-100, 100);
		MasPtrShell_3[i] = new double(num); MasPtrBinHeap_3[i] = new double(num);
	//	std::cout << *MasPtrShell_3[i] << " ";
	}
	//std::cout << "\n\n";

	/* SortShell */
	count = Sort<double>::SortShell(MasPtrShell_3, n);
	std::cout << "Sort Massive (SortShell):\n";
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << *MasPtrShell_3[i] << " ";
	//}
	//std::cout << "\n";
	std::cout << "Count of comparing = " << count << "\n";
	flagcheck = Sort<double>::CheckSort(MasPtrShell_3, n);
	if (flagcheck) { std::cout << "check was completed successfully!\n\n"; }
	else { std::cout << "check was completed not successfully!\n\n"; }

	/* SortBinHeap */
	count = Sort<double>::SortBinHeap(MasPtrBinHeap_3, n);
	std::cout << "Sort Massive (SortBinHeap):\n";
	//for (int i = 0; i < n; i++)
	//{
	//	std::cout << *MasPtrBinHeap_3[i] << " ";
	//}
	//std::cout << "\n";
	std::cout << "Count of comparing = " << count << "\n";
	flagcheck = Sort<double>::CheckSort(MasPtrBinHeap_3, n);
	if (flagcheck) { std::cout << "check was completed successfully!\n"; }
	else { std::cout << "check was completed not successfully!\n"; }
	std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
}