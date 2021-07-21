// Generated from conv_1_h3_w2_VALID.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::conv_1_h3_w2_VALID {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // op2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f}),
                            .dimensions = {1, 3, 2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // b4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f}),
                            .dimensions = {1, 6, 7, 1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7},
                            .type = TestOperationType::CONV_2D
                        }},
                .outputIndexes = {7}
            },
        .minSupportedVersion = TestHalVersion::V1_0,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("conv_1_h3_w2_VALID", get_test_model());

}  // namespace generated_tests::conv_1_h3_w2_VALID

namespace generated_tests::conv_1_h3_w2_VALID {

const TestModel& get_test_model_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {8},
                .operands = {{ // op2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f}),
                            .dimensions = {1, 3, 2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // b4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f}),
                            .dimensions = {1, 6, 7, 1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {8, 9, 10},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7},
                            .type = TestOperationType::CONV_2D
                        }},
                .outputIndexes = {7}
            },
        .minSupportedVersion = TestHalVersion::V1_0,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal = TestModelManager::get().add("conv_1_h3_w2_VALID_all_inputs_as_internal", get_test_model_all_inputs_as_internal());

}  // namespace generated_tests::conv_1_h3_w2_VALID

namespace generated_tests::conv_1_h3_w2_VALID {

const TestModel& get_test_model_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1, 2},
                .operands = {{ // op2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f}),
                            .dimensions = {1, 3, 2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // b4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f}),
                            .dimensions = {1, 6, 7, 1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7},
                            .type = TestOperationType::CONV_2D
                        }},
                .outputIndexes = {7}
            },
        .minSupportedVersion = TestHalVersion::V1_0,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_tensors_as_inputs = TestModelManager::get().add("conv_1_h3_w2_VALID_all_tensors_as_inputs", get_test_model_all_tensors_as_inputs());

}  // namespace generated_tests::conv_1_h3_w2_VALID

namespace generated_tests::conv_1_h3_w2_VALID {

const TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {8, 11, 14},
                .operands = {{ // op2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 3, 2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // b4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.72003f, 1.55816f, 0.667546f, 2.23663f, 0.0661516f, 0.290254f, 0.770222f, -1.58197f, -0.850595f, -0.484224f, 0.949967f, -0.577263f, -0.871949f, 2.34132f, -0.135965f, -0.985713f, 0.815147f, 1.03114f, -1.41915f, -0.515534f, -0.373639f, -1.50604f, 0.673113f, 3.06139f, -0.388578f, -1.76707f, -0.315667f, -1.03815f, 0.432787f, -1.41643f, 1.12944f, -0.175806f, -0.846415f, 1.40095f, 0.70832f, 2.19562f, -2.61266f, -0.705383f, 1.26124f, 1.46545f, -2.35761f, 2.04494f}),
                            .dimensions = {1, 6, 7, 1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.869931f, 0.644628f, -0.918393f, 0.153672f, 0.868562f, -0.358177f, -0.134931f, -0.247565f, 0.22174f, -0.259157f, -0.284296f, -0.538065f, 0.765559f, 0.41986f, -0.556241f, 0.658494f, 0.214355f, -0.850169f, -0.252893f, -0.478935f, 0.530526f, -0.0700663f, -0.988729f, -0.303061f, 0.150845f, 0.829915f, 0.476349f, 0.406537f, -0.355343f, 0.757145f, -0.356362f, 0.800482f, -0.713861f, 0.210483f, -0.634303f, 0.718236f, -0.752038f, 0.457547f, -0.550769f, -0.551178f, 0.446766f, -0.227462f, 0.216348f, -0.852806f, -0.351486f, 0.55906f, -0.668493f, -0.303493f, -0.363763f, -0.162837f, 0.0701012f, 0.756097f, -0.142269f, 0.329724f, -0.656317f, -0.998086f, -0.652949f, -0.40316f, -0.893682f, 0.432744f, 0.612362f, -0.869588f, -0.71327f, -0.398092f, -0.0423559f, 0.436576f, -0.925272f, 0.176549f, 0.822904f, 0.096833f, -0.296802f, -0.427195f, 0.031654f, -0.254479f, 0.244905f, 0.0948254f, 0.643769f, -0.90391f, 0.352665f, -0.901179f, 0.266159f, -0.968068f, -0.615401f, -0.388975f, 0.939052f, -0.116289f, 0.107523f, -0.0582711f, 0.435172f, 0.334675f, 0.459711f, 0.717436f, 0.496627f, -0.680175f, -0.415066f, 0.339848f, 0.506004f, -0.337808f, -0.107218f, -0.172496f, 0.870638f, 0.931872f, -0.953884f, 0.903042f, 0.760078f, 0.209727f, -0.285384f, -0.45514f, 0.113194f, 0.0756611f, 0.0924435f, -0.472863f, 0.960609f, -0.160385f, -0.839445f, 0.457097f, 0.163348f, 0.344867f, -0.131619f, 0.688715f, -0.540827f, 0.571259f, -0.95587f, 0.506164f, -0.155839f, 0.0789621f, 0.756772f, -0.662069f, 0.242908f, 0.460821f, 0.177872f, -0.289839f, -0.640603f, 0.702598f, -0.506406f, -0.568262f, -0.0713716f, 0.413792f, 0.159673f, -0.305208f, 0.133816f, -0.160254f, 0.787323f, -0.753244f, 0.600721f, 0.263186f, -0.162387f, 0.477962f, -0.702951f, -0.731036f, -0.939481f, -0.524519f, 0.934072f, -0.511637f, -0.503499f, 0.106236f, -0.323684f, 0.534444f, -0.843745f, 0.364171f, 0.0370358f, -0.168801f, -0.404559f, -0.814178f, 0.91745f, -0.334276f, 0.66925f, -0.801201f, 0.156511f, -0.427949f, 0.379153f, 0.818597f, -0.649902f, 0.427087f, -0.586015f, -0.559789f, -0.833923f, 0.0892409f, -0.621251f, 0.213826f, 0.465509f, 0.4704f, 0.380261f, 0.413067f, 0.180822f, 0.172866f, 0.59614f, 0.825575f, 0.662916f, -0.704381f, -0.297631f, 0.697778f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op0_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f}),
                            .dimensions = {1, 3, 2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op1_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {8, 9, 10},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {11, 12, 13},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {14, 15, 16},
                            .outputs = {2},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7},
                            .type = TestOperationType::CONV_2D
                        }},
                .outputIndexes = {7}
            },
        .minSupportedVersion = TestHalVersion::V1_0,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("conv_1_h3_w2_VALID_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::conv_1_h3_w2_VALID

namespace generated_tests::conv_1_h3_w2_VALID {

const TestModel& get_test_model_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // op2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f}),
                            .dimensions = {1, 3, 2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // b4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f}),
                            .dimensions = {1, 6, 7, 1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7},
                            .type = TestOperationType::CONV_2D
                        }},
                .outputIndexes = {7}
            },
        .minSupportedVersion = TestHalVersion::V1_0,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_2 = TestModelManager::get().add("conv_1_h3_w2_VALID_2", get_test_model_2());

}  // namespace generated_tests::conv_1_h3_w2_VALID

namespace generated_tests::conv_1_h3_w2_VALID {

const TestModel& get_test_model_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {8},
                .operands = {{ // op2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f}),
                            .dimensions = {1, 3, 2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // b4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f}),
                            .dimensions = {1, 6, 7, 1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {8, 9, 10},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7},
                            .type = TestOperationType::CONV_2D
                        }},
                .outputIndexes = {7}
            },
        .minSupportedVersion = TestHalVersion::V1_0,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_2 = TestModelManager::get().add("conv_1_h3_w2_VALID_all_inputs_as_internal_2", get_test_model_all_inputs_as_internal_2());

}  // namespace generated_tests::conv_1_h3_w2_VALID

namespace generated_tests::conv_1_h3_w2_VALID {

const TestModel& get_test_model_all_tensors_as_inputs_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1, 2},
                .operands = {{ // op2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f}),
                            .dimensions = {1, 3, 2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // b4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f}),
                            .dimensions = {1, 6, 7, 1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7},
                            .type = TestOperationType::CONV_2D
                        }},
                .outputIndexes = {7}
            },
        .minSupportedVersion = TestHalVersion::V1_0,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_tensors_as_inputs_2 = TestModelManager::get().add("conv_1_h3_w2_VALID_all_tensors_as_inputs_2", get_test_model_all_tensors_as_inputs_2());

}  // namespace generated_tests::conv_1_h3_w2_VALID

namespace generated_tests::conv_1_h3_w2_VALID {

const TestModel& get_test_model_all_tensors_as_inputs_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {8, 11, 14},
                .operands = {{ // op2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 3, 2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // b4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // b7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.28735f, 1.91315f, 2.51734f, 0.375841f, 0.637563f, 2.653f, 2.72959f, 1.17389f, -2.12119f, 2.91417f, -2.24246f, 0.0497045f, -0.127107f, -0.144473f, -0.393284f, -2.02346f, -0.239178f, -0.246508f, 1.29277f, 1.32963f, 0.117521f, 0.0665713f, 1.09438f, -1.31426f, 2.52594f, -0.969211f, 0.515478f, -1.60926f, 0.135211f, 0.786415f, -1.14382f, -0.739102f, -1.01731f, 0.281615f, 2.36311f, 1.93872f, -0.150491f, 3.45217f, 2.28219f, 1.18282f, -2.25086f, 3.05468f}),
                            .dimensions = {1, 6, 7, 1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // op2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.295335f, -0.00387601f, -0.552251f, 0.166084f, -0.28482f, -0.152143f, -0.719885f, -0.869386f, -0.745598f, 0.823947f, 0.473183f, -0.331337f, 0.187631f, 0.0426571f, -0.826897f, -0.755085f, -0.472453f, -0.0233656f, 0.0483436f, 0.933418f, -0.961974f, 0.0125783f, 0.219742f, 0.342604f, -0.15166f, 0.0934905f, 0.783221f, 0.129664f, 0.838844f, -0.271388f, 0.924519f, 0.342843f, 0.274418f, 0.350817f, 0.841638f, -0.543993f, -0.00283395f, -0.128467f, -0.682943f, -0.319117f, 0.84634f, 0.283003f, 0.32865f, 0.0293755f, -0.0335696f, 0.591266f, -0.0743476f, -0.741271f, 0.462056f, -0.583625f, -0.590183f, 0.6234f, 0.535269f, -0.670818f, -0.955642f, -0.770173f, 0.479986f, 0.664377f, 0.399445f, -0.968874f, -0.276263f, -0.901951f, 0.544104f, -0.958981f, 0.482658f, -0.807284f, 0.305369f, -0.947818f, 0.827498f, -0.382887f, -0.805741f, -0.796678f, -0.299804f, -0.229828f, 0.818783f, -0.103055f, -0.45568f, -0.227827f, 0.543743f, -0.96073f, 0.946747f, -0.857182f, -0.96426f, -0.292411f, -0.715614f, 0.765278f, -0.475043f, -0.590142f, -0.238507f, 0.673002f, -0.473357f, -0.319626f, 0.936014f, 0.486607f, 0.580844f, 0.425352f, -0.800994f, 0.290763f, -0.494953f, -0.441162f, 0.718677f, -0.828427f, 0.96965f, 7.53637e-05f, -0.699973f, -0.526886f, -0.352682f, 0.799466f, 0.332789f, 0.723389f, 0.407659f, -0.934084f, -0.284705f, 0.961484f, -0.700395f, -0.985808f, -0.595342f, -0.691721f, 0.49448f, -0.0842649f, 0.0390966f, 0.298938f, -0.128094f, -0.97158f, 0.86393f, 0.270606f, -0.468986f, -0.256605f, 0.47215f, -0.273117f, -0.590343f, -0.826529f, -0.725381f, -0.194821f, -0.259661f, -0.0949207f, -0.180302f, 0.0446834f, -0.222133f, -0.40393f, 0.295772f, -0.92949f, 0.580079f, -0.169856f, 0.330311f, 0.0173551f, -0.635823f, 0.475942f, 0.907175f, 0.242777f, -0.512208f, 0.362463f, 0.0496289f, 0.65171f, 0.990057f, 0.690733f, -0.469013f, -0.101311f, -0.68372f, -0.157841f, -0.677711f, -0.708224f, -0.659437f, -0.407607f, 0.677033f, 0.89032f, 0.228307f, -0.749514f, 0.772958f, 0.054701f, 0.551705f, 0.917052f, -0.895022f, -0.702397f, 0.484142f, 0.108648f, 0.833347f, 0.478872f, -0.984112f, 0.387176f, -0.73299f, 0.7526f, 0.443312f, -0.0987856f, 0.125415f, 0.10876f, -0.498108f, 0.43209f, 0.344609f, 0.928941f, -0.130732f, -0.0569167f}),
                            .dimensions = {1, 8, 8, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op0_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.966213f, -0.467474f, -0.82203f, -0.579455f, 0.0278809f, -0.79946f, -0.684259f, 0.563238f, 0.37289f, 0.738216f, 0.386045f, -0.917775f, 0.184325f, -0.270568f, 0.82236f, 0.0973683f, -0.941308f, -0.144706f}),
                            .dimensions = {1, 3, 2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // op1_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {8, 9, 10},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {11, 12, 13},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {14, 15, 16},
                            .outputs = {2},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7},
                            .type = TestOperationType::CONV_2D
                        }},
                .outputIndexes = {7}
            },
        .minSupportedVersion = TestHalVersion::V1_0,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_all_tensors_as_inputs_all_inputs_as_internal_2 = TestModelManager::get().add("conv_1_h3_w2_VALID_all_tensors_as_inputs_all_inputs_as_internal_2", get_test_model_all_tensors_as_inputs_all_inputs_as_internal_2());

}  // namespace generated_tests::conv_1_h3_w2_VALID

