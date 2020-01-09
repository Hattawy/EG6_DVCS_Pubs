void Coherent_ALU_phi_90()
{
//=========Macro generated from canvas: Can/Helium DVCS
//=========  (Wed Jan  8 16:10:15 2020) by ROOT version 6.14/04
   TCanvas *Can = new TCanvas("Can", "Helium DVCS",63,57,1200,400);
   gStyle->SetOptFit(1);
   Can->Range(0,0,1,1);
   Can->SetFillColor(0);
   Can->SetBorderMode(0);
   Can->SetBorderSize(2);
   Can->SetLeftMargin(0.08333334);
   Can->SetRightMargin(0.03278689);
   Can->SetTopMargin(0.02576996);
   Can->SetBottomMargin(0.2439024);
   Can->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Can_1
   TPad *Can_1 = new TPad("Can_1", "Helium DVCS_1",0,0,0.3779599,0.97423);
   Can_1->Draw();
   Can_1->cd();
   Can_1->Range(0.2666667,-0.3645161,2.6,0.75);
   Can_1->SetFillColor(0);
   Can_1->SetBorderMode(0);
   Can_1->SetBorderSize(2);
   Can_1->SetLeftMargin(0.25);
   Can_1->SetRightMargin(0);
   Can_1->SetTopMargin(0);
   Can_1->SetBottomMargin(0.2439024);
   Can_1->SetFrameBorderMode(0);
   Can_1->SetFrameBorderMode(0);
   
   TH2F *HALU_He_vs_Q2__1 = new TH2F("HALU_He_vs_Q2__1","",100,0.94,2.2,100,-0.05,0.75);
   HALU_He_vs_Q2__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_He_vs_Q2__1->SetLineColor(ci);
   HALU_He_vs_Q2__1->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   HALU_He_vs_Q2__1->GetXaxis()->CenterTitle(true);
   HALU_He_vs_Q2__1->GetXaxis()->SetNdivisions(205);
   HALU_He_vs_Q2__1->GetXaxis()->SetLabelFont(22);
   HALU_He_vs_Q2__1->GetXaxis()->SetLabelSize(0.05);
   HALU_He_vs_Q2__1->GetXaxis()->SetTitleSize(0.08);
   HALU_He_vs_Q2__1->GetXaxis()->SetTitleFont(22);
   HALU_He_vs_Q2__1->GetYaxis()->SetTitle("A_{LU}^{^{4}He}(90#circ)");
   HALU_He_vs_Q2__1->GetYaxis()->CenterTitle(true);
   HALU_He_vs_Q2__1->GetYaxis()->SetNdivisions(414);
   HALU_He_vs_Q2__1->GetYaxis()->SetLabelFont(22);
   HALU_He_vs_Q2__1->GetYaxis()->SetLabelSize(0.05);
   HALU_He_vs_Q2__1->GetYaxis()->SetTitleSize(0.08);
   HALU_He_vs_Q2__1->GetYaxis()->SetTitleOffset(0);
   HALU_He_vs_Q2__1->GetYaxis()->SetTitleFont(22);
   HALU_He_vs_Q2__1->GetZaxis()->SetLabelFont(22);
   HALU_He_vs_Q2__1->GetZaxis()->SetLabelSize(0.035);
   HALU_He_vs_Q2__1->GetZaxis()->SetTitleSize(0.035);
   HALU_He_vs_Q2__1->GetZaxis()->SetTitleFont(22);
   HALU_He_vs_Q2__1->Draw("");
   
   Double_t Graph0_fx1088[3] = {
   1.144,
   1.422,
   1.892};
   Double_t Graph0_fy1088[3] = {
   0.3036866,
   0.3641197,
   0.2946102};
   Double_t Graph0_fex1088[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1088[3] = {
   0.05134613,
   0.05949447,
   0.06051978};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1088,Graph0_fy1088,Graph0_fex1088,Graph0_fey1088);
   gre->SetName("Graph0");
   gre->SetTitle("This Work (<x_{B}>= 0.177, <-t> = 0.100)");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01088 = new TH1F("Graph_Graph01088","This Work (<x_{B}>= 0.177, <-t> = 0.100)",100,1.0692,1.9668);
   Graph_Graph01088->SetMinimum(0.2151381);
   Graph_Graph01088->SetMaximum(0.4425665);
   Graph_Graph01088->SetDirectory(0);
   Graph_Graph01088->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01088->SetLineColor(ci);
   Graph_Graph01088->GetXaxis()->SetLabelFont(22);
   Graph_Graph01088->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01088->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01088->GetXaxis()->SetTitleFont(22);
   Graph_Graph01088->GetYaxis()->SetLabelFont(22);
   Graph_Graph01088->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01088->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01088->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01088->GetYaxis()->SetTitleFont(22);
   Graph_Graph01088->GetZaxis()->SetLabelFont(22);
   Graph_Graph01088->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01088->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01088->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01088);
   
   gre->Draw("p");
   
   Double_t _sx21[3] = {
   1.15,
   1.42,
   1.87};
   Double_t _sy21[3] = {
   0.279,
   0.278,
   0.275};

   TGraph *graphS = new TGraph(3,_sx21,_sy21);
   graphS->SetName("");
   graphS->SetTitle("");
   graphS->SetMarkerStyle(34);
   graphS->SetMarkerSize(1.5);
   graphS->SetMarkerColor(6);
   graphS->SetLineStyle(9);
   graphS->SetLineWidth(2);
   graphS->SetLineColor(6);
   graphS->Draw("l");

   Double_t _fx21[7] = {
   1,
   1,
   1.143,
   1.423,
   1.902,
   3,
   3};
   Double_t _fy21[7] = {
   0,
   0.03210556,
   0.03210556,
   0.03744528,
   0.02753112,
   0.02753112,
   0};
   TGraph *graph = new TGraph(7,_fx21,_fy21);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","",100,0.8,3.2);
   Graph_Graph21->SetMinimum(0);
   Graph_Graph21->SetMaximum(0.04118981);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetLabelFont(22);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph21->GetXaxis()->SetTitleFont(22);
   Graph_Graph21->GetYaxis()->SetLabelFont(22);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21->GetYaxis()->SetTitleOffset(0);
   Graph_Graph21->GetYaxis()->SetTitleFont(22);
   Graph_Graph21->GetZaxis()->SetLabelFont(22);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph21);
   
   graph->Draw("f");
   
   TLegend *leg = new TLegend(0.5,0.85,0.98,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","CLAS (this work)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   TLegendEntry *entry2=leg->AddEntry("graphS","Fucini et al. [x]","L");
   entry2->SetLineStyle(9);
   entry2->SetLineWidth(2);
   entry2->SetLineColor(6);
   leg->Draw();
   TLine *line = new TLine(0.85,0,2.6,0);
   line->SetLineStyle(7);
   line->Draw();
   Can_1->Modified();
   Can->cd();
  
// ------------>Primitives in pad: Can_2
   TPad *Can_2 = new TPad("Can_2", "Helium DVCS_2",0.3779599,0,0.6725865,0.97423);
   Can_2->Draw();
   Can_2->cd();
   Can_2->Range(0.08,-0.3645161,0.31,0.75);
   Can_2->SetFillColor(0);
   Can_2->SetBorderMode(0);
   Can_2->SetBorderSize(2);
   Can_2->SetLeftMargin(0);
   Can_2->SetRightMargin(0);
   Can_2->SetTopMargin(0);
   Can_2->SetBottomMargin(0.2439024);
   Can_2->SetFrameBorderMode(0);
   Can_2->SetFrameBorderMode(0);
   
   TH2F *HALU_He_vs_x__2 = new TH2F("HALU_He_vs_x__2","",100,0.09,0.26,100,-0.05,0.75);
   HALU_He_vs_x__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   HALU_He_vs_x__2->SetLineColor(ci);
   HALU_He_vs_x__2->GetXaxis()->SetTitle("x_{B}");
   HALU_He_vs_x__2->GetXaxis()->CenterTitle(true);
   HALU_He_vs_x__2->GetXaxis()->SetNdivisions(205);
   HALU_He_vs_x__2->GetXaxis()->SetLabelFont(22);
   HALU_He_vs_x__2->GetXaxis()->SetLabelSize(0.05);
   HALU_He_vs_x__2->GetXaxis()->SetTitleSize(0.09);
   HALU_He_vs_x__2->GetXaxis()->SetTitleFont(22);
   HALU_He_vs_x__2->GetYaxis()->CenterTitle(true);
   HALU_He_vs_x__2->GetYaxis()->SetNdivisions(414);
   HALU_He_vs_x__2->GetYaxis()->SetLabelFont(22);
   HALU_He_vs_x__2->GetYaxis()->SetLabelSize(0.05);
   HALU_He_vs_x__2->GetYaxis()->SetTitleSize(0.14);
   HALU_He_vs_x__2->GetYaxis()->SetTitleOffset(0);
   HALU_He_vs_x__2->GetYaxis()->SetTitleFont(22);
   HALU_He_vs_x__2->GetZaxis()->SetLabelFont(22);
   HALU_He_vs_x__2->GetZaxis()->SetLabelSize(0.035);
   HALU_He_vs_x__2->GetZaxis()->SetTitleSize(0.035);
   HALU_He_vs_x__2->GetZaxis()->SetTitleFont(22);
   HALU_He_vs_x__2->Draw("");
   
   Double_t Graph0_fx1089[3] = {
   0.132,
   0.17,
   0.225};
   Double_t Graph0_fy1089[3] = {
   0.3196341,
   0.2780344,
   0.3196314};
   Double_t Graph0_fex1089[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1089[3] = {
   0.04466361,
   0.07888395,
   0.1612259};
   gre = new TGraphErrors(3,Graph0_fx1089,Graph0_fy1089,Graph0_fex1089,Graph0_fey1089);
   gre->SetName("Graph0");
   gre->SetTitle("This Work (<-t>=0.100, <Q^{2}>= 1.492)");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01089 = new TH1F("Graph_Graph01089","This Work (<-t>=0.100, <Q^{2}>= 1.492)",100,0.1227,0.2343);
   Graph_Graph01089->SetMinimum(0.1261603);
   Graph_Graph01089->SetMaximum(0.5131025);
   Graph_Graph01089->SetDirectory(0);
   Graph_Graph01089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01089->SetLineColor(ci);
   Graph_Graph01089->GetXaxis()->SetLabelFont(22);
   Graph_Graph01089->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01089->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01089->GetXaxis()->SetTitleFont(22);
   Graph_Graph01089->GetYaxis()->SetLabelFont(22);
   Graph_Graph01089->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01089->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01089->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01089->GetYaxis()->SetTitleFont(22);
   Graph_Graph01089->GetZaxis()->SetLabelFont(22);
   Graph_Graph01089->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01089->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01089->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01089);
   
   gre->Draw("p");
   
   Double_t _ax21[3] = {
   0.132,
   0.171,
   0.225};
   Double_t _ay21[3] = {
   0.253,
   0.267,
   0.272};

   TGraph *graphT = new TGraph(3,_ax21,_ay21);
   graphT->SetName("");
   graphT->SetTitle("");
   graphT->SetMarkerStyle(34);
   graphT->SetMarkerSize(1.5);
   graphT->SetMarkerColor(6);
   graphT->SetLineStyle(9);
   graphT->SetLineWidth(2);
   graphT->SetLineColor(6);
   graphT->Draw("l");

   Double_t _fx22[7] = {
   0.1,
   0.1,
   0.132,
   0.17,
   0.225,
   0.3,
   0.3};
   Double_t _fy22[7] = {
   0,
   0.03767389,
   0.03767389,
   0.02692508,
   0.03662933,
   0.03662933,
   0};
   graph = new TGraph(7,_fx22,_fy22);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","",100,0.08,0.32);
   Graph_Graph22->SetMinimum(0);
   Graph_Graph22->SetMaximum(0.04144128);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph22->SetLineColor(ci);
   Graph_Graph22->GetXaxis()->SetLabelFont(22);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph22->GetXaxis()->SetTitleFont(22);
   Graph_Graph22->GetYaxis()->SetLabelFont(22);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph22->GetYaxis()->SetTitleOffset(0);
   Graph_Graph22->GetYaxis()->SetTitleFont(22);
   Graph_Graph22->GetZaxis()->SetLabelFont(22);
   Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph22);
   
   graph->Draw("f");
   
   Double_t Graph0_fx23[16] = {
   0.0053,
   0.0277,
   0.0672,
   0.1223,
   0.1911,
   0.271,
   0.3592,
   0.4525,
   0.5475,
   0.6408,
   0.729,
   0.8089,
   0.8777,
   0.9328,
   0.9723,
   0.9947};
   Double_t Graph0_fy23[16] = {
   0.25272,
   0.269698,
   0.265381,
   0.240483,
   0.190882,
   0.0965136,
   0.0589742,
   0.0453655,
   0.035241,
   0.0294755,
   0.0294434,
   0.0407613,
   0.095138,
   0.50658,
   11.1018,
   8001.42};
   graph = new TGraph(16,Graph0_fx23,Graph0_fy23);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph023 = new TH1F("Graph_Graph023","Graph",100,0,1.09364);
   Graph_Graph023->SetMinimum(0.02649906);
   Graph_Graph023->SetMaximum(8801.559);
   Graph_Graph023->SetDirectory(0);
   Graph_Graph023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph023->SetLineColor(ci);
   Graph_Graph023->GetXaxis()->SetLabelFont(22);
   Graph_Graph023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph023->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph023->GetXaxis()->SetTitleFont(22);
   Graph_Graph023->GetYaxis()->SetLabelFont(22);
   Graph_Graph023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph023->GetYaxis()->SetTitleFont(22);
   Graph_Graph023->GetZaxis()->SetLabelFont(22);
   Graph_Graph023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph023->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph023);
   
   graph->Draw("c");
   
   Double_t Graph1_fx24[16] = {
   0.0053,
   0.0277,
   0.0672,
   0.1223,
   0.1911,
   0.271,
   0.3592,
   0.4525,
   0.5475,
   0.6408,
   0.729,
   0.8089,
   0.8777,
   0.9328,
   0.9723,
   0.9947};
   Double_t Graph1_fy24[16] = {
   0.312336,
   0.327893,
   0.316997,
   0.287221,
   0.245252,
   0.194805,
   0.134905,
   0.0435876,
   0.0354022,
   0.0317877,
   0.0344951,
   0.0512647,
   0.125261,
   0.684747,
   15.1177,
   10920.6};
   graph = new TGraph(16,Graph1_fx24,Graph1_fy24);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph124 = new TH1F("Graph_Graph124","Graph",100,0,1.09364);
   Graph_Graph124->SetMinimum(0.02860893);
   Graph_Graph124->SetMaximum(12012.66);
   Graph_Graph124->SetDirectory(0);
   Graph_Graph124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph124->SetLineColor(ci);
   Graph_Graph124->GetXaxis()->SetLabelFont(22);
   Graph_Graph124->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph124->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph124->GetXaxis()->SetTitleFont(22);
   Graph_Graph124->GetYaxis()->SetLabelFont(22);
   Graph_Graph124->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph124->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph124->GetYaxis()->SetTitleOffset(0);
   Graph_Graph124->GetYaxis()->SetTitleFont(22);
   Graph_Graph124->GetZaxis()->SetLabelFont(22);
   Graph_Graph124->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph124->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph124->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph124);
   
   graph->Draw("c");
   line = new TLine(0.075,0,0.31,0);
   line->SetLineStyle(7);
   line->Draw();
   
   leg = new TLegend(0.14,0.76,0.98,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph0","CLAS (this work)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("LT (-t=0.100)","Gonzalez-H. et al. (low -t) [x]","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Gonzalez-H. et al. (high -t) [x]","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(7);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry2=leg->AddEntry("graphS","Fucini et al. [x]","L");
   entry2->SetLineStyle(9);
   entry2->SetLineWidth(2);
   entry2->SetLineColor(6);
   leg->Draw();
   Can_2->Modified();
   Can->cd();
  
// ------------>Primitives in pad: Can_3
   TPad *Can_3 = new TPad("Can_3", "Helium DVCS_3",0.6725865,0,0.9672131,0.97423);
   Can_3->Draw();
   Can_3->cd();
   Can_3->Range(-0.005,-0.3645161,0.25,0.75);
   Can_3->SetFillColor(0);
   Can_3->SetBorderMode(0);
   Can_3->SetBorderSize(2);
   Can_3->SetLeftMargin(0);
   Can_3->SetRightMargin(0);
   Can_3->SetTopMargin(0);
   Can_3->SetBottomMargin(0.2439024);
   Can_3->SetFrameBorderMode(0);
   Can_3->SetFrameBorderMode(0);
   
   TH2F *HALU_He_vs_t__3 = new TH2F("HALU_He_vs_t__3","",100,0.055,0.15,100,-0.05,0.75);
   HALU_He_vs_t__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   HALU_He_vs_t__3->SetLineColor(ci);
   HALU_He_vs_t__3->GetXaxis()->SetTitle("-t [GeV^{2}]");
   HALU_He_vs_t__3->GetXaxis()->CenterTitle(true);
   HALU_He_vs_t__3->GetXaxis()->SetNdivisions(205);
   HALU_He_vs_t__3->GetXaxis()->SetLabelFont(22);
   HALU_He_vs_t__3->GetXaxis()->SetLabelSize(0.05);
   HALU_He_vs_t__3->GetXaxis()->SetTitleSize(0.09);
   HALU_He_vs_t__3->GetXaxis()->SetTitleOffset(0.9);
   HALU_He_vs_t__3->GetXaxis()->SetTitleFont(22);
   HALU_He_vs_t__3->GetYaxis()->CenterTitle(true);
   HALU_He_vs_t__3->GetYaxis()->SetNdivisions(414);
   HALU_He_vs_t__3->GetYaxis()->SetLabelFont(22);
   HALU_He_vs_t__3->GetYaxis()->SetLabelSize(0.05);
   HALU_He_vs_t__3->GetYaxis()->SetTitleSize(0.14);
   HALU_He_vs_t__3->GetYaxis()->SetTitleOffset(0);
   HALU_He_vs_t__3->GetYaxis()->SetTitleFont(22);
   HALU_He_vs_t__3->GetZaxis()->SetLabelFont(22);
   HALU_He_vs_t__3->GetZaxis()->SetLabelSize(0.035);
   HALU_He_vs_t__3->GetZaxis()->SetTitleSize(0.035);
   HALU_He_vs_t__3->GetZaxis()->SetTitleFont(22);
   HALU_He_vs_t__3->Draw("");
   
   Double_t HERMES_fx1090[2] = {
   0.027,
   0.105};
   Double_t HERMES_fy1090[2] = {
   0.249,
   0.28};
   Double_t HERMES_fex1090[2] = {
   0,
   0};
   Double_t HERMES_fey1090[2] = {
   0.118,
   0.146};
   gre = new TGraphErrors(2,HERMES_fx1090,HERMES_fy1090,HERMES_fex1090,HERMES_fey1090);
   gre->SetName("HERMES");
   gre->SetTitle("HERMES");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_HERMES1090 = new TH1F("Graph_HERMES1090","HERMES",100,0.0192,0.1128);
   Graph_HERMES1090->SetMinimum(0.1015);
   Graph_HERMES1090->SetMaximum(0.4555);
   Graph_HERMES1090->SetDirectory(0);
   Graph_HERMES1090->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_HERMES1090->SetLineColor(ci);
   Graph_HERMES1090->GetXaxis()->SetLabelFont(22);
   Graph_HERMES1090->GetXaxis()->SetLabelSize(0.05);
   Graph_HERMES1090->GetXaxis()->SetTitleSize(0.9);
   Graph_HERMES1090->GetXaxis()->SetTitleFont(22);
   Graph_HERMES1090->GetYaxis()->SetLabelFont(22);
   Graph_HERMES1090->GetYaxis()->SetLabelSize(0.05);
   Graph_HERMES1090->GetYaxis()->SetTitleSize(0.06);
   Graph_HERMES1090->GetYaxis()->SetTitleOffset(0);
   Graph_HERMES1090->GetYaxis()->SetTitleFont(22);
   Graph_HERMES1090->GetZaxis()->SetLabelFont(22);
   Graph_HERMES1090->GetZaxis()->SetLabelSize(0.035);
   Graph_HERMES1090->GetZaxis()->SetTitleSize(0.035);
   Graph_HERMES1090->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_HERMES1090);
   
   gre->Draw("p");
   
   Double_t Graph0_fx1091[3] = {
   0.08,
   0.094,
   0.127};
   Double_t Graph0_fy1091[3] = {
   0.376096,
   0.2452892,
   0.3182845};
   Double_t Graph0_fex1091[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1091[3] = {
   0.0416296,
   0.07200051,
   0.09482501};
   gre = new TGraphErrors(3,Graph0_fx1091,Graph0_fy1091,Graph0_fex1091,Graph0_fey1091);
   gre->SetName("Graph0");
   gre->SetTitle("This Work (<x_{B}>=0.177, <Q^{2}>= 1.492)");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01091 = new TH1F("Graph_Graph01091","This Work (<x_{B}>=0.177, <Q^{2}>= 1.492)",100,0.0753,0.1317);
   Graph_Graph01091->SetMinimum(0.148845);
   Graph_Graph01091->SetMaximum(0.4421693);
   Graph_Graph01091->SetDirectory(0);
   Graph_Graph01091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01091->SetLineColor(ci);
   Graph_Graph01091->GetXaxis()->SetLabelFont(22);
   Graph_Graph01091->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01091->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01091->GetXaxis()->SetTitleFont(22);
   Graph_Graph01091->GetYaxis()->SetLabelFont(22);
   Graph_Graph01091->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01091->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01091->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01091->GetYaxis()->SetTitleFont(22);
   Graph_Graph01091->GetZaxis()->SetLabelFont(22);
   Graph_Graph01091->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01091->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01091->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01091);
   
   gre->Draw("p");
   
   Double_t _bx21[3] = {
   0.081,
   0.094,
   0.126};
   Double_t _by21[3] = {
   0.315,
   0.264,
   0.291};

   TGraph *graphU = new TGraph(3,_bx21,_by21);
   graphU->SetName("");
   graphU->SetTitle("");
   graphU->SetMarkerStyle(34);
   graphU->SetMarkerSize(1.5);
   graphU->SetMarkerColor(6);
   graphU->SetLineStyle(9);
   graphU->SetLineWidth(2);
   graphU->SetLineColor(6);
   graphU->Draw("l");

   Double_t _fx25[6] = {
   0.06,
   0.06,
   0.08,
   0.094,
   0.2,
   0.2};
   Double_t _fy25[6] = {
   0,
   0.03269784,
   0.03269784,
   0.03091687,
   0.03456616,
   0};
   graph = new TGraph(6,_fx25,_fy25);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","",100,0.046,0.214);
   Graph_Graph25->SetMinimum(0);
   Graph_Graph25->SetMaximum(0.03802277);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph25->SetLineColor(ci);
   Graph_Graph25->GetXaxis()->SetLabelFont(22);
   Graph_Graph25->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph25->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph25->GetXaxis()->SetTitleFont(22);
   Graph_Graph25->GetYaxis()->SetLabelFont(22);
   Graph_Graph25->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph25->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph25->GetYaxis()->SetTitleOffset(0);
   Graph_Graph25->GetYaxis()->SetTitleFont(22);
   Graph_Graph25->GetZaxis()->SetLabelFont(22);
   Graph_Graph25->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph25);
   
   graph->Draw("f");
   
   Double_t Graph0_fx26[16] = {
   0.0026,
   0.0139,
   0.0336,
   0.0611,
   0.0955,
   0.1355,
   0.1796,
   0.2262,
   0.2738,
   0.3204,
   0.3645,
   0.4045,
   0.4389,
   0.4664,
   0.4861,
   0.4974};
   Double_t Graph0_fy26[16] = {
   0.0997298,
   0.100293,
   0.135753,
   0.198727,
   0.240483,
   0.266514,
   0.281026,
   0.287221,
   0.287302,
   0.282924,
   0.275682,
   0.267646,
   0.259709,
   0.252901,
   0.248061,
   0.245101};
   graph = new TGraph(16,Graph0_fx26,Graph0_fy26);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph026 = new TH1F("Graph_Graph026","Graph",100,0,0.54688);
   Graph_Graph026->SetMinimum(0.08097258);
   Graph_Graph026->SetMaximum(0.3060592);
   Graph_Graph026->SetDirectory(0);
   Graph_Graph026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph026->SetLineColor(ci);
   Graph_Graph026->GetXaxis()->SetLabelFont(22);
   Graph_Graph026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph026->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph026->GetXaxis()->SetTitleFont(22);
   Graph_Graph026->GetYaxis()->SetLabelFont(22);
   Graph_Graph026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph026->GetYaxis()->SetTitleFont(22);
   Graph_Graph026->GetZaxis()->SetLabelFont(22);
   Graph_Graph026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph026->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph026);
   
   graph->Draw("c");
   line = new TLine(0,0,0.25,0);
   line->SetLineStyle(7);
   line->Draw();
   
   leg = new TLegend(0.35,0.75,0.98,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph0","CLAS (this work)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("HERMES","HERMES [x]","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("gre","Gonzalez-H. et al. [x]","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry2=leg->AddEntry("graphS","Fucini et al. [x]","L");
   entry2->SetLineStyle(9);
   entry2->SetLineWidth(2);
   entry2->SetLineColor(6);
   leg->Draw();
   Can_3->Modified();
   Can->cd();
   Can->Modified();
   Can->cd();
   Can->SetSelected(Can);
}
