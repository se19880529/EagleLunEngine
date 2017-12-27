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
 *       Date:2017-11-25 14:22:38
 *
 *****************************************/
#ifndef ELUniform_h
#define ELUniform_h
BEGIN_ELEN
enum UniformType
{
    UT_Unknown,
    UT_Real,
    UT_Vector3,
    UT_Vector4,
    UT_Matrix3x3,
    UT_Matrix4x4,
    UT_Texture2D,
    UT_TextureCube
};
struct UniformDefine
{
    UniformType type;
    primitive::ShortSize elementCount;
    primitive::IntPtr offset;
    primitive::Size GetTypeSize();
};
class UniformBase
{
public:
    virtual int GetTypeSize() = 0;
    virtual bool WriteToBuffer(primitive::Byte* buffer, primitive::Size bufferSize) = 0;
    virtual bool ReadFromBuffer(const primitive::Byte* buffer, primitive::Size bufferSize) = 0;
};
template <int T>
class Uniform
{
};
template<>
class Uniform<UniformType::UT_Real> : public UniformBase
{
public:
    static const primitive::Size Size = sizeof(primitive::Real);
    static const UniformType Type = UniformType::UT_Real;
    Uniform<UniformType::UT_Real>(primitive::Real val) : value(val) {}
    primitive::Real GetValue() const { return value; }
    primitive::Size GetTypeSize() const { return sizeof(primitive::Real); }
    bool WriteToBuffer(primitive::Byte* bufferStart, primitive::Byte* bufferEnd);
    bool ReadFromBuffer(const primitive::Byte* buffer, primitive::Size bufferSize);
private:
    std::vector<primitive::Real> value;
};

END_ELEN
#endif /* ELUniform_h */
