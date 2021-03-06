// Generated from heatmap_max_keypoint_quant8_signed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;  // NOLINT(google-build-using-namespace)

namespace generated_tests::heatmap_max_keypoint_quant8_signed {

const TestModel& get_test_model_nhwc_quant8_signed() {
    static TestModel model = {
        .main = {
                .operands = {{ // heatmap
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {2, 4, 4, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({19, 61, 49, 1, 98, 65, 64, 70, 76, 55, 83, 19, 46, 3, 67, 71, 17, 23, 89, 8, 96, 65, 52, 40, 36, 80, 55, 89, 58, 29, 27, 69, 66, 6, 51, 26, 96, 38, 41, 89, 88, 46, 96, 73, 54, 64, 84, 74, 51, 41, 13, 19, 52, 21, 50, 75, 89, 89, 20, 58, 70, 13, 29, 39, 91, 6, 93, 34, 80, 87, 59, 67, 57, 85, 24, 25, 76, 34, 37, 11, 0, 29, 30, 77, 34, 57, 48, 76, 93, 18, 64, 12, 67, 47, 56, 50, 48, 99, 46, 66, 98, 6, 10, 66, 66, 91, 67, 23, 40, 37, 17, 35, 48, 98, 47, 49, 56, 18, 75, 29, 4, 23, 42, 55, 38, 7, 71, 80})
                        }, { // boxes
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {2, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({40, 16, 80, 160, 8, 56, 240, 80})
                        }, { // layout
                            .type = TestOperandType::BOOL,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<bool8>({false})
                        }, { // score
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {2, 4},
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .zeroPoint = -128,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-26, -39, -27, -33, -29, -21, -35, -48})
                        }, { // keypoint
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {2, 4, 2},
                            .numberOfConsumers = 0,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({58, 34, 65, 142, 68, 101, 67, 81, 99, 71, 37, 74, 37, 59, 211, 77})
                        }},
                .operations = {{
                            .type = TestOperationType::HEATMAP_MAX_KEYPOINT,
                            .inputs = {0, 1, 2},
                            .outputs = {3, 4}
                        }},
                .inputIndexes = {0, 1},
                .outputIndexes = {3, 4}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_3
    };
    return model;
}

const auto dummy_test_model_nhwc_quant8_signed = TestModelManager::get().add("heatmap_max_keypoint_quant8_signed_nhwc_quant8_signed", get_test_model_nhwc_quant8_signed());

}  // namespace generated_tests::heatmap_max_keypoint_quant8_signed

namespace generated_tests::heatmap_max_keypoint_quant8_signed {

const TestModel& get_test_model_nhwc_quant8_signed_all_inputs_as_internal() {
    static TestModel model = {
        .main = {
                .operands = {{ // heatmap
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {2, 4, 4, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({})
                        }, { // boxes
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {2, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({40, 16, 80, 160, 8, 56, 240, 80})
                        }, { // layout
                            .type = TestOperandType::BOOL,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<bool8>({false})
                        }, { // score
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {2, 4},
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .zeroPoint = -128,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-26, -39, -27, -33, -29, -21, -35, -48})
                        }, { // keypoint
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {2, 4, 2},
                            .numberOfConsumers = 0,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({58, 34, 65, 142, 68, 101, 67, 81, 99, 71, 37, 74, 37, 59, 211, 77})
                        }, { // heatmap_new
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {2, 4, 4, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({19, 61, 49, 1, 98, 65, 64, 70, 76, 55, 83, 19, 46, 3, 67, 71, 17, 23, 89, 8, 96, 65, 52, 40, 36, 80, 55, 89, 58, 29, 27, 69, 66, 6, 51, 26, 96, 38, 41, 89, 88, 46, 96, 73, 54, 64, 84, 74, 51, 41, 13, 19, 52, 21, 50, 75, 89, 89, 20, 58, 70, 13, 29, 39, 91, 6, 93, 34, 80, 87, 59, 67, 57, 85, 24, 25, 76, 34, 37, 11, 0, 29, 30, 77, 34, 57, 48, 76, 93, 18, 64, 12, 67, 47, 56, 50, 48, 99, 46, 66, 98, 6, 10, 66, 66, 91, 67, 23, 40, 37, 17, 35, 48, 98, 47, 49, 56, 18, 75, 29, 4, 23, 42, 55, 38, 7, 71, 80})
                        }, { // placeholder
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({0})
                        }, { // param
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }},
                .operations = {{
                            .type = TestOperationType::ADD,
                            .inputs = {5, 6, 7},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::HEATMAP_MAX_KEYPOINT,
                            .inputs = {0, 1, 2},
                            .outputs = {3, 4}
                        }},
                .inputIndexes = {1, 5},
                .outputIndexes = {3, 4}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_3
    };
    return model;
}

const auto dummy_test_model_nhwc_quant8_signed_all_inputs_as_internal = TestModelManager::get().add("heatmap_max_keypoint_quant8_signed_nhwc_quant8_signed_all_inputs_as_internal", get_test_model_nhwc_quant8_signed_all_inputs_as_internal());

}  // namespace generated_tests::heatmap_max_keypoint_quant8_signed

namespace generated_tests::heatmap_max_keypoint_quant8_signed {

const TestModel& get_test_model_nchw_quant8_signed() {
    static TestModel model = {
        .main = {
                .operands = {{ // heatmap
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {2, 4, 4, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({19, 98, 76, 46, 17, 96, 36, 58, 66, 96, 88, 54, 51, 52, 89, 70, 61, 65, 55, 3, 23, 65, 80, 29, 6, 38, 46, 64, 41, 21, 89, 13, 49, 64, 83, 67, 89, 52, 55, 27, 51, 41, 96, 84, 13, 50, 20, 29, 1, 70, 19, 71, 8, 40, 89, 69, 26, 89, 73, 74, 19, 75, 58, 39, 91, 80, 57, 76, 0, 34, 93, 67, 48, 98, 66, 40, 48, 56, 4, 38, 6, 87, 85, 34, 29, 57, 18, 47, 99, 6, 91, 37, 98, 18, 23, 7, 93, 59, 24, 37, 30, 48, 64, 56, 46, 10, 67, 17, 47, 75, 42, 71, 34, 67, 25, 11, 77, 76, 12, 50, 66, 66, 23, 35, 49, 29, 55, 80})
                        }, { // boxes
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {2, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({40, 16, 80, 160, 8, 56, 240, 80})
                        }, { // layout
                            .type = TestOperandType::BOOL,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<bool8>({true})
                        }, { // score
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {2, 4},
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .zeroPoint = -128,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-26, -39, -27, -33, -29, -21, -35, -48})
                        }, { // keypoint
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {2, 4, 2},
                            .numberOfConsumers = 0,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({58, 34, 65, 142, 68, 101, 67, 81, 99, 71, 37, 74, 37, 59, 211, 77})
                        }},
                .operations = {{
                            .type = TestOperationType::HEATMAP_MAX_KEYPOINT,
                            .inputs = {0, 1, 2},
                            .outputs = {3, 4}
                        }},
                .inputIndexes = {0, 1},
                .outputIndexes = {3, 4}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_3
    };
    return model;
}

const auto dummy_test_model_nchw_quant8_signed = TestModelManager::get().add("heatmap_max_keypoint_quant8_signed_nchw_quant8_signed", get_test_model_nchw_quant8_signed());

}  // namespace generated_tests::heatmap_max_keypoint_quant8_signed

namespace generated_tests::heatmap_max_keypoint_quant8_signed {

const TestModel& get_test_model_nchw_quant8_signed_all_inputs_as_internal() {
    static TestModel model = {
        .main = {
                .operands = {{ // heatmap
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {2, 4, 4, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({})
                        }, { // boxes
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {2, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({40, 16, 80, 160, 8, 56, 240, 80})
                        }, { // layout
                            .type = TestOperandType::BOOL,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<bool8>({true})
                        }, { // score
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {2, 4},
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .zeroPoint = -128,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-26, -39, -27, -33, -29, -21, -35, -48})
                        }, { // keypoint
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {2, 4, 2},
                            .numberOfConsumers = 0,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({58, 34, 65, 142, 68, 101, 67, 81, 99, 71, 37, 74, 37, 59, 211, 77})
                        }, { // heatmap_new
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {2, 4, 4, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({19, 98, 76, 46, 17, 96, 36, 58, 66, 96, 88, 54, 51, 52, 89, 70, 61, 65, 55, 3, 23, 65, 80, 29, 6, 38, 46, 64, 41, 21, 89, 13, 49, 64, 83, 67, 89, 52, 55, 27, 51, 41, 96, 84, 13, 50, 20, 29, 1, 70, 19, 71, 8, 40, 89, 69, 26, 89, 73, 74, 19, 75, 58, 39, 91, 80, 57, 76, 0, 34, 93, 67, 48, 98, 66, 40, 48, 56, 4, 38, 6, 87, 85, 34, 29, 57, 18, 47, 99, 6, 91, 37, 98, 18, 23, 7, 93, 59, 24, 37, 30, 48, 64, 56, 46, 10, 67, 17, 47, 75, 42, 71, 34, 67, 25, 11, 77, 76, 12, 50, 66, 66, 23, 35, 49, 29, 55, 80})
                        }, { // placeholder1
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.01f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({0})
                        }, { // param1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }},
                .operations = {{
                            .type = TestOperationType::ADD,
                            .inputs = {5, 6, 7},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::HEATMAP_MAX_KEYPOINT,
                            .inputs = {0, 1, 2},
                            .outputs = {3, 4}
                        }},
                .inputIndexes = {1, 5},
                .outputIndexes = {3, 4}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_3
    };
    return model;
}

const auto dummy_test_model_nchw_quant8_signed_all_inputs_as_internal = TestModelManager::get().add("heatmap_max_keypoint_quant8_signed_nchw_quant8_signed_all_inputs_as_internal", get_test_model_nchw_quant8_signed_all_inputs_as_internal());

}  // namespace generated_tests::heatmap_max_keypoint_quant8_signed

namespace generated_tests::heatmap_max_keypoint_quant8_signed {

const TestModel& get_test_model_nhwc_quant8_signed_2() {
    static TestModel model = {
        .main = {
                .operands = {{ // heatmap1
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {5, 4, 4, 1},
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-20, -2, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -2, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 20, -6, 10, -20, -2, 8, -10, -16, -4, 8, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -2, 8, 20, -16, -4, 8, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -112, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 4, -6, 10})
                        }, { // boxes1
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {5, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({40, 16, 80, 160, 8, 56, 240, 80, 64, 24, 120, 104, 48, 40, 152, 96, 40, 16, 80, 160})
                        }, { // layout
                            .type = TestOperandType::BOOL,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<bool8>({false})
                        }, { // score1
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {5, 1},
                            .numberOfConsumers = 0,
                            .scale = 0.1f,
                            .zeroPoint = -118,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-27, -18, -46, -18, -11})
                        }, { // keypoint1
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {5, 1, 2},
                            .numberOfConsumers = 0,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({66, 68, 94, 77, 71, 76, 139, 47, 77, 16})
                        }},
                .operations = {{
                            .type = TestOperationType::HEATMAP_MAX_KEYPOINT,
                            .inputs = {0, 1, 2},
                            .outputs = {3, 4}
                        }},
                .inputIndexes = {0, 1},
                .outputIndexes = {3, 4}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_3
    };
    return model;
}

const auto dummy_test_model_nhwc_quant8_signed_2 = TestModelManager::get().add("heatmap_max_keypoint_quant8_signed_nhwc_quant8_signed_2", get_test_model_nhwc_quant8_signed_2());

}  // namespace generated_tests::heatmap_max_keypoint_quant8_signed

namespace generated_tests::heatmap_max_keypoint_quant8_signed {

const TestModel& get_test_model_nhwc_quant8_signed_all_inputs_as_internal_2() {
    static TestModel model = {
        .main = {
                .operands = {{ // heatmap1
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {5, 4, 4, 1},
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({})
                        }, { // boxes1
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {5, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({40, 16, 80, 160, 8, 56, 240, 80, 64, 24, 120, 104, 48, 40, 152, 96, 40, 16, 80, 160})
                        }, { // layout
                            .type = TestOperandType::BOOL,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<bool8>({false})
                        }, { // score1
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {5, 1},
                            .numberOfConsumers = 0,
                            .scale = 0.1f,
                            .zeroPoint = -118,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-27, -18, -46, -18, -11})
                        }, { // keypoint1
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {5, 1, 2},
                            .numberOfConsumers = 0,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({66, 68, 94, 77, 71, 76, 139, 47, 77, 16})
                        }, { // heatmap1_new
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {5, 4, 4, 1},
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-20, -2, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -2, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 20, -6, 10, -20, -2, 8, -10, -16, -4, 8, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -2, 8, 20, -16, -4, 8, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -112, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 4, -6, 10})
                        }, { // placeholder2
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({0})
                        }, { // param2
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }},
                .operations = {{
                            .type = TestOperationType::ADD,
                            .inputs = {5, 6, 7},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::HEATMAP_MAX_KEYPOINT,
                            .inputs = {0, 1, 2},
                            .outputs = {3, 4}
                        }},
                .inputIndexes = {1, 5},
                .outputIndexes = {3, 4}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_3
    };
    return model;
}

const auto dummy_test_model_nhwc_quant8_signed_all_inputs_as_internal_2 = TestModelManager::get().add("heatmap_max_keypoint_quant8_signed_nhwc_quant8_signed_all_inputs_as_internal_2", get_test_model_nhwc_quant8_signed_all_inputs_as_internal_2());

}  // namespace generated_tests::heatmap_max_keypoint_quant8_signed

namespace generated_tests::heatmap_max_keypoint_quant8_signed {

const TestModel& get_test_model_nchw_quant8_signed_2() {
    static TestModel model = {
        .main = {
                .operands = {{ // heatmap1
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {5, 1, 4, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-20, -2, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -2, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 20, -6, 10, -20, -2, 8, -10, -16, -4, 8, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -2, 8, 20, -16, -4, 8, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -112, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 4, -6, 10})
                        }, { // boxes1
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {5, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({40, 16, 80, 160, 8, 56, 240, 80, 64, 24, 120, 104, 48, 40, 152, 96, 40, 16, 80, 160})
                        }, { // layout
                            .type = TestOperandType::BOOL,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<bool8>({true})
                        }, { // score1
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {5, 1},
                            .numberOfConsumers = 0,
                            .scale = 0.1f,
                            .zeroPoint = -118,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-27, -18, -46, -18, -11})
                        }, { // keypoint1
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {5, 1, 2},
                            .numberOfConsumers = 0,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({66, 68, 94, 77, 71, 76, 139, 47, 77, 16})
                        }},
                .operations = {{
                            .type = TestOperationType::HEATMAP_MAX_KEYPOINT,
                            .inputs = {0, 1, 2},
                            .outputs = {3, 4}
                        }},
                .inputIndexes = {0, 1},
                .outputIndexes = {3, 4}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_3
    };
    return model;
}

const auto dummy_test_model_nchw_quant8_signed_2 = TestModelManager::get().add("heatmap_max_keypoint_quant8_signed_nchw_quant8_signed_2", get_test_model_nchw_quant8_signed_2());

}  // namespace generated_tests::heatmap_max_keypoint_quant8_signed

namespace generated_tests::heatmap_max_keypoint_quant8_signed {

const TestModel& get_test_model_nchw_quant8_signed_all_inputs_as_internal_2() {
    static TestModel model = {
        .main = {
                .operands = {{ // heatmap1
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {5, 1, 4, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({})
                        }, { // boxes1
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {5, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({40, 16, 80, 160, 8, 56, 240, 80, 64, 24, 120, 104, 48, 40, 152, 96, 40, 16, 80, 160})
                        }, { // layout
                            .type = TestOperandType::BOOL,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<bool8>({true})
                        }, { // score1
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {5, 1},
                            .numberOfConsumers = 0,
                            .scale = 0.1f,
                            .zeroPoint = -118,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-27, -18, -46, -18, -11})
                        }, { // keypoint1
                            .type = TestOperandType::TENSOR_QUANT16_ASYMM,
                            .dimensions = {5, 1, 2},
                            .numberOfConsumers = 0,
                            .scale = 0.125f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<uint16_t>({66, 68, 94, 77, 71, 76, 139, 47, 77, 16})
                        }, { // heatmap1_new
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {5, 1, 4, 4},
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({-20, -2, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -2, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 20, -6, 10, -20, -2, 8, -10, -16, -4, 8, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -2, 8, 20, -16, -4, 8, 2, 14, -4, 6, -14, -4, 4, -6, 10, -20, -112, 8, -10, -16, -4, 18, 2, 14, -4, 6, -14, -4, 4, -6, 10})
                        }, { // placeholder3
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int8_t>({0})
                        }, { // param3
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }},
                .operations = {{
                            .type = TestOperationType::ADD,
                            .inputs = {5, 6, 7},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::HEATMAP_MAX_KEYPOINT,
                            .inputs = {0, 1, 2},
                            .outputs = {3, 4}
                        }},
                .inputIndexes = {1, 5},
                .outputIndexes = {3, 4}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_3
    };
    return model;
}

const auto dummy_test_model_nchw_quant8_signed_all_inputs_as_internal_2 = TestModelManager::get().add("heatmap_max_keypoint_quant8_signed_nchw_quant8_signed_all_inputs_as_internal_2", get_test_model_nchw_quant8_signed_all_inputs_as_internal_2());

}  // namespace generated_tests::heatmap_max_keypoint_quant8_signed

