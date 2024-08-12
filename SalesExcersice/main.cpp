#include <iostream>
using namespace std;

int main() {
    double sales = 95000;
    const double state_tax_rate = 0.04;
    const double county_tax_rate = 0.02;

    cout << "Sales in $$ " << sales << endl;

    double state_tax = 95000*state_tax_rate;
    double county_tax = 95000*county_tax_rate;

    cout <<"State tax in $"<< state_tax<< endl;
    cout<<"County tax in $ " << county_tax << endl;
    double total_tax = state_tax + county_tax;
    double sales_after_tax = sales - total_tax;
    cout << endl;
    cout<< "Total sales in $: " << sales_after_tax;
    return 0;
}
