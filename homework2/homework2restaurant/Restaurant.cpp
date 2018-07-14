//
// Created by maaye on 5/1/2018.
//

using namespace std;
#include "Restaurant.h"
#include <iostream>

Restaurant::Restaurant(int nLarge, int nMedium, int nSmall) : size(6) {
  //tableList = (Table**)malloc(size * sizeof(Table*));
  int numTables = nLarge + nMedium + nSmall;
  tableList = new Table*[numTables];

  for (int i = 0; i < nLarge; i++) {
    tableList[i] = new Table(10);
  }

  for (int i = nLarge; i < nLarge + nMedium; i++) {
    tableList[i] = new Table(7);
  }

  for (int i = nLarge + nMedium; i < numTables; i++) {
    tableList[i] = new Table(5);
  }

  for (int i = 0; i < numTables; i++) {
    cout << "Table " << i + 1 << " maximum occupancy " << tableList[i]->maxOccupancy() << endl;
  }
}

void Restaurant::addGuests(int nGuests) {
  bool added = false;
  int numTables = 6;
  if (nGuests < 0) {
    throw invalid_argument("must be positive");
  }
  for (int i = 0; i < numTables; i++) {
    if (nGuests <= ((tableList[i]->maxOccupancy()) - tableList[i]->currentOccupancy())) {
      if (tableList[i]->addGuests(nGuests)) {
        cout << nGuests << " guests added to table " << i + 1 << endl;
        //cout << "guests added" << endl;
        added = true;
        break;
      }
    }
  }

  if (!added) {
    cout << " could not accomodate " << nGuests << " guests" << endl;
    //cout << "did not add" << endl;
  }


  /*if (nGuests < 0) {
    throw invalid_argument("must be positive");
  }
  for (int i = 0; i < 7; i++) {
    cout << "table " << tableList[i] << endl;
  }
  cout << nGuests << " guests added to table " << tableList[1] << endl;*/
}

void Restaurant::printSummary() {
  cout << "Summary:" << endl;
  int numTables = 6;
  for (int i = 0; i < numTables; i++) {
    if (tableList[i]->currentOccupancy() != 0) {
      cout << "table " << i + 1 << " " << tableList[i]->currentOccupancy() << "/" << tableList[i]->maxOccupancy() << endl;
    }
  }
  /*cout << "Table 1 maximum occupancy 10" << endl;
  cout << "Table 2 maximum occupancy 7" << endl;
  cout << "Table 3 maximum occupancy 7" << endl;
  cout << "Table 4 maximum occupancy 5" << endl;
  cout << "Table 5 maximum occupancy 5" << endl;
  cout << "Table 6 maximum occupancy 5" << endl;*/
}