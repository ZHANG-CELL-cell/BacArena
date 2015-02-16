// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// addBacCpp
List addBacCpp(arma::sp_mat occmat, DataFrame orgdat, int amount, double growth, int type, int ptype);
RcppExport SEXP BacArena_addBacCpp(SEXP occmatSEXP, SEXP orgdatSEXP, SEXP amountSEXP, SEXP growthSEXP, SEXP typeSEXP, SEXP ptypeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::sp_mat >::type occmat(occmatSEXP );
        Rcpp::traits::input_parameter< DataFrame >::type orgdat(orgdatSEXP );
        Rcpp::traits::input_parameter< int >::type amount(amountSEXP );
        Rcpp::traits::input_parameter< double >::type growth(growthSEXP );
        Rcpp::traits::input_parameter< int >::type type(typeSEXP );
        Rcpp::traits::input_parameter< int >::type ptype(ptypeSEXP );
        List __result = addBacCpp(occmat, orgdat, amount, growth, type, ptype);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// diffuseNaiveCpp
void diffuseNaiveCpp(Rcpp::NumericMatrix y, bool donut);
RcppExport SEXP BacArena_diffuseNaiveCpp(SEXP ySEXP, SEXP donutSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type y(ySEXP );
        Rcpp::traits::input_parameter< bool >::type donut(donutSEXP );
        diffuseNaiveCpp(y, donut);
    }
    return R_NilValue;
END_RCPP
}