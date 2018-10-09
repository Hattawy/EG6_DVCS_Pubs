void incoherent_Handbag(void){
 TCanvas *c1 = new TCanvas("c1", "A canvas", 20,20, 1000, 800);
          c1->Range(-30, -65, 90, 140);

          Int_t linsav = gStyle->GetLineWidth();
 gStyle->SetLineWidth(3);

 TArrow *arr;
 TLatex t;
 t.SetTextAlign(22);
 t.SetTextSize(0.04);

 TLatex tt;
 tt.SetTextAlign(22);
 tt.SetTextSize(0.045);
 tt.SetTextColor(4);


 // target 
 TLine * l;
         l = new TLine(20, -3, 35, 25); l->SetLineWidth(10); l->Draw();
         l = new TLine(78, 5, 58, 25); l->SetLineWidth(10); l->Draw();

         arr = new TArrow(20, -3, 28, 12, 0.05,"|>");  arr->SetAngle(40);  arr->Draw();
         arr = new TArrow(58, 25, 72, 11, 0.05,"|>");  arr->SetAngle(40);  arr->Draw();

        // incoming lines  
        l = new TLine(-28, -15, 0, -15);l->Draw();
        l = new TLine(-28, -20, 0, -20);l->Draw();
        l = new TLine(-28, -25, 0, -25);l->Draw();
        l = new TLine(-28, -30, 0, -30);l->Draw();

        arr = new TArrow(-28, -15, -17, -15, 0.03,">"); arr->SetAngle(40);  arr->Draw();
        arr = new TArrow(-28, -20, -17, -20, 0.03,">"); arr->SetAngle(40);  arr->Draw();
        arr = new TArrow(-28, -25, -17, -25, 0.03,">"); arr->SetAngle(40);  arr->Draw();
        arr = new TArrow(-28, -30, -17, -30, 0.03,">"); arr->SetAngle(40);  arr->Draw();

      
         // out going line 
        l = new TLine(20, -20, 60, -35);l->Draw();
        l = new TLine(20, -25, 60, -40);l->Draw();
        l = new TLine(20, -30, 60, -45);l->Draw();
 
        arr = new TArrow(20, -20, 40, -28, 0.03,">"); arr->SetAngle(40);  arr->Draw();
        arr = new TArrow(20, -25, 40, -33, 0.03,">"); arr->SetAngle(40);  arr->Draw();
        arr = new TArrow(20, -30, 40, -38, 0.03,">"); arr->SetAngle(40);  arr->Draw();
 

 TEllipse *blob;
           blob = new TEllipse(45,30,15,15,0,360);
           blob->SetFillColor(40);
           blob->Draw();

           blob = new TEllipse(10,-20,20,20,0,360);
           blob->SetFillColor(40);
           blob->Draw();



 //electrons
       l = new TLine(-20, 95, 15, 95); l->Draw();
       l = new TLine(45, 125, 15, 95); l->Draw();
        arr = new TArrow(-20, 95, 0, 95, 0.03,"|>"); arr->SetAngle(40);  arr->Draw();
        arr = new TArrow(15, 95, 30, 110, 0.03,"|>"); arr->SetAngle(40);  arr->Draw();

 // photons       
 TCurlyLine *gamma;
             gamma = new TCurlyLine(15, 95, 35, 65);gamma->SetWavy();gamma->Draw();
             gamma = new TCurlyLine(80, 95, 55, 65);gamma->SetWavy();gamma->Draw();

  // loop      

        l = new TLine(33, 38, 35, 65);l->Draw();
        l = new TLine(35, 65, 55, 65);l->Draw();
        l = new TLine(57, 38, 55, 65);l->Draw();

        //arr = new TArrow(33, 38, 34.3, 55, 0.02,"|>"); arr->SetAngle(40);  arr->Draw();
        arr = new TArrow(35, 65, 45, 65, 0.02,"|>"); arr->SetAngle(40);  arr->Draw();
        arr = new TArrow(55, 65, 56.3, 48, 0.02,"|>"); arr->SetAngle(40);  arr->Draw();


  // factorization 
  l = new TLine(10, 58, 80, 58);
  l->SetLineStyle(10);
  l->SetLineColor(4);
  l->Draw();

 // -t arc
 TArc *arcarrow = new TArc(50,-25,35,50,130);
       arcarrow->SetNoEdges();
       arcarrow->SetLineWidth(4);
       arcarrow->SetLineStyle(2);
       //arcarrow->Draw();

       arr = new TArrow(51.0, 10, 52.0, 10, 0.03); arr->SetAngle(40);  arr->Draw();

       arcarrow = new TArc(45,115,35,240,315);
       arcarrow->SetNoEdges();
       arcarrow->SetLineWidth(4);
       arcarrow->SetLineStyle(2);
       arcarrow->Draw();

       arr = new TArrow(51.0, 81, 52.0, 81, 0.03); arr->SetAngle(40);  arr->Draw();

 // X arc
       arcarrow = new TArc(58,-40,10,-50,50);
       arcarrow->SetNoEdges();
       arcarrow->SetLineWidth(4);
       arcarrow->SetLineStyle(2);
       arcarrow->Draw();


 t.DrawLatex(-18,100,"e(k)");
 t.DrawLatex(35,125,"e'(k')");
 t.DrawLatex(15,80,"#gamma^{*}(q)");
 t.DrawLatex(78,80,"#gamma(q')");
 t.DrawLatex(61,50,"x-#xi");
 t.DrawLatex(29,50,"x+#xi");
 t.DrawLatex(21,17,"N(p)");
 t.DrawLatex(80,17,"N'(p')");
 //t.DrawLatex(50,4,"t = (p-p')^{2}");
 t.DrawLatex(50,90,"t = (q-q')^{2}");
 t.DrawLatex(45,30,"GPDs(x, #xi, t)");
 t.DrawLatex(10,-18,"^{4}He");
 t.DrawLatex(72,-40,"X");
 t.SetTextSize(0.035);

 tt.DrawLatex(-5,58,"Factorization");

 //TCurlyArc *ginit = new TCurlyArc(5, 95, 12.5*sqrt(2), 135, 225);
 //ginit->SetWavy();
 //ginit->Draw();
 //t.DrawLatex(7,6,"e^{-}");
 //t.DrawLatex(7,55,"e^{+}");
 //t.DrawLatex(7,30,"#gamma");
/*
 TCurlyLine *gamma = new TCurlyLine(30, 30, 55, 30);
 gamma->SetWavy();
 gamma->Draw();
 t.DrawLatex(42.5,37.7,"#gamma");

 TArc *a = new TArc(70, 30, 15);
 a->Draw();
 t.DrawLatex(55, 45,"#bar{q}");
 t.DrawLatex(85, 15,"q");
 TCurlyLine *gluon = new TCurlyLine(70, 45, 70, 15);
 gluon->Draw();
 t.DrawLatex(77.5,30,"g");

 TCurlyLine *z0 = new TCurlyLine(85, 30, 110, 30);
 z0->SetWavy();
 z0->Draw();
 t.DrawLatex(100, 37.5,"Z^{0}");

 l = new TLine(110, 30, 130, 10); l->Draw();
 l = new TLine(110, 30, 130, 50); l->Draw();

 TCurlyArc *gluon1 = new TCurlyArc(110, 30, 12.5*sqrt(2), 315, 45);
 gluon1->Draw();

 t.DrawLatex(135,6,"#bar{q}");
 t.DrawLatex(135,55,"q");
 t.DrawLatex(135,30,"g");
*/
 c1->Update();
 gStyle->SetLineWidth(linsav);
}
