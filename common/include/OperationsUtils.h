/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_UTILS_H
#define ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_UTILS_H

#include <algorithm>
#include <cstdint>
#include <string>
#include <vector>

#include "nnapi/TypeUtils.h"
#include "nnapi/Types.h"

namespace android {
namespace nn {

// DEPRECATED. Use NN_RET_CHECK instead.
#define NN_CHECK(x) NN_RET_CHECK(x)
#define NN_OPS_CHECK(x) NN_RET_CHECK(x)

// DEPRECATED. Use NN_RET_CHECK_EQ instead.
#define NN_CHECK_EQ(x, y) NN_RET_CHECK_EQ(x, y)

#ifdef NN_EXPERIMENTAL_FEATURE
#define NN_FOR_EACH_EXPERIMENTAL_OPERATION_IF_ENABLED(CALL) CALL(DENSIFY)
#else  // NN_EXPERIMENTAL_FEATURE
#define NN_FOR_EACH_EXPERIMENTAL_OPERATION_IF_ENABLED(CALL)
#endif  // NN_EXPERIMENTAL_FEATURE

// TODO(b/213798075): Generate this operation list in a macro with the API generator.
#define NN_FOR_EACH_OPERATION(CALL)    \
    CALL(ADD)                          \
    CALL(AVERAGE_POOL_2D)              \
    CALL(CONCATENATION)                \
    CALL(CONV_2D)                      \
    CALL(DEPTHWISE_CONV_2D)            \
    CALL(DEPTH_TO_SPACE)               \
    CALL(DEQUANTIZE)                   \
    CALL(EMBEDDING_LOOKUP)             \
    CALL(FLOOR)                        \
    CALL(FULLY_CONNECTED)              \
    CALL(HASHTABLE_LOOKUP)             \
    CALL(L2_NORMALIZATION)             \
    CALL(L2_POOL_2D)                   \
    CALL(LOCAL_RESPONSE_NORMALIZATION) \
    CALL(LOGISTIC)                     \
    CALL(LSH_PROJECTION)               \
    CALL(LSTM)                         \
    CALL(MAX_POOL_2D)                  \
    CALL(MUL)                          \
    CALL(RELU)                         \
    CALL(RELU1)                        \
    CALL(RELU6)                        \
    CALL(RESHAPE)                      \
    CALL(RESIZE_BILINEAR)              \
    CALL(RNN)                          \
    CALL(SOFTMAX)                      \
    CALL(SPACE_TO_DEPTH)               \
    CALL(SVDF)                         \
    CALL(TANH)                         \
    CALL(BATCH_TO_SPACE_ND)            \
    CALL(DIV)                          \
    CALL(MEAN)                         \
    CALL(PAD)                          \
    CALL(SPACE_TO_BATCH_ND)            \
    CALL(SQUEEZE)                      \
    CALL(STRIDED_SLICE)                \
    CALL(SUB)                          \
    CALL(TRANSPOSE)                    \
    CALL(ABS)                          \
    CALL(ARGMAX)                       \
    CALL(ARGMIN)                       \
    CALL(AXIS_ALIGNED_BBOX_TRANSFORM)  \
    CALL(BIDIRECTIONAL_SEQUENCE_LSTM)  \
    CALL(BIDIRECTIONAL_SEQUENCE_RNN)   \
    CALL(BOX_WITH_NMS_LIMIT)           \
    CALL(CAST)                         \
    CALL(CHANNEL_SHUFFLE)              \
    CALL(DETECTION_POSTPROCESSING)     \
    CALL(EQUAL)                        \
    CALL(EXP)                          \
    CALL(EXPAND_DIMS)                  \
    CALL(GATHER)                       \
    CALL(GENERATE_PROPOSALS)           \
    CALL(GREATER)                      \
    CALL(GREATER_EQUAL)                \
    CALL(GROUPED_CONV_2D)              \
    CALL(HEATMAP_MAX_KEYPOINT)         \
    CALL(INSTANCE_NORMALIZATION)       \
    CALL(LESS)                         \
    CALL(LESS_EQUAL)                   \
    CALL(LOG)                          \
    CALL(LOGICAL_AND)                  \
    CALL(LOGICAL_NOT)                  \
    CALL(LOGICAL_OR)                   \
    CALL(LOG_SOFTMAX)                  \
    CALL(MAXIMUM)                      \
    CALL(MINIMUM)                      \
    CALL(NEG)                          \
    CALL(NOT_EQUAL)                    \
    CALL(PAD_V2)                       \
    CALL(POW)                          \
    CALL(PRELU)                        \
    CALL(QUANTIZE)                     \
    CALL(QUANTIZED_16BIT_LSTM)         \
    CALL(RANDOM_MULTINOMIAL)           \
    CALL(REDUCE_ALL)                   \
    CALL(REDUCE_ANY)                   \
    CALL(REDUCE_MAX)                   \
    CALL(REDUCE_MIN)                   \
    CALL(REDUCE_PROD)                  \
    CALL(REDUCE_SUM)                   \
    CALL(ROI_ALIGN)                    \
    CALL(ROI_POOLING)                  \
    CALL(RSQRT)                        \
    CALL(SELECT)                       \
    CALL(SIN)                          \
    CALL(SLICE)                        \
    CALL(SPLIT)                        \
    CALL(SQRT)                         \
    CALL(TILE)                         \
    CALL(TOPK_V2)                      \
    CALL(TRANSPOSE_CONV_2D)            \
    CALL(UNIDIRECTIONAL_SEQUENCE_LSTM) \
    CALL(UNIDIRECTIONAL_SEQUENCE_RNN)  \
    CALL(RESIZE_NEAREST_NEIGHBOR)      \
    CALL(QUANTIZED_LSTM)               \
    CALL(IF)                           \
    CALL(WHILE)                        \
    CALL(ELU)                          \
    CALL(HARD_SWISH)                   \
    CALL(FILL)                         \
    CALL(RANK)                         \
    CALL(BATCH_MATMUL)                 \
    CALL(PACK)                         \
    CALL(MIRROR_PAD)                   \
    CALL(REVERSE)                      \
    CALL(OEM_OPERATION)                \
    NN_FOR_EACH_EXPERIMENTAL_OPERATION_IF_ENABLED(CALL)

#define NN_VALIDATION_FUNCTION_NAME(opType) validate_##opType

#define NN_VALIDATION_FUNCTION_SIGNATURE(opType) \
    Result<Version> NN_VALIDATION_FUNCTION_NAME(opType)(const IOperationValidationContext* context)

#define NN_DEFINE_VALIDATION_FUNCTION(opType, validate) \
    NN_VALIDATION_FUNCTION_SIGNATURE(opType) { return validate(context); }

// An 8-bit boolean type (sizeof(bool) is implementation-defined).
typedef uint8_t bool8;

enum PaddingScheme {
    kPaddingUnknown = 0,
    kPaddingSame = 1,
    kPaddingValid = 2,
};

// Stores operand type information. "Shape" is a historical name.
struct Shape {
    OperandType type = OperandType::FLOAT32;
    std::vector<uint32_t> dimensions;
    float scale = 0.0f;
    int32_t offset = 0;
    Operand::ExtraParams extraParams;
};

// Provides information available during graph creation to validate an operation.
class IOperationValidationContext {
   public:
    virtual ~IOperationValidationContext() {}

    virtual const char* getOperationName() const = 0;

    virtual uint32_t getNumInputs() const = 0;
    virtual OperandType getInputType(uint32_t index) const = 0;
    virtual Shape getInputShape(uint32_t index) const = 0;
    virtual const Operand::ExtraParams& getInputExtraParams(uint32_t index) const = 0;

    virtual uint32_t getNumOutputs() const = 0;
    virtual OperandType getOutputType(uint32_t index) const = 0;
    virtual Shape getOutputShape(uint32_t index) const = 0;

    std::string invalidInOutNumberMessage(int expIn, int expOut) const;

    Result<void> validateOperationOperandTypes(
            const std::vector<OperandType>& inExpectedTypes,
            const std::vector<OperandType>& outExpectedInTypes) const;
};

// Provides inputs and outputs during operation execution.
class IOperationExecutionContext {
   public:
    virtual ~IOperationExecutionContext() {}

    virtual uint32_t getNumInputs() const = 0;
    virtual OperandType getInputType(uint32_t index) const = 0;
    virtual Shape getInputShape(uint32_t index) const = 0;
    virtual const void* getInputBuffer(uint32_t index) const = 0;
    virtual const Operand::ExtraParams& getInputExtraParams(uint32_t index) const = 0;

    virtual uint32_t getNumOutputs() const = 0;
    virtual OperandType getOutputType(uint32_t index) const = 0;
    virtual Shape getOutputShape(uint32_t index) const = 0;
    virtual void* getOutputBuffer(uint32_t index) = 0;

    // Updates the output shape, allocating the buffer if necessary.
    virtual bool setOutputShape(uint32_t index, const Shape& shape) = 0;

    virtual bool isOmittedInput(uint32_t index) const = 0;
    virtual bool isOmittedOutput(uint32_t index) const = 0;

    template <typename T>
    const T* getInputBuffer(uint32_t index) const {
        return reinterpret_cast<const T*>(getInputBuffer(index));
    }

    template <typename T>
    T* getOutputBuffer(uint32_t index) {
        return reinterpret_cast<T*>(getOutputBuffer(index));
    }

    template <typename T>
    T getInputValue(uint32_t index) const {
        return getInputBuffer<T>(index)[0];
    }
};

// Verifies that the number and types of operation inputs are as expected.
bool validateInputTypes(const IOperationValidationContext* context,
                        const std::vector<OperandType>& expectedTypes);

// Verifies that the number and types of operation outputs are as expected.
bool validateOutputTypes(const IOperationValidationContext* context,
                         const std::vector<OperandType>& expectedTypes);

// Verifies that the HAL version specified in the context is greater or equal
// than the minimal supported HAL version.
bool validateVersion(const IOperationValidationContext* context, Version contextVersion,
                     Version minSupportedVersion);

// Verifies that the two shapes are the same.
bool SameShape(const Shape& in1, const Shape& in2);

// Sets out to the same shape as in.
bool SetShape(const Shape& in, Shape* out);

// Return the total number of elements, i.e. all the dimensions multiplied
// together. For a scalar, returns one.
uint32_t getNumberOfElements(const Shape& shape);
uint32_t getNumberOfElements(const Shape& shape, size_t firstAxisInclusive,
                             size_t lastAxisExclusive);

uint32_t getNumberOfDimensions(const Shape& shape);

uint32_t getSizeOfDimension(const Shape& shape, uint32_t dimensionIdx);

uint32_t hasKnownRank(const Shape& shape);

// Converts an axis index from the range [-dims, dims) into the range [0, dims).
bool handleNegativeAxis(int32_t numberOfDimensions, int32_t* axis);

inline bool handleNegativeAxis(const Shape& shape, int32_t* axis) {
    return handleNegativeAxis(getNumberOfDimensions(shape), axis);
}

inline int32_t computeOutSize(int32_t imageSize, int32_t filterSize, int32_t stride,
                              int32_t paddingHead, int32_t paddingTail) {
    return (imageSize - filterSize + stride + paddingHead + paddingTail) / stride;
}

inline int32_t computeOutSize(int32_t imageSize, int32_t filterSize, int32_t stride,
                              int32_t dilationRate, int32_t paddingHead, int32_t paddingTail) {
    int32_t effectiveFilterSize = ((filterSize - 1) * dilationRate + 1);
    return (imageSize - effectiveFilterSize + stride + paddingHead + paddingTail) / stride;
}

inline int32_t computeOutSizeTransposeConv(int32_t imageSize, int32_t filterSize, int32_t stride,
                                           int32_t paddingHead, int32_t paddingTail) {
    return imageSize * stride + filterSize - stride - paddingHead - paddingTail;
}

[[nodiscard]] bool QuantizeMultiplier(double double_multiplier, int32_t* quantized_multiplier,
                                      int32_t* shift);

[[nodiscard]] bool QuantizeMultiplierSmallerThanOne(double double_multiplier,
                                                    int32_t* quantized_multiplier,
                                                    int32_t* right_shift);

// Same as QuantizeMultiplierSmallerThanOne but returns left shift (i.e. negated
// right shift), so that it has the same interface as
// QuantizeMultiplierGreaterThanOne and QuantizeMultiplier functions.
[[nodiscard]] bool QuantizeMultiplierSmallerThanOneExp(double double_multiplier,
                                                       int32_t* quantized_multiplier,
                                                       int32_t* left_shift);

[[nodiscard]] bool QuantizeMultiplierGreaterThanOne(double double_multiplier,
                                                    int32_t* quantized_multiplier, int* left_shift);

[[nodiscard]] bool GetQuantizedConvolutionMultipler(const Shape& inputShape,
                                                    const Shape& filterShape,
                                                    const Shape& biasShape,
                                                    const Shape& outputShape, double* multiplier);

[[nodiscard]] bool GetQuantizedConvolutionMultiplier(const Shape& inputShape,
                                                     const Shape& filterShape,
                                                     const Shape& outputShape, double* multiplier);

void CalculateActivationRangeUint8(int32_t activation, const Shape& outputShape, int32_t* act_min,
                                   int32_t* act_max);

void CalculateActivationRangeInt8(int32_t activation, const Shape& outputShape, int32_t* act_min,
                                  int32_t* act_max);

void CalculateActivationRangeFloat(int32_t activation, float* activation_min,
                                   float* activation_max);

int32_t CalculateInputRadius(int input_integer_bits, int input_left_shift);

void calculateExplicitPaddingImpl(int32_t in_size, int32_t stride, int32_t dilation_factor,
                                  int32_t filter_size, int32_t padding_implicit,
                                  bool isTransposeConv, int32_t* padding_head,
                                  int32_t* padding_tail);

inline void calculateExplicitPadding(int32_t in_size, int32_t stride, int32_t dilation_factor,
                                     int32_t filter_size, int32_t padding_implicit,
                                     int32_t* padding_head, int32_t* padding_tail) {
    calculateExplicitPaddingImpl(in_size, stride, dilation_factor, filter_size, padding_implicit,
                                 /*isTransposeConv=*/false, padding_head, padding_tail);
}

inline void calculateExplicitPadding(int32_t in_size, int32_t stride, int32_t filter_size,
                                     int32_t padding_implicit, int32_t* padding_head,
                                     int32_t* padding_tail) {
    calculateExplicitPadding(in_size, stride, 1, filter_size, padding_implicit, padding_head,
                             padding_tail);
}

inline void calculateExplicitPaddingTransposeConv(int32_t in_size, int32_t stride,
                                                  int32_t filter_size, int32_t padding_implicit,
                                                  int32_t* padding_head, int32_t* padding_tail) {
    calculateExplicitPaddingImpl(in_size, stride, /*dilation_factor=*/1, filter_size,
                                 padding_implicit, /*isTransposeConv=*/true, padding_head,
                                 padding_tail);
}

inline PaddingScheme getPaddingScheme(int32_t inWidth, int32_t inHeight, int32_t strideWidth,
                                      int32_t strideHeight, int32_t filterWidth,
                                      int32_t filterHeight, int32_t paddingLeft,
                                      int32_t paddingRight, int32_t paddingTop,
                                      int32_t paddingBottom) {
    if (paddingLeft == 0 && paddingRight == 0 && paddingTop == 0 && paddingBottom == 0) {
        return kPaddingValid;
    }

    int32_t expectedPaddingLeft, expectedPaddingRight;
    int32_t expectedPaddingTop, expectedPaddingBottom;

    calculateExplicitPadding(inWidth, strideWidth, filterWidth, kPaddingSame, &expectedPaddingLeft,
                             &expectedPaddingRight);
    calculateExplicitPadding(inHeight, strideHeight, filterHeight, kPaddingSame,
                             &expectedPaddingTop, &expectedPaddingBottom);
    if (expectedPaddingLeft == paddingLeft && expectedPaddingRight == paddingRight &&
        expectedPaddingTop == paddingTop && expectedPaddingBottom == paddingBottom) {
        return kPaddingSame;
    } else {
        return kPaddingUnknown;
    }
}

// Reverse order of bits in the mask to match the expected order in kernel
inline int ReverseMaskBits(int mask, int num_dimensions) {
    int out = 0;
    for (int dim = 0; dim < num_dimensions; dim++) {
        out <<= 1;
        out += (mask & 1);
        mask >>= 1;
    }
    return out;
}

// Compute the positive remainder.
inline int32_t PositiveRemainder(int32_t dividend, int32_t divisor) {
    return (divisor + (dividend % divisor)) % divisor;
}

// Compute clamped index.
inline int32_t ClampedIndex(int32_t index, int dim, bool pos_stride) {
    return pos_stride
                   ? (index >= dim ? dim
                                   : PositiveRemainder(std::min(std::max(index, -dim), dim), dim))
                   : (index < -dim
                              ? -1
                              : PositiveRemainder(std::min(std::max(index, -dim), dim - 1), dim));
}

// Broadcasts input shape against one another and puts the result into output
// shape. Returns true on success and false on error.
bool calculateBroadcastedShape(const Shape& in1, const Shape& in2, Shape* out);

// Dequantizes a value and quantizes it back using new scale and offset.
template <typename T>
T requantize(T value, const Shape& oldShape, const Shape& newShape);

// Preparation functions for the corresponding ops
bool floorPrepare(const Shape& input, Shape* output);

bool depthwiseConvPrepare(const Shape& input, const Shape& filter, const Shape& bias,
                          int32_t padding_left, int32_t padding_right, int32_t padding_top,
                          int32_t padding_bottom, int32_t stride_width, int32_t stride_height,
                          int32_t depth_multiplier, int32_t dilation_width_factor,
                          int32_t dilation_height_factor, Shape* output);

bool genericActivationPrepare(const Shape& input, Shape* output);

bool reshapePrepare(const Shape& input, const int32_t* targetDims, const int32_t targetDimsSize,
                    Shape* output);

bool depthToSpacePrepare(const Shape& input, int32_t blockSize, Shape* output);

bool spaceToDepthPrepare(const Shape& input, int32_t blockSize, Shape* output);

bool embeddingLookupPrepare(const Shape& valueShape, const Shape& lookupShape, Shape* outputShape);

bool hashtableLookupPrepare(const Shape& lookupShape, const Shape& keyShape,
                            const Shape& valueShape, Shape* outputShape, Shape* hitShape);

bool padPrepare(const Shape& input, const int32_t* paddingsData, const Shape& paddingsShape,
                Shape* output);

bool batchToSpacePrepare(const Shape& input, const int32_t* blockSizeData,
                         const Shape& blockSizeShape, Shape* output);

bool spaceToBatchPrepare(const Shape& input, const int32_t* blockSizeData,
                         const Shape& blockSizeShape, const int32_t* paddingsData,
                         const Shape& paddingsShape, Shape* output);

bool meanPrepare(const Shape& input, const int32_t* axisData, const Shape& axisShape, bool keepDims,
                 Shape* output);

bool argMinMaxPrepare(const Shape& input, int32_t axis, Shape* output);

bool splitPrepare(const Shape& input, int32_t axis, int32_t numOutputs, std::vector<Shape>* output);

bool groupedConvPrepare(const Shape& input, const Shape& filter, const Shape& bias,
                        int32_t padding_left, int32_t padding_right, int32_t padding_top,
                        int32_t padding_bottom, int32_t stride_width, int32_t stride_height,
                        int32_t numGroups, Shape* output);

// Transposes the first two dimensions.
template <typename T>
inline bool transposeFirstTwoDimensions(const T* buffer, const Shape& shape, T* transposedBuffer) {
    const int numDims = getNumberOfDimensions(shape);
    NN_RET_CHECK(numDims >= 2);
    const int firstDim = getSizeOfDimension(shape, 0);
    const int secondDim = getSizeOfDimension(shape, 1);
    int blockSize = 1;
    for (int i = 2; i < numDims; ++i) {
        blockSize *= getSizeOfDimension(shape, i);
    }

    for (int i = 0; i < firstDim; ++i) {
        for (int j = 0; j < secondDim; ++j) {
            for (int k = 0; k < blockSize; ++k) {
                transposedBuffer[(j * firstDim + i) * blockSize + k] =
                        buffer[(i * secondDim + j) * blockSize + k];
            }
        }
    }
    return true;
}

inline bool transposeFirstTwoDimensions(const Shape& shape, Shape* transposedShape) {
    NN_RET_CHECK(getNumberOfDimensions(shape) >= 2);
    *transposedShape = shape;
    transposedShape->dimensions[0] = shape.dimensions[1];
    transposedShape->dimensions[1] = shape.dimensions[0];
    return true;
}

// Given two 3-dimensional tensors, merge them into one 3-dimensional tensor
// at the third dimension. The merged tensor's third dimension size will be
// sum of that of the two inputs.
template <typename T>
inline bool mergeThirdDimension(const T* bufferA, const std::vector<uint32_t>& dimsA,
                                const T* bufferB, const std::vector<uint32_t>& dimsB, T* merged) {
    NN_RET_CHECK_EQ(dimsA.size(), 3u);
    NN_RET_CHECK_EQ(dimsB.size(), 3u);

    NN_RET_CHECK_EQ(dimsA[0], dimsB[0]);
    NN_RET_CHECK_EQ(dimsA[1], dimsB[1]);

    for (unsigned int i = 0; i < dimsA[0]; ++i) {
        for (unsigned int j = 0; j < dimsA[1]; ++j) {
            for (unsigned int k = 0; k < dimsA[2]; ++k) {
                merged[(i * dimsA[1] + j) * (dimsA[2] + dimsB[2]) + k] =
                        bufferA[(i * dimsA[1] + j) * dimsA[2] + k];
            }
            for (unsigned int k = 0; k < dimsB[2]; ++k) {
                merged[(i * dimsA[1] + j) * (dimsA[2] + dimsB[2]) + dimsA[2] + k] =
                        bufferB[(i * dimsB[1] + j) * dimsB[2] + k];
            }
        }
    }
    return true;
}

template <typename T>
inline T saturateCast(int32_t val);

template <>
inline uint8_t saturateCast<uint8_t>(int32_t val) {
    return static_cast<int8_t>(std::max(0, std::min(255, val)));
}

template <>
inline int8_t saturateCast<int8_t>(int32_t val) {
    return static_cast<int8_t>(std::max(-128, std::min(127, val)));
}

}  // namespace nn
}  // namespace android

#endif  // ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_UTILS_H
