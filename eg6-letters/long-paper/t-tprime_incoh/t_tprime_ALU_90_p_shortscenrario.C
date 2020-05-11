void t_tprime_ALU_90_p_shortscenrario()
{
//=========Macro generated from canvas: Cann/
//=========  (Wed Apr 29 12:45:02 2020) by ROOT version 6.14/04
   TCanvas *Cann = new TCanvas("Cann", "",0,0,1000,400);
   gStyle->SetOptFit(1);
   Cann->Range(0,0,1,1);
   Cann->SetFillColor(0);
   Cann->SetBorderMode(0);
   Cann->SetBorderSize(2);
   Cann->SetRightMargin(0.02722204);
   Cann->SetBottomMargin(0.255814);
   Cann->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Cann_1
   TPad *Cann_1 = new TPad("Cann_1", "_1",0,0,0.3911937,0.9029345);
   Cann_1->Draw();
   Cann_1->cd();
   Cann_1->Range(-1.224138,-0.30625,4.5,0.5);
   Cann_1->SetFillColor(0);
   Cann_1->SetBorderMode(0);
   Cann_1->SetBorderSize(2);
   Cann_1->SetLeftMargin(0.2012048);
   Cann_1->SetRightMargin(0);
   Cann_1->SetTopMargin(0);
   Cann_1->SetBottomMargin(0.255814);
   Cann_1->SetFrameBorderMode(0);
   Cann_1->SetFrameBorderMode(0);
   
   TH2F *HALU_p_vs_Q2__1 = new TH2F("HALU_p_vs_Q2__1","",100,0.8,3.8,100,-0.05,0.35);
   HALU_p_vs_Q2__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_p_vs_Q2__1->SetLineColor(ci);
   HALU_p_vs_Q2__1->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   HALU_p_vs_Q2__1->GetXaxis()->CenterTitle(true);
   HALU_p_vs_Q2__1->GetXaxis()->SetNdivisions(605);
   HALU_p_vs_Q2__1->GetXaxis()->SetLabelFont(22);
   HALU_p_vs_Q2__1->GetXaxis()->SetLabelSize(0.05);
   HALU_p_vs_Q2__1->GetXaxis()->SetTitleSize(0.07);
   HALU_p_vs_Q2__1->GetXaxis()->SetTitleFont(22);
   HALU_p_vs_Q2__1->GetYaxis()->SetTitle("A_{LU}^{Incoh}(90#circ)");
   HALU_p_vs_Q2__1->GetYaxis()->CenterTitle(true);
   HALU_p_vs_Q2__1->GetYaxis()->SetNdivisions(605);
   HALU_p_vs_Q2__1->GetYaxis()->SetLabelFont(22);
   HALU_p_vs_Q2__1->GetYaxis()->SetLabelSize(0.05);
   HALU_p_vs_Q2__1->GetYaxis()->SetTitleSize(0.07);
   HALU_p_vs_Q2__1->GetYaxis()->SetTitleOffset(0);
   HALU_p_vs_Q2__1->GetYaxis()->SetTitleFont(22);
   HALU_p_vs_Q2__1->GetZaxis()->SetLabelFont(22);
   HALU_p_vs_Q2__1->GetZaxis()->SetLabelSize(0.035);
   HALU_p_vs_Q2__1->GetZaxis()->SetTitleSize(0.035);
   HALU_p_vs_Q2__1->GetZaxis()->SetTitleFont(22);
   HALU_p_vs_Q2__1->Draw("");
   
   Double_t Graph0_fx1001[4] = {
   1.395,
   1.886,
   2.338,
   3.098};
   Double_t Graph0_fy1001[4] = {
   0.1474264,
   0.153963,
   0.1667384,
   0.1329184};
   Double_t Graph0_fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[4] = {
   0.02340074,
   0.02881693,
   0.03257757,
   0.03982587};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Graph",100,1.2247,3.2683);
   Graph_Graph01001->SetMinimum(0.08247017);
   Graph_Graph01001->SetMaximum(0.2099383);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetLabelFont(22);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01001->GetXaxis()->SetTitleFont(22);
   Graph_Graph01001->GetYaxis()->SetLabelFont(22);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01001->GetYaxis()->SetTitleFont(22);
   Graph_Graph01001->GetZaxis()->SetLabelFont(22);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("p");
   
   Double_t Graph1_fx1002[4] = {
   1.395,
   1.886,
   2.339,
   3.092};
   Double_t Graph1_fy1002[4] = {
   0.1369125,
   0.1529735,
   0.1902217,
   0.1297463};
   Double_t Graph1_fex1002[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[4] = {
   0.02231351,
   0.02669034,
   0.02997842,
   0.04134271};
   gre = new TGraphErrors(4,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","Graph",100,1.2253,3.2617);
   Graph_Graph11002->SetMinimum(0.07522398);
   Graph_Graph11002->SetMaximum(0.2333798);
   Graph_Graph11002->SetDirectory(0);
   Graph_Graph11002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11002->SetLineColor(ci);
   Graph_Graph11002->GetXaxis()->SetLabelFont(22);
   Graph_Graph11002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11002->GetXaxis()->SetTitleFont(22);
   Graph_Graph11002->GetYaxis()->SetLabelFont(22);
   Graph_Graph11002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11002->GetYaxis()->SetTitleFont(22);
   Graph_Graph11002->GetZaxis()->SetLabelFont(22);
   Graph_Graph11002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11002->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11002);
   
   gre->Draw("p");
   
   Double_t _fx1[8] = {
   1,
   1,
   1.395,
   1.886,
   2.338,
   3.098,
   4.5,
   4.5};
   Double_t _fy1[8] = {
   0,
   0.01361147,
   0.01361147,
   0.01693127,
   0.014933,
   0.01559423,
   0.01559423,
   0};
   TGraph *graph = new TGraph(8,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.65,4.85);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(0.01862439);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(22);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(22);
   Graph_Graph1->GetYaxis()->SetLabelFont(22);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1->GetYaxis()->SetTitleFont(22);
   Graph_Graph1->GetZaxis()->SetLabelFont(22);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("f");
   
   TLegend *leg = new TLegend(0.65,0.82,0.99,0.99,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","t definition","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","t' definition","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   leg->Draw();
   TLine *line = new TLine(0.8,0,3.8,0);
   line->SetLineStyle(7);
   line->Draw();
   Cann_1->Modified();
   Cann->cd();
  
// ------------>Primitives in pad: Cann_2
   TPad *Cann_2 = new TPad("Cann_2", "_2",0.3911937,0,0.6819858,0.9029345);
   Cann_2->Draw();
   Cann_2->cd();
   Cann_2->Range(-0.02,-0.30625,0.7,0.5);
   Cann_2->SetFillColor(0);
   Cann_2->SetBorderMode(0);
   Cann_2->SetBorderSize(2);
   Cann_2->SetLeftMargin(0);
   Cann_2->SetRightMargin(0);
   Cann_2->SetTopMargin(0);
   Cann_2->SetBottomMargin(0.255814);
   Cann_2->SetFrameBorderMode(0);
   Cann_2->SetFrameBorderMode(0);
   
   TH2F *HALU_p_vs_x__2 = new TH2F("HALU_p_vs_x__2","",100,0.07,0.53,100,-0.05,0.35);
   HALU_p_vs_x__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   HALU_p_vs_x__2->SetLineColor(ci);
   HALU_p_vs_x__2->GetXaxis()->SetTitle("x_{B}");
   HALU_p_vs_x__2->GetXaxis()->CenterTitle(true);
   HALU_p_vs_x__2->GetXaxis()->SetNdivisions(605);
   HALU_p_vs_x__2->GetXaxis()->SetLabelFont(22);
   HALU_p_vs_x__2->GetXaxis()->SetLabelSize(0.05);
   HALU_p_vs_x__2->GetXaxis()->SetTitleSize(0.07);
   HALU_p_vs_x__2->GetXaxis()->SetTitleFont(22);
   HALU_p_vs_x__2->GetYaxis()->SetTitle("A_{LU}^{Incoh}(90#circ)");
   HALU_p_vs_x__2->GetYaxis()->CenterTitle(true);
   HALU_p_vs_x__2->GetYaxis()->SetNdivisions(605);
   HALU_p_vs_x__2->GetYaxis()->SetLabelFont(22);
   HALU_p_vs_x__2->GetYaxis()->SetLabelSize(0.05);
   HALU_p_vs_x__2->GetYaxis()->SetTitleSize(0.07);
   HALU_p_vs_x__2->GetYaxis()->SetTitleOffset(0);
   HALU_p_vs_x__2->GetYaxis()->SetTitleFont(22);
   HALU_p_vs_x__2->GetZaxis()->SetLabelFont(22);
   HALU_p_vs_x__2->GetZaxis()->SetLabelSize(0.035);
   HALU_p_vs_x__2->GetZaxis()->SetTitleSize(0.035);
   HALU_p_vs_x__2->GetZaxis()->SetTitleFont(22);
   HALU_p_vs_x__2->Draw("");
   
   Double_t Graph0_fx1003[4] = {
   0.162,
   0.227,
   0.287,
   0.39};
   Double_t Graph0_fy1003[4] = {
   0.1158352,
   0.1825788,
   0.1922111,
   0.1497525};
   Double_t Graph0_fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1003[4] = {
   0.02212831,
   0.02520692,
   0.03045599,
   0.04683735};
   gre = new TGraphErrors(4,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("This Work (<-t>= 0.506, <Q^{2}>= 2.180)");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01003 = new TH1F("Graph_Graph01003","This Work (<-t>= 0.506, <Q^{2}>= 2.180)",100,0.1392,0.4128);
   Graph_Graph01003->SetMinimum(0.08081091);
   Graph_Graph01003->SetMaximum(0.2355631);
   Graph_Graph01003->SetDirectory(0);
   Graph_Graph01003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01003->SetLineColor(ci);
   Graph_Graph01003->GetXaxis()->SetLabelFont(22);
   Graph_Graph01003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01003->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01003->GetXaxis()->SetTitleFont(22);
   Graph_Graph01003->GetYaxis()->SetLabelFont(22);
   Graph_Graph01003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01003->GetYaxis()->SetTitleFont(22);
   Graph_Graph01003->GetZaxis()->SetLabelFont(22);
   Graph_Graph01003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01003->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01003);
   
   gre->Draw("p");
   
   Double_t Graph0_fx1004[4] = {
   0.162,
   0.227,
   0.287,
   0.39};
   Double_t Graph0_fy1004[4] = {
   0.1173831,
   0.1772283,
   0.1777536,
   0.1603706};
   Double_t Graph0_fex1004[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1004[4] = {
   0.02119542,
   0.02375443,
   0.03084218,
   0.04804572};
   gre = new TGraphErrors(4,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("This Work (<-t>= 0.506, <Q^{2}>= 2.180)");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01004 = new TH1F("Graph_Graph01004","This Work (<-t>= 0.506, <Q^{2}>= 2.180)",100,0.1392,0.4128);
   Graph_Graph01004->SetMinimum(0.08494681);
   Graph_Graph01004->SetMaximum(0.2198366);
   Graph_Graph01004->SetDirectory(0);
   Graph_Graph01004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01004->SetLineColor(ci);
   Graph_Graph01004->GetXaxis()->SetLabelFont(22);
   Graph_Graph01004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01004->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01004->GetXaxis()->SetTitleFont(22);
   Graph_Graph01004->GetYaxis()->SetLabelFont(22);
   Graph_Graph01004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01004->GetYaxis()->SetTitleFont(22);
   Graph_Graph01004->GetZaxis()->SetLabelFont(22);
   Graph_Graph01004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01004->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01004);
   
   gre->Draw("p");
   
   Double_t _fx2[8] = {
   0.1,
   0.1,
   0.162,
   0.227,
   0.287,
   0.39,
   0.55,
   0.55};
   Double_t _fy2[8] = {
   0,
   0.01180498,
   0.01180498,
   0.01831726,
   0.01537348,
   0.01447262,
   0.01447262,
   0};
   graph = new TGraph(8,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0.055,0.595);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(0.02014898);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(22);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph2->GetXaxis()->SetTitleFont(22);
   Graph_Graph2->GetYaxis()->SetLabelFont(22);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleOffset(0);
   Graph_Graph2->GetYaxis()->SetTitleFont(22);
   Graph_Graph2->GetZaxis()->SetLabelFont(22);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("f");
   line = new TLine(0.07,0,0.53,0);
   line->SetLineStyle(7);
   line->Draw();
   
   Cann_2->Modified();
   Cann->cd();
  
// ------------>Primitives in pad: Cann_3
   TPad *Cann_3 = new TPad("Cann_3", "_3",0.6819858,0,0.972778,0.9029345);
   Cann_3->Draw();
   Cann_3->cd();
   Cann_3->Range(-0.03,-0.30625,1.2,0.5);
   Cann_3->SetFillColor(0);
   Cann_3->SetBorderMode(0);
   Cann_3->SetBorderSize(2);
   Cann_3->SetLeftMargin(0);
   Cann_3->SetRightMargin(0);
   Cann_3->SetTopMargin(0);
   Cann_3->SetBottomMargin(0.255814);
   Cann_3->SetFrameBorderMode(0);
   Cann_3->SetFrameBorderMode(0);
   
   TH2F *HALU_p_vs_t__3 = new TH2F("HALU_p_vs_t__3","",100,-0.1,1.4,100,-0.05,0.35);
   HALU_p_vs_t__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   HALU_p_vs_t__3->SetLineColor(ci);
   HALU_p_vs_t__3->GetXaxis()->SetTitle("-t [GeV^{2}]");
   HALU_p_vs_t__3->GetXaxis()->CenterTitle(true);
   HALU_p_vs_t__3->GetXaxis()->SetNdivisions(605);
   HALU_p_vs_t__3->GetXaxis()->SetLabelFont(22);
   HALU_p_vs_t__3->GetXaxis()->SetLabelSize(0.05);
   HALU_p_vs_t__3->GetXaxis()->SetTitleSize(0.07);
   HALU_p_vs_t__3->GetXaxis()->SetTitleFont(22);
   HALU_p_vs_t__3->GetYaxis()->SetTitle("A_{LU}^{Incoh}(90#circ)");
   HALU_p_vs_t__3->GetYaxis()->CenterTitle(true);
   HALU_p_vs_t__3->GetYaxis()->SetNdivisions(605);
   HALU_p_vs_t__3->GetYaxis()->SetLabelFont(22);
   HALU_p_vs_t__3->GetYaxis()->SetLabelSize(0.05);
   HALU_p_vs_t__3->GetYaxis()->SetTitleSize(0.07);
   HALU_p_vs_t__3->GetYaxis()->SetTitleOffset(0);
   HALU_p_vs_t__3->GetYaxis()->SetTitleFont(22);
   HALU_p_vs_t__3->GetZaxis()->SetLabelFont(22);
   HALU_p_vs_t__3->GetZaxis()->SetLabelSize(0.035);
   HALU_p_vs_t__3->GetZaxis()->SetTitleSize(0.035);
   HALU_p_vs_t__3->GetZaxis()->SetTitleFont(22);
   HALU_p_vs_t__3->Draw("");
   
   Double_t Graph0_fx1005[4] = {
   0.145,
   0.282,
   0.491,
   1.093};
   Double_t Graph0_fy1005[4] = {
   0.1421133,
   0.1555094,
   0.183264,
   0.1700188};
   Double_t Graph0_fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1005[4] = {
   0.02393916,
   0.02703368,
   0.03438694,
   0.05109393};
   gre = new TGraphErrors(4,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("This Work (<x_{B}>=0.267, <Q^{2}>= 2.180)");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","This Work (<x_{B}>=0.267, <Q^{2}>= 2.180)",100,0.0502,1.1878);
   Graph_Graph01005->SetMinimum(0.1078803);
   Graph_Graph01005->SetMaximum(0.2314066);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01005->SetLineColor(ci);
   Graph_Graph01005->GetXaxis()->SetLabelFont(22);
   Graph_Graph01005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01005->GetXaxis()->SetTitleFont(22);
   Graph_Graph01005->GetYaxis()->SetLabelFont(22);
   Graph_Graph01005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01005->GetYaxis()->SetTitleFont(22);
   Graph_Graph01005->GetZaxis()->SetLabelFont(22);
   Graph_Graph01005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01005->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01005);
   
   gre->Draw("p");
   
   Double_t Graph0_fx1006[4] = {
   0.143,
   0.284,
   0.489,
   1.083};
   Double_t Graph0_fy1006[4] = {
   0.1828399,
   0.1408025,
   0.1371302,
   0.1389324};
   Double_t Graph0_fex1006[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1006[4] = {
   0.02059014,
   0.02724702,
   0.02901969,
   0.0618686};
   gre = new TGraphErrors(4,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("This Work (<x_{B}>=0.267, <Q^{2}>= 2.180)");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01006 = new TH1F("Graph_Graph01006","This Work (<x_{B}>=0.267, <Q^{2}>= 2.180)",100,0.049,1.177);
   Graph_Graph01006->SetMinimum(0.06442723);
   Graph_Graph01006->SetMaximum(0.2160666);
   Graph_Graph01006->SetDirectory(0);
   Graph_Graph01006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01006->SetLineColor(ci);
   Graph_Graph01006->GetXaxis()->SetLabelFont(22);
   Graph_Graph01006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01006->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01006->GetXaxis()->SetTitleFont(22);
   Graph_Graph01006->GetYaxis()->SetLabelFont(22);
   Graph_Graph01006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01006->GetYaxis()->SetTitleFont(22);
   Graph_Graph01006->GetZaxis()->SetLabelFont(22);
   Graph_Graph01006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01006->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01006);
   
   gre->Draw("p");
   
   Double_t _fx3[8] = {
   0.06,
   0.06,
   0.145,
   0.282,
   0.49,
   0.9,
   1.2,
   1.2};
   Double_t _fy3[8] = {
   0,
   0.01437639,
   0.01437639,
   0.02000183,
   0.02444908,
   0.02394077,
   0.02394077,
   0};
   graph = new TGraph(8,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,0,1.314);
   Graph_Graph3->SetMinimum(0);
   Graph_Graph3->SetMaximum(0.02689398);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(22);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph3->GetXaxis()->SetTitleFont(22);
   Graph_Graph3->GetYaxis()->SetLabelFont(22);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3->GetYaxis()->SetTitleFont(22);
   Graph_Graph3->GetZaxis()->SetLabelFont(22);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("f");
   line = new TLine(-0.1,0,1.4,0);
   line->SetLineStyle(7);
   line->Draw();
   
   Cann_3->Modified();
   Cann->cd();
   Cann->Modified();
   Cann->cd();
   Cann->SetSelected(Cann);
}
