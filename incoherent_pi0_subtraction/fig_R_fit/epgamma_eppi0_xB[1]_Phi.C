{
//=========Macro generated from canvas: c1/
//=========  (Fri Dec 18 09:59:46 2015) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "",1,1,700,476);
   c1->Range(-80.8421,0.01578948,424.421,0.5421053);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(0);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.16);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(18);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,10,0.21498);
   gre->SetPointError(0,0,0.01622722);
   gre->SetPoint(1,30,0.2105505);
   gre->SetPointError(1,0,0.01433715);
   gre->SetPoint(2,50,0.1911197);
   gre->SetPointError(2,0,0.01593808);
   gre->SetPoint(3,70,0.2005277);
   gre->SetPointError(3,0,0.01489334);
   gre->SetPoint(4,90,0.1842984);
   gre->SetPointError(4,0,0.01447875);
   gre->SetPoint(5,110,0.2059524);
   gre->SetPointError(5,0,0.0227643);
   gre->SetPoint(6,130,0.1775862);
   gre->SetPointError(6,0,0.02487195);
   gre->SetPoint(7,150,0.2347973);
   gre->SetPointError(7,0,0.02956535);
   gre->SetPoint(8,170,0.1495327);
   gre->SetPointError(8,0,0.02992929);
   gre->SetPoint(9,190,0.2191781);
   gre->SetPointError(9,0,0.0328425);
   gre->SetPoint(10,210,0.1900453);
   gre->SetPointError(10,0,0.02977517);
   gre->SetPoint(11,230,0.2092593);
   gre->SetPointError(11,0,0.02869054);
   gre->SetPoint(12,250,0.2118794);
   gre->SetPointError(12,0,0.02001396);
   gre->SetPoint(13,270,0.1573995);
   gre->SetPointError(13,0,0.01620723);
   gre->SetPoint(14,290,0.1981829);
   gre->SetPointError(14,0,0.01533114);
   gre->SetPoint(15,310,0.1925363);
   gre->SetPointError(15,0,0.01147297);
   gre->SetPoint(16,330,0.1876485);
   gre->SetPointError(16,0,0.01512876);
   gre->SetPoint(17,350,0.2287037);
   gre->SetPointError(17,0,0.0215113);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0,384);
   Graph_Graph5->SetMinimum(0.1);
   Graph_Graph5->SetMaximum(0.5);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetTitle("#phi_{h} [Deg.]");
   Graph_Graph5->GetXaxis()->SetLabelFont(22);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetXaxis()->SetTitleFont(22);
   Graph_Graph5->GetYaxis()->SetTitle("R^{MC}_{ep#pi^{0}}(1#gamma / 2#gamma) ");
   Graph_Graph5->GetYaxis()->SetLabelFont(22);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph5->GetYaxis()->SetTitleFont(22);
   Graph_Graph5->GetZaxis()->SetLabelFont(22);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph5);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4397126,0.9339831,0.5602874,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
