/******************************************
 *
 *      ' ,
 *      qNHqq_                '
 *       "NNNHqqq_         '___fqq
 *          NNHHHNq_       'jHHqdHq
 *            NNNNNNq       qqqqNHqNN
 *             NNNNNNqq   _qHNqqHNNT
 *              NNNNNHNq_qNNHNNNN`
 *               "NNNNNNNNNNNNNN
 *                 `NNNNNNN" ,\\.
 *                   QNHNNNqHqY")
 *                  gHHNNNNNN
 *              ,)jqHHNNNNNN`
 *            ```""`'NN`-NNN
 *                  NNP )NN
 *                    jj`\q
 *                         `
 *
 *
 *            This code is protected by the God of EAGLE
 *                  So all the bugs are eaten out
 *             any problem, contact se19880529@163.com
 *     Author:Eagle Lau
 *       Date:2017-11-16 17:16:05
 *
 *****************************************/
#ifndef ELBase_h
#define ELBase_h
//macros
#define ELEN_EXPORTED_CLASS
#define BEGIN_ELEN namespace elen {
#define END_ELEN }
#define USE_ELEN using namespace elen;
#define USE_ELEN_PRIMITIVE using namespace elen::primitive;

//types
BEGIN_ELEN
namespace primitive
{
    typedef unsigned char Byte;
    typedef int Integer;
    typedef short ShortInteger;
    typedef long LongInteger;
    typedef unsigned int Size;
    typedef unsigned short ShortSize;
    typedef unsigned long LongSize;
    typedef float Real;
    typedef unsigned int IntPtr;
}
#define ELEN_SET_INVALID_PTR(ptr) (ptr = 0xFFFFFFFF)
#define ELEN_PTR_IS_VALID(ptr) (ptr != 0xFFFFFFFF)
    
END_ELEN

#endif /* ELBase_h */
