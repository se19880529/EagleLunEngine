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
 *       Date:2017-11-17 15:38:33
 *
 *****************************************/
#ifndef ELUniformBuffer_h
#define ELUniformBuffer_h
BEGIN_ELEN
ELEN_EXPORTED_CLASS class UniformBuffer
{
public:
    template<int uniformType>
    primitive::IntPtr Allocate(primitive::Size elementCount = 1)
    {
        primitive::IntPtr ret = _uniforms.size();
        _uniforms.emplace_back();
        _innerBuffer.insert(_innerBuffer.end(), elementCount * Uniform<uniformType>::Size , 0);
    }
    bool SetInteger(primitive::Integer*, primitive::IntPtr);
    bool SetReal(primitive::Real*, primitive::IntPtr);
private:
    std::vector<UniformBase*> _uniforms;
};
END_ELEN

#endif /* ELUniformBuffer_h */
