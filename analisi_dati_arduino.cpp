#include <iostream>
#include <fstream>
#include <vector>
#include <TGraph.h>
#include <TCanvas.h>

void ReadDataFile(const char* filename, std::vector<double>& x, std::vector<double>& y) {
  std::ifstream file(filename);
  if (!file) {
    std::cerr << "Errore nell'apertura del file " << filename << std::endl;
    return;
  }

  double value_x, value_y;
  while (file >> value_x >> value_y) {
    x.push_back(value_x);
    y.push_back(value_y);
  }

  file.close();
}

void PlotGraph(const std::vector<double>& x, const std::vector<double>& y) {
  TGraph* graph = new TGraph(x.size(), x.data(), y.data());
  graph->SetTitle("Intensita' luminosa in funzione del tempo");

  TCanvas* canvas = new TCanvas("canvas", "Graph", 800, 600);
  graph->Draw("APL");
  graph->GetXaxis()->SetTitle("t"); 
  graph->GetYaxis()->SetTitle("I"); 

  //canvas->Update();
  //canvas->SaveAs("graph.png");

  //delete graph;
  //delete canvas;
}

void PlotDataFile(const char* filename) {
  std::vector<double> x, y;
  ReadDataFile(filename, x, y);
  PlotGraph(x, y);
}

void analisi_dati_arduino() {
  const char* filename = "light_sensor_luce_pulsata_arduino.txt";
  PlotDataFile(filename);
}
