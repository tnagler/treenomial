// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// allBinaryTreeShapesReal
Rcpp::List allBinaryTreeShapesReal(int numTips);
RcppExport SEXP _treenomial_allBinaryTreeShapesReal(SEXP numTipsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type numTips(numTipsSEXP);
    rcpp_result_gen = Rcpp::wrap(allBinaryTreeShapesReal(numTips));
    return rcpp_result_gen;
END_RCPP
}
// allBinaryTreeShapesPhylo
Rcpp::List allBinaryTreeShapesPhylo(int numTips);
RcppExport SEXP _treenomial_allBinaryTreeShapesPhylo(SEXP numTipsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type numTips(numTipsSEXP);
    rcpp_result_gen = Rcpp::wrap(allBinaryTreeShapesPhylo(numTips));
    return rcpp_result_gen;
END_RCPP
}
// allBinaryTreeShapesComplex
Rcpp::List allBinaryTreeShapesComplex(int numTips);
RcppExport SEXP _treenomial_allBinaryTreeShapesComplex(SEXP numTipsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type numTips(numTipsSEXP);
    rcpp_result_gen = Rcpp::wrap(allBinaryTreeShapesComplex(numTips));
    return rcpp_result_gen;
END_RCPP
}
// wedgeExport
arma::mat wedgeExport(const arma::mat& A, const arma::mat& B);
RcppExport SEXP _treenomial_wedgeExport(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(wedgeExport(A, B));
    return rcpp_result_gen;
END_RCPP
}
// wedgeExportConv
arma::cx_rowvec wedgeExportConv(arma::cx_rowvec A, arma::cx_rowvec B);
RcppExport SEXP _treenomial_wedgeExportConv(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cx_rowvec >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::cx_rowvec >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(wedgeExportConv(A, B));
    return rcpp_result_gen;
END_RCPP
}
// alignCoeffs
Rcpp::List alignCoeffs(Rcpp::List& coeffs, std::string type);
RcppExport SEXP _treenomial_alignCoeffs(SEXP coeffsSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type coeffs(coeffsSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(alignCoeffs(coeffs, type));
    return rcpp_result_gen;
END_RCPP
}
// coeffMatList
Rcpp::List coeffMatList(std::vector<std::vector<std::string>> wedgeOrders, std::string type, std::string tipLabA, std::string tipLabB, int nThreads);
RcppExport SEXP _treenomial_coeffMatList(SEXP wedgeOrdersSEXP, SEXP typeSEXP, SEXP tipLabASEXP, SEXP tipLabBSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::vector<std::string>> >::type wedgeOrders(wedgeOrdersSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< std::string >::type tipLabA(tipLabASEXP);
    Rcpp::traits::input_parameter< std::string >::type tipLabB(tipLabBSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(coeffMatList(wedgeOrders, type, tipLabA, tipLabB, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// coeffDist
std::vector<double> coeffDist(Rcpp::List coeffsList, std::string method, int nThreads);
RcppExport SEXP _treenomial_coeffDist(SEXP coeffsListSEXP, SEXP methodSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type coeffsList(coeffsListSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(coeffDist(coeffsList, method, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// coeffDistMat
Rcpp::NumericMatrix coeffDistMat(Rcpp::List coeffsList, std::string method, int nThreads);
RcppExport SEXP _treenomial_coeffDistMat(SEXP coeffsListSEXP, SEXP methodSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type coeffsList(coeffsListSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(coeffDistMat(coeffsList, method, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// juliaSet
arma::mat juliaSet(std::vector<std::complex < double> > coeffs, int pixelLength, std::complex<double> center, double maxZ);
RcppExport SEXP _treenomial_juliaSet(SEXP coeffsSEXP, SEXP pixelLengthSEXP, SEXP centerSEXP, SEXP maxZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::complex < double> > >::type coeffs(coeffsSEXP);
    Rcpp::traits::input_parameter< int >::type pixelLength(pixelLengthSEXP);
    Rcpp::traits::input_parameter< std::complex<double> >::type center(centerSEXP);
    Rcpp::traits::input_parameter< double >::type maxZ(maxZSEXP);
    rcpp_result_gen = Rcpp::wrap(juliaSet(coeffs, pixelLength, center, maxZ));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_treenomial_allBinaryTreeShapesReal", (DL_FUNC) &_treenomial_allBinaryTreeShapesReal, 1},
    {"_treenomial_allBinaryTreeShapesPhylo", (DL_FUNC) &_treenomial_allBinaryTreeShapesPhylo, 1},
    {"_treenomial_allBinaryTreeShapesComplex", (DL_FUNC) &_treenomial_allBinaryTreeShapesComplex, 1},
    {"_treenomial_wedgeExport", (DL_FUNC) &_treenomial_wedgeExport, 2},
    {"_treenomial_wedgeExportConv", (DL_FUNC) &_treenomial_wedgeExportConv, 2},
    {"_treenomial_alignCoeffs", (DL_FUNC) &_treenomial_alignCoeffs, 2},
    {"_treenomial_coeffMatList", (DL_FUNC) &_treenomial_coeffMatList, 5},
    {"_treenomial_coeffDist", (DL_FUNC) &_treenomial_coeffDist, 3},
    {"_treenomial_coeffDistMat", (DL_FUNC) &_treenomial_coeffDistMat, 3},
    {"_treenomial_juliaSet", (DL_FUNC) &_treenomial_juliaSet, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_treenomial(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
