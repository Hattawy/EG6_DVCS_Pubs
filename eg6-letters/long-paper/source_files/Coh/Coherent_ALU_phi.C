void Coherent_ALU_phi()
{
//=========Macro generated from canvas: c12/
//=========  (Wed Jan  8 16:10:15 2020) by ROOT version 6.14/04
   TCanvas *c12 = new TCanvas("c12", "",63,57,1000,900);
   gStyle->SetOptFit(1);
   c12->Range(0,0,1,1);
   c12->SetFillColor(0);
   c12->SetBorderMode(0);
   c12->SetBorderSize(2);
   c12->SetLeftMargin(0.08333334);
   c12->SetRightMargin(0.03278689);
   c12->SetTopMargin(0.007102027);
   c12->SetBottomMargin(0.08130082);
   c12->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c12_1
   TPad *c12_1 = new TPad("c12_1", "_1",0,0.6890323,0.3779599,0.992898);
   c12_1->Draw();
   c12_1->cd();
   c12_1->Range(-131.6667,-0.65,375,0.65);
   c12_1->SetFillColor(0);
   c12_1->SetBorderMode(0);
   c12_1->SetBorderSize(2);
   c12_1->SetLeftMargin(0.25);
   c12_1->SetRightMargin(0);
   c12_1->SetTopMargin(0);
   c12_1->SetBottomMargin(0);
   c12_1->SetFrameBorderMode(0);
   c12_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1001[9] = {
   24.3146,
   61.16264,
   98.9465,
   140.9271,
   178.4282,
   219.1438,
   262.95,
   301.9212,
   337.7335};
   Double_t Graph_fy1001[9] = {
   0.1327475,
   0.3210551,
   0.3709448,
   0.2452102,
   0.02256708,
   -0.0526485,
   -0.2642824,
   -0.1761262,
   -0.2791955};
   Double_t Graph_fex1001[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1001[9] = {
   0.105757,
   0.09132477,
   0.09435479,
   0.1493338,
   0.1608177,
   0.1454703,
   0.1131927,
   0.09323897,
   0.09899234};
   TGraphErrors *gre = new TGraphErrors(9,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0,369.0754);
   Graph_Graph1001->SetMinimum(-0.4625366);
   Graph_Graph1001->SetMaximum(0.5496483);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(22);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1001->GetXaxis()->SetTitleFont(22);
   Graph_Graph1001->GetYaxis()->SetLabelFont(22);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1001->GetYaxis()->SetTitleFont(22);
   Graph_Graph1001->GetZaxis()->SetLabelFont(22);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1001);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1002[9] = {
   24.3146,
   61.16264,
   98.9465,
   140.9271,
   178.4282,
   219.1438,
   262.95,
   301.9212,
   337.7335};
   Double_t Graph_fy1002[9] = {
   0.1327475,
   0.3210551,
   0.3709448,
   0.2452102,
   0.02256708,
   -0.0526485,
   -0.2642824,
   -0.1761262,
   -0.2791955};
   Double_t Graph_fex1002[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1002[9] = {
   0.1088386,
   0.09325182,
   0.1026357,
   0.1517177,
   0.1632185,
   0.1475768,
   0.1196945,
   0.09688492,
   0.1047699};
   gre = new TGraphErrors(9,Graph_fx1002,Graph_fy1002,Graph_fex1002,Graph_fey1002);
   gre->SetName("Graph");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0,369.0754);
   Graph_Graph1002->SetMinimum(-0.4697326);
   Graph_Graph1002->SetMaximum(0.5593362);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(22);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1002->GetXaxis()->SetTitleFont(22);
   Graph_Graph1002->GetYaxis()->SetLabelFont(22);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1002->GetYaxis()->SetTitleFont(22);
   Graph_Graph1002->GetZaxis()->SetLabelFont(22);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1002);
   
   
   TF1 *ffit[0]1003 = new TF1("ffit[0]","0.0274766*[0]*sin(x*3.14/180.0) / (2.5520843+ -0.3840751*cos(x*3.14/180.0) + -0.0351193*cos(2*x*3.14/180.0) + 0.0002540*([0]*[0] + [1]*[1]) + -0.0181692*[1] + -0.0330254*[1]*cos(x*3.14/180.0))",0,369.0754, TF1::EAddToList::kNo);
   ffit[0]1003->SetFillColor(19);
   ffit[0]1003->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[0]1003->SetLineColor(ci);
   ffit[0]1003->SetLineWidth(2);
   ffit[0]1003->SetChisquare(4.676129);
   ffit[0]1003->SetNDF(7);
   ffit[0]1003->GetXaxis()->SetLabelFont(22);
   ffit[0]1003->GetXaxis()->SetLabelSize(0.05);
   ffit[0]1003->GetXaxis()->SetTitleSize(0.9);
   ffit[0]1003->GetXaxis()->SetTitleFont(22);
   ffit[0]1003->GetYaxis()->SetLabelFont(22);
   ffit[0]1003->GetYaxis()->SetLabelSize(0.05);
   ffit[0]1003->GetYaxis()->SetTitleSize(0.06);
   ffit[0]1003->GetYaxis()->SetTitleOffset(0);
   ffit[0]1003->GetYaxis()->SetTitleFont(22);
   ffit[0]1003->SetParameter(0,30.21691);
   ffit[0]1003->SetParError(0,11.00217);
   ffit[0]1003->SetParLimits(0,0,0);
   ffit[0]1003->SetParameter(1,5.016539);
   ffit[0]1003->SetParError(1,26.39441);
   ffit[0]1003->SetParLimits(1,0,0);
   ffit[0]1003->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[0]1003);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 4.676 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 30.22 #pm    11 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = 5.017 #pm 26.39 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{^{4}He}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(0.8);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1005[9] = {
   24.3146,
   61.16264,
   98.9465,
   140.9271,
   178.4282,
   219.1438,
   262.95,
   301.9212,
   337.7335};
   Double_t Graph_fy1005[9] = {
   0.1327475,
   0.3210551,
   0.3709448,
   0.2452102,
   0.02256708,
   -0.0526485,
   -0.2642824,
   -0.1761262,
   -0.2791955};
   Double_t Graph_fex1005[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1005[9] = {
   0.105757,
   0.09132477,
   0.09435479,
   0.1493338,
   0.1608177,
   0.1454703,
   0.1131927,
   0.09323897,
   0.09899234};
   gre = new TGraphErrors(9,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10011005 = new TH1F("Graph_Graph_Graph10011005","Graph",100,0,369.0754);
   Graph_Graph_Graph10011005->SetMinimum(-0.4625366);
   Graph_Graph_Graph10011005->SetMaximum(0.5496483);
   Graph_Graph_Graph10011005->SetDirectory(0);
   Graph_Graph_Graph10011005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011005->SetLineColor(ci);
   Graph_Graph_Graph10011005->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10011005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10011005->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10011005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10011005->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10011005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10011005);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1006[9] = {
   24.3146,
   61.16264,
   98.9465,
   140.9271,
   178.4282,
   219.1438,
   262.95,
   301.9212,
   337.7335};
   Double_t Graph_fy1006[9] = {
   0.1327475,
   0.3210551,
   0.3709448,
   0.2452102,
   0.02256708,
   -0.0526485,
   -0.2642824,
   -0.1761262,
   -0.2791955};
   Double_t Graph_fex1006[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1006[9] = {
   0.1088386,
   0.09325182,
   0.1026357,
   0.1517177,
   0.1632185,
   0.1475768,
   0.1196945,
   0.09688492,
   0.1047699};
   gre = new TGraphErrors(9,Graph_fx1006,Graph_fy1006,Graph_fex1006,Graph_fey1006);
   gre->SetName("Graph");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph10021006 = new TH1F("Graph_Graph_Graph10021006","Graph",100,0,369.0754);
   Graph_Graph_Graph10021006->SetMinimum(-0.4697326);
   Graph_Graph_Graph10021006->SetMaximum(0.5593362);
   Graph_Graph_Graph10021006->SetDirectory(0);
   Graph_Graph_Graph10021006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10021006->SetLineColor(ci);
   Graph_Graph_Graph10021006->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10021006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10021006->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10021006->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10021006->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10021006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10021006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10021006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10021006->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10021006->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10021006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10021006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10021006->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10021006);
   
   
   TF1 *ffit[0]1007 = new TF1("ffit[0]","0.0274766*[0]*sin(x*3.14/180.0) / (2.5520843+ -0.3840751*cos(x*3.14/180.0) + -0.0351193*cos(2*x*3.14/180.0) + 0.0002540*([0]*[0] + [1]*[1]) + -0.0181692*[1] + -0.0330254*[1]*cos(x*3.14/180.0))",0,369.0754, TF1::EAddToList::kNo);
   ffit[0]1007->SetFillColor(19);
   ffit[0]1007->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[0]1007->SetLineColor(ci);
   ffit[0]1007->SetLineWidth(2);
   ffit[0]1007->SetChisquare(4.676129);
   ffit[0]1007->SetNDF(7);
   ffit[0]1007->GetXaxis()->SetLabelFont(22);
   ffit[0]1007->GetXaxis()->SetLabelSize(0.05);
   ffit[0]1007->GetXaxis()->SetTitleSize(0.9);
   ffit[0]1007->GetXaxis()->SetTitleFont(22);
   ffit[0]1007->GetYaxis()->SetLabelFont(22);
   ffit[0]1007->GetYaxis()->SetLabelSize(0.05);
   ffit[0]1007->GetYaxis()->SetTitleSize(0.06);
   ffit[0]1007->GetYaxis()->SetTitleOffset(0);
   ffit[0]1007->GetYaxis()->SetTitleFont(22);
   ffit[0]1007->SetParameter(0,30.21691);
   ffit[0]1007->SetParError(0,11.00217);
   ffit[0]1007->SetParLimits(0,0,0);
   ffit[0]1007->SetParameter(1,5.016539);
   ffit[0]1007->SetParError(1,26.39441);
   ffit[0]1007->SetParLimits(1,0,0);
   ffit[0]1007->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[0]1007);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 4.676 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 30.22 #pm    11 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = 5.017 #pm 26.39 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{^{4}He}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(0.8);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx1[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy1[13] = {
   0,
   0.02571563,
   0.02571563,
   0.01885969,
   0.04038886,
   0.02678967,
   0.02789155,
   0.02484531,
   0.03891253,
   0.02632836,
   0.03431105,
   0.03431105,
   0};
   TGraph *graph = new TGraph(13,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph01 = new TH1F("Graph_Graph01","Graph",100,0,396);
   Graph_Graph01->SetMinimum(0);
   Graph_Graph01->SetMaximum(0.04442775);
   Graph_Graph01->SetDirectory(0);
   Graph_Graph01->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01->SetLineColor(ci);
   Graph_Graph01->GetXaxis()->SetLabelFont(22);
   Graph_Graph01->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01->GetXaxis()->SetTitleFont(22);
   Graph_Graph01->GetYaxis()->SetLabelFont(22);
   Graph_Graph01->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01->GetYaxis()->SetTitleFont(22);
   Graph_Graph01->GetZaxis()->SetLabelFont(22);
   Graph_Graph01->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph01);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1009[9] = {
   24.3146,
   61.16264,
   98.9465,
   140.9271,
   178.4282,
   219.1438,
   262.95,
   301.9212,
   337.7335};
   Double_t Graph1_fy1009[9] = {
   0.1327475,
   0.3210551,
   0.3709448,
   0.2452102,
   0.02256708,
   -0.0526485,
   -0.2642824,
   -0.1761262,
   -0.2791955};
   Double_t Graph1_fex1009[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1009[9] = {
   0.105757,
   0.09132477,
   0.09435479,
   0.1493338,
   0.1608177,
   0.1454703,
   0.1131927,
   0.09323897,
   0.09899234};
   gre = new TGraphErrors(9,Graph1_fx1009,Graph1_fy1009,Graph1_fex1009,Graph1_fey1009);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph11009 = new TH1F("Graph_Graph11009","Graph",100,0,369.0754);
   Graph_Graph11009->SetMinimum(-0.4625366);
   Graph_Graph11009->SetMaximum(0.5496483);
   Graph_Graph11009->SetDirectory(0);
   Graph_Graph11009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11009->SetLineColor(ci);
   Graph_Graph11009->GetXaxis()->SetLabelFont(22);
   Graph_Graph11009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11009->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11009->GetXaxis()->SetTitleFont(22);
   Graph_Graph11009->GetYaxis()->SetLabelFont(22);
   Graph_Graph11009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11009->GetYaxis()->SetTitleFont(22);
   Graph_Graph11009->GetZaxis()->SetLabelFont(22);
   Graph_Graph11009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11009->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11009);
   
   gre->Draw("p");
   
   TF1 *ffit[0]1008 = new TF1("ffit[0]","0.0274766*[0]*sin(x*3.14/180.0) / (2.5520843+ -0.3840751*cos(x*3.14/180.0) + -0.0351193*cos(2*x*3.14/180.0) + 0.0002540*([0]*[0] + [1]*[1]) + -0.0181692*[1] + -0.0330254*[1]*cos(x*3.14/180.0))",0,360, TF1::EAddToList::kDefault);
   ffit[0]1008->SetFillColor(19);
   ffit[0]1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[0]1008->SetLineColor(ci);
   ffit[0]1008->SetLineWidth(2);
   ffit[0]1008->SetChisquare(4.676129);
   ffit[0]1008->SetNDF(7);
   ffit[0]1008->GetXaxis()->SetLabelFont(22);
   ffit[0]1008->GetXaxis()->SetLabelSize(0.05);
   ffit[0]1008->GetXaxis()->SetTitleSize(0.9);
   ffit[0]1008->GetXaxis()->SetTitleFont(22);
   ffit[0]1008->GetYaxis()->SetLabelFont(22);
   ffit[0]1008->GetYaxis()->SetLabelSize(0.05);
   ffit[0]1008->GetYaxis()->SetTitleSize(0.06);
   ffit[0]1008->GetYaxis()->SetTitleOffset(0);
   ffit[0]1008->GetYaxis()->SetTitleFont(22);
   ffit[0]1008->SetParameter(0,30.21691);
   ffit[0]1008->SetParError(0,11.00217);
   ffit[0]1008->SetParLimits(0,0,0);
   ffit[0]1008->SetParameter(1,5.016539);
   ffit[0]1008->SetParError(1,26.39441);
   ffit[0]1008->SetParLimits(1,0,0);
   ffit[0]1008->Draw("same");
   TLatex *   tex = new TLatex(15,-0.57,"Q^{2}= 1.143 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c12_1->Modified();
   c12->cd();
  
// ------------>Primitives in pad: c12_4
   TPad *c12_4 = new TPad("c12_4", "_4",0,0.3851665,0.3779599,0.6890323);
   c12_4->Draw();
   c12_4->cd();
   c12_4->Range(-131.6667,-0.65,375,0.65);
   c12_4->SetFillColor(0);
   c12_4->SetBorderMode(0);
   c12_4->SetBorderSize(2);
   c12_4->SetLeftMargin(0.25);
   c12_4->SetRightMargin(0);
   c12_4->SetTopMargin(0);
   c12_4->SetBottomMargin(0);
   c12_4->SetFrameBorderMode(0);
   c12_4->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1010[9] = {
   25.65164,
   61.64267,
   99.02209,
   141.7083,
   178.1952,
   218.5245,
   262.7358,
   300.7771,
   335.2499};
   Double_t Graph_fy1010[9] = {
   0.01743518,
   0.3478866,
   0.380854,
   0.2943698,
   0.04334662,
   -0.03520965,
   -0.2771567,
   -0.2138351,
   -0.2339611};
   Double_t Graph_fex1010[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1010[9] = {
   0.1423866,
   0.08440251,
   0.08560424,
   0.1338208,
   0.1490426,
   0.129338,
   0.09826485,
   0.07954628,
   0.117906};
   gre = new TGraphErrors(9,Graph_fx1010,Graph_fy1010,Graph_fex1010,Graph_fey1010);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,0,366.2097);
   Graph_Graph1010->SetMinimum(-0.4596095);
   Graph_Graph1010->SetMaximum(0.5506462);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetLabelFont(22);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1010->GetXaxis()->SetTitleFont(22);
   Graph_Graph1010->GetYaxis()->SetLabelFont(22);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1010->GetYaxis()->SetTitleFont(22);
   Graph_Graph1010->GetZaxis()->SetLabelFont(22);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1010);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1011[9] = {
   25.65164,
   61.64267,
   99.02209,
   141.7083,
   178.1952,
   218.5245,
   262.7358,
   300.7771,
   335.2499};
   Double_t Graph_fy1011[9] = {
   0.01743518,
   0.3478866,
   0.380854,
   0.2943698,
   0.04334662,
   -0.03520965,
   -0.2771567,
   -0.2138351,
   -0.2339611};
   Double_t Graph_fex1011[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1011[9] = {
   0.1440989,
   0.08670367,
   0.09484749,
   0.1379186,
   0.1519096,
   0.131616,
   0.1050832,
   0.08368387,
   0.1221675};
   gre = new TGraphErrors(9,Graph_fx1011,Graph_fy1011,Graph_fex1011,Graph_fey1011);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","Graph",100,0,366.2097);
   Graph_Graph1011->SetMinimum(-0.468034);
   Graph_Graph1011->SetMaximum(0.5614956);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(22);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1011->GetXaxis()->SetTitleFont(22);
   Graph_Graph1011->GetYaxis()->SetLabelFont(22);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1011->GetYaxis()->SetTitleFont(22);
   Graph_Graph1011->GetZaxis()->SetLabelFont(22);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *ffit[0]1012 = new TF1("ffit[0]","0.0235497*[0]*sin(x*3.14/180.0) / (2.4750934+ -0.3205956*cos(x*3.14/180.0) + -0.0278079*cos(2*x*3.14/180.0) + 0.0001812*([0]*[0] + [1]*[1]) + -0.0159479*[1] + -0.0275889*[1]*cos(x*3.14/180.0))",0,366.2097, TF1::EAddToList::kNo);
   ffit[0]1012->SetFillColor(19);
   ffit[0]1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[0]1012->SetLineColor(ci);
   ffit[0]1012->SetLineWidth(2);
   ffit[0]1012->SetChisquare(5.177221);
   ffit[0]1012->SetNDF(7);
   ffit[0]1012->GetXaxis()->SetLabelFont(22);
   ffit[0]1012->GetXaxis()->SetLabelSize(0.05);
   ffit[0]1012->GetXaxis()->SetTitleSize(0.9);
   ffit[0]1012->GetXaxis()->SetTitleFont(22);
   ffit[0]1012->GetYaxis()->SetLabelFont(22);
   ffit[0]1012->GetYaxis()->SetLabelSize(0.05);
   ffit[0]1012->GetYaxis()->SetTitleSize(0.06);
   ffit[0]1012->GetYaxis()->SetTitleOffset(0);
   ffit[0]1012->GetYaxis()->SetTitleFont(22);
   ffit[0]1012->SetParameter(0,39.53958);
   ffit[0]1012->SetParError(0,13.92692);
   ffit[0]1012->SetParLimits(0,0,0);
   ffit[0]1012->SetParameter(1,-7.353297);
   ffit[0]1012->SetParError(1,30.95166);
   ffit[0]1012->SetParLimits(1,0,0);
   ffit[0]1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[0]1012);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 5.177 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 39.54 #pm 13.93 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = -7.353 #pm 30.95 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{^{4}He}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(0.8);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1014[9] = {
   25.65164,
   61.64267,
   99.02209,
   141.7083,
   178.1952,
   218.5245,
   262.7358,
   300.7771,
   335.2499};
   Double_t Graph_fy1014[9] = {
   0.01743518,
   0.3478866,
   0.380854,
   0.2943698,
   0.04334662,
   -0.03520965,
   -0.2771567,
   -0.2138351,
   -0.2339611};
   Double_t Graph_fex1014[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1014[9] = {
   0.1423866,
   0.08440251,
   0.08560424,
   0.1338208,
   0.1490426,
   0.129338,
   0.09826485,
   0.07954628,
   0.117906};
   gre = new TGraphErrors(9,Graph_fx1014,Graph_fy1014,Graph_fex1014,Graph_fey1014);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10101014 = new TH1F("Graph_Graph_Graph10101014","Graph",100,0,366.2097);
   Graph_Graph_Graph10101014->SetMinimum(-0.4596095);
   Graph_Graph_Graph10101014->SetMaximum(0.5506462);
   Graph_Graph_Graph10101014->SetDirectory(0);
   Graph_Graph_Graph10101014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10101014->SetLineColor(ci);
   Graph_Graph_Graph10101014->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10101014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10101014->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10101014->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10101014->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10101014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10101014->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10101014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10101014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10101014->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10101014);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1015[9] = {
   25.65164,
   61.64267,
   99.02209,
   141.7083,
   178.1952,
   218.5245,
   262.7358,
   300.7771,
   335.2499};
   Double_t Graph_fy1015[9] = {
   0.01743518,
   0.3478866,
   0.380854,
   0.2943698,
   0.04334662,
   -0.03520965,
   -0.2771567,
   -0.2138351,
   -0.2339611};
   Double_t Graph_fex1015[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1015[9] = {
   0.1440989,
   0.08670367,
   0.09484749,
   0.1379186,
   0.1519096,
   0.131616,
   0.1050832,
   0.08368387,
   0.1221675};
   gre = new TGraphErrors(9,Graph_fx1015,Graph_fy1015,Graph_fex1015,Graph_fey1015);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph10111015 = new TH1F("Graph_Graph_Graph10111015","Graph",100,0,366.2097);
   Graph_Graph_Graph10111015->SetMinimum(-0.468034);
   Graph_Graph_Graph10111015->SetMaximum(0.5614956);
   Graph_Graph_Graph10111015->SetDirectory(0);
   Graph_Graph_Graph10111015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10111015->SetLineColor(ci);
   Graph_Graph_Graph10111015->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10111015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10111015->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10111015->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10111015->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10111015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10111015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10111015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10111015->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10111015->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10111015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10111015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10111015->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10111015);
   
   
   TF1 *ffit[0]1016 = new TF1("ffit[0]","0.0235497*[0]*sin(x*3.14/180.0) / (2.4750934+ -0.3205956*cos(x*3.14/180.0) + -0.0278079*cos(2*x*3.14/180.0) + 0.0001812*([0]*[0] + [1]*[1]) + -0.0159479*[1] + -0.0275889*[1]*cos(x*3.14/180.0))",0,366.2097, TF1::EAddToList::kNo);
   ffit[0]1016->SetFillColor(19);
   ffit[0]1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[0]1016->SetLineColor(ci);
   ffit[0]1016->SetLineWidth(2);
   ffit[0]1016->SetChisquare(5.177221);
   ffit[0]1016->SetNDF(7);
   ffit[0]1016->GetXaxis()->SetLabelFont(22);
   ffit[0]1016->GetXaxis()->SetLabelSize(0.05);
   ffit[0]1016->GetXaxis()->SetTitleSize(0.9);
   ffit[0]1016->GetXaxis()->SetTitleFont(22);
   ffit[0]1016->GetYaxis()->SetLabelFont(22);
   ffit[0]1016->GetYaxis()->SetLabelSize(0.05);
   ffit[0]1016->GetYaxis()->SetTitleSize(0.06);
   ffit[0]1016->GetYaxis()->SetTitleOffset(0);
   ffit[0]1016->GetYaxis()->SetTitleFont(22);
   ffit[0]1016->SetParameter(0,39.53958);
   ffit[0]1016->SetParError(0,13.92692);
   ffit[0]1016->SetParLimits(0,0,0);
   ffit[0]1016->SetParameter(1,-7.353297);
   ffit[0]1016->SetParError(1,30.95166);
   ffit[0]1016->SetParLimits(1,0,0);
   ffit[0]1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[0]1016);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 5.177 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 39.54 #pm 13.93 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = -7.353 #pm 30.95 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{^{4}He}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(0.8);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx2[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy2[13] = {
   0,
   0.02214862,
   0.02214862,
   0.01984295,
   0.04084068,
   0.03336946,
   0.02937379,
   0.02438166,
   0.0372357,
   0.02598807,
   0.03198552,
   0.03198552,
   0};
   graph = new TGraph(13,Graph0_fx2,Graph0_fy2);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph02 = new TH1F("Graph_Graph02","Graph",100,0,396);
   Graph_Graph02->SetMinimum(0);
   Graph_Graph02->SetMaximum(0.04492475);
   Graph_Graph02->SetDirectory(0);
   Graph_Graph02->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph02->SetLineColor(ci);
   Graph_Graph02->GetXaxis()->SetLabelFont(22);
   Graph_Graph02->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph02->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph02->GetXaxis()->SetTitleFont(22);
   Graph_Graph02->GetYaxis()->SetLabelFont(22);
   Graph_Graph02->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph02->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph02->GetYaxis()->SetTitleOffset(0);
   Graph_Graph02->GetYaxis()->SetTitleFont(22);
   Graph_Graph02->GetZaxis()->SetLabelFont(22);
   Graph_Graph02->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph02->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph02->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph02);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1018[9] = {
   25.65164,
   61.64267,
   99.02209,
   141.7083,
   178.1952,
   218.5245,
   262.7358,
   300.7771,
   335.2499};
   Double_t Graph1_fy1018[9] = {
   0.01743518,
   0.3478866,
   0.380854,
   0.2943698,
   0.04334662,
   -0.03520965,
   -0.2771567,
   -0.2138351,
   -0.2339611};
   Double_t Graph1_fex1018[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1018[9] = {
   0.1423866,
   0.08440251,
   0.08560424,
   0.1338208,
   0.1490426,
   0.129338,
   0.09826485,
   0.07954628,
   0.117906};
   gre = new TGraphErrors(9,Graph1_fx1018,Graph1_fy1018,Graph1_fex1018,Graph1_fey1018);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph11018 = new TH1F("Graph_Graph11018","Graph",100,0,366.2097);
   Graph_Graph11018->SetMinimum(-0.4596095);
   Graph_Graph11018->SetMaximum(0.5506462);
   Graph_Graph11018->SetDirectory(0);
   Graph_Graph11018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11018->SetLineColor(ci);
   Graph_Graph11018->GetXaxis()->SetLabelFont(22);
   Graph_Graph11018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11018->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11018->GetXaxis()->SetTitleFont(22);
   Graph_Graph11018->GetYaxis()->SetLabelFont(22);
   Graph_Graph11018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11018->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11018->GetYaxis()->SetTitleFont(22);
   Graph_Graph11018->GetZaxis()->SetLabelFont(22);
   Graph_Graph11018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11018->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11018);
   
   gre->Draw("p");
   
   TF1 *ffit[0]1017 = new TF1("ffit[0]","0.0235497*[0]*sin(x*3.14/180.0) / (2.4750934+ -0.3205956*cos(x*3.14/180.0) + -0.0278079*cos(2*x*3.14/180.0) + 0.0001812*([0]*[0] + [1]*[1]) + -0.0159479*[1] + -0.0275889*[1]*cos(x*3.14/180.0))",0,360, TF1::EAddToList::kDefault);
   ffit[0]1017->SetFillColor(19);
   ffit[0]1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[0]1017->SetLineColor(ci);
   ffit[0]1017->SetLineWidth(2);
   ffit[0]1017->SetChisquare(5.177221);
   ffit[0]1017->SetNDF(7);
   ffit[0]1017->GetXaxis()->SetLabelFont(22);
   ffit[0]1017->GetXaxis()->SetLabelSize(0.05);
   ffit[0]1017->GetXaxis()->SetTitleSize(0.9);
   ffit[0]1017->GetXaxis()->SetTitleFont(22);
   ffit[0]1017->GetYaxis()->SetLabelFont(22);
   ffit[0]1017->GetYaxis()->SetLabelSize(0.05);
   ffit[0]1017->GetYaxis()->SetTitleSize(0.06);
   ffit[0]1017->GetYaxis()->SetTitleOffset(0);
   ffit[0]1017->GetYaxis()->SetTitleFont(22);
   ffit[0]1017->SetParameter(0,39.53958);
   ffit[0]1017->SetParError(0,13.92692);
   ffit[0]1017->SetParLimits(0,0,0);
   ffit[0]1017->SetParameter(1,-7.353297);
   ffit[0]1017->SetParError(1,30.95166);
   ffit[0]1017->SetParLimits(1,0,0);
   ffit[0]1017->Draw("same");
      tex = new TLatex(15,-0.57,"x_{B}= 0.132");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c12_4->Modified();
   c12->cd();
  
// ------------>Primitives in pad: c12_7
   TPad *c12_7 = new TPad("c12_7", "_7",0,0,0.3779599,0.3851665);
   c12_7->Draw();
   c12_7->cd();
   c12_7->Range(-131.6667,-1.069355,375,0.65);
   c12_7->SetFillColor(0);
   c12_7->SetBorderMode(0);
   c12_7->SetBorderSize(2);
   c12_7->SetLeftMargin(0.25);
   c12_7->SetRightMargin(0);
   c12_7->SetTopMargin(0);
   c12_7->SetBottomMargin(0.2439024);
   c12_7->SetFrameBorderMode(0);
   c12_7->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1019[9] = {
   22.81909,
   57.65211,
   98.19281,
   139.3701,
   178.8885,
   222.6621,
   265.6899,
   300.0582,
   339.3341};
   Double_t Graph_fy1019[9] = {
   0.2378564,
   0.3014312,
   0.4896329,
   0.1965057,
   0.05771016,
   -0.1651759,
   -0.3467163,
   -0.2891963,
   -0.1849013};
   Double_t Graph_fex1019[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1019[9] = {
   0.08903367,
   0.08398692,
   0.104604,
   0.1575924,
   0.1886792,
   0.1598158,
   0.1277024,
   0.08804558,
   0.08085869};
   gre = new TGraphErrors(9,Graph_fx1019,Graph_fy1019,Graph_fex1019,Graph_fey1019);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","Graph",100,0,370.9856);
   Graph_Graph1019->SetMinimum(-0.5812843);
   Graph_Graph1019->SetMaximum(0.7011025);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetLabelFont(22);
   Graph_Graph1019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1019->GetXaxis()->SetTitleFont(22);
   Graph_Graph1019->GetYaxis()->SetLabelFont(22);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1019->GetYaxis()->SetTitleFont(22);
   Graph_Graph1019->GetZaxis()->SetLabelFont(22);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1019);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1020[9] = {
   22.81909,
   57.65211,
   98.19281,
   139.3701,
   178.8885,
   222.6621,
   265.6899,
   300.0582,
   339.3341};
   Double_t Graph_fy1020[9] = {
   0.2378564,
   0.3014312,
   0.4896329,
   0.1965057,
   0.05771016,
   -0.1651759,
   -0.3467163,
   -0.2891963,
   -0.1849013};
   Double_t Graph_fex1020[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1020[9] = {
   0.09283838,
   0.08745728,
   0.1118034,
   0.1595977,
   0.1923073,
   0.1640617,
   0.133935,
   0.09282593,
   0.08560304};
   gre = new TGraphErrors(9,Graph_fx1020,Graph_fy1020,Graph_fex1020,Graph_fey1020);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","Graph",100,0,370.9856);
   Graph_Graph1020->SetMinimum(-0.5888601);
   Graph_Graph1020->SetMaximum(0.7096451);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetLabelFont(22);
   Graph_Graph1020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1020->GetXaxis()->SetTitleFont(22);
   Graph_Graph1020->GetYaxis()->SetLabelFont(22);
   Graph_Graph1020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1020->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1020->GetYaxis()->SetTitleFont(22);
   Graph_Graph1020->GetZaxis()->SetLabelFont(22);
   Graph_Graph1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1020);
   
   
   TF1 *ffit[0]1021 = new TF1("ffit[0]","0.0230748*[0]*sin(x*3.14/180.0) / (1.8182646+ -0.3788268*cos(x*3.14/180.0) + -0.0280186*cos(2*x*3.14/180.0) + 0.0002084*([0]*[0] + [1]*[1]) + -0.0102721*[1] + -0.0257231*[1]*cos(x*3.14/180.0))",0,370.9856, TF1::EAddToList::kNo);
   ffit[0]1021->SetFillColor(19);
   ffit[0]1021->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[0]1021->SetLineColor(ci);
   ffit[0]1021->SetLineWidth(2);
   ffit[0]1021->SetChisquare(2.873592);
   ffit[0]1021->SetNDF(7);
   ffit[0]1021->GetXaxis()->SetLabelFont(22);
   ffit[0]1021->GetXaxis()->SetLabelSize(0.05);
   ffit[0]1021->GetXaxis()->SetTitleSize(0.9);
   ffit[0]1021->GetXaxis()->SetTitleFont(22);
   ffit[0]1021->GetYaxis()->SetLabelFont(22);
   ffit[0]1021->GetYaxis()->SetLabelSize(0.05);
   ffit[0]1021->GetYaxis()->SetTitleSize(0.06);
   ffit[0]1021->GetYaxis()->SetTitleOffset(0);
   ffit[0]1021->GetYaxis()->SetTitleFont(22);
   ffit[0]1021->SetParameter(0,35.1955);
   ffit[0]1021->SetParError(0,11.82439);
   ffit[0]1021->SetParLimits(0,0,0);
   ffit[0]1021->SetParameter(1,-4.88354);
   ffit[0]1021->SetParError(1,22.49686);
   ffit[0]1021->SetParLimits(1,0,0);
   ffit[0]1021->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[0]1021);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 2.874 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) =  35.2 #pm 11.82 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = -4.884 #pm  22.5 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.063);
   multigraph->GetXaxis()->SetTitleSize(0.121);
   multigraph->GetXaxis()->SetTitleOffset(0.9);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{^{4}He}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.063);
   multigraph->GetYaxis()->SetTitleSize(0.121);
   multigraph->GetYaxis()->SetTitleOffset(0.9);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1023[9] = {
   22.81909,
   57.65211,
   98.19281,
   139.3701,
   178.8885,
   222.6621,
   265.6899,
   300.0582,
   339.3341};
   Double_t Graph_fy1023[9] = {
   0.2378564,
   0.3014312,
   0.4896329,
   0.1965057,
   0.05771016,
   -0.1651759,
   -0.3467163,
   -0.2891963,
   -0.1849013};
   Double_t Graph_fex1023[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1023[9] = {
   0.08903367,
   0.08398692,
   0.104604,
   0.1575924,
   0.1886792,
   0.1598158,
   0.1277024,
   0.08804558,
   0.08085869};
   gre = new TGraphErrors(9,Graph_fx1023,Graph_fy1023,Graph_fex1023,Graph_fey1023);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10191023 = new TH1F("Graph_Graph_Graph10191023","Graph",100,0,370.9856);
   Graph_Graph_Graph10191023->SetMinimum(-0.5812843);
   Graph_Graph_Graph10191023->SetMaximum(0.7011025);
   Graph_Graph_Graph10191023->SetDirectory(0);
   Graph_Graph_Graph10191023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10191023->SetLineColor(ci);
   Graph_Graph_Graph10191023->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10191023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10191023->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10191023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10191023->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10191023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10191023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10191023->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10191023);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1024[9] = {
   22.81909,
   57.65211,
   98.19281,
   139.3701,
   178.8885,
   222.6621,
   265.6899,
   300.0582,
   339.3341};
   Double_t Graph_fy1024[9] = {
   0.2378564,
   0.3014312,
   0.4896329,
   0.1965057,
   0.05771016,
   -0.1651759,
   -0.3467163,
   -0.2891963,
   -0.1849013};
   Double_t Graph_fex1024[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1024[9] = {
   0.09283838,
   0.08745728,
   0.1118034,
   0.1595977,
   0.1923073,
   0.1640617,
   0.133935,
   0.09282593,
   0.08560304};
   gre = new TGraphErrors(9,Graph_fx1024,Graph_fy1024,Graph_fex1024,Graph_fey1024);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph10201024 = new TH1F("Graph_Graph_Graph10201024","Graph",100,0,370.9856);
   Graph_Graph_Graph10201024->SetMinimum(-0.5888601);
   Graph_Graph_Graph10201024->SetMaximum(0.7096451);
   Graph_Graph_Graph10201024->SetDirectory(0);
   Graph_Graph_Graph10201024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10201024->SetLineColor(ci);
   Graph_Graph_Graph10201024->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10201024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10201024->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10201024->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10201024->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10201024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10201024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10201024->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10201024->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10201024->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10201024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10201024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10201024->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10201024);
   
   
   TF1 *ffit[0]1025 = new TF1("ffit[0]","0.0230748*[0]*sin(x*3.14/180.0) / (1.8182646+ -0.3788268*cos(x*3.14/180.0) + -0.0280186*cos(2*x*3.14/180.0) + 0.0002084*([0]*[0] + [1]*[1]) + -0.0102721*[1] + -0.0257231*[1]*cos(x*3.14/180.0))",0,370.9856, TF1::EAddToList::kNo);
   ffit[0]1025->SetFillColor(19);
   ffit[0]1025->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[0]1025->SetLineColor(ci);
   ffit[0]1025->SetLineWidth(2);
   ffit[0]1025->SetChisquare(2.873592);
   ffit[0]1025->SetNDF(7);
   ffit[0]1025->GetXaxis()->SetLabelFont(22);
   ffit[0]1025->GetXaxis()->SetLabelSize(0.05);
   ffit[0]1025->GetXaxis()->SetTitleSize(0.9);
   ffit[0]1025->GetXaxis()->SetTitleFont(22);
   ffit[0]1025->GetYaxis()->SetLabelFont(22);
   ffit[0]1025->GetYaxis()->SetLabelSize(0.05);
   ffit[0]1025->GetYaxis()->SetTitleSize(0.06);
   ffit[0]1025->GetYaxis()->SetTitleOffset(0);
   ffit[0]1025->GetYaxis()->SetTitleFont(22);
   ffit[0]1025->SetParameter(0,35.1955);
   ffit[0]1025->SetParError(0,11.82439);
   ffit[0]1025->SetParLimits(0,0,0);
   ffit[0]1025->SetParameter(1,-4.88354);
   ffit[0]1025->SetParError(1,22.49686);
   ffit[0]1025->SetParLimits(1,0,0);
   ffit[0]1025->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[0]1025);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 2.874 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) =  35.2 #pm 11.82 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = -4.884 #pm  22.5 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.063);
   multigraph->GetXaxis()->SetTitleSize(0.121);
   multigraph->GetXaxis()->SetTitleOffset(0.9);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{^{4}He}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.063);
   multigraph->GetYaxis()->SetTitleSize(0.121);
   multigraph->GetYaxis()->SetTitleOffset(0.9);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx3[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy3[13] = {
   0,
   0.02630532,
   0.02630532,
   0.02439207,
   0.03947151,
   0.02522018,
   0.03717874,
   0.03708316,
   0.04038161,
   0.02940459,
   0.02810254,
   0.02810254,
   0};
   graph = new TGraph(13,Graph0_fx3,Graph0_fy3);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph03 = new TH1F("Graph_Graph03","Graph",100,0,396);
   Graph_Graph03->SetMinimum(0);
   Graph_Graph03->SetMaximum(0.04441977);
   Graph_Graph03->SetDirectory(0);
   Graph_Graph03->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph03->SetLineColor(ci);
   Graph_Graph03->GetXaxis()->SetLabelFont(22);
   Graph_Graph03->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph03->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph03->GetXaxis()->SetTitleFont(22);
   Graph_Graph03->GetYaxis()->SetLabelFont(22);
   Graph_Graph03->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph03->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph03->GetYaxis()->SetTitleOffset(0);
   Graph_Graph03->GetYaxis()->SetTitleFont(22);
   Graph_Graph03->GetZaxis()->SetLabelFont(22);
   Graph_Graph03->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph03->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph03->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph03);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1027[9] = {
   22.81909,
   57.65211,
   98.19281,
   139.3701,
   178.8885,
   222.6621,
   265.6899,
   300.0582,
   339.3341};
   Double_t Graph1_fy1027[9] = {
   0.2378564,
   0.3014312,
   0.4896329,
   0.1965057,
   0.05771016,
   -0.1651759,
   -0.3467163,
   -0.2891963,
   -0.1849013};
   Double_t Graph1_fex1027[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1027[9] = {
   0.08903367,
   0.08398692,
   0.104604,
   0.1575924,
   0.1886792,
   0.1598158,
   0.1277024,
   0.08804558,
   0.08085869};
   gre = new TGraphErrors(9,Graph1_fx1027,Graph1_fy1027,Graph1_fex1027,Graph1_fey1027);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph11027 = new TH1F("Graph_Graph11027","Graph",100,0,370.9856);
   Graph_Graph11027->SetMinimum(-0.5812843);
   Graph_Graph11027->SetMaximum(0.7011025);
   Graph_Graph11027->SetDirectory(0);
   Graph_Graph11027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11027->SetLineColor(ci);
   Graph_Graph11027->GetXaxis()->SetLabelFont(22);
   Graph_Graph11027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11027->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11027->GetXaxis()->SetTitleFont(22);
   Graph_Graph11027->GetYaxis()->SetLabelFont(22);
   Graph_Graph11027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11027->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11027->GetYaxis()->SetTitleFont(22);
   Graph_Graph11027->GetZaxis()->SetLabelFont(22);
   Graph_Graph11027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11027->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11027);
   
   gre->Draw("p");
   
   TF1 *ffit[0]1026 = new TF1("ffit[0]","0.0230748*[0]*sin(x*3.14/180.0) / (1.8182646+ -0.3788268*cos(x*3.14/180.0) + -0.0280186*cos(2*x*3.14/180.0) + 0.0002084*([0]*[0] + [1]*[1]) + -0.0102721*[1] + -0.0257231*[1]*cos(x*3.14/180.0))",0,360, TF1::EAddToList::kDefault);
   ffit[0]1026->SetFillColor(19);
   ffit[0]1026->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[0]1026->SetLineColor(ci);
   ffit[0]1026->SetLineWidth(2);
   ffit[0]1026->SetChisquare(2.873592);
   ffit[0]1026->SetNDF(7);
   ffit[0]1026->GetXaxis()->SetLabelFont(22);
   ffit[0]1026->GetXaxis()->SetLabelSize(0.05);
   ffit[0]1026->GetXaxis()->SetTitleSize(0.9);
   ffit[0]1026->GetXaxis()->SetTitleFont(22);
   ffit[0]1026->GetYaxis()->SetLabelFont(22);
   ffit[0]1026->GetYaxis()->SetLabelSize(0.05);
   ffit[0]1026->GetYaxis()->SetTitleSize(0.06);
   ffit[0]1026->GetYaxis()->SetTitleOffset(0);
   ffit[0]1026->GetYaxis()->SetTitleFont(22);
   ffit[0]1026->SetParameter(0,35.1955);
   ffit[0]1026->SetParError(0,11.82439);
   ffit[0]1026->SetParLimits(0,0,0);
   ffit[0]1026->SetParameter(1,-4.88354);
   ffit[0]1026->SetParError(1,22.49686);
   ffit[0]1026->SetParLimits(1,0,0);
   ffit[0]1026->Draw("same");
      tex = new TLatex(15,-0.57,"-t= 0.08 GeV^{2}");
   tex->SetTextSize(0.075);
   tex->SetLineWidth(2);
   tex->Draw();
   c12_7->Modified();
   c12->cd();
  
// ------------>Primitives in pad: c12_2
   TPad *c12_2 = new TPad("c12_2", "_2",0.3779599,0.6890323,0.6725865,0.992898);
   c12_2->Draw();
   c12_2->cd();
   c12_2->Range(-5,-0.65,375,0.65);
   c12_2->SetFillColor(0);
   c12_2->SetBorderMode(0);
   c12_2->SetBorderSize(2);
   c12_2->SetLeftMargin(0);
   c12_2->SetRightMargin(0);
   c12_2->SetTopMargin(0);
   c12_2->SetBottomMargin(0);
   c12_2->SetFrameBorderMode(0);
   c12_2->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1028[9] = {
   21.10117,
   56.64015,
   96.9922,
   139.9828,
   180.3615,
   218.7404,
   263.194,
   302.2328,
   338.2142};
   Double_t Graph_fy1028[9] = {
   0.1917058,
   0.2819707,
   0.485539,
   0.09969585,
   0.1458599,
   -0.1109757,
   -0.3516181,
   -0.4141039,
   -0.2786012};
   Double_t Graph_fex1028[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1028[9] = {
   0.08517586,
   0.08295781,
   0.1219231,
   0.1660993,
   0.1882492,
   0.1821499,
   0.1322159,
   0.07497272,
   0.07946674};
   gre = new TGraphErrors(9,Graph_fx1028,Graph_fy1028,Graph_fex1028,Graph_fey1028);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","Graph",100,0,369.9255);
   Graph_Graph1028->SetMinimum(-0.5987305);
   Graph_Graph1028->SetMaximum(0.717116);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1028->SetLineColor(ci);
   Graph_Graph1028->GetXaxis()->SetLabelFont(22);
   Graph_Graph1028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1028->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1028->GetXaxis()->SetTitleFont(22);
   Graph_Graph1028->GetYaxis()->SetLabelFont(22);
   Graph_Graph1028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1028->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1028->GetYaxis()->SetTitleFont(22);
   Graph_Graph1028->GetZaxis()->SetLabelFont(22);
   Graph_Graph1028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1028);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1029[9] = {
   21.10117,
   56.64015,
   96.9922,
   139.9828,
   180.3615,
   218.7404,
   263.194,
   302.2328,
   338.2142};
   Double_t Graph_fy1029[9] = {
   0.1917058,
   0.2819707,
   0.485539,
   0.09969585,
   0.1458599,
   -0.1109757,
   -0.3516181,
   -0.4141039,
   -0.2786012};
   Double_t Graph_fex1029[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1029[9] = {
   0.0892737,
   0.08665254,
   0.1291767,
   0.1679711,
   0.1906658,
   0.1853831,
   0.1371968,
   0.08421253,
   0.08365383};
   gre = new TGraphErrors(9,Graph_fx1029,Graph_fy1029,Graph_fex1029,Graph_fey1029);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","Graph",100,0,369.9255);
   Graph_Graph1029->SetMinimum(-0.6096196);
   Graph_Graph1029->SetMaximum(0.7260189);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetLabelFont(22);
   Graph_Graph1029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1029->GetXaxis()->SetTitleFont(22);
   Graph_Graph1029->GetYaxis()->SetLabelFont(22);
   Graph_Graph1029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1029->GetYaxis()->SetTitleFont(22);
   Graph_Graph1029->GetZaxis()->SetLabelFont(22);
   Graph_Graph1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1029);
   
   
   TF1 *ffit[1]1030 = new TF1("ffit[1]","0.0279537*[0]*sin(x*3.14/180.0) / (1.7860295+ -0.3952583*cos(x*3.14/180.0) + -0.0323090*cos(2*x*3.14/180.0) + 0.0003347*([0]*[0] + [1]*[1]) + -0.0137707*[1] + -0.0317760*[1]*cos(x*3.14/180.0))",0,369.9255, TF1::EAddToList::kNo);
   ffit[1]1030->SetFillColor(19);
   ffit[1]1030->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[1]1030->SetLineColor(ci);
   ffit[1]1030->SetLineWidth(2);
   ffit[1]1030->SetChisquare(4.291011);
   ffit[1]1030->SetNDF(7);
   ffit[1]1030->GetXaxis()->SetLabelFont(22);
   ffit[1]1030->GetXaxis()->SetLabelSize(0.05);
   ffit[1]1030->GetXaxis()->SetTitleSize(0.9);
   ffit[1]1030->GetXaxis()->SetTitleFont(22);
   ffit[1]1030->GetYaxis()->SetLabelFont(22);
   ffit[1]1030->GetYaxis()->SetLabelSize(0.05);
   ffit[1]1030->GetYaxis()->SetTitleSize(0.06);
   ffit[1]1030->GetYaxis()->SetTitleOffset(0);
   ffit[1]1030->GetYaxis()->SetTitleFont(22);
   ffit[1]1030->SetParameter(0,25.13263);
   ffit[1]1030->SetParError(0,7.474222);
   ffit[1]1030->SetParLimits(0,0,0);
   ffit[1]1030->SetParameter(1,9.384101);
   ffit[1]1030->SetParError(1,12.51274);
   ffit[1]1030->SetParLimits(1,0,0);
   ffit[1]1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[1]1030);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 4.291 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 25.13 #pm 7.474 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = 9.384 #pm 12.51 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.14);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.14);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1032[9] = {
   21.10117,
   56.64015,
   96.9922,
   139.9828,
   180.3615,
   218.7404,
   263.194,
   302.2328,
   338.2142};
   Double_t Graph_fy1032[9] = {
   0.1917058,
   0.2819707,
   0.485539,
   0.09969585,
   0.1458599,
   -0.1109757,
   -0.3516181,
   -0.4141039,
   -0.2786012};
   Double_t Graph_fex1032[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1032[9] = {
   0.08517586,
   0.08295781,
   0.1219231,
   0.1660993,
   0.1882492,
   0.1821499,
   0.1322159,
   0.07497272,
   0.07946674};
   gre = new TGraphErrors(9,Graph_fx1032,Graph_fy1032,Graph_fex1032,Graph_fey1032);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10281032 = new TH1F("Graph_Graph_Graph10281032","Graph",100,0,369.9255);
   Graph_Graph_Graph10281032->SetMinimum(-0.5987305);
   Graph_Graph_Graph10281032->SetMaximum(0.717116);
   Graph_Graph_Graph10281032->SetDirectory(0);
   Graph_Graph_Graph10281032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10281032->SetLineColor(ci);
   Graph_Graph_Graph10281032->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10281032->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10281032->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10281032->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10281032->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10281032->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10281032->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10281032->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10281032->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10281032->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10281032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10281032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10281032->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10281032);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1033[9] = {
   21.10117,
   56.64015,
   96.9922,
   139.9828,
   180.3615,
   218.7404,
   263.194,
   302.2328,
   338.2142};
   Double_t Graph_fy1033[9] = {
   0.1917058,
   0.2819707,
   0.485539,
   0.09969585,
   0.1458599,
   -0.1109757,
   -0.3516181,
   -0.4141039,
   -0.2786012};
   Double_t Graph_fex1033[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1033[9] = {
   0.0892737,
   0.08665254,
   0.1291767,
   0.1679711,
   0.1906658,
   0.1853831,
   0.1371968,
   0.08421253,
   0.08365383};
   gre = new TGraphErrors(9,Graph_fx1033,Graph_fy1033,Graph_fex1033,Graph_fey1033);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph10291033 = new TH1F("Graph_Graph_Graph10291033","Graph",100,0,369.9255);
   Graph_Graph_Graph10291033->SetMinimum(-0.6096196);
   Graph_Graph_Graph10291033->SetMaximum(0.7260189);
   Graph_Graph_Graph10291033->SetDirectory(0);
   Graph_Graph_Graph10291033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10291033->SetLineColor(ci);
   Graph_Graph_Graph10291033->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10291033->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10291033->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10291033->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10291033->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10291033->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10291033->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10291033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10291033->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10291033->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10291033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10291033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10291033->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10291033);
   
   
   TF1 *ffit[1]1034 = new TF1("ffit[1]","0.0279537*[0]*sin(x*3.14/180.0) / (1.7860295+ -0.3952583*cos(x*3.14/180.0) + -0.0323090*cos(2*x*3.14/180.0) + 0.0003347*([0]*[0] + [1]*[1]) + -0.0137707*[1] + -0.0317760*[1]*cos(x*3.14/180.0))",0,369.9255, TF1::EAddToList::kNo);
   ffit[1]1034->SetFillColor(19);
   ffit[1]1034->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[1]1034->SetLineColor(ci);
   ffit[1]1034->SetLineWidth(2);
   ffit[1]1034->SetChisquare(4.291011);
   ffit[1]1034->SetNDF(7);
   ffit[1]1034->GetXaxis()->SetLabelFont(22);
   ffit[1]1034->GetXaxis()->SetLabelSize(0.05);
   ffit[1]1034->GetXaxis()->SetTitleSize(0.9);
   ffit[1]1034->GetXaxis()->SetTitleFont(22);
   ffit[1]1034->GetYaxis()->SetLabelFont(22);
   ffit[1]1034->GetYaxis()->SetLabelSize(0.05);
   ffit[1]1034->GetYaxis()->SetTitleSize(0.06);
   ffit[1]1034->GetYaxis()->SetTitleOffset(0);
   ffit[1]1034->GetYaxis()->SetTitleFont(22);
   ffit[1]1034->SetParameter(0,25.13263);
   ffit[1]1034->SetParError(0,7.474222);
   ffit[1]1034->SetParLimits(0,0,0);
   ffit[1]1034->SetParameter(1,9.384101);
   ffit[1]1034->SetParError(1,12.51274);
   ffit[1]1034->SetParLimits(1,0,0);
   ffit[1]1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[1]1034);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 4.291 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 25.13 #pm 7.474 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = 9.384 #pm 12.51 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.14);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.14);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx4[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy4[13] = {
   0,
   0.026737,
   0.026737,
   0.02503328,
   0.04267748,
   0.02500644,
   0.03026008,
   0.03447198,
   0.03663218,
   0.03835156,
   0.02613428,
   0.02613428,
   0};
   graph = new TGraph(13,Graph0_fx4,Graph0_fy4);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph04 = new TH1F("Graph_Graph04","Graph",100,0,396);
   Graph_Graph04->SetMinimum(0);
   Graph_Graph04->SetMaximum(0.04694523);
   Graph_Graph04->SetDirectory(0);
   Graph_Graph04->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph04->SetLineColor(ci);
   Graph_Graph04->GetXaxis()->SetLabelFont(22);
   Graph_Graph04->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph04->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph04->GetXaxis()->SetTitleFont(22);
   Graph_Graph04->GetYaxis()->SetLabelFont(22);
   Graph_Graph04->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph04->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph04->GetYaxis()->SetTitleOffset(0);
   Graph_Graph04->GetYaxis()->SetTitleFont(22);
   Graph_Graph04->GetZaxis()->SetLabelFont(22);
   Graph_Graph04->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph04->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph04->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph04);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1036[9] = {
   21.10117,
   56.64015,
   96.9922,
   139.9828,
   180.3615,
   218.7404,
   263.194,
   302.2328,
   338.2142};
   Double_t Graph1_fy1036[9] = {
   0.1917058,
   0.2819707,
   0.485539,
   0.09969585,
   0.1458599,
   -0.1109757,
   -0.3516181,
   -0.4141039,
   -0.2786012};
   Double_t Graph1_fex1036[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1036[9] = {
   0.08517586,
   0.08295781,
   0.1219231,
   0.1660993,
   0.1882492,
   0.1821499,
   0.1322159,
   0.07497272,
   0.07946674};
   gre = new TGraphErrors(9,Graph1_fx1036,Graph1_fy1036,Graph1_fex1036,Graph1_fey1036);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph11036 = new TH1F("Graph_Graph11036","Graph",100,0,369.9255);
   Graph_Graph11036->SetMinimum(-0.5987305);
   Graph_Graph11036->SetMaximum(0.717116);
   Graph_Graph11036->SetDirectory(0);
   Graph_Graph11036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11036->SetLineColor(ci);
   Graph_Graph11036->GetXaxis()->SetLabelFont(22);
   Graph_Graph11036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11036->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11036->GetXaxis()->SetTitleFont(22);
   Graph_Graph11036->GetYaxis()->SetLabelFont(22);
   Graph_Graph11036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11036->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11036->GetYaxis()->SetTitleFont(22);
   Graph_Graph11036->GetZaxis()->SetLabelFont(22);
   Graph_Graph11036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11036->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11036);
   
   gre->Draw("p");
   
   TF1 *ffit[1]1035 = new TF1("ffit[1]","0.0279537*[0]*sin(x*3.14/180.0) / (1.7860295+ -0.3952583*cos(x*3.14/180.0) + -0.0323090*cos(2*x*3.14/180.0) + 0.0003347*([0]*[0] + [1]*[1]) + -0.0137707*[1] + -0.0317760*[1]*cos(x*3.14/180.0))",0,360, TF1::EAddToList::kDefault);
   ffit[1]1035->SetFillColor(19);
   ffit[1]1035->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[1]1035->SetLineColor(ci);
   ffit[1]1035->SetLineWidth(2);
   ffit[1]1035->SetChisquare(4.291011);
   ffit[1]1035->SetNDF(7);
   ffit[1]1035->GetXaxis()->SetLabelFont(22);
   ffit[1]1035->GetXaxis()->SetLabelSize(0.05);
   ffit[1]1035->GetXaxis()->SetTitleSize(0.9);
   ffit[1]1035->GetXaxis()->SetTitleFont(22);
   ffit[1]1035->GetYaxis()->SetLabelFont(22);
   ffit[1]1035->GetYaxis()->SetLabelSize(0.05);
   ffit[1]1035->GetYaxis()->SetTitleSize(0.06);
   ffit[1]1035->GetYaxis()->SetTitleOffset(0);
   ffit[1]1035->GetYaxis()->SetTitleFont(22);
   ffit[1]1035->SetParameter(0,25.13263);
   ffit[1]1035->SetParError(0,7.474222);
   ffit[1]1035->SetParLimits(0,0,0);
   ffit[1]1035->SetParameter(1,9.384101);
   ffit[1]1035->SetParError(1,12.51274);
   ffit[1]1035->SetParLimits(1,0,0);
   ffit[1]1035->Draw("same");
      tex = new TLatex(15,-0.57,"Q^{2}= 1.423 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c12_2->Modified();
   c12->cd();
  
// ------------>Primitives in pad: c12_5
   TPad *c12_5 = new TPad("c12_5", "_5",0.3779599,0.3851665,0.6725865,0.6890323);
   c12_5->Draw();
   c12_5->cd();
   c12_5->Range(-5,-0.65,375,0.65);
   c12_5->SetFillColor(0);
   c12_5->SetBorderMode(0);
   c12_5->SetBorderSize(2);
   c12_5->SetLeftMargin(0);
   c12_5->SetRightMargin(0);
   c12_5->SetTopMargin(0);
   c12_5->SetBottomMargin(0);
   c12_5->SetFrameBorderMode(0);
   c12_5->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1037[9] = {
   22.96056,
   57.15648,
   96.39904,
   139.1926,
   180.1678,
   218.9244,
   263.9158,
   302.5475,
   338.1138};
   Double_t Graph_fy1037[9] = {
   0.1579036,
   0.1733943,
   0.2259656,
   0.2454004,
   -0.1021136,
   -0.287612,
   -0.2943798,
   -0.3979002,
   -0.2692495};
   Double_t Graph_fex1037[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1037[9] = {
   0.08221973,
   0.08584484,
   0.129834,
   0.1748685,
   0.1908064,
   0.1889869,
   0.1328562,
   0.08598979,
   0.07951038};
   gre = new TGraphErrors(9,Graph_fx1037,Graph_fy1037,Graph_fex1037,Graph_fey1037);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","Graph",100,0,369.6291);
   Graph_Graph1037->SetMinimum(-0.5743059);
   Graph_Graph1037->SetMaximum(0.5106848);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetLabelFont(22);
   Graph_Graph1037->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1037->GetXaxis()->SetTitleFont(22);
   Graph_Graph1037->GetYaxis()->SetLabelFont(22);
   Graph_Graph1037->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1037->GetYaxis()->SetTitleFont(22);
   Graph_Graph1037->GetZaxis()->SetLabelFont(22);
   Graph_Graph1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1037);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1038[9] = {
   22.96056,
   57.15648,
   96.39904,
   139.1926,
   180.1678,
   218.9244,
   263.9158,
   302.5475,
   338.1138};
   Double_t Graph_fy1038[9] = {
   0.1579036,
   0.1733943,
   0.2259656,
   0.2454004,
   -0.1021136,
   -0.287612,
   -0.2943798,
   -0.3979002,
   -0.2692495};
   Double_t Graph_fex1038[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1038[9] = {
   0.08537671,
   0.08805212,
   0.1331627,
   0.1758729,
   0.19183,
   0.1909183,
   0.1360344,
   0.09214939,
   0.08347819};
   gre = new TGraphErrors(9,Graph_fx1038,Graph_fy1038,Graph_fex1038,Graph_fey1038);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1038 = new TH1F("Graph_Graph1038","Graph",100,0,369.6291);
   Graph_Graph1038->SetMinimum(-0.5811819);
   Graph_Graph1038->SetMaximum(0.5124056);
   Graph_Graph1038->SetDirectory(0);
   Graph_Graph1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1038->SetLineColor(ci);
   Graph_Graph1038->GetXaxis()->SetLabelFont(22);
   Graph_Graph1038->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1038->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1038->GetXaxis()->SetTitleFont(22);
   Graph_Graph1038->GetYaxis()->SetLabelFont(22);
   Graph_Graph1038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1038->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1038->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1038->GetYaxis()->SetTitleFont(22);
   Graph_Graph1038->GetZaxis()->SetLabelFont(22);
   Graph_Graph1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1038);
   
   
   TF1 *ffit[1]1039 = new TF1("ffit[1]","0.0261399*[0]*sin(x*3.14/180.0) / (1.7535617+ -0.3635010*cos(x*3.14/180.0) + -0.0291465*cos(2*x*3.14/180.0) + 0.0002883*([0]*[0] + [1]*[1]) + -0.0131522*[1] + -0.0294052*[1]*cos(x*3.14/180.0))",0,369.6291, TF1::EAddToList::kNo);
   ffit[1]1039->SetFillColor(19);
   ffit[1]1039->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[1]1039->SetLineColor(ci);
   ffit[1]1039->SetLineWidth(2);
   ffit[1]1039->SetChisquare(5.936185);
   ffit[1]1039->SetNDF(7);
   ffit[1]1039->GetXaxis()->SetLabelFont(22);
   ffit[1]1039->GetXaxis()->SetLabelSize(0.05);
   ffit[1]1039->GetXaxis()->SetTitleSize(0.9);
   ffit[1]1039->GetXaxis()->SetTitleFont(22);
   ffit[1]1039->GetYaxis()->SetLabelFont(22);
   ffit[1]1039->GetYaxis()->SetLabelSize(0.05);
   ffit[1]1039->GetYaxis()->SetTitleSize(0.06);
   ffit[1]1039->GetYaxis()->SetTitleOffset(0);
   ffit[1]1039->GetYaxis()->SetTitleFont(22);
   ffit[1]1039->SetParameter(0,18.67584);
   ffit[1]1039->SetParError(0,6.928986);
   ffit[1]1039->SetParLimits(0,0,0);
   ffit[1]1039->SetParameter(1,13.84077);
   ffit[1]1039->SetParError(1,16.8974);
   ffit[1]1039->SetParLimits(1,0,0);
   ffit[1]1039->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[1]1039);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 5.936 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 18.68 #pm 6.929 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = 13.84 #pm  16.9 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.14);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.14);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1041[9] = {
   22.96056,
   57.15648,
   96.39904,
   139.1926,
   180.1678,
   218.9244,
   263.9158,
   302.5475,
   338.1138};
   Double_t Graph_fy1041[9] = {
   0.1579036,
   0.1733943,
   0.2259656,
   0.2454004,
   -0.1021136,
   -0.287612,
   -0.2943798,
   -0.3979002,
   -0.2692495};
   Double_t Graph_fex1041[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1041[9] = {
   0.08221973,
   0.08584484,
   0.129834,
   0.1748685,
   0.1908064,
   0.1889869,
   0.1328562,
   0.08598979,
   0.07951038};
   gre = new TGraphErrors(9,Graph_fx1041,Graph_fy1041,Graph_fex1041,Graph_fey1041);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10371041 = new TH1F("Graph_Graph_Graph10371041","Graph",100,0,369.6291);
   Graph_Graph_Graph10371041->SetMinimum(-0.5743059);
   Graph_Graph_Graph10371041->SetMaximum(0.5106848);
   Graph_Graph_Graph10371041->SetDirectory(0);
   Graph_Graph_Graph10371041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10371041->SetLineColor(ci);
   Graph_Graph_Graph10371041->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10371041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10371041->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10371041->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10371041->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10371041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10371041->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10371041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10371041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10371041->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10371041);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1042[9] = {
   22.96056,
   57.15648,
   96.39904,
   139.1926,
   180.1678,
   218.9244,
   263.9158,
   302.5475,
   338.1138};
   Double_t Graph_fy1042[9] = {
   0.1579036,
   0.1733943,
   0.2259656,
   0.2454004,
   -0.1021136,
   -0.287612,
   -0.2943798,
   -0.3979002,
   -0.2692495};
   Double_t Graph_fex1042[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1042[9] = {
   0.08537671,
   0.08805212,
   0.1331627,
   0.1758729,
   0.19183,
   0.1909183,
   0.1360344,
   0.09214939,
   0.08347819};
   gre = new TGraphErrors(9,Graph_fx1042,Graph_fy1042,Graph_fex1042,Graph_fey1042);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph10381042 = new TH1F("Graph_Graph_Graph10381042","Graph",100,0,369.6291);
   Graph_Graph_Graph10381042->SetMinimum(-0.5811819);
   Graph_Graph_Graph10381042->SetMaximum(0.5124056);
   Graph_Graph_Graph10381042->SetDirectory(0);
   Graph_Graph_Graph10381042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10381042->SetLineColor(ci);
   Graph_Graph_Graph10381042->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10381042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10381042->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10381042->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10381042->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10381042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10381042->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10381042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10381042->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10381042->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10381042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10381042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10381042->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10381042);
   
   
   TF1 *ffit[1]1043 = new TF1("ffit[1]","0.0261399*[0]*sin(x*3.14/180.0) / (1.7535617+ -0.3635010*cos(x*3.14/180.0) + -0.0291465*cos(2*x*3.14/180.0) + 0.0002883*([0]*[0] + [1]*[1]) + -0.0131522*[1] + -0.0294052*[1]*cos(x*3.14/180.0))",0,369.6291, TF1::EAddToList::kNo);
   ffit[1]1043->SetFillColor(19);
   ffit[1]1043->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[1]1043->SetLineColor(ci);
   ffit[1]1043->SetLineWidth(2);
   ffit[1]1043->SetChisquare(5.936185);
   ffit[1]1043->SetNDF(7);
   ffit[1]1043->GetXaxis()->SetLabelFont(22);
   ffit[1]1043->GetXaxis()->SetLabelSize(0.05);
   ffit[1]1043->GetXaxis()->SetTitleSize(0.9);
   ffit[1]1043->GetXaxis()->SetTitleFont(22);
   ffit[1]1043->GetYaxis()->SetLabelFont(22);
   ffit[1]1043->GetYaxis()->SetLabelSize(0.05);
   ffit[1]1043->GetYaxis()->SetTitleSize(0.06);
   ffit[1]1043->GetYaxis()->SetTitleOffset(0);
   ffit[1]1043->GetYaxis()->SetTitleFont(22);
   ffit[1]1043->SetParameter(0,18.67584);
   ffit[1]1043->SetParError(0,6.928986);
   ffit[1]1043->SetParLimits(0,0,0);
   ffit[1]1043->SetParameter(1,13.84077);
   ffit[1]1043->SetParError(1,16.8974);
   ffit[1]1043->SetParLimits(1,0,0);
   ffit[1]1043->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[1]1043);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 5.936 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 18.68 #pm 6.929 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = 13.84 #pm  16.9 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.14);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.14);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx5[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy5[13] = {
   0,
   0.02300214,
   0.02300214,
   0.01959182,
   0.0295878,
   0.01876947,
   0.0197908,
   0.0270881,
   0.02923329,
   0.03312501,
   0.02543044,
   0.02543044,
   0};
   graph = new TGraph(13,Graph0_fx5,Graph0_fy5);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph05 = new TH1F("Graph_Graph05","Graph",100,0,396);
   Graph_Graph05->SetMinimum(0);
   Graph_Graph05->SetMaximum(0.03643751);
   Graph_Graph05->SetDirectory(0);
   Graph_Graph05->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph05->SetLineColor(ci);
   Graph_Graph05->GetXaxis()->SetLabelFont(22);
   Graph_Graph05->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph05->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph05->GetXaxis()->SetTitleFont(22);
   Graph_Graph05->GetYaxis()->SetLabelFont(22);
   Graph_Graph05->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph05->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph05->GetYaxis()->SetTitleOffset(0);
   Graph_Graph05->GetYaxis()->SetTitleFont(22);
   Graph_Graph05->GetZaxis()->SetLabelFont(22);
   Graph_Graph05->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph05->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph05->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph05);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1045[9] = {
   22.96056,
   57.15648,
   96.39904,
   139.1926,
   180.1678,
   218.9244,
   263.9158,
   302.5475,
   338.1138};
   Double_t Graph1_fy1045[9] = {
   0.1579036,
   0.1733943,
   0.2259656,
   0.2454004,
   -0.1021136,
   -0.287612,
   -0.2943798,
   -0.3979002,
   -0.2692495};
   Double_t Graph1_fex1045[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1045[9] = {
   0.08221973,
   0.08584484,
   0.129834,
   0.1748685,
   0.1908064,
   0.1889869,
   0.1328562,
   0.08598979,
   0.07951038};
   gre = new TGraphErrors(9,Graph1_fx1045,Graph1_fy1045,Graph1_fex1045,Graph1_fey1045);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph11045 = new TH1F("Graph_Graph11045","Graph",100,0,369.6291);
   Graph_Graph11045->SetMinimum(-0.5743059);
   Graph_Graph11045->SetMaximum(0.5106848);
   Graph_Graph11045->SetDirectory(0);
   Graph_Graph11045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11045->SetLineColor(ci);
   Graph_Graph11045->GetXaxis()->SetLabelFont(22);
   Graph_Graph11045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11045->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11045->GetXaxis()->SetTitleFont(22);
   Graph_Graph11045->GetYaxis()->SetLabelFont(22);
   Graph_Graph11045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11045->GetYaxis()->SetTitleFont(22);
   Graph_Graph11045->GetZaxis()->SetLabelFont(22);
   Graph_Graph11045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11045->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11045);
   
   gre->Draw("p");
   
   TF1 *ffit[1]1044 = new TF1("ffit[1]","0.0261399*[0]*sin(x*3.14/180.0) / (1.7535617+ -0.3635010*cos(x*3.14/180.0) + -0.0291465*cos(2*x*3.14/180.0) + 0.0002883*([0]*[0] + [1]*[1]) + -0.0131522*[1] + -0.0294052*[1]*cos(x*3.14/180.0))",0,360, TF1::EAddToList::kDefault);
   ffit[1]1044->SetFillColor(19);
   ffit[1]1044->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[1]1044->SetLineColor(ci);
   ffit[1]1044->SetLineWidth(2);
   ffit[1]1044->SetChisquare(5.936185);
   ffit[1]1044->SetNDF(7);
   ffit[1]1044->GetXaxis()->SetLabelFont(22);
   ffit[1]1044->GetXaxis()->SetLabelSize(0.05);
   ffit[1]1044->GetXaxis()->SetTitleSize(0.9);
   ffit[1]1044->GetXaxis()->SetTitleFont(22);
   ffit[1]1044->GetYaxis()->SetLabelFont(22);
   ffit[1]1044->GetYaxis()->SetLabelSize(0.05);
   ffit[1]1044->GetYaxis()->SetTitleSize(0.06);
   ffit[1]1044->GetYaxis()->SetTitleOffset(0);
   ffit[1]1044->GetYaxis()->SetTitleFont(22);
   ffit[1]1044->SetParameter(0,18.67584);
   ffit[1]1044->SetParError(0,6.928986);
   ffit[1]1044->SetParLimits(0,0,0);
   ffit[1]1044->SetParameter(1,13.84077);
   ffit[1]1044->SetParError(1,16.8974);
   ffit[1]1044->SetParLimits(1,0,0);
   ffit[1]1044->Draw("same");
      tex = new TLatex(15,-0.57,"x_{B}= 0.170");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c12_5->Modified();
   c12->cd();
  
// ------------>Primitives in pad: c12_8
   TPad *c12_8 = new TPad("c12_8", "_8",0.3779599,0,0.6725865,0.3851665);
   c12_8->Draw();
   c12_8->cd();
   c12_8->Range(-5,-1.069355,375,0.65);
   c12_8->SetFillColor(0);
   c12_8->SetBorderMode(0);
   c12_8->SetBorderSize(2);
   c12_8->SetLeftMargin(0);
   c12_8->SetRightMargin(0);
   c12_8->SetTopMargin(0);
   c12_8->SetBottomMargin(0.2439024);
   c12_8->SetFrameBorderMode(0);
   c12_8->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1046[9] = {
   21.11882,
   56.44725,
   97.5705,
   141.9895,
   179.5896,
   218.5645,
   262.8719,
   303.5719,
   338.5542};
   Double_t Graph_fy1046[9] = {
   0.2481552,
   0.3386424,
   0.346783,
   0.1464149,
   -0.2814579,
   0.2104932,
   -0.239911,
   -0.1989961,
   -0.2098659};
   Double_t Graph_fex1046[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1046[9] = {
   0.08927447,
   0.07780342,
   0.1114889,
   0.1874769,
   0.18298,
   0.1993312,
   0.1248722,
   0.091135,
   0.0851837};
   gre = new TGraphErrors(9,Graph_fx1046,Graph_fy1046,Graph_fex1046,Graph_fey1046);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1046 = new TH1F("Graph_Graph1046","Graph",100,0,370.2977);
   Graph_Graph1046->SetMinimum(-0.5567089);
   Graph_Graph1046->SetMaximum(0.5505428);
   Graph_Graph1046->SetDirectory(0);
   Graph_Graph1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1046->SetLineColor(ci);
   Graph_Graph1046->GetXaxis()->SetLabelFont(22);
   Graph_Graph1046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1046->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1046->GetXaxis()->SetTitleFont(22);
   Graph_Graph1046->GetYaxis()->SetLabelFont(22);
   Graph_Graph1046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1046->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1046->GetYaxis()->SetTitleFont(22);
   Graph_Graph1046->GetZaxis()->SetLabelFont(22);
   Graph_Graph1046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1046->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1046);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1047[9] = {
   21.11882,
   56.44725,
   97.5705,
   141.9895,
   179.5896,
   218.5645,
   262.8719,
   303.5719,
   338.5542};
   Double_t Graph_fy1047[9] = {
   0.2481552,
   0.3386424,
   0.346783,
   0.1464149,
   -0.2814579,
   0.2104932,
   -0.239911,
   -0.1989961,
   -0.2098659};
   Double_t Graph_fex1047[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1047[9] = {
   0.09318507,
   0.08283334,
   0.1156562,
   0.1887061,
   0.1864941,
   0.1998783,
   0.128041,
   0.09553188,
   0.08752967};
   gre = new TGraphErrors(9,Graph_fx1047,Graph_fy1047,Graph_fex1047,Graph_fey1047);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","Graph",100,0,370.2977);
   Graph_Graph1047->SetMinimum(-0.5609911);
   Graph_Graph1047->SetMaximum(0.5554783);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetLabelFont(22);
   Graph_Graph1047->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1047->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1047->GetXaxis()->SetTitleFont(22);
   Graph_Graph1047->GetYaxis()->SetLabelFont(22);
   Graph_Graph1047->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1047->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1047->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1047->GetYaxis()->SetTitleFont(22);
   Graph_Graph1047->GetZaxis()->SetLabelFont(22);
   Graph_Graph1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1047);
   
   
   TF1 *ffit[1]1048 = new TF1("ffit[1]","0.0251934*[0]*sin(x*3.14/180.0) / (1.5630902+ -0.3675401*cos(x*3.14/180.0) + -0.0277057*cos(2*x*3.14/180.0) + 0.0002887*([0]*[0] + [1]*[1]) + -0.0109430*[1] + -0.0278239*[1]*cos(x*3.14/180.0))",0,370.2977, TF1::EAddToList::kNo);
   ffit[1]1048->SetFillColor(19);
   ffit[1]1048->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[1]1048->SetLineColor(ci);
   ffit[1]1048->SetLineWidth(2);
   ffit[1]1048->SetChisquare(7.561009);
   ffit[1]1048->SetNDF(7);
   ffit[1]1048->GetXaxis()->SetLabelFont(22);
   ffit[1]1048->GetXaxis()->SetLabelSize(0.05);
   ffit[1]1048->GetXaxis()->SetTitleSize(0.9);
   ffit[1]1048->GetXaxis()->SetTitleFont(22);
   ffit[1]1048->GetYaxis()->SetLabelFont(22);
   ffit[1]1048->GetYaxis()->SetLabelSize(0.05);
   ffit[1]1048->GetYaxis()->SetTitleSize(0.06);
   ffit[1]1048->GetYaxis()->SetTitleOffset(0);
   ffit[1]1048->GetYaxis()->SetTitleFont(22);
   ffit[1]1048->SetParameter(0,15.11531);
   ffit[1]1048->SetParError(0,4.293865);
   ffit[1]1048->SetParLimits(0,0,0);
   ffit[1]1048->SetParameter(1,19.6659);
   ffit[1]1048->SetParError(1,11.14666);
   ffit[1]1048->SetParLimits(1,0,0);
   ffit[1]1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[1]1048);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 7.561 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 15.12 #pm 4.294 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = 19.67 #pm 11.15 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.145);
   multigraph->GetXaxis()->SetTitleOffset(0.8);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1050[9] = {
   21.11882,
   56.44725,
   97.5705,
   141.9895,
   179.5896,
   218.5645,
   262.8719,
   303.5719,
   338.5542};
   Double_t Graph_fy1050[9] = {
   0.2481552,
   0.3386424,
   0.346783,
   0.1464149,
   -0.2814579,
   0.2104932,
   -0.239911,
   -0.1989961,
   -0.2098659};
   Double_t Graph_fex1050[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1050[9] = {
   0.08927447,
   0.07780342,
   0.1114889,
   0.1874769,
   0.18298,
   0.1993312,
   0.1248722,
   0.091135,
   0.0851837};
   gre = new TGraphErrors(9,Graph_fx1050,Graph_fy1050,Graph_fex1050,Graph_fey1050);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10461050 = new TH1F("Graph_Graph_Graph10461050","Graph",100,0,370.2977);
   Graph_Graph_Graph10461050->SetMinimum(-0.5567089);
   Graph_Graph_Graph10461050->SetMaximum(0.5505428);
   Graph_Graph_Graph10461050->SetDirectory(0);
   Graph_Graph_Graph10461050->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10461050->SetLineColor(ci);
   Graph_Graph_Graph10461050->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10461050->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10461050->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10461050->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10461050->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10461050->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10461050->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10461050->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10461050->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10461050->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10461050->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10461050->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10461050->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10461050);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1051[9] = {
   21.11882,
   56.44725,
   97.5705,
   141.9895,
   179.5896,
   218.5645,
   262.8719,
   303.5719,
   338.5542};
   Double_t Graph_fy1051[9] = {
   0.2481552,
   0.3386424,
   0.346783,
   0.1464149,
   -0.2814579,
   0.2104932,
   -0.239911,
   -0.1989961,
   -0.2098659};
   Double_t Graph_fex1051[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1051[9] = {
   0.09318507,
   0.08283334,
   0.1156562,
   0.1887061,
   0.1864941,
   0.1998783,
   0.128041,
   0.09553188,
   0.08752967};
   gre = new TGraphErrors(9,Graph_fx1051,Graph_fy1051,Graph_fex1051,Graph_fey1051);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph10471051 = new TH1F("Graph_Graph_Graph10471051","Graph",100,0,370.2977);
   Graph_Graph_Graph10471051->SetMinimum(-0.5609911);
   Graph_Graph_Graph10471051->SetMaximum(0.5554783);
   Graph_Graph_Graph10471051->SetDirectory(0);
   Graph_Graph_Graph10471051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10471051->SetLineColor(ci);
   Graph_Graph_Graph10471051->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10471051->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10471051->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10471051->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10471051->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10471051->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10471051->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10471051->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10471051->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10471051->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10471051->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10471051->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10471051->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10471051);
   
   
   TF1 *ffit[1]1052 = new TF1("ffit[1]","0.0251934*[0]*sin(x*3.14/180.0) / (1.5630902+ -0.3675401*cos(x*3.14/180.0) + -0.0277057*cos(2*x*3.14/180.0) + 0.0002887*([0]*[0] + [1]*[1]) + -0.0109430*[1] + -0.0278239*[1]*cos(x*3.14/180.0))",0,370.2977, TF1::EAddToList::kNo);
   ffit[1]1052->SetFillColor(19);
   ffit[1]1052->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[1]1052->SetLineColor(ci);
   ffit[1]1052->SetLineWidth(2);
   ffit[1]1052->SetChisquare(7.561009);
   ffit[1]1052->SetNDF(7);
   ffit[1]1052->GetXaxis()->SetLabelFont(22);
   ffit[1]1052->GetXaxis()->SetLabelSize(0.05);
   ffit[1]1052->GetXaxis()->SetTitleSize(0.9);
   ffit[1]1052->GetXaxis()->SetTitleFont(22);
   ffit[1]1052->GetYaxis()->SetLabelFont(22);
   ffit[1]1052->GetYaxis()->SetLabelSize(0.05);
   ffit[1]1052->GetYaxis()->SetTitleSize(0.06);
   ffit[1]1052->GetYaxis()->SetTitleOffset(0);
   ffit[1]1052->GetYaxis()->SetTitleFont(22);
   ffit[1]1052->SetParameter(0,15.11531);
   ffit[1]1052->SetParError(0,4.293865);
   ffit[1]1052->SetParLimits(0,0,0);
   ffit[1]1052->SetParameter(1,19.6659);
   ffit[1]1052->SetParError(1,11.14666);
   ffit[1]1052->SetParLimits(1,0,0);
   ffit[1]1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[1]1052);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 7.561 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 15.12 #pm 4.294 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = 19.67 #pm 11.15 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.145);
   multigraph->GetXaxis()->SetTitleOffset(0.8);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx6[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy6[13] = {
   0,
   0.02671191,
   0.02671191,
   0.02842517,
   0.03076673,
   0.02150343,
   0.03603272,
   0.01477838,
   0.02830972,
   0.02864878,
   0.02012911,
   0.02012911,
   0};
   graph = new TGraph(13,Graph0_fx6,Graph0_fy6);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph06 = new TH1F("Graph_Graph06","Graph",100,0,396);
   Graph_Graph06->SetMinimum(0);
   Graph_Graph06->SetMaximum(0.03963599);
   Graph_Graph06->SetDirectory(0);
   Graph_Graph06->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph06->SetLineColor(ci);
   Graph_Graph06->GetXaxis()->SetLabelFont(22);
   Graph_Graph06->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph06->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph06->GetXaxis()->SetTitleFont(22);
   Graph_Graph06->GetYaxis()->SetLabelFont(22);
   Graph_Graph06->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph06->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph06->GetYaxis()->SetTitleOffset(0);
   Graph_Graph06->GetYaxis()->SetTitleFont(22);
   Graph_Graph06->GetZaxis()->SetLabelFont(22);
   Graph_Graph06->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph06->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph06->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph06);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1054[9] = {
   21.11882,
   56.44725,
   97.5705,
   141.9895,
   179.5896,
   218.5645,
   262.8719,
   303.5719,
   338.5542};
   Double_t Graph1_fy1054[9] = {
   0.2481552,
   0.3386424,
   0.346783,
   0.1464149,
   -0.2814579,
   0.2104932,
   -0.239911,
   -0.1989961,
   -0.2098659};
   Double_t Graph1_fex1054[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1054[9] = {
   0.08927447,
   0.07780342,
   0.1114889,
   0.1874769,
   0.18298,
   0.1993312,
   0.1248722,
   0.091135,
   0.0851837};
   gre = new TGraphErrors(9,Graph1_fx1054,Graph1_fy1054,Graph1_fex1054,Graph1_fey1054);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph11054 = new TH1F("Graph_Graph11054","Graph",100,0,370.2977);
   Graph_Graph11054->SetMinimum(-0.5567089);
   Graph_Graph11054->SetMaximum(0.5505428);
   Graph_Graph11054->SetDirectory(0);
   Graph_Graph11054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11054->SetLineColor(ci);
   Graph_Graph11054->GetXaxis()->SetLabelFont(22);
   Graph_Graph11054->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11054->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11054->GetXaxis()->SetTitleFont(22);
   Graph_Graph11054->GetYaxis()->SetLabelFont(22);
   Graph_Graph11054->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11054->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11054->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11054->GetYaxis()->SetTitleFont(22);
   Graph_Graph11054->GetZaxis()->SetLabelFont(22);
   Graph_Graph11054->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11054->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11054->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11054);
   
   gre->Draw("p");
   
   TF1 *ffit[1]1053 = new TF1("ffit[1]","0.0251934*[0]*sin(x*3.14/180.0) / (1.5630902+ -0.3675401*cos(x*3.14/180.0) + -0.0277057*cos(2*x*3.14/180.0) + 0.0002887*([0]*[0] + [1]*[1]) + -0.0109430*[1] + -0.0278239*[1]*cos(x*3.14/180.0))",0,360, TF1::EAddToList::kDefault);
   ffit[1]1053->SetFillColor(19);
   ffit[1]1053->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[1]1053->SetLineColor(ci);
   ffit[1]1053->SetLineWidth(2);
   ffit[1]1053->SetChisquare(7.561009);
   ffit[1]1053->SetNDF(7);
   ffit[1]1053->GetXaxis()->SetLabelFont(22);
   ffit[1]1053->GetXaxis()->SetLabelSize(0.05);
   ffit[1]1053->GetXaxis()->SetTitleSize(0.9);
   ffit[1]1053->GetXaxis()->SetTitleFont(22);
   ffit[1]1053->GetYaxis()->SetLabelFont(22);
   ffit[1]1053->GetYaxis()->SetLabelSize(0.05);
   ffit[1]1053->GetYaxis()->SetTitleSize(0.06);
   ffit[1]1053->GetYaxis()->SetTitleOffset(0);
   ffit[1]1053->GetYaxis()->SetTitleFont(22);
   ffit[1]1053->SetParameter(0,15.11531);
   ffit[1]1053->SetParError(0,4.293865);
   ffit[1]1053->SetParLimits(0,0,0);
   ffit[1]1053->SetParameter(1,19.6659);
   ffit[1]1053->SetParError(1,11.14666);
   ffit[1]1053->SetParLimits(1,0,0);
   ffit[1]1053->Draw("same");
      tex = new TLatex(15,-0.57,"-t= 0.094 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c12_8->Modified();
   c12->cd();
  
// ------------>Primitives in pad: c12_3
   TPad *c12_3 = new TPad("c12_3", "_3",0.6725865,0.6890323,0.9672131,0.992898);
   c12_3->Draw();
   c12_3->cd();
   c12_3->Range(-5,-0.65,375,0.65);
   c12_3->SetFillColor(0);
   c12_3->SetBorderMode(0);
   c12_3->SetBorderSize(2);
   c12_3->SetLeftMargin(0);
   c12_3->SetRightMargin(0);
   c12_3->SetTopMargin(0);
   c12_3->SetBottomMargin(0);
   c12_3->SetFrameBorderMode(0);
   c12_3->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1055[9] = {
   21.45518,
   57.23776,
   96.22869,
   139.5664,
   178.2038,
   221.4048,
   263.3962,
   303.3615,
   338.5945};
   Double_t Graph_fy1055[9] = {
   0.1803878,
   0.3501509,
   0.2701766,
   0.3053819,
   0.1028176,
   -0.2118587,
   -0.3060192,
   -0.1384293,
   -0.1633788};
   Double_t Graph_fex1055[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1055[9] = {
   0.07704611,
   0.08031517,
   0.1217762,
   0.2384291,
   0.2667898,
   0.2142405,
   0.1280201,
   0.09219356,
   0.07744006};
   gre = new TGraphErrors(9,Graph_fx1055,Graph_fy1055,Graph_fex1055,Graph_fey1055);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","Graph",100,0,370.3084);
   Graph_Graph1055->SetMinimum(-0.5318244);
   Graph_Graph1055->SetMaximum(0.641596);
   Graph_Graph1055->SetDirectory(0);
   Graph_Graph1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1055->SetLineColor(ci);
   Graph_Graph1055->GetXaxis()->SetLabelFont(22);
   Graph_Graph1055->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1055->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1055->GetXaxis()->SetTitleFont(22);
   Graph_Graph1055->GetYaxis()->SetLabelFont(22);
   Graph_Graph1055->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1055->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1055->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1055->GetYaxis()->SetTitleFont(22);
   Graph_Graph1055->GetZaxis()->SetLabelFont(22);
   Graph_Graph1055->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1055->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1055->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1055);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1056[9] = {
   21.45518,
   57.23776,
   96.22869,
   139.5664,
   178.2038,
   221.4048,
   263.3962,
   303.3615,
   338.5945};
   Double_t Graph_fy1056[9] = {
   0.1803878,
   0.3501509,
   0.2701766,
   0.3053819,
   0.1028176,
   -0.2118587,
   -0.3060192,
   -0.1384293,
   -0.1633788};
   Double_t Graph_fex1056[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1056[9] = {
   0.08053756,
   0.08242233,
   0.1230086,
   0.239036,
   0.2670899,
   0.214785,
   0.1306386,
   0.09449148,
   0.07914896};
   gre = new TGraphErrors(9,Graph_fx1056,Graph_fy1056,Graph_fex1056,Graph_fey1056);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1056 = new TH1F("Graph_Graph1056","Graph",100,0,370.3084);
   Graph_Graph1056->SetMinimum(-0.5347654);
   Graph_Graph1056->SetMaximum(0.6425255);
   Graph_Graph1056->SetDirectory(0);
   Graph_Graph1056->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1056->SetLineColor(ci);
   Graph_Graph1056->GetXaxis()->SetLabelFont(22);
   Graph_Graph1056->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1056->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1056->GetXaxis()->SetTitleFont(22);
   Graph_Graph1056->GetYaxis()->SetLabelFont(22);
   Graph_Graph1056->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1056->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1056->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1056->GetYaxis()->SetTitleFont(22);
   Graph_Graph1056->GetZaxis()->SetLabelFont(22);
   Graph_Graph1056->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1056->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1056->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1056);
   
   
   TF1 *ffit[2]1057 = new TF1("ffit[2]","0.0230941*[0]*sin(x*3.14/180.0) / (0.9259257+ -0.2966352*cos(x*3.14/180.0) + -0.0195570*cos(2*x*3.14/180.0) + 0.0003646*([0]*[0] + [1]*[1]) + -0.0070195*[1] + -0.0238654*[1]*cos(x*3.14/180.0))",0,370.3084, TF1::EAddToList::kNo);
   ffit[2]1057->SetFillColor(19);
   ffit[2]1057->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[2]1057->SetLineColor(ci);
   ffit[2]1057->SetLineWidth(2);
   ffit[2]1057->SetChisquare(3.849434);
   ffit[2]1057->SetNDF(7);
   ffit[2]1057->GetXaxis()->SetLabelFont(22);
   ffit[2]1057->GetXaxis()->SetLabelSize(0.05);
   ffit[2]1057->GetXaxis()->SetTitleSize(0.9);
   ffit[2]1057->GetXaxis()->SetTitleFont(22);
   ffit[2]1057->GetYaxis()->SetLabelFont(22);
   ffit[2]1057->GetYaxis()->SetLabelSize(0.05);
   ffit[2]1057->GetYaxis()->SetTitleSize(0.06);
   ffit[2]1057->GetYaxis()->SetTitleOffset(0);
   ffit[2]1057->GetYaxis()->SetTitleFont(22);
   ffit[2]1057->SetParameter(0,13.14901);
   ffit[2]1057->SetParError(0,5.586008);
   ffit[2]1057->SetParLimits(0,0,0);
   ffit[2]1057->SetParameter(1,-2.787041);
   ffit[2]1057->SetParError(1,15.53578);
   ffit[2]1057->SetParLimits(1,0,0);
   ffit[2]1057->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[2]1057);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 3.849 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 13.15 #pm 5.586 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = -2.787 #pm 15.54 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1059[9] = {
   21.45518,
   57.23776,
   96.22869,
   139.5664,
   178.2038,
   221.4048,
   263.3962,
   303.3615,
   338.5945};
   Double_t Graph_fy1059[9] = {
   0.1803878,
   0.3501509,
   0.2701766,
   0.3053819,
   0.1028176,
   -0.2118587,
   -0.3060192,
   -0.1384293,
   -0.1633788};
   Double_t Graph_fex1059[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1059[9] = {
   0.07704611,
   0.08031517,
   0.1217762,
   0.2384291,
   0.2667898,
   0.2142405,
   0.1280201,
   0.09219356,
   0.07744006};
   gre = new TGraphErrors(9,Graph_fx1059,Graph_fy1059,Graph_fex1059,Graph_fey1059);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10551059 = new TH1F("Graph_Graph_Graph10551059","Graph",100,0,370.3084);
   Graph_Graph_Graph10551059->SetMinimum(-0.5318244);
   Graph_Graph_Graph10551059->SetMaximum(0.641596);
   Graph_Graph_Graph10551059->SetDirectory(0);
   Graph_Graph_Graph10551059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10551059->SetLineColor(ci);
   Graph_Graph_Graph10551059->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10551059->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10551059->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10551059->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10551059->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10551059->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10551059->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10551059->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10551059->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10551059->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10551059);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1060[9] = {
   21.45518,
   57.23776,
   96.22869,
   139.5664,
   178.2038,
   221.4048,
   263.3962,
   303.3615,
   338.5945};
   Double_t Graph_fy1060[9] = {
   0.1803878,
   0.3501509,
   0.2701766,
   0.3053819,
   0.1028176,
   -0.2118587,
   -0.3060192,
   -0.1384293,
   -0.1633788};
   Double_t Graph_fex1060[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1060[9] = {
   0.08053756,
   0.08242233,
   0.1230086,
   0.239036,
   0.2670899,
   0.214785,
   0.1306386,
   0.09449148,
   0.07914896};
   gre = new TGraphErrors(9,Graph_fx1060,Graph_fy1060,Graph_fex1060,Graph_fey1060);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph10561060 = new TH1F("Graph_Graph_Graph10561060","Graph",100,0,370.3084);
   Graph_Graph_Graph10561060->SetMinimum(-0.5347654);
   Graph_Graph_Graph10561060->SetMaximum(0.6425255);
   Graph_Graph_Graph10561060->SetDirectory(0);
   Graph_Graph_Graph10561060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10561060->SetLineColor(ci);
   Graph_Graph_Graph10561060->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10561060->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10561060->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10561060->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10561060->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10561060->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10561060->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10561060->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10561060->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10561060->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10561060->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10561060->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10561060->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10561060);
   
   
   TF1 *ffit[2]1061 = new TF1("ffit[2]","0.0230941*[0]*sin(x*3.14/180.0) / (0.9259257+ -0.2966352*cos(x*3.14/180.0) + -0.0195570*cos(2*x*3.14/180.0) + 0.0003646*([0]*[0] + [1]*[1]) + -0.0070195*[1] + -0.0238654*[1]*cos(x*3.14/180.0))",0,370.3084, TF1::EAddToList::kNo);
   ffit[2]1061->SetFillColor(19);
   ffit[2]1061->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[2]1061->SetLineColor(ci);
   ffit[2]1061->SetLineWidth(2);
   ffit[2]1061->SetChisquare(3.849434);
   ffit[2]1061->SetNDF(7);
   ffit[2]1061->GetXaxis()->SetLabelFont(22);
   ffit[2]1061->GetXaxis()->SetLabelSize(0.05);
   ffit[2]1061->GetXaxis()->SetTitleSize(0.9);
   ffit[2]1061->GetXaxis()->SetTitleFont(22);
   ffit[2]1061->GetYaxis()->SetLabelFont(22);
   ffit[2]1061->GetYaxis()->SetLabelSize(0.05);
   ffit[2]1061->GetYaxis()->SetTitleSize(0.06);
   ffit[2]1061->GetYaxis()->SetTitleOffset(0);
   ffit[2]1061->GetYaxis()->SetTitleFont(22);
   ffit[2]1061->SetParameter(0,13.14901);
   ffit[2]1061->SetParError(0,5.586008);
   ffit[2]1061->SetParLimits(0,0,0);
   ffit[2]1061->SetParameter(1,-2.787041);
   ffit[2]1061->SetParError(1,15.53578);
   ffit[2]1061->SetParLimits(1,0,0);
   ffit[2]1061->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[2]1061);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 3.849 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 13.15 #pm 5.586 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = -2.787 #pm 15.54 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx7[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy7[13] = {
   0,
   0.02345626,
   0.02345626,
   0.01851792,
   0.0173685,
   0.01702304,
   0.01265815,
   0.01528429,
   0.02602474,
   0.02071202,
   0.01635832,
   0.01635832,
   0};
   graph = new TGraph(13,Graph0_fx7,Graph0_fy7);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph07 = new TH1F("Graph_Graph07","Graph",100,0,396);
   Graph_Graph07->SetMinimum(0);
   Graph_Graph07->SetMaximum(0.02862721);
   Graph_Graph07->SetDirectory(0);
   Graph_Graph07->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph07->SetLineColor(ci);
   Graph_Graph07->GetXaxis()->SetLabelFont(22);
   Graph_Graph07->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph07->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph07->GetXaxis()->SetTitleFont(22);
   Graph_Graph07->GetYaxis()->SetLabelFont(22);
   Graph_Graph07->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph07->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph07->GetYaxis()->SetTitleOffset(0);
   Graph_Graph07->GetYaxis()->SetTitleFont(22);
   Graph_Graph07->GetZaxis()->SetLabelFont(22);
   Graph_Graph07->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph07->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph07->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph07);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1063[9] = {
   21.45518,
   57.23776,
   96.22869,
   139.5664,
   178.2038,
   221.4048,
   263.3962,
   303.3615,
   338.5945};
   Double_t Graph1_fy1063[9] = {
   0.1803878,
   0.3501509,
   0.2701766,
   0.3053819,
   0.1028176,
   -0.2118587,
   -0.3060192,
   -0.1384293,
   -0.1633788};
   Double_t Graph1_fex1063[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1063[9] = {
   0.07704611,
   0.08031517,
   0.1217762,
   0.2384291,
   0.2667898,
   0.2142405,
   0.1280201,
   0.09219356,
   0.07744006};
   gre = new TGraphErrors(9,Graph1_fx1063,Graph1_fy1063,Graph1_fex1063,Graph1_fey1063);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph11063 = new TH1F("Graph_Graph11063","Graph",100,0,370.3084);
   Graph_Graph11063->SetMinimum(-0.5318244);
   Graph_Graph11063->SetMaximum(0.641596);
   Graph_Graph11063->SetDirectory(0);
   Graph_Graph11063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11063->SetLineColor(ci);
   Graph_Graph11063->GetXaxis()->SetLabelFont(22);
   Graph_Graph11063->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11063->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11063->GetXaxis()->SetTitleFont(22);
   Graph_Graph11063->GetYaxis()->SetLabelFont(22);
   Graph_Graph11063->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11063->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11063->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11063->GetYaxis()->SetTitleFont(22);
   Graph_Graph11063->GetZaxis()->SetLabelFont(22);
   Graph_Graph11063->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11063->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11063->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11063);
   
   gre->Draw("p");
   
   TF1 *ffit[2]1062 = new TF1("ffit[2]","0.0230941*[0]*sin(x*3.14/180.0) / (0.9259257+ -0.2966352*cos(x*3.14/180.0) + -0.0195570*cos(2*x*3.14/180.0) + 0.0003646*([0]*[0] + [1]*[1]) + -0.0070195*[1] + -0.0238654*[1]*cos(x*3.14/180.0))",0,360, TF1::EAddToList::kDefault);
   ffit[2]1062->SetFillColor(19);
   ffit[2]1062->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[2]1062->SetLineColor(ci);
   ffit[2]1062->SetLineWidth(2);
   ffit[2]1062->SetChisquare(3.849434);
   ffit[2]1062->SetNDF(7);
   ffit[2]1062->GetXaxis()->SetLabelFont(22);
   ffit[2]1062->GetXaxis()->SetLabelSize(0.05);
   ffit[2]1062->GetXaxis()->SetTitleSize(0.9);
   ffit[2]1062->GetXaxis()->SetTitleFont(22);
   ffit[2]1062->GetYaxis()->SetLabelFont(22);
   ffit[2]1062->GetYaxis()->SetLabelSize(0.05);
   ffit[2]1062->GetYaxis()->SetTitleSize(0.06);
   ffit[2]1062->GetYaxis()->SetTitleOffset(0);
   ffit[2]1062->GetYaxis()->SetTitleFont(22);
   ffit[2]1062->SetParameter(0,13.14901);
   ffit[2]1062->SetParError(0,5.586008);
   ffit[2]1062->SetParLimits(0,0,0);
   ffit[2]1062->SetParameter(1,-2.787041);
   ffit[2]1062->SetParError(1,15.53578);
   ffit[2]1062->SetParLimits(1,0,0);
   ffit[2]1062->Draw("same");
      tex = new TLatex(15,-0.57,"Q^{2}= 1.902 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c12_3->Modified();
   c12->cd();
  
// ------------>Primitives in pad: c12_6
   TPad *c12_6 = new TPad("c12_6", "_6",0.6725865,0.3851665,0.9672131,0.6890323);
   c12_6->Draw();
   c12_6->cd();
   c12_6->Range(-5,-0.65,375,0.65);
   c12_6->SetFillColor(0);
   c12_6->SetBorderMode(0);
   c12_6->SetBorderSize(2);
   c12_6->SetLeftMargin(0);
   c12_6->SetRightMargin(0);
   c12_6->SetTopMargin(0);
   c12_6->SetBottomMargin(0);
   c12_6->SetFrameBorderMode(0);
   c12_6->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1064[9] = {
   20.13681,
   55.99932,
   96.45656,
   137.7519,
   179.8777,
   224.7934,
   262.839,
   304.5033,
   339.8168};
   Double_t Graph_fy1064[9] = {
   0.2626366,
   0.428144,
   0.4925123,
   -0.2736191,
   0.8470343,
   -0.05130243,
   -0.3416892,
   -0.135909,
   -0.1658634};
   Double_t Graph_fex1064[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1064[9] = {
   0.07128914,
   0.085848,
   0.1364105,
   0.2799947,
   0.2488994,
   0.2798151,
   0.1657246,
   0.09914606,
   0.07498346};
   gre = new TGraphErrors(9,Graph_fx1064,Graph_fy1064,Graph_fex1064,Graph_fey1064);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1064 = new TH1F("Graph_Graph1064","Graph",100,0,371.7848);
   Graph_Graph1064->SetMinimum(-0.7185685);
   Graph_Graph1064->SetMaximum(1.260888);
   Graph_Graph1064->SetDirectory(0);
   Graph_Graph1064->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1064->SetLineColor(ci);
   Graph_Graph1064->GetXaxis()->SetLabelFont(22);
   Graph_Graph1064->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1064->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1064->GetXaxis()->SetTitleFont(22);
   Graph_Graph1064->GetYaxis()->SetLabelFont(22);
   Graph_Graph1064->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1064->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1064->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1064->GetYaxis()->SetTitleFont(22);
   Graph_Graph1064->GetZaxis()->SetLabelFont(22);
   Graph_Graph1064->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1064->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1064->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1064);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1065[9] = {
   20.13681,
   55.99932,
   96.45656,
   137.7519,
   179.8777,
   224.7934,
   262.839,
   304.5033,
   339.8168};
   Double_t Graph_fy1065[9] = {
   0.2626366,
   0.428144,
   0.4925123,
   -0.2736191,
   0.8470343,
   -0.05130243,
   -0.3416892,
   -0.135909,
   -0.1658634};
   Double_t Graph_fex1065[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1065[9] = {
   0.07551056,
   0.08872467,
   0.139086,
   0.2804916,
   0.2497374,
   0.2811212,
   0.1694496,
   0.1025757,
   0.07701008};
   gre = new TGraphErrors(9,Graph_fx1065,Graph_fy1065,Graph_fex1065,Graph_fey1065);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1065 = new TH1F("Graph_Graph1065","Graph",100,0,371.7848);
   Graph_Graph1065->SetMinimum(-0.7191989);
   Graph_Graph1065->SetMaximum(1.26186);
   Graph_Graph1065->SetDirectory(0);
   Graph_Graph1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1065->SetLineColor(ci);
   Graph_Graph1065->GetXaxis()->SetLabelFont(22);
   Graph_Graph1065->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1065->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1065->GetXaxis()->SetTitleFont(22);
   Graph_Graph1065->GetYaxis()->SetLabelFont(22);
   Graph_Graph1065->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1065->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1065->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1065->GetYaxis()->SetTitleFont(22);
   Graph_Graph1065->GetZaxis()->SetLabelFont(22);
   Graph_Graph1065->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1065->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1065->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1065);
   
   
   TF1 *ffit[2]1066 = new TF1("ffit[2]","0.0258831*[0]*sin(x*3.14/180.0) / (0.9920440+ -0.3425495*cos(x*3.14/180.0) + -0.0234491*cos(2*x*3.14/180.0) + 0.0004566*([0]*[0] + [1]*[1]) + -0.0074766*[1] + -0.0271476*[1]*cos(x*3.14/180.0))",0,371.7848, TF1::EAddToList::kNo);
   ffit[2]1066->SetFillColor(19);
   ffit[2]1066->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[2]1066->SetLineColor(ci);
   ffit[2]1066->SetLineWidth(2);
   ffit[2]1066->SetChisquare(22.20036);
   ffit[2]1066->SetNDF(7);
   ffit[2]1066->GetXaxis()->SetLabelFont(22);
   ffit[2]1066->GetXaxis()->SetLabelSize(0.05);
   ffit[2]1066->GetXaxis()->SetTitleSize(0.9);
   ffit[2]1066->GetXaxis()->SetTitleFont(22);
   ffit[2]1066->GetYaxis()->SetLabelFont(22);
   ffit[2]1066->GetYaxis()->SetLabelSize(0.05);
   ffit[2]1066->GetYaxis()->SetTitleSize(0.06);
   ffit[2]1066->GetYaxis()->SetTitleOffset(0);
   ffit[2]1066->GetYaxis()->SetTitleFont(22);
   ffit[2]1066->SetParameter(0,13.26345);
   ffit[2]1066->SetParError(0,4.562217);
   ffit[2]1066->SetParLimits(0,0,0);
   ffit[2]1066->SetParameter(1,3.701425);
   ffit[2]1066->SetParError(1,9.27232);
   ffit[2]1066->SetParLimits(1,0,0);
   ffit[2]1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[2]1066);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf =  22.2 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 13.26 #pm 4.562 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = 3.701 #pm 9.272 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.14);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.14);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1068[9] = {
   20.13681,
   55.99932,
   96.45656,
   137.7519,
   179.8777,
   224.7934,
   262.839,
   304.5033,
   339.8168};
   Double_t Graph_fy1068[9] = {
   0.2626366,
   0.428144,
   0.4925123,
   -0.2736191,
   0.8470343,
   -0.05130243,
   -0.3416892,
   -0.135909,
   -0.1658634};
   Double_t Graph_fex1068[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1068[9] = {
   0.07128914,
   0.085848,
   0.1364105,
   0.2799947,
   0.2488994,
   0.2798151,
   0.1657246,
   0.09914606,
   0.07498346};
   gre = new TGraphErrors(9,Graph_fx1068,Graph_fy1068,Graph_fex1068,Graph_fey1068);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10641068 = new TH1F("Graph_Graph_Graph10641068","Graph",100,0,371.7848);
   Graph_Graph_Graph10641068->SetMinimum(-0.7185685);
   Graph_Graph_Graph10641068->SetMaximum(1.260888);
   Graph_Graph_Graph10641068->SetDirectory(0);
   Graph_Graph_Graph10641068->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10641068->SetLineColor(ci);
   Graph_Graph_Graph10641068->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10641068->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10641068->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10641068->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10641068->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10641068->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10641068->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10641068->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10641068->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10641068->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10641068->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10641068->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10641068->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10641068);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1069[9] = {
   20.13681,
   55.99932,
   96.45656,
   137.7519,
   179.8777,
   224.7934,
   262.839,
   304.5033,
   339.8168};
   Double_t Graph_fy1069[9] = {
   0.2626366,
   0.428144,
   0.4925123,
   -0.2736191,
   0.8470343,
   -0.05130243,
   -0.3416892,
   -0.135909,
   -0.1658634};
   Double_t Graph_fex1069[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1069[9] = {
   0.07551056,
   0.08872467,
   0.139086,
   0.2804916,
   0.2497374,
   0.2811212,
   0.1694496,
   0.1025757,
   0.07701008};
   gre = new TGraphErrors(9,Graph_fx1069,Graph_fy1069,Graph_fex1069,Graph_fey1069);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph10651069 = new TH1F("Graph_Graph_Graph10651069","Graph",100,0,371.7848);
   Graph_Graph_Graph10651069->SetMinimum(-0.7191989);
   Graph_Graph_Graph10651069->SetMaximum(1.26186);
   Graph_Graph_Graph10651069->SetDirectory(0);
   Graph_Graph_Graph10651069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10651069->SetLineColor(ci);
   Graph_Graph_Graph10651069->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10651069->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10651069->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10651069->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10651069->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10651069->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10651069->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10651069->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10651069->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10651069->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10651069->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10651069->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10651069->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10651069);
   
   
   TF1 *ffit[2]1070 = new TF1("ffit[2]","0.0258831*[0]*sin(x*3.14/180.0) / (0.9920440+ -0.3425495*cos(x*3.14/180.0) + -0.0234491*cos(2*x*3.14/180.0) + 0.0004566*([0]*[0] + [1]*[1]) + -0.0074766*[1] + -0.0271476*[1]*cos(x*3.14/180.0))",0,371.7848, TF1::EAddToList::kNo);
   ffit[2]1070->SetFillColor(19);
   ffit[2]1070->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[2]1070->SetLineColor(ci);
   ffit[2]1070->SetLineWidth(2);
   ffit[2]1070->SetChisquare(22.20036);
   ffit[2]1070->SetNDF(7);
   ffit[2]1070->GetXaxis()->SetLabelFont(22);
   ffit[2]1070->GetXaxis()->SetLabelSize(0.05);
   ffit[2]1070->GetXaxis()->SetTitleSize(0.9);
   ffit[2]1070->GetXaxis()->SetTitleFont(22);
   ffit[2]1070->GetYaxis()->SetLabelFont(22);
   ffit[2]1070->GetYaxis()->SetLabelSize(0.05);
   ffit[2]1070->GetYaxis()->SetTitleSize(0.06);
   ffit[2]1070->GetYaxis()->SetTitleOffset(0);
   ffit[2]1070->GetYaxis()->SetTitleFont(22);
   ffit[2]1070->SetParameter(0,13.26345);
   ffit[2]1070->SetParError(0,4.562217);
   ffit[2]1070->SetParLimits(0,0,0);
   ffit[2]1070->SetParameter(1,3.701425);
   ffit[2]1070->SetParError(1,9.27232);
   ffit[2]1070->SetParLimits(1,0,0);
   ffit[2]1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[2]1070);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf =  22.2 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 13.26 #pm 4.562 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = 3.701 #pm 9.272 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.14);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.14);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx8[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy8[13] = {
   0,
   0.02489385,
   0.02489385,
   0.02240954,
   0.02714954,
   0.01668931,
   0.02044162,
   0.02706752,
   0.03533464,
   0.02630272,
   0.01755089,
   0.01755089,
   0};
   graph = new TGraph(13,Graph0_fx8,Graph0_fy8);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph08 = new TH1F("Graph_Graph08","Graph",100,0,396);
   Graph_Graph08->SetMinimum(0);
   Graph_Graph08->SetMaximum(0.0388681);
   Graph_Graph08->SetDirectory(0);
   Graph_Graph08->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph08->SetLineColor(ci);
   Graph_Graph08->GetXaxis()->SetLabelFont(22);
   Graph_Graph08->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph08->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph08->GetXaxis()->SetTitleFont(22);
   Graph_Graph08->GetYaxis()->SetLabelFont(22);
   Graph_Graph08->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph08->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph08->GetYaxis()->SetTitleOffset(0);
   Graph_Graph08->GetYaxis()->SetTitleFont(22);
   Graph_Graph08->GetZaxis()->SetLabelFont(22);
   Graph_Graph08->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph08->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph08->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph08);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1072[9] = {
   20.13681,
   55.99932,
   96.45656,
   137.7519,
   179.8777,
   224.7934,
   262.839,
   304.5033,
   339.8168};
   Double_t Graph1_fy1072[9] = {
   0.2626366,
   0.428144,
   0.4925123,
   -0.2736191,
   0.8470343,
   -0.05130243,
   -0.3416892,
   -0.135909,
   -0.1658634};
   Double_t Graph1_fex1072[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1072[9] = {
   0.07128914,
   0.085848,
   0.1364105,
   0.2799947,
   0.2488994,
   0.2798151,
   0.1657246,
   0.09914606,
   0.07498346};
   gre = new TGraphErrors(9,Graph1_fx1072,Graph1_fy1072,Graph1_fex1072,Graph1_fey1072);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph11072 = new TH1F("Graph_Graph11072","Graph",100,0,371.7848);
   Graph_Graph11072->SetMinimum(-0.7185685);
   Graph_Graph11072->SetMaximum(1.260888);
   Graph_Graph11072->SetDirectory(0);
   Graph_Graph11072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11072->SetLineColor(ci);
   Graph_Graph11072->GetXaxis()->SetLabelFont(22);
   Graph_Graph11072->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11072->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11072->GetXaxis()->SetTitleFont(22);
   Graph_Graph11072->GetYaxis()->SetLabelFont(22);
   Graph_Graph11072->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11072->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11072->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11072->GetYaxis()->SetTitleFont(22);
   Graph_Graph11072->GetZaxis()->SetLabelFont(22);
   Graph_Graph11072->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11072->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11072->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11072);
   
   gre->Draw("p");
   
   TF1 *ffit[2]1071 = new TF1("ffit[2]","0.0258831*[0]*sin(x*3.14/180.0) / (0.9920440+ -0.3425495*cos(x*3.14/180.0) + -0.0234491*cos(2*x*3.14/180.0) + 0.0004566*([0]*[0] + [1]*[1]) + -0.0074766*[1] + -0.0271476*[1]*cos(x*3.14/180.0))",0,360, TF1::EAddToList::kDefault);
   ffit[2]1071->SetFillColor(19);
   ffit[2]1071->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[2]1071->SetLineColor(ci);
   ffit[2]1071->SetLineWidth(2);
   ffit[2]1071->SetChisquare(22.20036);
   ffit[2]1071->SetNDF(7);
   ffit[2]1071->GetXaxis()->SetLabelFont(22);
   ffit[2]1071->GetXaxis()->SetLabelSize(0.05);
   ffit[2]1071->GetXaxis()->SetTitleSize(0.9);
   ffit[2]1071->GetXaxis()->SetTitleFont(22);
   ffit[2]1071->GetYaxis()->SetLabelFont(22);
   ffit[2]1071->GetYaxis()->SetLabelSize(0.05);
   ffit[2]1071->GetYaxis()->SetTitleSize(0.06);
   ffit[2]1071->GetYaxis()->SetTitleOffset(0);
   ffit[2]1071->GetYaxis()->SetTitleFont(22);
   ffit[2]1071->SetParameter(0,13.26345);
   ffit[2]1071->SetParError(0,4.562217);
   ffit[2]1071->SetParLimits(0,0,0);
   ffit[2]1071->SetParameter(1,3.701425);
   ffit[2]1071->SetParError(1,9.27232);
   ffit[2]1071->SetParLimits(1,0,0);
   ffit[2]1071->Draw("same");
      tex = new TLatex(15,-0.57,"x_{B}= 0.225");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c12_6->Modified();
   c12->cd();
  
// ------------>Primitives in pad: c12_9
   TPad *c12_9 = new TPad("c12_9", "_9",0.6725865,0,0.9672131,0.3851665);
   c12_9->Draw();
   c12_9->cd();
   c12_9->Range(-5,-1.069355,375,0.65);
   c12_9->SetFillColor(0);
   c12_9->SetBorderMode(0);
   c12_9->SetBorderSize(2);
   c12_9->SetLeftMargin(0);
   c12_9->SetRightMargin(0);
   c12_9->SetTopMargin(0);
   c12_9->SetBottomMargin(0.2439024);
   c12_9->SetFrameBorderMode(0);
   c12_9->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1073[9] = {
   22.32266,
   60.71096,
   96.88029,
   139.9055,
   178.5548,
   217.5716,
   260.9501,
   303.4526,
   336.8911};
   Double_t Graph_fy1073[9] = {
   0.02807933,
   0.3582513,
   0.2559149,
   0.2207925,
   0.5138574,
   -0.2473028,
   -0.2919877,
   -0.2488257,
   -0.2825422};
   Double_t Graph_fex1073[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1073[9] = {
   0.08838483,
   0.09097911,
   0.1230145,
   0.1920214,
   0.1798115,
   0.1653922,
   0.1253733,
   0.08475554,
   0.08632401};
   gre = new TGraphErrors(9,Graph_fx1073,Graph_fy1073,Graph_fex1073,Graph_fey1073);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1073 = new TH1F("Graph_Graph1073","Graph",100,0,368.3479);
   Graph_Graph1073->SetMinimum(-0.528464);
   Graph_Graph1073->SetMaximum(0.8047719);
   Graph_Graph1073->SetDirectory(0);
   Graph_Graph1073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1073->SetLineColor(ci);
   Graph_Graph1073->GetXaxis()->SetLabelFont(22);
   Graph_Graph1073->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1073->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1073->GetXaxis()->SetTitleFont(22);
   Graph_Graph1073->GetYaxis()->SetLabelFont(22);
   Graph_Graph1073->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1073->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1073->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1073->GetYaxis()->SetTitleFont(22);
   Graph_Graph1073->GetZaxis()->SetLabelFont(22);
   Graph_Graph1073->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1073->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1073->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1073);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1074[9] = {
   22.32266,
   60.71096,
   96.88029,
   139.9055,
   178.5548,
   217.5716,
   260.9501,
   303.4526,
   336.8911};
   Double_t Graph_fy1074[9] = {
   0.02807933,
   0.3582513,
   0.2559149,
   0.2207925,
   0.5138574,
   -0.2473028,
   -0.2919877,
   -0.2488257,
   -0.2825422};
   Double_t Graph_fex1074[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1074[9] = {
   0.09093945,
   0.09325026,
   0.1269426,
   0.1930999,
   0.1832701,
   0.1664787,
   0.1295829,
   0.08926991,
   0.09019867};
   gre = new TGraphErrors(9,Graph_fx1074,Graph_fy1074,Graph_fex1074,Graph_fey1074);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1074 = new TH1F("Graph_Graph1074","Graph",100,0,368.3479);
   Graph_Graph1074->SetMinimum(-0.5334404);
   Graph_Graph1074->SetMaximum(0.8089973);
   Graph_Graph1074->SetDirectory(0);
   Graph_Graph1074->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1074->SetLineColor(ci);
   Graph_Graph1074->GetXaxis()->SetLabelFont(22);
   Graph_Graph1074->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1074->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1074->GetXaxis()->SetTitleFont(22);
   Graph_Graph1074->GetYaxis()->SetLabelFont(22);
   Graph_Graph1074->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1074->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1074->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1074->GetYaxis()->SetTitleFont(22);
   Graph_Graph1074->GetZaxis()->SetLabelFont(22);
   Graph_Graph1074->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1074->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1074->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1074);
   
   
   TF1 *ffit[2]1075 = new TF1("ffit[2]","0.0303439*[0]*sin(x*3.14/180.0) / (1.5137579+ -0.3499296*cos(x*3.14/180.0) + -0.0298767*cos(2*x*3.14/180.0) + 0.0004632*([0]*[0] + [1]*[1]) + -0.0160471*[1] + -0.0340689*[1]*cos(x*3.14/180.0))",0,368.3479, TF1::EAddToList::kNo);
   ffit[2]1075->SetFillColor(19);
   ffit[2]1075->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[2]1075->SetLineColor(ci);
   ffit[2]1075->SetLineWidth(2);
   ffit[2]1075->SetChisquare(12.43595);
   ffit[2]1075->SetNDF(7);
   ffit[2]1075->GetXaxis()->SetLabelFont(22);
   ffit[2]1075->GetXaxis()->SetLabelSize(0.05);
   ffit[2]1075->GetXaxis()->SetTitleSize(0.9);
   ffit[2]1075->GetXaxis()->SetTitleFont(22);
   ffit[2]1075->GetYaxis()->SetLabelFont(22);
   ffit[2]1075->GetYaxis()->SetLabelSize(0.05);
   ffit[2]1075->GetYaxis()->SetTitleSize(0.06);
   ffit[2]1075->GetYaxis()->SetTitleOffset(0);
   ffit[2]1075->GetYaxis()->SetTitleFont(22);
   ffit[2]1075->SetParameter(0,18.21162);
   ffit[2]1075->SetParError(0,7.540761);
   ffit[2]1075->SetParLimits(0,0,0);
   ffit[2]1075->SetParameter(1,-2.289853);
   ffit[2]1075->SetParError(1,16.07754);
   ffit[2]1075->SetParLimits(1,0,0);
   ffit[2]1075->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[2]1075);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 12.44 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 18.21 #pm 7.541 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = -2.29 #pm 16.08 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.145);
   multigraph->GetXaxis()->SetTitleOffset(0.8);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1077[9] = {
   22.32266,
   60.71096,
   96.88029,
   139.9055,
   178.5548,
   217.5716,
   260.9501,
   303.4526,
   336.8911};
   Double_t Graph_fy1077[9] = {
   0.02807933,
   0.3582513,
   0.2559149,
   0.2207925,
   0.5138574,
   -0.2473028,
   -0.2919877,
   -0.2488257,
   -0.2825422};
   Double_t Graph_fex1077[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1077[9] = {
   0.08838483,
   0.09097911,
   0.1230145,
   0.1920214,
   0.1798115,
   0.1653922,
   0.1253733,
   0.08475554,
   0.08632401};
   gre = new TGraphErrors(9,Graph_fx1077,Graph_fy1077,Graph_fex1077,Graph_fey1077);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10731077 = new TH1F("Graph_Graph_Graph10731077","Graph",100,0,368.3479);
   Graph_Graph_Graph10731077->SetMinimum(-0.528464);
   Graph_Graph_Graph10731077->SetMaximum(0.8047719);
   Graph_Graph_Graph10731077->SetDirectory(0);
   Graph_Graph_Graph10731077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10731077->SetLineColor(ci);
   Graph_Graph_Graph10731077->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10731077->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10731077->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10731077->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10731077->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10731077->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10731077->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10731077->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10731077->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10731077->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10731077->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10731077->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10731077->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10731077);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1078[9] = {
   22.32266,
   60.71096,
   96.88029,
   139.9055,
   178.5548,
   217.5716,
   260.9501,
   303.4526,
   336.8911};
   Double_t Graph_fy1078[9] = {
   0.02807933,
   0.3582513,
   0.2559149,
   0.2207925,
   0.5138574,
   -0.2473028,
   -0.2919877,
   -0.2488257,
   -0.2825422};
   Double_t Graph_fex1078[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1078[9] = {
   0.09093945,
   0.09325026,
   0.1269426,
   0.1930999,
   0.1832701,
   0.1664787,
   0.1295829,
   0.08926991,
   0.09019867};
   gre = new TGraphErrors(9,Graph_fx1078,Graph_fy1078,Graph_fex1078,Graph_fey1078);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph10741078 = new TH1F("Graph_Graph_Graph10741078","Graph",100,0,368.3479);
   Graph_Graph_Graph10741078->SetMinimum(-0.5334404);
   Graph_Graph_Graph10741078->SetMaximum(0.8089973);
   Graph_Graph_Graph10741078->SetDirectory(0);
   Graph_Graph_Graph10741078->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10741078->SetLineColor(ci);
   Graph_Graph_Graph10741078->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10741078->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10741078->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10741078->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10741078->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10741078->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10741078->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10741078->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph10741078->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10741078->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10741078->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10741078->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10741078->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10741078);
   
   
   TF1 *ffit[2]1079 = new TF1("ffit[2]","0.0303439*[0]*sin(x*3.14/180.0) / (1.5137579+ -0.3499296*cos(x*3.14/180.0) + -0.0298767*cos(2*x*3.14/180.0) + 0.0004632*([0]*[0] + [1]*[1]) + -0.0160471*[1] + -0.0340689*[1]*cos(x*3.14/180.0))",0,368.3479, TF1::EAddToList::kNo);
   ffit[2]1079->SetFillColor(19);
   ffit[2]1079->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[2]1079->SetLineColor(ci);
   ffit[2]1079->SetLineWidth(2);
   ffit[2]1079->SetChisquare(12.43595);
   ffit[2]1079->SetNDF(7);
   ffit[2]1079->GetXaxis()->SetLabelFont(22);
   ffit[2]1079->GetXaxis()->SetLabelSize(0.05);
   ffit[2]1079->GetXaxis()->SetTitleSize(0.9);
   ffit[2]1079->GetXaxis()->SetTitleFont(22);
   ffit[2]1079->GetYaxis()->SetLabelFont(22);
   ffit[2]1079->GetYaxis()->SetLabelSize(0.05);
   ffit[2]1079->GetYaxis()->SetTitleSize(0.06);
   ffit[2]1079->GetYaxis()->SetTitleOffset(0);
   ffit[2]1079->GetYaxis()->SetTitleFont(22);
   ffit[2]1079->SetParameter(0,18.21162);
   ffit[2]1079->SetParError(0,7.540761);
   ffit[2]1079->SetParLimits(0,0,0);
   ffit[2]1079->SetParameter(1,-2.289853);
   ffit[2]1079->SetParError(1,16.07754);
   ffit[2]1079->SetParLimits(1,0,0);
   ffit[2]1079->SetParent(gre);
   gre->GetListOfFunctions()->Add(ffit[2]1079);
   
   ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 12.44 / 7");
   ptstats_LaTex = ptstats->AddText("Im(H_{A}) = 18.21 #pm 7.541 ");
   ptstats_LaTex = ptstats->AddText("Re(H_{A}) = -2.29 #pm 16.08 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.145);
   multigraph->GetXaxis()->SetTitleOffset(0.8);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx9[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy9[13] = {
   0,
   0.02140338,
   0.02140338,
   0.02045513,
   0.0313346,
   0.02038013,
   0.0354366,
   0.01898904,
   0.0327608,
   0.02802882,
   0.02615273,
   0.02615273,
   0};
   graph = new TGraph(13,Graph0_fx9,Graph0_fy9);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetFillStyle(1000);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph09 = new TH1F("Graph_Graph09","Graph",100,0,396);
   Graph_Graph09->SetMinimum(0);
   Graph_Graph09->SetMaximum(0.03898026);
   Graph_Graph09->SetDirectory(0);
   Graph_Graph09->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph09->SetLineColor(ci);
   Graph_Graph09->GetXaxis()->SetLabelFont(22);
   Graph_Graph09->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph09->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph09->GetXaxis()->SetTitleFont(22);
   Graph_Graph09->GetYaxis()->SetLabelFont(22);
   Graph_Graph09->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph09->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph09->GetYaxis()->SetTitleOffset(0);
   Graph_Graph09->GetYaxis()->SetTitleFont(22);
   Graph_Graph09->GetZaxis()->SetLabelFont(22);
   Graph_Graph09->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph09->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph09->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph09);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1081[9] = {
   22.32266,
   60.71096,
   96.88029,
   139.9055,
   178.5548,
   217.5716,
   260.9501,
   303.4526,
   336.8911};
   Double_t Graph1_fy1081[9] = {
   0.02807933,
   0.3582513,
   0.2559149,
   0.2207925,
   0.5138574,
   -0.2473028,
   -0.2919877,
   -0.2488257,
   -0.2825422};
   Double_t Graph1_fex1081[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1081[9] = {
   0.08838483,
   0.09097911,
   0.1230145,
   0.1920214,
   0.1798115,
   0.1653922,
   0.1253733,
   0.08475554,
   0.08632401};
   gre = new TGraphErrors(9,Graph1_fx1081,Graph1_fy1081,Graph1_fex1081,Graph1_fey1081);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph11081 = new TH1F("Graph_Graph11081","Graph",100,0,368.3479);
   Graph_Graph11081->SetMinimum(-0.528464);
   Graph_Graph11081->SetMaximum(0.8047719);
   Graph_Graph11081->SetDirectory(0);
   Graph_Graph11081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11081->SetLineColor(ci);
   Graph_Graph11081->GetXaxis()->SetLabelFont(22);
   Graph_Graph11081->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11081->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11081->GetXaxis()->SetTitleFont(22);
   Graph_Graph11081->GetYaxis()->SetLabelFont(22);
   Graph_Graph11081->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11081->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11081->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11081->GetYaxis()->SetTitleFont(22);
   Graph_Graph11081->GetZaxis()->SetLabelFont(22);
   Graph_Graph11081->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11081->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11081->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11081);
   
   gre->Draw("p");
   
   TF1 *ffit[2]1080 = new TF1("ffit[2]","0.0303439*[0]*sin(x*3.14/180.0) / (1.5137579+ -0.3499296*cos(x*3.14/180.0) + -0.0298767*cos(2*x*3.14/180.0) + 0.0004632*([0]*[0] + [1]*[1]) + -0.0160471*[1] + -0.0340689*[1]*cos(x*3.14/180.0))",0,360, TF1::EAddToList::kDefault);
   ffit[2]1080->SetFillColor(19);
   ffit[2]1080->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ffit[2]1080->SetLineColor(ci);
   ffit[2]1080->SetLineWidth(2);
   ffit[2]1080->SetChisquare(12.43595);
   ffit[2]1080->SetNDF(7);
   ffit[2]1080->GetXaxis()->SetLabelFont(22);
   ffit[2]1080->GetXaxis()->SetLabelSize(0.05);
   ffit[2]1080->GetXaxis()->SetTitleSize(0.9);
   ffit[2]1080->GetXaxis()->SetTitleFont(22);
   ffit[2]1080->GetYaxis()->SetLabelFont(22);
   ffit[2]1080->GetYaxis()->SetLabelSize(0.05);
   ffit[2]1080->GetYaxis()->SetTitleSize(0.06);
   ffit[2]1080->GetYaxis()->SetTitleOffset(0);
   ffit[2]1080->GetYaxis()->SetTitleFont(22);
   ffit[2]1080->SetParameter(0,18.21162);
   ffit[2]1080->SetParError(0,7.540761);
   ffit[2]1080->SetParLimits(0,0,0);
   ffit[2]1080->SetParameter(1,-2.289853);
   ffit[2]1080->SetParError(1,16.07754);
   ffit[2]1080->SetParLimits(1,0,0);
   ffit[2]1080->Draw("same");
      tex = new TLatex(15,-0.57,"-t= 0.127 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c12_9->Modified();
   c12->cd();
   c12->Modified();
   c12->cd();
   c12->SetSelected(c12);
}
