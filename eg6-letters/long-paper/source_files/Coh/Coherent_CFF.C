void Coherent_CFF()
{
//=========Macro generated from canvas: cc/
//=========  (Wed Jan  8 16:10:15 2020) by ROOT version 6.14/04
   TCanvas *cc = new TCanvas("cc", "",63,81,1050,600);
   gStyle->SetOptFit(1);
   cc->Range(0,0,1,1);
   cc->SetFillColor(0);
   cc->SetBorderMode(0);
   cc->SetBorderSize(2);
   cc->SetLeftMargin(0.08333334);
   cc->SetRightMargin(0.03278689);
   cc->SetTopMargin(0.01113525);
   cc->SetBottomMargin(0.1219512);
   cc->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: cc_1
   TPad *cc_1 = new TPad("cc_1", "_1",0,0.555408,0.3779599,0.9888647);
   cc_1->Draw();
   cc_1->cd();
   cc_1->Range(0.2666667,-3,2.6,68);
   cc_1->SetFillColor(0);
   cc_1->SetBorderMode(0);
   cc_1->SetBorderSize(2);
   cc_1->SetLeftMargin(0.25);
   cc_1->SetRightMargin(0);
   cc_1->SetTopMargin(0);
   cc_1->SetBottomMargin(0);
   cc_1->SetFrameBorderMode(0);
   cc_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1082[3] = {
   1.143,
   1.423,
   1.902};
   Double_t Graph_fy1082[3] = {
   30.21691,
   25.13263,
   13.14901};
   Double_t Graph_fex1082[3] = {
   0,
   0,
   0};
   Double_t Graph_fey1082[3] = {
   11.00217,
   7.474222,
   5.586008};
   TGraphErrors *gre = new TGraphErrors(3,Graph_fx1082,Graph_fy1082,Graph_fex1082,Graph_fey1082);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetNdivisions(605);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("#Jgothic(H_{A})");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.13);
   multigraph->GetYaxis()->SetTitleOffset(0.8);
   multigraph->GetYaxis()->SetTitleFont(42);
   multigraph->GetXaxis()->SetLimits(0.85,2.6);
   multigraph->GetYaxis()->SetRangeUser(-3.0, 68.0);
   
   Double_t Graph0_fx10[21] = {
   1,
   1.08,
   1.16,
   1.24,
   1.32,
   1.4,
   1.48,
   1.56,
   1.64,
   1.72,
   1.8,
   1.88,
   1.96,
   2.04,
   2.12,
   2.2,
   2.28,
   2.36,
   2.44,
   2.52,
   2.6};
   Double_t Graph0_fy10[21] = {
   17.516,
   17.7305,
   17.945,
   18.1596,
   18.3741,
   18.5886,
   18.8031,
   18.4309,
   17.8632,
   17.2955,
   16.7278,
   16.1601,
   15.5923,
   15.3573,
   15.455,
   15.5527,
   15.6504,
   15.7481,
   15.8458,
   15.9375,
   16.011};
   TGraph *graph = new TGraph(21,Graph0_fx10,Graph0_fy10);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   
   graph->Draw("c");
   cc_1->Modified();
   cc->cd();
  
// ------------>Primitives in pad: cc_4
   TPad *cc_4 = new TPad("cc_4", "_4",0,0,0.3779599,0.555408);
   cc_4->Draw();
   cc_4->cd();
   cc_4->Range(0.2666667,-100.3226,2.6,65);
   cc_4->SetFillColor(0);
   cc_4->SetBorderMode(0);
   cc_4->SetBorderSize(2);
   cc_4->SetLeftMargin(0.25);
   cc_4->SetRightMargin(0);
   cc_4->SetTopMargin(0);
   cc_4->SetBottomMargin(0.2439024);
   cc_4->SetFrameBorderMode(0);
   cc_4->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1083[3] = {
   1.143,
   1.423,
   1.902};
   Double_t Graph_fy1083[3] = {
   5.016539,
   9.384101,
   -2.787041};
   Double_t Graph_fex1083[3] = {
   0,
   0,
   0};
   Double_t Graph_fey1083[3] = {
   26.39441,
   12.51274,
   15.53578};
   gre = new TGraphErrors(3,Graph_fx1083,Graph_fy1083,Graph_fex1083,Graph_fey1083);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetNdivisions(605);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.10);
   multigraph->GetXaxis()->SetTitleOffset(.86);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("#Rgothic(H_{A})");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.108);
   multigraph->GetYaxis()->SetTitleOffset(0.88);
   multigraph->GetYaxis()->SetTitleFont(42);
   multigraph->GetXaxis()->SetLimits(0.85,2.6);
   multigraph->GetYaxis()->SetRangeUser(-50, 65);
 

   Double_t Graph0_fx11[21] = {
   1,
   1.08,
   1.16,
   1.24,
   1.32,
   1.4,
   1.48,
   1.56,
   1.64,
   1.72,
   1.8,
   1.88,
   1.96,
   2.04,
   2.12,
   2.2,
   2.28,
   2.36,
   2.44,
   2.52,
   2.6};
   Double_t Graph0_fy11[21] = {
   -5.3312,
   -5.1177,
   -4.9042,
   -4.6907,
   -4.4771,
   -4.2636,
   -4.0501,
   -3.9338,
   -3.85,
   -3.7661,
   -3.6822,
   -3.5984,
   -3.5145,
   -3.4239,
   -3.3266,
   -3.2293,
   -3.132,
   -3.0347,
   -2.9374,
   -2.8453,
   -2.7688};
   graph = new TGraph(21,Graph0_fx11,Graph0_fy11);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->Draw("c");
   cc_4->Modified();
   cc->cd();
  
// ------------>Primitives in pad: cc_2
   TPad *cc_2 = new TPad("cc_2", "_2",0.3779599,0.555408,0.6725865,0.9888647);
   cc_2->Draw();
   cc_2->cd();
   cc_2->Range(0.08,-3,0.32,68);
   cc_2->SetFillColor(0);
   cc_2->SetBorderMode(0);
   cc_2->SetBorderSize(2);
   cc_2->SetLeftMargin(0);
   cc_2->SetRightMargin(0);
   cc_2->SetTopMargin(0);
   cc_2->SetBottomMargin(0);
   cc_2->SetFrameBorderMode(0);
   cc_2->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1084[3] = {
   0.132,
   0.17,
   0.225};
   Double_t Graph_fy1084[3] = {
   39.53958,
   18.67584,
   13.26345};
   Double_t Graph_fex1084[3] = {
   0,
   0,
   0};
   Double_t Graph_fey1084[3] = {
   13.92692,
   6.928986,
   4.562217};
   gre = new TGraphErrors(3,Graph_fx1084,Graph_fy1084,Graph_fex1084,Graph_fey1084);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("x_{B}");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   multigraph->GetXaxis()->SetLimits(0.08,0.32);
   multigraph->GetYaxis()->SetRangeUser(-3.0, 68.0);

   Double_t Graph0_fx12[21] = {
   0.1,
   0.11,
   0.12,
   0.13,
   0.14,
   0.15,
   0.16,
   0.17,
   0.18,
   0.19,
   0.2,
   0.21,
   0.22,
   0.23,
   0.24,
   0.25,
   0.26,
   0.27,
   0.28,
   0.29,
   0.3};
   Double_t Graph0_fy12[21] = {
   36.7372,
   33.9679,
   31.1986,
   28.4292,
   25.6599,
   22.8906,
   21.3965,
   19.9025,
   18.4085,
   16.9145,
   15.4205,
   14.4785,
   13.5366,
   12.5946,
   11.6527,
   10.7108,
   10.0684,
   9.4261,
   8.7838,
   8.1414,
   7.4991};
   graph = new TGraph(21,Graph0_fx12,Graph0_fy12);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->Draw("c");
   
   Double_t Graph1_fx13[5] = {
   0.1,
   0.15,
   0.2,
   0.25,
   0.3};
   Double_t Graph1_fy13[5] = {
   23.4182,
   16.6466,
   13.0322,
   10.6674,
   8.93059};
   graph = new TGraph(5,Graph1_fx13,Graph1_fy13);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->Draw("c");
   cc_2->Modified();
   cc->cd();
  
// ------------>Primitives in pad: cc_5
   TPad *cc_5 = new TPad("cc_5", "_5",0.3779599,0,0.6725865,0.555408);
   cc_5->Draw();
   cc_5->cd();
   cc_5->Range(0.08,-100.3226,0.32,65);
   cc_5->SetFillColor(0);
   cc_5->SetBorderMode(0);
   cc_5->SetBorderSize(2);
   cc_5->SetLeftMargin(0);
   cc_5->SetRightMargin(0);
   cc_5->SetTopMargin(0);
   cc_5->SetBottomMargin(0.2439024);
   cc_5->SetFrameBorderMode(0);
   cc_5->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1085[3] = {
   0.132,
   0.17,
   0.225};
   Double_t Graph_fy1085[3] = {
   -7.353297,
   13.84077,
   3.701425};
   Double_t Graph_fex1085[3] = {
   0,
   0,
   0};
   Double_t Graph_fey1085[3] = {
   30.95166,
   16.8974,
   9.27232};
   gre = new TGraphErrors(3,Graph_fx1085,Graph_fy1085,Graph_fex1085,Graph_fey1085);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("x_{B}");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.11);
   multigraph->GetXaxis()->SetTitleOffset(.86);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   multigraph->GetXaxis()->SetLimits(0.08,0.32);
   multigraph->GetYaxis()->SetRangeUser(-50.0, 65.0);
   
   Double_t graphCFF_fx14[21] = {
   0.1,
   0.11,
   0.12,
   0.13,
   0.14,
   0.15,
   0.16,
   0.17,
   0.18,
   0.19,
   0.2,
   0.21,
   0.22,
   0.23,
   0.24,
   0.25,
   0.26,
   0.27,
   0.28,
   0.29,
   0.3};
   Double_t graphCFF_fy14[21] = {
   -3.5974,
   -3.6032,
   -3.6089,
   -3.6147,
   -3.6204,
   -3.6261,
   -3.7634,
   -3.9007,
   -4.0379,
   -4.1752,
   -4.3125,
   -4.5291,
   -4.7457,
   -4.9623,
   -5.1789,
   -5.3955,
   -5.6701,
   -5.9447,
   -6.2193,
   -6.4938,
   -6.7684};
   graph = new TGraph(21,graphCFF_fx14,graphCFF_fy14);
   graph->SetName("graphCFF");
   graph->SetTitle("graphCFF");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->Draw("c");
   
   Double_t Graph0_fx15[5] = {
   0.1,
   0.15,
   0.2,
   0.25,
   0.3};
   Double_t Graph0_fy15[5] = {
   -3.7714,
   -2.16029,
   -1.0151,
   -0.161793,
   0.484994};
   graph = new TGraph(5,Graph0_fx15,Graph0_fy15);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->Draw("c");
   cc_5->Modified();
   cc->cd();
  
// ------------>Primitives in pad: cc_3
   TPad *cc_3 = new TPad("cc_3", "_3",0.6725865,0.555408,0.9672131,0.9888647);
   cc_3->Draw();
   cc_3->cd();
   cc_3->Range(0.05,-3,0.17,68);
   cc_3->SetFillColor(0);
   cc_3->SetBorderMode(0);
   cc_3->SetBorderSize(2);
   cc_3->SetLeftMargin(0);
   cc_3->SetRightMargin(0);
   cc_3->SetTopMargin(0);
   cc_3->SetBottomMargin(0);
   cc_3->SetFrameBorderMode(0);
   cc_3->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1086[3] = {
   0.08,
   0.094,
   0.127};
   Double_t Graph_fy1086[3] = {
   35.1955,
   15.11531,
   18.21162};
   Double_t Graph_fex1086[3] = {
   0,
   0,
   0};
   Double_t Graph_fey1086[3] = {
   11.82439,
   4.293865,
   7.540761};
   gre = new TGraphErrors(3,Graph_fx1086,Graph_fy1086,Graph_fex1086,Graph_fey1086);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("-t [GeV^{2}]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.14);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.14);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(42);
   multigraph->GetXaxis()->SetLimits(0.05,0.17);
   multigraph->GetYaxis()->SetRangeUser(-3.0, 68.0);
   
   Double_t graphCFF_fx16[21] = {
   0.05,
   0.06,
   0.07,
   0.08,
   0.09,
   0.1,
   0.11,
   0.12,
   0.13,
   0.14,
   0.15,
   0.16,
   0.17,
   0.18,
   0.19,
   0.2,
   0.21,
   0.22,
   0.23,
   0.24,
   0.25};
   Double_t graphCFF_fy16[21] = {
   36.5249,
   31.9928,
   28.0159,
   24.5235,
   21.5069,
   18.8567,
   16.5068,
   14.4442,
   12.6338,
   11.0445,
   9.6493,
   8.4366,
   7.3834,
   6.4557,
   5.6382,
   4.9175,
   4.2736,
   3.7063,
   3.2063,
   2.7655,
   2.3768};
   graph = new TGraph(21,graphCFF_fx16,graphCFF_fy16);
   graph->SetName("graphCFF");
   graph->SetTitle("graphCFF");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->Draw("c");
   
   Double_t Graph0_fx17[6] = {
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15};
   Double_t Graph0_fy17[6] = {
   30.7785,
   22.7538,
   16.8293,
   12.4511,
   9.4857,
   6.81138};
   graph = new TGraph(6,Graph0_fx17,Graph0_fy17);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->Draw("c");
   
   Double_t graphCFF_fx18[31] = {
   0.0385,
   0.0435,
   0.0485,
   0.0535,
   0.0585,
   0.0635,
   0.0685,
   0.0735,
   0.0785,
   0.0835,
   0.0885,
   0.0935,
   0.0985,
   0.1035,
   0.1085,
   0.1135,
   0.1185,
   0.1235,
   0.1285,
   0.1335,
   0.1385,
   0.1435,
   0.1485,
   0.1535,
   0.1585,
   0.1635,
   0.1685,
   0.1735,
   0.1785,
   0.1835,
   0.1885};
   Double_t graphCFF_fy18[31] = {
   16.59,
   22.46,
   24.85,
   24.76,
   23.29,
   22.29,
   20.98,
   19.85,
   18.68,
   17.58,
   16.59,
   15.61,
   14.69,
   13.82,
   13.04,
   12.26,
   11.54,
   10.86,
   10.21,
   9.625,
   9.054,
   8.516,
   8.009,
   7.531,
   7.081,
   6.667,
   6.267,
   5.89,
   5.534,
   5.199,
   4.883};
   graph = new TGraph(31,graphCFF_fx18,graphCFF_fy18);
   graph->SetName("graphCFF");
   graph->SetTitle("graphCFF");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(9);
   graph->SetLineWidth(2);
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.0,0.75,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","CLAS (this work)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("graphCFF","Guzey et al. [17]","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   cc_3->Modified();
   cc->cd();
  
// ------------>Primitives in pad: cc_6
   TPad *cc_6 = new TPad("cc_6", "_6",0.6725865,0,0.9672131,0.555408);
   cc_6->Draw();
   cc_6->cd();
   cc_6->Range(0.05,-100.3226,0.17,65);
   cc_6->SetFillColor(0);
   cc_6->SetBorderMode(0);
   cc_6->SetBorderSize(2);
   cc_6->SetLeftMargin(0);
   cc_6->SetRightMargin(0);
   cc_6->SetTopMargin(0);
   cc_6->SetBottomMargin(0.2439024);
   cc_6->SetFrameBorderMode(0);
   cc_6->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1087[3] = {
   0.08,
   0.094,
   0.127};
   Double_t Graph_fy1087[3] = {
   -4.88354,
   19.6659,
   -2.289853};
   Double_t Graph_fex1087[3] = {
   0,
   0,
   0};
   Double_t Graph_fey1087[3] = {
   22.49686,
   11.14666,
   16.07754};
   gre = new TGraphErrors(3,Graph_fx1087,Graph_fy1087,Graph_fex1087,Graph_fey1087);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("-t [GeV^{2}]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.10);
   multigraph->GetXaxis()->SetTitleOffset(0.86);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   multigraph->GetXaxis()->SetLimits(0.05,0.17);
   multigraph->GetYaxis()->SetRangeUser(-50.0, 65.0);
   
   Double_t graphCFF_fx19[21] = {
   0.05,
   0.06,
   0.07,
   0.08,
   0.09,
   0.1,
   0.11,
   0.12,
   0.13,
   0.14,
   0.15,
   0.16,
   0.17,
   0.18,
   0.19,
   0.2,
   0.21,
   0.22,
   0.23,
   0.24,
   0.25};
   Double_t graphCFF_fy19[21] = {
   -6.6015,
   -5.9884,
   -5.4292,
   -4.9116,
   -4.4316,
   -3.9968,
   -3.6097,
   -3.2584,
   -2.9396,
   -2.6504,
   -2.3879,
   -2.1512,
   -1.9262,
   -1.723,
   -1.5395,
   -1.3737,
   -1.2269,
   -1.0936,
   -0.9723,
   -0.862,
   -0.7615};
   graph = new TGraph(21,graphCFF_fx19,graphCFF_fy19);
   graph->SetName("graphCFF");
   graph->SetTitle("graphCFF");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->Draw("c");
   
   Double_t Graph0_fx20[6] = {
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15};
   Double_t Graph0_fy20[6] = {
   -0.958994,
   -1.372,
   -1.50058,
   -1.46658,
   -1.24124,
   -1.18798};
   graph = new TGraph(6,Graph0_fx20,Graph0_fy20);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(1000);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->Draw("c");
   
   leg = new TLegend(0.0,0.80,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph0","Guzey et al. [17]","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(7);
   entry->SetLineWidth(2);
   entry->SetTextFont(42);
   TLegendEntry *entry2=leg->AddEntry("graph","Liuti et al. [29]","L");
   entry2->SetLineStyle(9);
   entry2->SetLineWidth(2);
   entry2->SetTextFont(42);
   entry2->SetLineColor(4);
   leg->Draw();
   cc_6->Modified();
   cc->cd();
   cc->Modified();
   cc->cd();
   cc->SetSelected(cc);
}
