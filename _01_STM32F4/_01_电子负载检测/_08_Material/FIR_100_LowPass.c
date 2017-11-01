/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.2 and the Signal Processing Toolbox 7.4.
 * Generated on: 02-Aug-2017 16:25:39
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 513
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */ 
/* 
 * Expected path to tmwtypes.h 
 * D:\Program Files\MATLAB\R2017a\extern\include\tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   single-precision filter coefficients.
 */ 
 const int FIR_100_LowPass_Lenth = 513;
 const float FIR_100_LowPass_H[513] = {
  -1.951010423e-19,-1.950977457e-05,-3.847034895e-05,-5.619219883e-05,-7.201961125e-05,
  -8.535236702e-05,-9.566611698e-05,-0.0001025309975,-0.0001056278052,-0.0001047612604,
  -9.986983059e-05,-9.103170305e-05,-7.846654626e-05,-6.253281026e-05,-4.372039257e-05,
  -2.263866554e-05,6.356723775e-19,2.340095853e-05,4.671182614e-05,6.905022747e-05,
  8.953400538e-05, 0.000107312997,0.0001216013916,0.0001317094429,0.0001370735554,
  0.0001372833358,0.0001321045129,0.0001214966396,0.0001056245528,8.486268052e-05,
   5.97917242e-05,3.118722088e-05,-2.804953431e-19,-3.267122884e-05,-6.561462942e-05,
  -9.754636994e-05,-0.0001271569199,-0.0001531609742,-0.0001743493776,-0.0001896408066,
  -0.0001981314563,-0.0001991403988,-0.0001922485826,-0.0001773295953,-0.0001545703562,
  -0.0001244803134,-8.788835839e-05,-4.592638288e-05,-4.731155156e-19,4.825363794e-05,
  9.701954696e-05,0.0001443687943,0.0001883304067,0.0002269688121,0.0002584639296,
   0.000281190878,0.0002937956888,0.0002952641516,0.0002849801385,0.0002627709473,
  0.0002289365802,0.0001842613565,0.0001300063304,6.788178143e-05,-5.236777577e-19,
  -7.11906614e-05,-0.0001429888216,-0.0002125374449,-0.0002769323182, -0.00033333787,
  -0.0003791054769,-0.0004118901561,-0.0004297601117,-0.0004312946985,-0.0004156662617,
  -0.0003827013425,-0.0003329181345,-0.0002675376309,-0.0001884662342,-9.824988229e-05,
  2.523096083e-18,0.0001027070757,0.0002059540566,0.0003056261048,0.0003975687141,
  0.0004777541035,0.0005424498231,0.0005883827689,0.0006128916284,0.0006140610203,
  0.0005908310995,0.0005430773599,0.0004716554831, 0.000378408673,0.0002661350882,
  0.0001385150681,-8.876259052e-19,-0.0001443351357,-0.0002889702737,-0.0004281441215,
  -0.0005560764112,-0.0006671994342,-0.0007563911495,-0.0008191987872,-0.0008520451956,
  -0.0008524078294,-0.0008189621731,-0.0007516827318,-0.0006518958253,-0.0005222796462,
  -0.0003668099816,-0.0001906521356,1.098073681e-18,0.0001981318637,0.0003961572947,
  0.0005862002145,0.0007603983395,0.0009112186381, 0.001031770487, 0.001116105821,
   0.001159492414, 0.001158648869, 0.001111929771, 0.001019453397,0.0008831621963,
  0.0007068139385,0.0004958992358,0.0002574866521,-1.316932023e-18,-0.0002670673712,
  -0.000533491082, -0.00078869547, -0.00102216145,-0.001223846572,-0.001384601579,
  -0.001496565877,-0.001553526265, -0.00155122322,-0.001487590373,-0.001362914918,
  -0.001179910847,-0.0009436985711,-0.0006616880419,-0.0003433670499,1.535790364e-18,
   0.000355754717,0.0007102955715, 0.001049582148, 0.001359674498, 0.001627286896,
   0.001840336481, 0.001988461707, 0.002063492779, 0.002059851075, 0.001974860439,
   0.001808955567, 0.001565775136, 0.001252130605,0.0008778517367,0.0004555056221,
  -1.746238244e-18,-0.000471920066,  -0.0009422648,-0.001392461709,-0.001804064377,
  -0.002159480006,-0.002442689147,-0.002639931161,-0.002740321914,-0.002736383583,
  -0.002624459565,-0.002404993866,-0.002082661958,-0.001666340278,-0.001168911811,
  -0.0006069085794,1.940187902e-18,0.0006296595675, 0.001258202363, 0.001860913238,
   0.002413159935, 0.002891353099, 0.003273901762, 0.003542124992, 0.003681086935,
   0.003680315102, 0.003534376621, 0.003243278945, 0.002812678693, 0.002253880259,
   0.001583619625,0.0008236294962,-2.110186339e-18,-0.0008576532127,-0.001717186184,
   -0.00254505896,-0.003307564184, -0.00397211127, -0.00450851582,-0.004890254233,
  -0.005095624831,-0.005108776037,-0.004920560401, -0.00452916557,-0.003940500319,
  -0.003168312833,-0.002234014915,-0.001166220987,2.249700483e-18, 0.001224142965,
   0.002461526543, 0.003664760385, 0.004785375204, 0.005775563419, 0.006589971483,
   0.007187484764,  0.00753294304, 0.007598718163, 0.007366100792, 0.006826437078,
   0.005981969647, 0.004846337251, 0.003444715403, 0.001813565148,-2.353368754e-18,
  -0.001939232578,-0.003939128015,-0.005928128492,-0.007830108516,-0.009566581808,
   -0.01105907466, -0.01223158464, -0.01301304344, -0.01333972905, -0.01315751206,
   -0.01242389902, -0.01110977028,-0.009200771339,-0.006698297802, -0.00362002966,
  2.417207452e-18, 0.004111827817, 0.008650459349,  0.01353723742,  0.01868163235,
    0.02398342453,  0.02933520079,  0.03462511301,  0.03973980248,  0.04456740618,
    0.04900057614,  0.05293939635,  0.05629412085,  0.05898764357,  0.06095765159,
    0.06215834245,  0.06256171316,  0.06215834245,  0.06095765159,  0.05898764357,
    0.05629412085,  0.05293939635,  0.04900057614,  0.04456740618,  0.03973980248,
    0.03462511301,  0.02933520079,  0.02398342453,  0.01868163235,  0.01353723742,
   0.008650459349, 0.004111827817,2.417207452e-18, -0.00362002966,-0.006698297802,
  -0.009200771339, -0.01110977028, -0.01242389902, -0.01315751206, -0.01333972905,
   -0.01301304344, -0.01223158464, -0.01105907466,-0.009566581808,-0.007830108516,
  -0.005928128492,-0.003939128015,-0.001939232578,-2.353368754e-18, 0.001813565148,
   0.003444715403, 0.004846337251, 0.005981969647, 0.006826437078, 0.007366100792,
   0.007598718163,  0.00753294304, 0.007187484764, 0.006589971483, 0.005775563419,
   0.004785375204, 0.003664760385, 0.002461526543, 0.001224142965,2.249700483e-18,
  -0.001166220987,-0.002234014915,-0.003168312833,-0.003940500319, -0.00452916557,
  -0.004920560401,-0.005108776037,-0.005095624831,-0.004890254233, -0.00450851582,
   -0.00397211127,-0.003307564184, -0.00254505896,-0.001717186184,-0.0008576532127,
  -2.110186339e-18,0.0008236294962, 0.001583619625, 0.002253880259, 0.002812678693,
   0.003243278945, 0.003534376621, 0.003680315102, 0.003681086935, 0.003542124992,
   0.003273901762, 0.002891353099, 0.002413159935, 0.001860913238, 0.001258202363,
  0.0006296595675,1.940187902e-18,-0.0006069085794,-0.001168911811,-0.001666340278,
  -0.002082661958,-0.002404993866,-0.002624459565,-0.002736383583,-0.002740321914,
  -0.002639931161,-0.002442689147,-0.002159480006,-0.001804064377,-0.001392461709,
    -0.0009422648,-0.000471920066,-1.746238244e-18,0.0004555056221,0.0008778517367,
   0.001252130605, 0.001565775136, 0.001808955567, 0.001974860439, 0.002059851075,
   0.002063492779, 0.001988461707, 0.001840336481, 0.001627286896, 0.001359674498,
   0.001049582148,0.0007102955715, 0.000355754717,1.535790364e-18,-0.0003433670499,
  -0.0006616880419,-0.0009436985711,-0.001179910847,-0.001362914918,-0.001487590373,
   -0.00155122322,-0.001553526265,-0.001496565877,-0.001384601579,-0.001223846572,
   -0.00102216145, -0.00078869547,-0.000533491082,-0.0002670673712,-1.316932023e-18,
  0.0002574866521,0.0004958992358,0.0007068139385,0.0008831621963, 0.001019453397,
   0.001111929771, 0.001158648869, 0.001159492414, 0.001116105821, 0.001031770487,
  0.0009112186381,0.0007603983395,0.0005862002145,0.0003961572947,0.0001981318637,
  1.098073681e-18,-0.0001906521356,-0.0003668099816,-0.0005222796462,-0.0006518958253,
  -0.0007516827318,-0.0008189621731,-0.0008524078294,-0.0008520451956,-0.0008191987872,
  -0.0007563911495,-0.0006671994342,-0.0005560764112,-0.0004281441215,-0.0002889702737,
  -0.0001443351357,-8.876259052e-19,0.0001385150681,0.0002661350882, 0.000378408673,
  0.0004716554831,0.0005430773599,0.0005908310995,0.0006140610203,0.0006128916284,
  0.0005883827689,0.0005424498231,0.0004777541035,0.0003975687141,0.0003056261048,
  0.0002059540566,0.0001027070757,2.523096083e-18,-9.824988229e-05,-0.0001884662342,
  -0.0002675376309,-0.0003329181345,-0.0003827013425,-0.0004156662617,-0.0004312946985,
  -0.0004297601117,-0.0004118901561,-0.0003791054769, -0.00033333787,-0.0002769323182,
  -0.0002125374449,-0.0001429888216,-7.11906614e-05,-5.236777577e-19,6.788178143e-05,
  0.0001300063304,0.0001842613565,0.0002289365802,0.0002627709473,0.0002849801385,
  0.0002952641516,0.0002937956888, 0.000281190878,0.0002584639296,0.0002269688121,
  0.0001883304067,0.0001443687943,9.701954696e-05,4.825363794e-05,-4.731155156e-19,
  -4.592638288e-05,-8.788835839e-05,-0.0001244803134,-0.0001545703562,-0.0001773295953,
  -0.0001922485826,-0.0001991403988,-0.0001981314563,-0.0001896408066,-0.0001743493776,
  -0.0001531609742,-0.0001271569199,-9.754636994e-05,-6.561462942e-05,-3.267122884e-05,
  -2.804953431e-19,3.118722088e-05, 5.97917242e-05,8.486268052e-05,0.0001056245528,
  0.0001214966396,0.0001321045129,0.0001372833358,0.0001370735554,0.0001317094429,
  0.0001216013916, 0.000107312997,8.953400538e-05,6.905022747e-05,4.671182614e-05,
  2.340095853e-05,6.356723775e-19,-2.263866554e-05,-4.372039257e-05,-6.253281026e-05,
  -7.846654626e-05,-9.103170305e-05,-9.986983059e-05,-0.0001047612604,-0.0001056278052,
  -0.0001025309975,-9.566611698e-05,-8.535236702e-05,-7.201961125e-05,-5.619219883e-05,
  -3.847034895e-05,-1.950977457e-05,-1.951010423e-19
};
