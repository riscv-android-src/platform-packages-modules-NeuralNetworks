// Generated from unidirectional_sequence_rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;  // NOLINT(google-build-using-namespace)

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox() {
    static TestModel model = {
        .main = {
                .operands = {{ // input
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f, 0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f})
                        }, { // weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.461459f, 0.153381f, 0.529743f, -0.00371218f, 0.676267f, -0.211346f, 0.317493f, 0.969689f, -0.343251f, 0.186423f, 0.398151f, 0.152399f, 0.448504f, 0.317662f, 0.523556f, -0.323514f, 0.480877f, 0.333113f, -0.757714f, -0.674487f, -0.643585f, 0.217766f, -0.0251462f, 0.79512f, -0.595574f, -0.422444f, 0.371572f, -0.452178f, -0.556069f, -0.482188f, -0.685456f, -0.727851f, 0.841829f, 0.551535f, -0.232336f, 0.729158f, -0.00294906f, -0.69754f, 0.766073f, -0.178424f, 0.369513f, -0.423241f, 0.548547f, -0.0152023f, -0.757482f, -0.85491f, 0.251331f, -0.989183f, 0.306261f, -0.340716f, 0.886103f, -0.0726757f, -0.723523f, -0.784303f, 0.0354295f, 0.566564f, -0.485469f, -0.620498f, 0.832546f, 0.697884f, -0.279115f, 0.294415f, -0.584313f, 0.548772f, 0.0648819f, 0.968726f, 0.723834f, -0.0080452f, -0.350386f, -0.272803f, 0.115121f, -0.412644f, -0.824713f, -0.992843f, -0.592904f, -0.417893f, 0.863791f, -0.423461f, -0.147601f, -0.770664f, -0.479006f, 0.654782f, 0.587314f, -0.639158f, 0.816969f, -0.337228f, 0.659878f, 0.73107f, 0.754768f, -0.337042f, 0.0960841f, 0.368357f, 0.244191f, -0.817703f, -0.211223f, 0.442012f, 0.37225f, -0.623598f, -0.405423f, 0.455101f, 0.673656f, -0.145345f, -0.511346f, -0.901675f, -0.81252f, -0.127006f, 0.809865f, -0.721884f, 0.636255f, 0.868989f, -0.347973f, -0.10179f, -0.777449f, 0.917274f, 0.819286f, 0.206218f, -0.00785118f, 0.167141f, 0.45872f, 0.972934f, -0.276798f, 0.837861f, 0.747958f, -0.0151566f, -0.330057f, -0.469077f, 0.277308f, 0.415818f})
                        }, { // recurrent_weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f})
                        }, { // bias
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.065691948f, -0.69055247f, 0.1107955f, -0.97084129f, -0.23957068f, -0.23566568f, -0.389184f, 0.47481549f, -0.4791103f, 0.29931796f, 0.10463274f, 0.83918178f, 0.37197268f, 0.61957061f, 0.3956964f, -0.37609905f})
                        }, { // hidden_state
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // activation
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // output
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f, 0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f})
                        }},
                .operations = {{
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {0, 1, 2, 3, 4},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_2
    };
    return model;
}

const auto dummy_test_model_blackbox = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox", get_test_model_blackbox());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_all_inputs_as_internal() {
    static TestModel model = {
        .main = {
                .operands = {{ // input
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // recurrent_weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // bias
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // hidden_state
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // activation
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // output
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f, 0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f})
                        }, { // input_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f, 0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f})
                        }, { // placeholder
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
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
                        }, { // weights_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.461459f, 0.153381f, 0.529743f, -0.00371218f, 0.676267f, -0.211346f, 0.317493f, 0.969689f, -0.343251f, 0.186423f, 0.398151f, 0.152399f, 0.448504f, 0.317662f, 0.523556f, -0.323514f, 0.480877f, 0.333113f, -0.757714f, -0.674487f, -0.643585f, 0.217766f, -0.0251462f, 0.79512f, -0.595574f, -0.422444f, 0.371572f, -0.452178f, -0.556069f, -0.482188f, -0.685456f, -0.727851f, 0.841829f, 0.551535f, -0.232336f, 0.729158f, -0.00294906f, -0.69754f, 0.766073f, -0.178424f, 0.369513f, -0.423241f, 0.548547f, -0.0152023f, -0.757482f, -0.85491f, 0.251331f, -0.989183f, 0.306261f, -0.340716f, 0.886103f, -0.0726757f, -0.723523f, -0.784303f, 0.0354295f, 0.566564f, -0.485469f, -0.620498f, 0.832546f, 0.697884f, -0.279115f, 0.294415f, -0.584313f, 0.548772f, 0.0648819f, 0.968726f, 0.723834f, -0.0080452f, -0.350386f, -0.272803f, 0.115121f, -0.412644f, -0.824713f, -0.992843f, -0.592904f, -0.417893f, 0.863791f, -0.423461f, -0.147601f, -0.770664f, -0.479006f, 0.654782f, 0.587314f, -0.639158f, 0.816969f, -0.337228f, 0.659878f, 0.73107f, 0.754768f, -0.337042f, 0.0960841f, 0.368357f, 0.244191f, -0.817703f, -0.211223f, 0.442012f, 0.37225f, -0.623598f, -0.405423f, 0.455101f, 0.673656f, -0.145345f, -0.511346f, -0.901675f, -0.81252f, -0.127006f, 0.809865f, -0.721884f, 0.636255f, 0.868989f, -0.347973f, -0.10179f, -0.777449f, 0.917274f, 0.819286f, 0.206218f, -0.00785118f, 0.167141f, 0.45872f, 0.972934f, -0.276798f, 0.837861f, 0.747958f, -0.0151566f, -0.330057f, -0.469077f, 0.277308f, 0.415818f})
                        }, { // placeholder1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
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
                        }, { // recurrent_weights_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f})
                        }, { // placeholder2
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
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
                        }, { // bias_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.065691948f, -0.69055247f, 0.1107955f, -0.97084129f, -0.23957068f, -0.23566568f, -0.389184f, 0.47481549f, -0.4791103f, 0.29931796f, 0.10463274f, 0.83918178f, 0.37197268f, 0.61957061f, 0.3956964f, -0.37609905f})
                        }, { // placeholder3
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
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
                        }, { // hidden_state_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // placeholder4
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param4
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
                            .inputs = {8, 9, 10},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {11, 12, 13},
                            .outputs = {1}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {14, 15, 16},
                            .outputs = {2}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {17, 18, 19},
                            .outputs = {3}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {20, 21, 22},
                            .outputs = {4}
                        }, {
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {8, 11, 14, 17, 20},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_2
    };
    return model;
}

const auto dummy_test_model_blackbox_all_inputs_as_internal = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_all_inputs_as_internal", get_test_model_blackbox_all_inputs_as_internal());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_relaxed() {
    static TestModel model = {
        .main = {
                .operands = {{ // input
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f, 0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f})
                        }, { // weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.461459f, 0.153381f, 0.529743f, -0.00371218f, 0.676267f, -0.211346f, 0.317493f, 0.969689f, -0.343251f, 0.186423f, 0.398151f, 0.152399f, 0.448504f, 0.317662f, 0.523556f, -0.323514f, 0.480877f, 0.333113f, -0.757714f, -0.674487f, -0.643585f, 0.217766f, -0.0251462f, 0.79512f, -0.595574f, -0.422444f, 0.371572f, -0.452178f, -0.556069f, -0.482188f, -0.685456f, -0.727851f, 0.841829f, 0.551535f, -0.232336f, 0.729158f, -0.00294906f, -0.69754f, 0.766073f, -0.178424f, 0.369513f, -0.423241f, 0.548547f, -0.0152023f, -0.757482f, -0.85491f, 0.251331f, -0.989183f, 0.306261f, -0.340716f, 0.886103f, -0.0726757f, -0.723523f, -0.784303f, 0.0354295f, 0.566564f, -0.485469f, -0.620498f, 0.832546f, 0.697884f, -0.279115f, 0.294415f, -0.584313f, 0.548772f, 0.0648819f, 0.968726f, 0.723834f, -0.0080452f, -0.350386f, -0.272803f, 0.115121f, -0.412644f, -0.824713f, -0.992843f, -0.592904f, -0.417893f, 0.863791f, -0.423461f, -0.147601f, -0.770664f, -0.479006f, 0.654782f, 0.587314f, -0.639158f, 0.816969f, -0.337228f, 0.659878f, 0.73107f, 0.754768f, -0.337042f, 0.0960841f, 0.368357f, 0.244191f, -0.817703f, -0.211223f, 0.442012f, 0.37225f, -0.623598f, -0.405423f, 0.455101f, 0.673656f, -0.145345f, -0.511346f, -0.901675f, -0.81252f, -0.127006f, 0.809865f, -0.721884f, 0.636255f, 0.868989f, -0.347973f, -0.10179f, -0.777449f, 0.917274f, 0.819286f, 0.206218f, -0.00785118f, 0.167141f, 0.45872f, 0.972934f, -0.276798f, 0.837861f, 0.747958f, -0.0151566f, -0.330057f, -0.469077f, 0.277308f, 0.415818f})
                        }, { // recurrent_weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f})
                        }, { // bias
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.065691948f, -0.69055247f, 0.1107955f, -0.97084129f, -0.23957068f, -0.23566568f, -0.389184f, 0.47481549f, -0.4791103f, 0.29931796f, 0.10463274f, 0.83918178f, 0.37197268f, 0.61957061f, 0.3956964f, -0.37609905f})
                        }, { // hidden_state
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // activation
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // output
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f, 0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f})
                        }},
                .operations = {{
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {0, 1, 2, 3, 4},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = true,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::UNKNOWN
    };
    return model;
}

const auto dummy_test_model_blackbox_relaxed = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_relaxed", get_test_model_blackbox_relaxed());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .main = {
                .operands = {{ // input
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // recurrent_weights
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // bias
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // hidden_state
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // activation
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // output
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f, 0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f})
                        }, { // input_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f, 0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f})
                        }, { // placeholder5
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param5
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // weights_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.461459f, 0.153381f, 0.529743f, -0.00371218f, 0.676267f, -0.211346f, 0.317493f, 0.969689f, -0.343251f, 0.186423f, 0.398151f, 0.152399f, 0.448504f, 0.317662f, 0.523556f, -0.323514f, 0.480877f, 0.333113f, -0.757714f, -0.674487f, -0.643585f, 0.217766f, -0.0251462f, 0.79512f, -0.595574f, -0.422444f, 0.371572f, -0.452178f, -0.556069f, -0.482188f, -0.685456f, -0.727851f, 0.841829f, 0.551535f, -0.232336f, 0.729158f, -0.00294906f, -0.69754f, 0.766073f, -0.178424f, 0.369513f, -0.423241f, 0.548547f, -0.0152023f, -0.757482f, -0.85491f, 0.251331f, -0.989183f, 0.306261f, -0.340716f, 0.886103f, -0.0726757f, -0.723523f, -0.784303f, 0.0354295f, 0.566564f, -0.485469f, -0.620498f, 0.832546f, 0.697884f, -0.279115f, 0.294415f, -0.584313f, 0.548772f, 0.0648819f, 0.968726f, 0.723834f, -0.0080452f, -0.350386f, -0.272803f, 0.115121f, -0.412644f, -0.824713f, -0.992843f, -0.592904f, -0.417893f, 0.863791f, -0.423461f, -0.147601f, -0.770664f, -0.479006f, 0.654782f, 0.587314f, -0.639158f, 0.816969f, -0.337228f, 0.659878f, 0.73107f, 0.754768f, -0.337042f, 0.0960841f, 0.368357f, 0.244191f, -0.817703f, -0.211223f, 0.442012f, 0.37225f, -0.623598f, -0.405423f, 0.455101f, 0.673656f, -0.145345f, -0.511346f, -0.901675f, -0.81252f, -0.127006f, 0.809865f, -0.721884f, 0.636255f, 0.868989f, -0.347973f, -0.10179f, -0.777449f, 0.917274f, 0.819286f, 0.206218f, -0.00785118f, 0.167141f, 0.45872f, 0.972934f, -0.276798f, 0.837861f, 0.747958f, -0.0151566f, -0.330057f, -0.469077f, 0.277308f, 0.415818f})
                        }, { // placeholder6
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param6
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // recurrent_weights_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f})
                        }, { // placeholder7
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param7
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // bias_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.065691948f, -0.69055247f, 0.1107955f, -0.97084129f, -0.23957068f, -0.23566568f, -0.389184f, 0.47481549f, -0.4791103f, 0.29931796f, 0.10463274f, 0.83918178f, 0.37197268f, 0.61957061f, 0.3956964f, -0.37609905f})
                        }, { // placeholder8
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param8
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // hidden_state_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // placeholder9
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param9
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
                            .inputs = {8, 9, 10},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {11, 12, 13},
                            .outputs = {1}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {14, 15, 16},
                            .outputs = {2}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {17, 18, 19},
                            .outputs = {3}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {20, 21, 22},
                            .outputs = {4}
                        }, {
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {8, 11, 14, 17, 20},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = true,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::UNKNOWN
    };
    return model;
}

const auto dummy_test_model_blackbox_relaxed_all_inputs_as_internal = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_relaxed_all_inputs_as_internal", get_test_model_blackbox_relaxed_all_inputs_as_internal());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_float16() {
    static TestModel model = {
        .main = {
                .operands = {{ // input
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.23689353466033936f, 0.28538501262664795f, 0.03702974319458008f, -0.19858193397521973f, -0.27569133043289185f, 0.4377344846725464f, 0.6037933826446533f, 0.3556246757507324f, -0.6942484378814697f, -0.93421471118927f, -0.8728787899017334f, 0.37144362926483154f, -0.6247671842575073f, 0.2379167079925537f, 0.40060222148895264f, 0.13566219806671143f, -0.9977490305900574f, -0.9885817170143127f, -0.38952237367630005f, -0.47685933113098145f, 0.31073617935180664f, 0.7151104211807251f, -0.6376775503158569f, -0.3172910809516907f, 0.33468103408813477f, 0.7580188512802124f, 0.3066098690032959f, -0.37354087829589844f, 0.7700284719467163f, -0.6274704337120056f, -0.6857216358184814f, 0.006922006607055664f, 0.6579146385192871f, 0.35130810737609863f, 0.8083400726318359f, -0.6177767515182495f, -0.21095740795135498f, 0.41213345527648926f, 0.7378480434417725f, 0.09479415416717529f, 0.47791874408721924f, 0.8649692535400391f, -0.5337622165679932f, 0.8531515598297119f, 0.10288584232330322f, 0.8668400049209595f, -0.01118624210357666f, 0.10513687133789062f, 0.8782583475112915f, 0.5992914438247681f, 0.6282774209976196f, 0.18899452686309814f, 0.31440186500549316f, 0.9905998706817627f, 0.8717035055160522f, -0.35091716051101685f, 0.7486187219619751f, 0.17831337451934814f, 0.27554190158843994f, 0.5186471939086914f, 0.5508428812026978f, 0.5898202657699585f, -0.4744308590888977f, 0.20875751972198486f, -0.058871567249298096f, -0.6660907864570618f, 0.5909807682037354f, 0.7301709651947021f, 0.7460427284240723f, 0.3288288116455078f, -0.17503482103347778f, 0.2239614725112915f, 0.19379806518554688f, 0.29120302200317383f, 0.07711303234100342f, -0.7033160924911499f, 0.1580430269241333f, -0.9340732097625732f, 0.40182065963745117f, 0.036301374435424805f, 0.6652182340621948f, 0.03009819984436035f, -0.774704098701477f, -0.020380020141601562f, 0.020698070526123047f, -0.9030006527900696f, 0.6287028789520264f, -0.23068320751190186f, 0.27531278133392334f, -0.09575521945953369f, -0.7120360136032104f, -0.1738443374633789f, -0.5059349536895752f, -0.18646687269210815f, -0.965086817741394f, 0.4351935386657715f, 0.14744234085083008f, 0.6258940696716309f, 0.16536450386047363f, -0.10651493072509766f, -0.045277178287506104f, 0.9903297424316406f, -0.8825535178184509f, -0.851479172706604f, 0.2815326452255249f, 0.19455957412719727f, -0.5547952651977539f, -0.5604243278503418f, 0.260486364364624f, 0.8470253944396973f, 0.475877046585083f, -0.0742955207824707f, -0.12287641316652298f, 0.701172947883606f, 0.9053244590759277f, 0.8978216648101807f, 0.7981722354888916f, 0.5340273380279541f, -0.3328615427017212f, 0.07348501682281494f, -0.5617278814315796f, -0.04489755630493164f, 0.899640679359436f, -0.06766283512115479f, 0.768635630607605f, 0.934553861618042f, -0.6324692964553833f, -0.08392202854156494f, 0.23689353466033936f, 0.28538501262664795f, 0.03702974319458008f, -0.19858193397521973f, -0.27569133043289185f, 0.4377344846725464f, 0.6037933826446533f, 0.3556246757507324f, -0.6942484378814697f, -0.93421471118927f, -0.8728787899017334f, 0.37144362926483154f, -0.6247671842575073f, 0.2379167079925537f, 0.40060222148895264f, 0.13566219806671143f, -0.9977490305900574f, -0.9885817170143127f, -0.38952237367630005f, -0.47685933113098145f, 0.31073617935180664f, 0.7151104211807251f, -0.6376775503158569f, -0.3172910809516907f, 0.33468103408813477f, 0.7580188512802124f, 0.3066098690032959f, -0.37354087829589844f, 0.7700284719467163f, -0.6274704337120056f, -0.6857216358184814f, 0.006922006607055664f, 0.6579146385192871f, 0.35130810737609863f, 0.8083400726318359f, -0.6177767515182495f, -0.21095740795135498f, 0.41213345527648926f, 0.7378480434417725f, 0.09479415416717529f, 0.47791874408721924f, 0.8649692535400391f, -0.5337622165679932f, 0.8531515598297119f, 0.10288584232330322f, 0.8668400049209595f, -0.01118624210357666f, 0.10513687133789062f, 0.8782583475112915f, 0.5992914438247681f, 0.6282774209976196f, 0.18899452686309814f, 0.31440186500549316f, 0.9905998706817627f, 0.8717035055160522f, -0.35091716051101685f, 0.7486187219619751f, 0.17831337451934814f, 0.27554190158843994f, 0.5186471939086914f, 0.5508428812026978f, 0.5898202657699585f, -0.4744308590888977f, 0.20875751972198486f, -0.058871567249298096f, -0.6660907864570618f, 0.5909807682037354f, 0.7301709651947021f, 0.7460427284240723f, 0.3288288116455078f, -0.17503482103347778f, 0.2239614725112915f, 0.19379806518554688f, 0.29120302200317383f, 0.07711303234100342f, -0.7033160924911499f, 0.1580430269241333f, -0.9340732097625732f, 0.40182065963745117f, 0.036301374435424805f, 0.6652182340621948f, 0.03009819984436035f, -0.774704098701477f, -0.020380020141601562f, 0.020698070526123047f, -0.9030006527900696f, 0.6287028789520264f, -0.23068320751190186f, 0.27531278133392334f, -0.09575521945953369f, -0.7120360136032104f, -0.1738443374633789f, -0.5059349536895752f, -0.18646687269210815f, -0.965086817741394f, 0.4351935386657715f, 0.14744234085083008f, 0.6258940696716309f, 0.16536450386047363f, -0.10651493072509766f, -0.045277178287506104f, 0.9903297424316406f, -0.8825535178184509f, -0.851479172706604f, 0.2815326452255249f, 0.19455957412719727f, -0.5547952651977539f, -0.5604243278503418f, 0.260486364364624f, 0.8470253944396973f, 0.475877046585083f, -0.0742955207824707f, -0.12287641316652298f, 0.701172947883606f, 0.9053244590759277f, 0.8978216648101807f, 0.7981722354888916f, 0.5340273380279541f, -0.3328615427017212f, 0.07348501682281494f, -0.5617278814315796f, -0.04489755630493164f, 0.899640679359436f, -0.06766283512115479f, 0.768635630607605f, 0.934553861618042f, -0.6324692964553833f, -0.08392202854156494f})
                        }, { // weights
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.4614590108394623f, 0.15338100492954254f, 0.5297430157661438f, -0.003712180070579052f, 0.6762670278549194f, -0.21134600043296814f, 0.3174929916858673f, 0.9696890115737915f, -0.34325098991394043f, 0.18642300367355347f, 0.3981510102748871f, 0.1523990035057068f, 0.4485040009021759f, 0.31766200065612793f, 0.5235559940338135f, -0.32351401448249817f, 0.48087701201438904f, 0.33311301469802856f, -0.7577139735221863f, -0.6744869947433472f, -0.6435850262641907f, 0.21776600182056427f, -0.025146199390292168f, 0.7951200008392334f, -0.5955740213394165f, -0.4224439859390259f, 0.37157198786735535f, -0.4521780014038086f, -0.556069016456604f, -0.48218798637390137f, -0.6854559779167175f, -0.7278509736061096f, 0.8418290019035339f, 0.5515350103378296f, -0.23233599960803986f, 0.7291579842567444f, -0.0029490599408745766f, -0.6975399851799011f, 0.7660729885101318f, -0.17842400074005127f, 0.36951300501823425f, -0.42324098944664f, 0.5485470294952393f, -0.015202299691736698f, -0.7574819922447205f, -0.8549100160598755f, 0.25133100152015686f, -0.9891830086708069f, 0.30626100301742554f, -0.34071600437164307f, 0.8861029744148254f, -0.07267569750547409f, -0.7235230207443237f, -0.7843030095100403f, 0.03542950004339218f, 0.5665640234947205f, -0.4854690134525299f, -0.62049800157547f, 0.8325459957122803f, 0.6978840231895447f, -0.2791149914264679f, 0.2944149971008301f, -0.5843129754066467f, 0.5487719774246216f, 0.06488189846277237f, 0.9687259793281555f, 0.7238339781761169f, -0.008045200258493423f, -0.35038599371910095f, -0.27280300855636597f, 0.11512099951505661f, -0.41264399886131287f, -0.8247129917144775f, -0.992842972278595f, -0.5929039716720581f, -0.4178929924964905f, 0.8637909889221191f, -0.423460990190506f, -0.14760099351406097f, -0.7706639766693115f, -0.47900599241256714f, 0.6547819972038269f, 0.5873140096664429f, -0.6391580104827881f, 0.8169689774513245f, -0.337228000164032f, 0.6598780155181885f, 0.7310699820518494f, 0.7547680139541626f, -0.3370420038700104f, 0.0960841029882431f, 0.36835700273513794f, 0.2441910058259964f, -0.8177030086517334f, -0.21122300624847412f, 0.4420120120048523f, 0.3722499907016754f, -0.6235979795455933f, -0.40542298555374146f, 0.45510101318359375f, 0.6736559867858887f, -0.14534500241279602f, -0.5113459825515747f, -0.9016749858856201f, -0.8125200271606445f, -0.12700599431991577f, 0.8098649978637695f, -0.72188401222229f, 0.6362550258636475f, 0.8689889907836914f, -0.3479729890823364f, -0.10179000347852707f, -0.7774490118026733f, 0.917273998260498f, 0.8192859888076782f, 0.20621800422668457f, -0.00785117968916893f, 0.16714100539684296f, 0.45871999859809875f, 0.9729340076446533f, -0.2767980098724365f, 0.8378610014915466f, 0.7479580044746399f, -0.015156599693000317f, -0.3300569951534271f, -0.4690769910812378f, 0.27730798721313477f, 0.4158180058002472f})
                        }, { // recurrent_weights
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f})
                        }, { // bias
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.06569194793701172f, -0.6905524730682373f, 0.11079549789428711f, -0.9708412885665894f, -0.23957067728042603f, -0.2356656789779663f, -0.38918399810791016f, 0.4748154878616333f, -0.4791103005409241f, 0.29931795597076416f, 0.10463274270296097f, 0.8391817808151245f, 0.3719726800918579f, 0.6195706129074097f, 0.39569640159606934f, -0.3760990500450134f})
                        }, { // hidden_state
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // activation
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // output
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.49672600626945496f, 0.0f, 0.9659960269927979f, 0.0f, 0.05842540040612221f, 0.0f, 0.0f, 0.12314999848604202f, 0.0f, 0.0f, 0.6122660040855408f, 0.45660099387168884f, 0.0f, 0.5228599905967712f, 1.1609899997711182f, 0.029123200103640556f, 0.0f, 0.0f, 0.5249009728431702f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0211600065231323f, 0.0f, 1.3576200008392334f, 0.0f, 0.35690900683403015f, 0.4364149868488312f, 0.03557270020246506f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.26233500242233276f, 0.0f, 0.0f, 0.0f, 1.3399200439453125f, 0.0f, 2.973900079727173f, 0.0f, 0.0f, 1.3191399574279785f, 2.6614699363708496f, 0.0f, 0.0f, 0.9425680041313171f, 0.0f, 0.0f, 0.0f, 0.02550699934363365f, 0.0f, 0.0f, 0.0f, 0.3214290142059326f, 0.5691409707069397f, 1.2527400255203247f, 1.5771900415420532f, 0.8158000111579895f, 1.2180500030517578f, 0.5862389802932739f, 0.2542699873447418f, 1.0443600416183472f, 0.0f, 0.6307250261306763f, 0.0f, 0.13380099833011627f, 0.21069300174713135f, 0.3630259931087494f, 0.0f, 0.5334259867668152f, 0.0f, 1.2592600584030151f, 0.7227069735527039f, 0.0f, 1.2203099727630615f, 1.301169991493225f, 0.4958670139312744f, 0.22218699753284454f, 0.0f, 0.7272499799728394f, 0.0f, 0.7670029997825623f, 0.0f, 0.0f, 0.14783500134944916f, 0.0f, 0.0f, 0.0f, 0.6087579727172852f, 0.4693939983844757f, 0.007202980108559132f, 0.9275370240211487f, 0.0f, 0.8569740056991577f, 0.4242570102214813f, 0.0f, 0.0f, 0.9373289942741394f, 0.0f, 0.0f, 0.0f, 0.4764249920845032f, 0.0f, 0.5660169720649719f, 0.41846200823783875f, 0.14191100001335144f, 0.996213972568512f, 1.1306300163269043f, 0.0f, 0.9678990244865417f, 0.0f, 0.0f, 0.0f, 0.08313039690256119f, 0.0f, 0.0f, 1.0037800073623657f, 0.0f, 0.0f, 0.0f, 1.4481799602508545f, 1.017680048942566f, 0.9438909888267517f, 0.5027449727058411f, 0.0f, 0.9401350021362305f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.132430076599121f, 0.0f, 0.7120800018310547f, 0.12391799688339233f, 1.5390700101852417f, 1.3022500276565552f, 1.5964399576187134f, 0.7022200226783752f, 0.0f, 0.804328978061676f, 0.0f, 0.43057599663734436f, 0.0f, 0.5058720111846924f, 0.5096030235290527f, 0.3434480130672455f, 0.0f, 0.10775599628686905f, 0.6145439743995667f, 1.4454900026321411f, 1.523110032081604f, 0.04542979970574379f, 0.3002670109272003f, 0.5627840161323547f, 0.39509499073028564f, 0.2281540036201477f, 0.0f, 0.6753230094909668f, 0.0f, 1.7053600549697876f, 0.7662169933319092f, 0.0f, 0.0f, 0.0f, 0.7353630065917969f, 0.07592669874429703f, 1.9101699590682983f, 0.9418879747390747f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.59089994430542f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755000114440918f, 0.0f, 0.18468700349330902f, 0.0f, 1.5629600286483765f, 0.6252850294113159f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888013124466f, 0.0f, 0.0f, 0.0f, 0.0f, 0.4883829951286316f, 0.2527860105037689f, 0.0f, 0.0f, 0.0f, 1.0281699895858765f, 1.8566499948501587f, 0.0f, 0.0f, 0.009818360209465027f, 0.0f, 1.0637099742889404f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2904449999332428f, 0.3164060115814209f, 0.0f, 0.304161012172699f, 1.250789999961853f, 0.07071519643068314f, 0.0f, 0.9862639904022217f, 0.3092010021209717f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.648959994316101f, 0.34624800086021423f, 0.0f, 0.9181749820709229f, 0.7888399958610535f, 0.5249810218811035f, 1.9207600355148315f, 2.0701301097869873f, 0.3332439959049225f, 0.41515299677848816f, 0.21031799912452698f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0261600017547607f, 0.0f, 0.7282559871673584f, 0.8418300151824951f, 0.09074530005455017f, 0.6288809776306152f, 3.5809900760650635f, 1.4997400045394897f, 0.0f, 0.49672600626945496f, 0.0f, 0.9659960269927979f, 0.0f, 0.05842540040612221f, 0.0f, 0.0f, 0.12314999848604202f, 0.0f, 0.0f, 0.6122660040855408f, 0.45660099387168884f, 0.0f, 0.5228599905967712f, 1.1609899997711182f, 0.029123200103640556f, 0.0f, 0.0f, 0.5249009728431702f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0211600065231323f, 0.0f, 1.3576200008392334f, 0.0f, 0.35690900683403015f, 0.4364149868488312f, 0.03557270020246506f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.26233500242233276f, 0.0f, 0.0f, 0.0f, 1.3399200439453125f, 0.0f, 2.973900079727173f, 0.0f, 0.0f, 1.3191399574279785f, 2.6614699363708496f, 0.0f, 0.0f, 0.9425680041313171f, 0.0f, 0.0f, 0.0f, 0.02550699934363365f, 0.0f, 0.0f, 0.0f, 0.3214290142059326f, 0.5691409707069397f, 1.2527400255203247f, 1.5771900415420532f, 0.8158000111579895f, 1.2180500030517578f, 0.5862389802932739f, 0.2542699873447418f, 1.0443600416183472f, 0.0f, 0.6307250261306763f, 0.0f, 0.13380099833011627f, 0.21069300174713135f, 0.3630259931087494f, 0.0f, 0.5334259867668152f, 0.0f, 1.2592600584030151f, 0.7227069735527039f, 0.0f, 1.2203099727630615f, 1.301169991493225f, 0.4958670139312744f, 0.22218699753284454f, 0.0f, 0.7272499799728394f, 0.0f, 0.7670029997825623f, 0.0f, 0.0f, 0.14783500134944916f, 0.0f, 0.0f, 0.0f, 0.6087579727172852f, 0.4693939983844757f, 0.007202980108559132f, 0.9275370240211487f, 0.0f, 0.8569740056991577f, 0.4242570102214813f, 0.0f, 0.0f, 0.9373289942741394f, 0.0f, 0.0f, 0.0f, 0.4764249920845032f, 0.0f, 0.5660169720649719f, 0.41846200823783875f, 0.14191100001335144f, 0.996213972568512f, 1.1306300163269043f, 0.0f, 0.9678990244865417f, 0.0f, 0.0f, 0.0f, 0.08313039690256119f, 0.0f, 0.0f, 1.0037800073623657f, 0.0f, 0.0f, 0.0f, 1.4481799602508545f, 1.017680048942566f, 0.9438909888267517f, 0.5027449727058411f, 0.0f, 0.9401350021362305f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.132430076599121f, 0.0f, 0.7120800018310547f, 0.12391799688339233f, 1.5390700101852417f, 1.3022500276565552f, 1.5964399576187134f, 0.7022200226783752f, 0.0f, 0.804328978061676f, 0.0f, 0.43057599663734436f, 0.0f, 0.5058720111846924f, 0.5096030235290527f, 0.3434480130672455f, 0.0f, 0.10775599628686905f, 0.6145439743995667f, 1.4454900026321411f, 1.523110032081604f, 0.04542979970574379f, 0.3002670109272003f, 0.5627840161323547f, 0.39509499073028564f, 0.2281540036201477f, 0.0f, 0.6753230094909668f, 0.0f, 1.7053600549697876f, 0.7662169933319092f, 0.0f, 0.0f, 0.0f, 0.7353630065917969f, 0.07592669874429703f, 1.9101699590682983f, 0.9418879747390747f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.59089994430542f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755000114440918f, 0.0f, 0.18468700349330902f, 0.0f, 1.5629600286483765f, 0.6252850294113159f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888013124466f, 0.0f, 0.0f, 0.0f, 0.0f, 0.4883829951286316f, 0.2527860105037689f, 0.0f, 0.0f, 0.0f, 1.0281699895858765f, 1.8566499948501587f, 0.0f, 0.0f, 0.009818360209465027f, 0.0f, 1.0637099742889404f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2904449999332428f, 0.3164060115814209f, 0.0f, 0.304161012172699f, 1.250789999961853f, 0.07071519643068314f, 0.0f, 0.9862639904022217f, 0.3092010021209717f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.648959994316101f, 0.34624800086021423f, 0.0f, 0.9181749820709229f, 0.7888399958610535f, 0.5249810218811035f, 1.9207600355148315f, 2.0701301097869873f, 0.3332439959049225f, 0.41515299677848816f, 0.21031799912452698f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0261600017547607f, 0.0f, 0.7282559871673584f, 0.8418300151824951f, 0.09074530005455017f, 0.6288809776306152f, 3.5809900760650635f, 1.4997400045394897f, 0.0f})
                        }},
                .operations = {{
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {0, 1, 2, 3, 4},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_2
    };
    return model;
}

const auto dummy_test_model_blackbox_float16 = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_float16", get_test_model_blackbox_float16());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_float16_all_inputs_as_internal() {
    static TestModel model = {
        .main = {
                .operands = {{ // input
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({})
                        }, { // weights
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({})
                        }, { // recurrent_weights
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({})
                        }, { // bias
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({})
                        }, { // hidden_state
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({})
                        }, { // activation
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // output
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.49672600626945496f, 0.0f, 0.9659960269927979f, 0.0f, 0.05842540040612221f, 0.0f, 0.0f, 0.12314999848604202f, 0.0f, 0.0f, 0.6122660040855408f, 0.45660099387168884f, 0.0f, 0.5228599905967712f, 1.1609899997711182f, 0.029123200103640556f, 0.0f, 0.0f, 0.5249009728431702f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0211600065231323f, 0.0f, 1.3576200008392334f, 0.0f, 0.35690900683403015f, 0.4364149868488312f, 0.03557270020246506f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.26233500242233276f, 0.0f, 0.0f, 0.0f, 1.3399200439453125f, 0.0f, 2.973900079727173f, 0.0f, 0.0f, 1.3191399574279785f, 2.6614699363708496f, 0.0f, 0.0f, 0.9425680041313171f, 0.0f, 0.0f, 0.0f, 0.02550699934363365f, 0.0f, 0.0f, 0.0f, 0.3214290142059326f, 0.5691409707069397f, 1.2527400255203247f, 1.5771900415420532f, 0.8158000111579895f, 1.2180500030517578f, 0.5862389802932739f, 0.2542699873447418f, 1.0443600416183472f, 0.0f, 0.6307250261306763f, 0.0f, 0.13380099833011627f, 0.21069300174713135f, 0.3630259931087494f, 0.0f, 0.5334259867668152f, 0.0f, 1.2592600584030151f, 0.7227069735527039f, 0.0f, 1.2203099727630615f, 1.301169991493225f, 0.4958670139312744f, 0.22218699753284454f, 0.0f, 0.7272499799728394f, 0.0f, 0.7670029997825623f, 0.0f, 0.0f, 0.14783500134944916f, 0.0f, 0.0f, 0.0f, 0.6087579727172852f, 0.4693939983844757f, 0.007202980108559132f, 0.9275370240211487f, 0.0f, 0.8569740056991577f, 0.4242570102214813f, 0.0f, 0.0f, 0.9373289942741394f, 0.0f, 0.0f, 0.0f, 0.4764249920845032f, 0.0f, 0.5660169720649719f, 0.41846200823783875f, 0.14191100001335144f, 0.996213972568512f, 1.1306300163269043f, 0.0f, 0.9678990244865417f, 0.0f, 0.0f, 0.0f, 0.08313039690256119f, 0.0f, 0.0f, 1.0037800073623657f, 0.0f, 0.0f, 0.0f, 1.4481799602508545f, 1.017680048942566f, 0.9438909888267517f, 0.5027449727058411f, 0.0f, 0.9401350021362305f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.132430076599121f, 0.0f, 0.7120800018310547f, 0.12391799688339233f, 1.5390700101852417f, 1.3022500276565552f, 1.5964399576187134f, 0.7022200226783752f, 0.0f, 0.804328978061676f, 0.0f, 0.43057599663734436f, 0.0f, 0.5058720111846924f, 0.5096030235290527f, 0.3434480130672455f, 0.0f, 0.10775599628686905f, 0.6145439743995667f, 1.4454900026321411f, 1.523110032081604f, 0.04542979970574379f, 0.3002670109272003f, 0.5627840161323547f, 0.39509499073028564f, 0.2281540036201477f, 0.0f, 0.6753230094909668f, 0.0f, 1.7053600549697876f, 0.7662169933319092f, 0.0f, 0.0f, 0.0f, 0.7353630065917969f, 0.07592669874429703f, 1.9101699590682983f, 0.9418879747390747f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.59089994430542f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755000114440918f, 0.0f, 0.18468700349330902f, 0.0f, 1.5629600286483765f, 0.6252850294113159f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888013124466f, 0.0f, 0.0f, 0.0f, 0.0f, 0.4883829951286316f, 0.2527860105037689f, 0.0f, 0.0f, 0.0f, 1.0281699895858765f, 1.8566499948501587f, 0.0f, 0.0f, 0.009818360209465027f, 0.0f, 1.0637099742889404f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2904449999332428f, 0.3164060115814209f, 0.0f, 0.304161012172699f, 1.250789999961853f, 0.07071519643068314f, 0.0f, 0.9862639904022217f, 0.3092010021209717f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.648959994316101f, 0.34624800086021423f, 0.0f, 0.9181749820709229f, 0.7888399958610535f, 0.5249810218811035f, 1.9207600355148315f, 2.0701301097869873f, 0.3332439959049225f, 0.41515299677848816f, 0.21031799912452698f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0261600017547607f, 0.0f, 0.7282559871673584f, 0.8418300151824951f, 0.09074530005455017f, 0.6288809776306152f, 3.5809900760650635f, 1.4997400045394897f, 0.0f, 0.49672600626945496f, 0.0f, 0.9659960269927979f, 0.0f, 0.05842540040612221f, 0.0f, 0.0f, 0.12314999848604202f, 0.0f, 0.0f, 0.6122660040855408f, 0.45660099387168884f, 0.0f, 0.5228599905967712f, 1.1609899997711182f, 0.029123200103640556f, 0.0f, 0.0f, 0.5249009728431702f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0211600065231323f, 0.0f, 1.3576200008392334f, 0.0f, 0.35690900683403015f, 0.4364149868488312f, 0.03557270020246506f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.26233500242233276f, 0.0f, 0.0f, 0.0f, 1.3399200439453125f, 0.0f, 2.973900079727173f, 0.0f, 0.0f, 1.3191399574279785f, 2.6614699363708496f, 0.0f, 0.0f, 0.9425680041313171f, 0.0f, 0.0f, 0.0f, 0.02550699934363365f, 0.0f, 0.0f, 0.0f, 0.3214290142059326f, 0.5691409707069397f, 1.2527400255203247f, 1.5771900415420532f, 0.8158000111579895f, 1.2180500030517578f, 0.5862389802932739f, 0.2542699873447418f, 1.0443600416183472f, 0.0f, 0.6307250261306763f, 0.0f, 0.13380099833011627f, 0.21069300174713135f, 0.3630259931087494f, 0.0f, 0.5334259867668152f, 0.0f, 1.2592600584030151f, 0.7227069735527039f, 0.0f, 1.2203099727630615f, 1.301169991493225f, 0.4958670139312744f, 0.22218699753284454f, 0.0f, 0.7272499799728394f, 0.0f, 0.7670029997825623f, 0.0f, 0.0f, 0.14783500134944916f, 0.0f, 0.0f, 0.0f, 0.6087579727172852f, 0.4693939983844757f, 0.007202980108559132f, 0.9275370240211487f, 0.0f, 0.8569740056991577f, 0.4242570102214813f, 0.0f, 0.0f, 0.9373289942741394f, 0.0f, 0.0f, 0.0f, 0.4764249920845032f, 0.0f, 0.5660169720649719f, 0.41846200823783875f, 0.14191100001335144f, 0.996213972568512f, 1.1306300163269043f, 0.0f, 0.9678990244865417f, 0.0f, 0.0f, 0.0f, 0.08313039690256119f, 0.0f, 0.0f, 1.0037800073623657f, 0.0f, 0.0f, 0.0f, 1.4481799602508545f, 1.017680048942566f, 0.9438909888267517f, 0.5027449727058411f, 0.0f, 0.9401350021362305f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.132430076599121f, 0.0f, 0.7120800018310547f, 0.12391799688339233f, 1.5390700101852417f, 1.3022500276565552f, 1.5964399576187134f, 0.7022200226783752f, 0.0f, 0.804328978061676f, 0.0f, 0.43057599663734436f, 0.0f, 0.5058720111846924f, 0.5096030235290527f, 0.3434480130672455f, 0.0f, 0.10775599628686905f, 0.6145439743995667f, 1.4454900026321411f, 1.523110032081604f, 0.04542979970574379f, 0.3002670109272003f, 0.5627840161323547f, 0.39509499073028564f, 0.2281540036201477f, 0.0f, 0.6753230094909668f, 0.0f, 1.7053600549697876f, 0.7662169933319092f, 0.0f, 0.0f, 0.0f, 0.7353630065917969f, 0.07592669874429703f, 1.9101699590682983f, 0.9418879747390747f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.59089994430542f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755000114440918f, 0.0f, 0.18468700349330902f, 0.0f, 1.5629600286483765f, 0.6252850294113159f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888013124466f, 0.0f, 0.0f, 0.0f, 0.0f, 0.4883829951286316f, 0.2527860105037689f, 0.0f, 0.0f, 0.0f, 1.0281699895858765f, 1.8566499948501587f, 0.0f, 0.0f, 0.009818360209465027f, 0.0f, 1.0637099742889404f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2904449999332428f, 0.3164060115814209f, 0.0f, 0.304161012172699f, 1.250789999961853f, 0.07071519643068314f, 0.0f, 0.9862639904022217f, 0.3092010021209717f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.648959994316101f, 0.34624800086021423f, 0.0f, 0.9181749820709229f, 0.7888399958610535f, 0.5249810218811035f, 1.9207600355148315f, 2.0701301097869873f, 0.3332439959049225f, 0.41515299677848816f, 0.21031799912452698f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0261600017547607f, 0.0f, 0.7282559871673584f, 0.8418300151824951f, 0.09074530005455017f, 0.6288809776306152f, 3.5809900760650635f, 1.4997400045394897f, 0.0f})
                        }, { // input_new
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.23689353466033936f, 0.28538501262664795f, 0.03702974319458008f, -0.19858193397521973f, -0.27569133043289185f, 0.4377344846725464f, 0.6037933826446533f, 0.3556246757507324f, -0.6942484378814697f, -0.93421471118927f, -0.8728787899017334f, 0.37144362926483154f, -0.6247671842575073f, 0.2379167079925537f, 0.40060222148895264f, 0.13566219806671143f, -0.9977490305900574f, -0.9885817170143127f, -0.38952237367630005f, -0.47685933113098145f, 0.31073617935180664f, 0.7151104211807251f, -0.6376775503158569f, -0.3172910809516907f, 0.33468103408813477f, 0.7580188512802124f, 0.3066098690032959f, -0.37354087829589844f, 0.7700284719467163f, -0.6274704337120056f, -0.6857216358184814f, 0.006922006607055664f, 0.6579146385192871f, 0.35130810737609863f, 0.8083400726318359f, -0.6177767515182495f, -0.21095740795135498f, 0.41213345527648926f, 0.7378480434417725f, 0.09479415416717529f, 0.47791874408721924f, 0.8649692535400391f, -0.5337622165679932f, 0.8531515598297119f, 0.10288584232330322f, 0.8668400049209595f, -0.01118624210357666f, 0.10513687133789062f, 0.8782583475112915f, 0.5992914438247681f, 0.6282774209976196f, 0.18899452686309814f, 0.31440186500549316f, 0.9905998706817627f, 0.8717035055160522f, -0.35091716051101685f, 0.7486187219619751f, 0.17831337451934814f, 0.27554190158843994f, 0.5186471939086914f, 0.5508428812026978f, 0.5898202657699585f, -0.4744308590888977f, 0.20875751972198486f, -0.058871567249298096f, -0.6660907864570618f, 0.5909807682037354f, 0.7301709651947021f, 0.7460427284240723f, 0.3288288116455078f, -0.17503482103347778f, 0.2239614725112915f, 0.19379806518554688f, 0.29120302200317383f, 0.07711303234100342f, -0.7033160924911499f, 0.1580430269241333f, -0.9340732097625732f, 0.40182065963745117f, 0.036301374435424805f, 0.6652182340621948f, 0.03009819984436035f, -0.774704098701477f, -0.020380020141601562f, 0.020698070526123047f, -0.9030006527900696f, 0.6287028789520264f, -0.23068320751190186f, 0.27531278133392334f, -0.09575521945953369f, -0.7120360136032104f, -0.1738443374633789f, -0.5059349536895752f, -0.18646687269210815f, -0.965086817741394f, 0.4351935386657715f, 0.14744234085083008f, 0.6258940696716309f, 0.16536450386047363f, -0.10651493072509766f, -0.045277178287506104f, 0.9903297424316406f, -0.8825535178184509f, -0.851479172706604f, 0.2815326452255249f, 0.19455957412719727f, -0.5547952651977539f, -0.5604243278503418f, 0.260486364364624f, 0.8470253944396973f, 0.475877046585083f, -0.0742955207824707f, -0.12287641316652298f, 0.701172947883606f, 0.9053244590759277f, 0.8978216648101807f, 0.7981722354888916f, 0.5340273380279541f, -0.3328615427017212f, 0.07348501682281494f, -0.5617278814315796f, -0.04489755630493164f, 0.899640679359436f, -0.06766283512115479f, 0.768635630607605f, 0.934553861618042f, -0.6324692964553833f, -0.08392202854156494f, 0.23689353466033936f, 0.28538501262664795f, 0.03702974319458008f, -0.19858193397521973f, -0.27569133043289185f, 0.4377344846725464f, 0.6037933826446533f, 0.3556246757507324f, -0.6942484378814697f, -0.93421471118927f, -0.8728787899017334f, 0.37144362926483154f, -0.6247671842575073f, 0.2379167079925537f, 0.40060222148895264f, 0.13566219806671143f, -0.9977490305900574f, -0.9885817170143127f, -0.38952237367630005f, -0.47685933113098145f, 0.31073617935180664f, 0.7151104211807251f, -0.6376775503158569f, -0.3172910809516907f, 0.33468103408813477f, 0.7580188512802124f, 0.3066098690032959f, -0.37354087829589844f, 0.7700284719467163f, -0.6274704337120056f, -0.6857216358184814f, 0.006922006607055664f, 0.6579146385192871f, 0.35130810737609863f, 0.8083400726318359f, -0.6177767515182495f, -0.21095740795135498f, 0.41213345527648926f, 0.7378480434417725f, 0.09479415416717529f, 0.47791874408721924f, 0.8649692535400391f, -0.5337622165679932f, 0.8531515598297119f, 0.10288584232330322f, 0.8668400049209595f, -0.01118624210357666f, 0.10513687133789062f, 0.8782583475112915f, 0.5992914438247681f, 0.6282774209976196f, 0.18899452686309814f, 0.31440186500549316f, 0.9905998706817627f, 0.8717035055160522f, -0.35091716051101685f, 0.7486187219619751f, 0.17831337451934814f, 0.27554190158843994f, 0.5186471939086914f, 0.5508428812026978f, 0.5898202657699585f, -0.4744308590888977f, 0.20875751972198486f, -0.058871567249298096f, -0.6660907864570618f, 0.5909807682037354f, 0.7301709651947021f, 0.7460427284240723f, 0.3288288116455078f, -0.17503482103347778f, 0.2239614725112915f, 0.19379806518554688f, 0.29120302200317383f, 0.07711303234100342f, -0.7033160924911499f, 0.1580430269241333f, -0.9340732097625732f, 0.40182065963745117f, 0.036301374435424805f, 0.6652182340621948f, 0.03009819984436035f, -0.774704098701477f, -0.020380020141601562f, 0.020698070526123047f, -0.9030006527900696f, 0.6287028789520264f, -0.23068320751190186f, 0.27531278133392334f, -0.09575521945953369f, -0.7120360136032104f, -0.1738443374633789f, -0.5059349536895752f, -0.18646687269210815f, -0.965086817741394f, 0.4351935386657715f, 0.14744234085083008f, 0.6258940696716309f, 0.16536450386047363f, -0.10651493072509766f, -0.045277178287506104f, 0.9903297424316406f, -0.8825535178184509f, -0.851479172706604f, 0.2815326452255249f, 0.19455957412719727f, -0.5547952651977539f, -0.5604243278503418f, 0.260486364364624f, 0.8470253944396973f, 0.475877046585083f, -0.0742955207824707f, -0.12287641316652298f, 0.701172947883606f, 0.9053244590759277f, 0.8978216648101807f, 0.7981722354888916f, 0.5340273380279541f, -0.3328615427017212f, 0.07348501682281494f, -0.5617278814315796f, -0.04489755630493164f, 0.899640679359436f, -0.06766283512115479f, 0.768635630607605f, 0.934553861618042f, -0.6324692964553833f, -0.08392202854156494f})
                        }, { // placeholder10
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f})
                        }, { // param10
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // weights_new
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.4614590108394623f, 0.15338100492954254f, 0.5297430157661438f, -0.003712180070579052f, 0.6762670278549194f, -0.21134600043296814f, 0.3174929916858673f, 0.9696890115737915f, -0.34325098991394043f, 0.18642300367355347f, 0.3981510102748871f, 0.1523990035057068f, 0.4485040009021759f, 0.31766200065612793f, 0.5235559940338135f, -0.32351401448249817f, 0.48087701201438904f, 0.33311301469802856f, -0.7577139735221863f, -0.6744869947433472f, -0.6435850262641907f, 0.21776600182056427f, -0.025146199390292168f, 0.7951200008392334f, -0.5955740213394165f, -0.4224439859390259f, 0.37157198786735535f, -0.4521780014038086f, -0.556069016456604f, -0.48218798637390137f, -0.6854559779167175f, -0.7278509736061096f, 0.8418290019035339f, 0.5515350103378296f, -0.23233599960803986f, 0.7291579842567444f, -0.0029490599408745766f, -0.6975399851799011f, 0.7660729885101318f, -0.17842400074005127f, 0.36951300501823425f, -0.42324098944664f, 0.5485470294952393f, -0.015202299691736698f, -0.7574819922447205f, -0.8549100160598755f, 0.25133100152015686f, -0.9891830086708069f, 0.30626100301742554f, -0.34071600437164307f, 0.8861029744148254f, -0.07267569750547409f, -0.7235230207443237f, -0.7843030095100403f, 0.03542950004339218f, 0.5665640234947205f, -0.4854690134525299f, -0.62049800157547f, 0.8325459957122803f, 0.6978840231895447f, -0.2791149914264679f, 0.2944149971008301f, -0.5843129754066467f, 0.5487719774246216f, 0.06488189846277237f, 0.9687259793281555f, 0.7238339781761169f, -0.008045200258493423f, -0.35038599371910095f, -0.27280300855636597f, 0.11512099951505661f, -0.41264399886131287f, -0.8247129917144775f, -0.992842972278595f, -0.5929039716720581f, -0.4178929924964905f, 0.8637909889221191f, -0.423460990190506f, -0.14760099351406097f, -0.7706639766693115f, -0.47900599241256714f, 0.6547819972038269f, 0.5873140096664429f, -0.6391580104827881f, 0.8169689774513245f, -0.337228000164032f, 0.6598780155181885f, 0.7310699820518494f, 0.7547680139541626f, -0.3370420038700104f, 0.0960841029882431f, 0.36835700273513794f, 0.2441910058259964f, -0.8177030086517334f, -0.21122300624847412f, 0.4420120120048523f, 0.3722499907016754f, -0.6235979795455933f, -0.40542298555374146f, 0.45510101318359375f, 0.6736559867858887f, -0.14534500241279602f, -0.5113459825515747f, -0.9016749858856201f, -0.8125200271606445f, -0.12700599431991577f, 0.8098649978637695f, -0.72188401222229f, 0.6362550258636475f, 0.8689889907836914f, -0.3479729890823364f, -0.10179000347852707f, -0.7774490118026733f, 0.917273998260498f, 0.8192859888076782f, 0.20621800422668457f, -0.00785117968916893f, 0.16714100539684296f, 0.45871999859809875f, 0.9729340076446533f, -0.2767980098724365f, 0.8378610014915466f, 0.7479580044746399f, -0.015156599693000317f, -0.3300569951534271f, -0.4690769910812378f, 0.27730798721313477f, 0.4158180058002472f})
                        }, { // placeholder11
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f})
                        }, { // param11
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // recurrent_weights_new
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f})
                        }, { // placeholder12
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f})
                        }, { // param12
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // bias_new
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.06569194793701172f, -0.6905524730682373f, 0.11079549789428711f, -0.9708412885665894f, -0.23957067728042603f, -0.2356656789779663f, -0.38918399810791016f, 0.4748154878616333f, -0.4791103005409241f, 0.29931795597076416f, 0.10463274270296097f, 0.8391817808151245f, 0.3719726800918579f, 0.6195706129074097f, 0.39569640159606934f, -0.3760990500450134f})
                        }, { // placeholder13
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f})
                        }, { // param13
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // hidden_state_new
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // placeholder14
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f})
                        }, { // param14
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
                            .inputs = {8, 9, 10},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {11, 12, 13},
                            .outputs = {1}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {14, 15, 16},
                            .outputs = {2}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {17, 18, 19},
                            .outputs = {3}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {20, 21, 22},
                            .outputs = {4}
                        }, {
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {8, 11, 14, 17, 20},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_2
    };
    return model;
}

const auto dummy_test_model_blackbox_float16_all_inputs_as_internal = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_float16_all_inputs_as_internal", get_test_model_blackbox_float16_all_inputs_as_internal());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_time_major() {
    static TestModel model = {
        .main = {
                .operands = {{ // input1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, 0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f})
                        }, { // weights1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.461459f, 0.153381f, 0.529743f, -0.00371218f, 0.676267f, -0.211346f, 0.317493f, 0.969689f, -0.343251f, 0.186423f, 0.398151f, 0.152399f, 0.448504f, 0.317662f, 0.523556f, -0.323514f, 0.480877f, 0.333113f, -0.757714f, -0.674487f, -0.643585f, 0.217766f, -0.0251462f, 0.79512f, -0.595574f, -0.422444f, 0.371572f, -0.452178f, -0.556069f, -0.482188f, -0.685456f, -0.727851f, 0.841829f, 0.551535f, -0.232336f, 0.729158f, -0.00294906f, -0.69754f, 0.766073f, -0.178424f, 0.369513f, -0.423241f, 0.548547f, -0.0152023f, -0.757482f, -0.85491f, 0.251331f, -0.989183f, 0.306261f, -0.340716f, 0.886103f, -0.0726757f, -0.723523f, -0.784303f, 0.0354295f, 0.566564f, -0.485469f, -0.620498f, 0.832546f, 0.697884f, -0.279115f, 0.294415f, -0.584313f, 0.548772f, 0.0648819f, 0.968726f, 0.723834f, -0.0080452f, -0.350386f, -0.272803f, 0.115121f, -0.412644f, -0.824713f, -0.992843f, -0.592904f, -0.417893f, 0.863791f, -0.423461f, -0.147601f, -0.770664f, -0.479006f, 0.654782f, 0.587314f, -0.639158f, 0.816969f, -0.337228f, 0.659878f, 0.73107f, 0.754768f, -0.337042f, 0.0960841f, 0.368357f, 0.244191f, -0.817703f, -0.211223f, 0.442012f, 0.37225f, -0.623598f, -0.405423f, 0.455101f, 0.673656f, -0.145345f, -0.511346f, -0.901675f, -0.81252f, -0.127006f, 0.809865f, -0.721884f, 0.636255f, 0.868989f, -0.347973f, -0.10179f, -0.777449f, 0.917274f, 0.819286f, 0.206218f, -0.00785118f, 0.167141f, 0.45872f, 0.972934f, -0.276798f, 0.837861f, 0.747958f, -0.0151566f, -0.330057f, -0.469077f, 0.277308f, 0.415818f})
                        }, { // recurrent_weights1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f})
                        }, { // bias1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.065691948f, -0.69055247f, 0.1107955f, -0.97084129f, -0.23957068f, -0.23566568f, -0.389184f, 0.47481549f, -0.4791103f, 0.29931796f, 0.10463274f, 0.83918178f, 0.37197268f, 0.61957061f, 0.3956964f, -0.37609905f})
                        }, { // hidden_state1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // activation1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // output1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 2, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f})
                        }},
                .operations = {{
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {0, 1, 2, 3, 4},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_2
    };
    return model;
}

const auto dummy_test_model_blackbox_time_major = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_time_major", get_test_model_blackbox_time_major());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_time_major_all_inputs_as_internal() {
    static TestModel model = {
        .main = {
                .operands = {{ // input1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // weights1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // recurrent_weights1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // bias1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // hidden_state1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // activation1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // output1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 2, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f})
                        }, { // input1_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, 0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f})
                        }, { // placeholder15
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param15
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // weights1_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.461459f, 0.153381f, 0.529743f, -0.00371218f, 0.676267f, -0.211346f, 0.317493f, 0.969689f, -0.343251f, 0.186423f, 0.398151f, 0.152399f, 0.448504f, 0.317662f, 0.523556f, -0.323514f, 0.480877f, 0.333113f, -0.757714f, -0.674487f, -0.643585f, 0.217766f, -0.0251462f, 0.79512f, -0.595574f, -0.422444f, 0.371572f, -0.452178f, -0.556069f, -0.482188f, -0.685456f, -0.727851f, 0.841829f, 0.551535f, -0.232336f, 0.729158f, -0.00294906f, -0.69754f, 0.766073f, -0.178424f, 0.369513f, -0.423241f, 0.548547f, -0.0152023f, -0.757482f, -0.85491f, 0.251331f, -0.989183f, 0.306261f, -0.340716f, 0.886103f, -0.0726757f, -0.723523f, -0.784303f, 0.0354295f, 0.566564f, -0.485469f, -0.620498f, 0.832546f, 0.697884f, -0.279115f, 0.294415f, -0.584313f, 0.548772f, 0.0648819f, 0.968726f, 0.723834f, -0.0080452f, -0.350386f, -0.272803f, 0.115121f, -0.412644f, -0.824713f, -0.992843f, -0.592904f, -0.417893f, 0.863791f, -0.423461f, -0.147601f, -0.770664f, -0.479006f, 0.654782f, 0.587314f, -0.639158f, 0.816969f, -0.337228f, 0.659878f, 0.73107f, 0.754768f, -0.337042f, 0.0960841f, 0.368357f, 0.244191f, -0.817703f, -0.211223f, 0.442012f, 0.37225f, -0.623598f, -0.405423f, 0.455101f, 0.673656f, -0.145345f, -0.511346f, -0.901675f, -0.81252f, -0.127006f, 0.809865f, -0.721884f, 0.636255f, 0.868989f, -0.347973f, -0.10179f, -0.777449f, 0.917274f, 0.819286f, 0.206218f, -0.00785118f, 0.167141f, 0.45872f, 0.972934f, -0.276798f, 0.837861f, 0.747958f, -0.0151566f, -0.330057f, -0.469077f, 0.277308f, 0.415818f})
                        }, { // placeholder16
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param16
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // recurrent_weights1_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f})
                        }, { // placeholder17
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param17
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // bias1_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.065691948f, -0.69055247f, 0.1107955f, -0.97084129f, -0.23957068f, -0.23566568f, -0.389184f, 0.47481549f, -0.4791103f, 0.29931796f, 0.10463274f, 0.83918178f, 0.37197268f, 0.61957061f, 0.3956964f, -0.37609905f})
                        }, { // placeholder18
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param18
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // hidden_state1_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // placeholder19
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param19
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
                            .inputs = {8, 9, 10},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {11, 12, 13},
                            .outputs = {1}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {14, 15, 16},
                            .outputs = {2}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {17, 18, 19},
                            .outputs = {3}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {20, 21, 22},
                            .outputs = {4}
                        }, {
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {8, 11, 14, 17, 20},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_2
    };
    return model;
}

const auto dummy_test_model_blackbox_time_major_all_inputs_as_internal = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_time_major_all_inputs_as_internal", get_test_model_blackbox_time_major_all_inputs_as_internal());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_time_major_relaxed() {
    static TestModel model = {
        .main = {
                .operands = {{ // input1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, 0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f})
                        }, { // weights1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.461459f, 0.153381f, 0.529743f, -0.00371218f, 0.676267f, -0.211346f, 0.317493f, 0.969689f, -0.343251f, 0.186423f, 0.398151f, 0.152399f, 0.448504f, 0.317662f, 0.523556f, -0.323514f, 0.480877f, 0.333113f, -0.757714f, -0.674487f, -0.643585f, 0.217766f, -0.0251462f, 0.79512f, -0.595574f, -0.422444f, 0.371572f, -0.452178f, -0.556069f, -0.482188f, -0.685456f, -0.727851f, 0.841829f, 0.551535f, -0.232336f, 0.729158f, -0.00294906f, -0.69754f, 0.766073f, -0.178424f, 0.369513f, -0.423241f, 0.548547f, -0.0152023f, -0.757482f, -0.85491f, 0.251331f, -0.989183f, 0.306261f, -0.340716f, 0.886103f, -0.0726757f, -0.723523f, -0.784303f, 0.0354295f, 0.566564f, -0.485469f, -0.620498f, 0.832546f, 0.697884f, -0.279115f, 0.294415f, -0.584313f, 0.548772f, 0.0648819f, 0.968726f, 0.723834f, -0.0080452f, -0.350386f, -0.272803f, 0.115121f, -0.412644f, -0.824713f, -0.992843f, -0.592904f, -0.417893f, 0.863791f, -0.423461f, -0.147601f, -0.770664f, -0.479006f, 0.654782f, 0.587314f, -0.639158f, 0.816969f, -0.337228f, 0.659878f, 0.73107f, 0.754768f, -0.337042f, 0.0960841f, 0.368357f, 0.244191f, -0.817703f, -0.211223f, 0.442012f, 0.37225f, -0.623598f, -0.405423f, 0.455101f, 0.673656f, -0.145345f, -0.511346f, -0.901675f, -0.81252f, -0.127006f, 0.809865f, -0.721884f, 0.636255f, 0.868989f, -0.347973f, -0.10179f, -0.777449f, 0.917274f, 0.819286f, 0.206218f, -0.00785118f, 0.167141f, 0.45872f, 0.972934f, -0.276798f, 0.837861f, 0.747958f, -0.0151566f, -0.330057f, -0.469077f, 0.277308f, 0.415818f})
                        }, { // recurrent_weights1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f})
                        }, { // bias1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.065691948f, -0.69055247f, 0.1107955f, -0.97084129f, -0.23957068f, -0.23566568f, -0.389184f, 0.47481549f, -0.4791103f, 0.29931796f, 0.10463274f, 0.83918178f, 0.37197268f, 0.61957061f, 0.3956964f, -0.37609905f})
                        }, { // hidden_state1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // activation1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // output1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 2, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f})
                        }},
                .operations = {{
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {0, 1, 2, 3, 4},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = true,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::UNKNOWN
    };
    return model;
}

const auto dummy_test_model_blackbox_time_major_relaxed = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_time_major_relaxed", get_test_model_blackbox_time_major_relaxed());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .main = {
                .operands = {{ // input1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // weights1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // recurrent_weights1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // bias1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // hidden_state1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({})
                        }, { // activation1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // output1
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 2, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.496726f, 0.0f, 0.965996f, 0.0f, 0.0584254f, 0.0f, 0.0f, 0.12315f, 0.0f, 0.0f, 0.612266f, 0.456601f, 0.0f, 0.52286f, 1.16099f, 0.0291232f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.524901f, 0.0f, 0.0f, 0.0f, 0.0f, 1.02116f, 0.0f, 1.35762f, 0.0f, 0.356909f, 0.436415f, 0.0355727f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.262335f, 0.0f, 0.0f, 0.0f, 1.33992f, 0.0f, 2.9739f, 0.0f, 0.0f, 1.31914f, 2.66147f, 0.0f, 0.0f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 0.942568f, 0.0f, 0.0f, 0.0f, 0.025507f, 0.0f, 0.0f, 0.0f, 0.321429f, 0.569141f, 1.25274f, 1.57719f, 0.8158f, 1.21805f, 0.586239f, 0.25427f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 1.04436f, 0.0f, 0.630725f, 0.0f, 0.133801f, 0.210693f, 0.363026f, 0.0f, 0.533426f, 0.0f, 1.25926f, 0.722707f, 0.0f, 1.22031f, 1.30117f, 0.495867f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.222187f, 0.0f, 0.72725f, 0.0f, 0.767003f, 0.0f, 0.0f, 0.147835f, 0.0f, 0.0f, 0.0f, 0.608758f, 0.469394f, 0.00720298f, 0.927537f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.856974f, 0.424257f, 0.0f, 0.0f, 0.937329f, 0.0f, 0.0f, 0.0f, 0.476425f, 0.0f, 0.566017f, 0.418462f, 0.141911f, 0.996214f, 1.13063f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.967899f, 0.0f, 0.0f, 0.0f, 0.0831304f, 0.0f, 0.0f, 1.00378f, 0.0f, 0.0f, 0.0f, 1.44818f, 1.01768f, 0.943891f, 0.502745f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.940135f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.13243f, 0.0f, 0.71208f, 0.123918f, 1.53907f, 1.30225f, 1.59644f, 0.70222f, 0.0f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.804329f, 0.0f, 0.430576f, 0.0f, 0.505872f, 0.509603f, 0.343448f, 0.0f, 0.107756f, 0.614544f, 1.44549f, 1.52311f, 0.0454298f, 0.300267f, 0.562784f, 0.395095f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.228154f, 0.0f, 0.675323f, 0.0f, 1.70536f, 0.766217f, 0.0f, 0.0f, 0.0f, 0.735363f, 0.0759267f, 1.91017f, 0.941888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5909f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755f, 0.0f, 0.184687f, 0.0f, 1.56296f, 0.625285f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888f, 0.0f, 0.0f, 0.0f, 0.0f, 0.488383f, 0.252786f, 0.0f, 0.0f, 0.0f, 1.02817f, 1.85665f, 0.0f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.00981836f, 0.0f, 1.06371f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.290445f, 0.316406f, 0.0f, 0.304161f, 1.25079f, 0.0707152f, 0.0f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.986264f, 0.309201f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.64896f, 0.346248f, 0.0f, 0.918175f, 0.78884f, 0.524981f, 1.92076f, 2.07013f, 0.333244f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f, 0.415153f, 0.210318f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.02616f, 0.0f, 0.728256f, 0.84183f, 0.0907453f, 0.628881f, 3.58099f, 1.49974f, 0.0f})
                        }, { // input1_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, 0.23689353f, 0.285385f, 0.037029743f, -0.19858193f, -0.27569133f, 0.43773448f, 0.60379338f, 0.35562468f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.69424844f, -0.93421471f, -0.87287879f, 0.37144363f, -0.62476718f, 0.23791671f, 0.40060222f, 0.1356622f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, -0.99774903f, -0.98858172f, -0.38952237f, -0.47685933f, 0.31073618f, 0.71511042f, -0.63767755f, -0.31729108f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.33468103f, 0.75801885f, 0.30660987f, -0.37354088f, 0.77002847f, -0.62747043f, -0.68572164f, 0.0069220066f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.65791464f, 0.35130811f, 0.80834007f, -0.61777675f, -0.21095741f, 0.41213346f, 0.73784804f, 0.094794154f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.47791874f, 0.86496925f, -0.53376222f, 0.85315156f, 0.10288584f, 0.86684f, -0.011186242f, 0.10513687f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.87825835f, 0.59929144f, 0.62827742f, 0.18899453f, 0.31440187f, 0.99059987f, 0.87170351f, -0.35091716f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, 0.74861872f, 0.17831337f, 0.2755419f, 0.51864719f, 0.55084288f, 0.58982027f, -0.47443086f, 0.20875752f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, -0.058871567f, -0.66609079f, 0.59098077f, 0.73017097f, 0.74604273f, 0.32882881f, -0.17503482f, 0.22396147f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.19379807f, 0.29120302f, 0.077113032f, -0.70331609f, 0.15804303f, -0.93407321f, 0.40182066f, 0.036301374f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.66521823f, 0.0300982f, -0.7747041f, -0.02038002f, 0.020698071f, -0.90300065f, 0.62870288f, -0.23068321f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.27531278f, -0.095755219f, -0.712036f, -0.17384434f, -0.50593495f, -0.18646687f, -0.96508682f, 0.43519354f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.14744234f, 0.62589407f, 0.1653645f, -0.10651493f, -0.045277178f, 0.99032974f, -0.88255352f, -0.85147917f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, 0.28153265f, 0.19455957f, -0.55479527f, -0.56042433f, 0.26048636f, 0.84702539f, 0.47587705f, -0.074295521f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.12287641f, 0.70117295f, 0.90532446f, 0.89782166f, 0.79817224f, 0.53402734f, -0.33286154f, 0.073485017f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f, -0.56172788f, -0.044897556f, 0.89964068f, -0.067662835f, 0.76863563f, 0.93455386f, -0.6324693f, -0.083922029f})
                        }, { // placeholder20
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param20
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // weights1_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.461459f, 0.153381f, 0.529743f, -0.00371218f, 0.676267f, -0.211346f, 0.317493f, 0.969689f, -0.343251f, 0.186423f, 0.398151f, 0.152399f, 0.448504f, 0.317662f, 0.523556f, -0.323514f, 0.480877f, 0.333113f, -0.757714f, -0.674487f, -0.643585f, 0.217766f, -0.0251462f, 0.79512f, -0.595574f, -0.422444f, 0.371572f, -0.452178f, -0.556069f, -0.482188f, -0.685456f, -0.727851f, 0.841829f, 0.551535f, -0.232336f, 0.729158f, -0.00294906f, -0.69754f, 0.766073f, -0.178424f, 0.369513f, -0.423241f, 0.548547f, -0.0152023f, -0.757482f, -0.85491f, 0.251331f, -0.989183f, 0.306261f, -0.340716f, 0.886103f, -0.0726757f, -0.723523f, -0.784303f, 0.0354295f, 0.566564f, -0.485469f, -0.620498f, 0.832546f, 0.697884f, -0.279115f, 0.294415f, -0.584313f, 0.548772f, 0.0648819f, 0.968726f, 0.723834f, -0.0080452f, -0.350386f, -0.272803f, 0.115121f, -0.412644f, -0.824713f, -0.992843f, -0.592904f, -0.417893f, 0.863791f, -0.423461f, -0.147601f, -0.770664f, -0.479006f, 0.654782f, 0.587314f, -0.639158f, 0.816969f, -0.337228f, 0.659878f, 0.73107f, 0.754768f, -0.337042f, 0.0960841f, 0.368357f, 0.244191f, -0.817703f, -0.211223f, 0.442012f, 0.37225f, -0.623598f, -0.405423f, 0.455101f, 0.673656f, -0.145345f, -0.511346f, -0.901675f, -0.81252f, -0.127006f, 0.809865f, -0.721884f, 0.636255f, 0.868989f, -0.347973f, -0.10179f, -0.777449f, 0.917274f, 0.819286f, 0.206218f, -0.00785118f, 0.167141f, 0.45872f, 0.972934f, -0.276798f, 0.837861f, 0.747958f, -0.0151566f, -0.330057f, -0.469077f, 0.277308f, 0.415818f})
                        }, { // placeholder21
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param21
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // recurrent_weights1_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f})
                        }, { // placeholder22
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param22
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // bias1_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.065691948f, -0.69055247f, 0.1107955f, -0.97084129f, -0.23957068f, -0.23566568f, -0.389184f, 0.47481549f, -0.4791103f, 0.29931796f, 0.10463274f, 0.83918178f, 0.37197268f, 0.61957061f, 0.3956964f, -0.37609905f})
                        }, { // placeholder23
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param23
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // hidden_state1_new
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // placeholder24
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<float>({0.0f})
                        }, { // param24
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
                            .inputs = {8, 9, 10},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {11, 12, 13},
                            .outputs = {1}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {14, 15, 16},
                            .outputs = {2}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {17, 18, 19},
                            .outputs = {3}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {20, 21, 22},
                            .outputs = {4}
                        }, {
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {8, 11, 14, 17, 20},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = true,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::UNKNOWN
    };
    return model;
}

const auto dummy_test_model_blackbox_time_major_relaxed_all_inputs_as_internal = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_time_major_relaxed_all_inputs_as_internal", get_test_model_blackbox_time_major_relaxed_all_inputs_as_internal());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_time_major_float16() {
    static TestModel model = {
        .main = {
                .operands = {{ // input1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.23689353466033936f, 0.28538501262664795f, 0.03702974319458008f, -0.19858193397521973f, -0.27569133043289185f, 0.4377344846725464f, 0.6037933826446533f, 0.3556246757507324f, 0.23689353466033936f, 0.28538501262664795f, 0.03702974319458008f, -0.19858193397521973f, -0.27569133043289185f, 0.4377344846725464f, 0.6037933826446533f, 0.3556246757507324f, -0.6942484378814697f, -0.93421471118927f, -0.8728787899017334f, 0.37144362926483154f, -0.6247671842575073f, 0.2379167079925537f, 0.40060222148895264f, 0.13566219806671143f, -0.6942484378814697f, -0.93421471118927f, -0.8728787899017334f, 0.37144362926483154f, -0.6247671842575073f, 0.2379167079925537f, 0.40060222148895264f, 0.13566219806671143f, -0.9977490305900574f, -0.9885817170143127f, -0.38952237367630005f, -0.47685933113098145f, 0.31073617935180664f, 0.7151104211807251f, -0.6376775503158569f, -0.3172910809516907f, -0.9977490305900574f, -0.9885817170143127f, -0.38952237367630005f, -0.47685933113098145f, 0.31073617935180664f, 0.7151104211807251f, -0.6376775503158569f, -0.3172910809516907f, 0.33468103408813477f, 0.7580188512802124f, 0.3066098690032959f, -0.37354087829589844f, 0.7700284719467163f, -0.6274704337120056f, -0.6857216358184814f, 0.006922006607055664f, 0.33468103408813477f, 0.7580188512802124f, 0.3066098690032959f, -0.37354087829589844f, 0.7700284719467163f, -0.6274704337120056f, -0.6857216358184814f, 0.006922006607055664f, 0.6579146385192871f, 0.35130810737609863f, 0.8083400726318359f, -0.6177767515182495f, -0.21095740795135498f, 0.41213345527648926f, 0.7378480434417725f, 0.09479415416717529f, 0.6579146385192871f, 0.35130810737609863f, 0.8083400726318359f, -0.6177767515182495f, -0.21095740795135498f, 0.41213345527648926f, 0.7378480434417725f, 0.09479415416717529f, 0.47791874408721924f, 0.8649692535400391f, -0.5337622165679932f, 0.8531515598297119f, 0.10288584232330322f, 0.8668400049209595f, -0.01118624210357666f, 0.10513687133789062f, 0.47791874408721924f, 0.8649692535400391f, -0.5337622165679932f, 0.8531515598297119f, 0.10288584232330322f, 0.8668400049209595f, -0.01118624210357666f, 0.10513687133789062f, 0.8782583475112915f, 0.5992914438247681f, 0.6282774209976196f, 0.18899452686309814f, 0.31440186500549316f, 0.9905998706817627f, 0.8717035055160522f, -0.35091716051101685f, 0.8782583475112915f, 0.5992914438247681f, 0.6282774209976196f, 0.18899452686309814f, 0.31440186500549316f, 0.9905998706817627f, 0.8717035055160522f, -0.35091716051101685f, 0.7486187219619751f, 0.17831337451934814f, 0.27554190158843994f, 0.5186471939086914f, 0.5508428812026978f, 0.5898202657699585f, -0.4744308590888977f, 0.20875751972198486f, 0.7486187219619751f, 0.17831337451934814f, 0.27554190158843994f, 0.5186471939086914f, 0.5508428812026978f, 0.5898202657699585f, -0.4744308590888977f, 0.20875751972198486f, -0.058871567249298096f, -0.6660907864570618f, 0.5909807682037354f, 0.7301709651947021f, 0.7460427284240723f, 0.3288288116455078f, -0.17503482103347778f, 0.2239614725112915f, -0.058871567249298096f, -0.6660907864570618f, 0.5909807682037354f, 0.7301709651947021f, 0.7460427284240723f, 0.3288288116455078f, -0.17503482103347778f, 0.2239614725112915f, 0.19379806518554688f, 0.29120302200317383f, 0.07711303234100342f, -0.7033160924911499f, 0.1580430269241333f, -0.9340732097625732f, 0.40182065963745117f, 0.036301374435424805f, 0.19379806518554688f, 0.29120302200317383f, 0.07711303234100342f, -0.7033160924911499f, 0.1580430269241333f, -0.9340732097625732f, 0.40182065963745117f, 0.036301374435424805f, 0.6652182340621948f, 0.03009819984436035f, -0.774704098701477f, -0.020380020141601562f, 0.020698070526123047f, -0.9030006527900696f, 0.6287028789520264f, -0.23068320751190186f, 0.6652182340621948f, 0.03009819984436035f, -0.774704098701477f, -0.020380020141601562f, 0.020698070526123047f, -0.9030006527900696f, 0.6287028789520264f, -0.23068320751190186f, 0.27531278133392334f, -0.09575521945953369f, -0.7120360136032104f, -0.1738443374633789f, -0.5059349536895752f, -0.18646687269210815f, -0.965086817741394f, 0.4351935386657715f, 0.27531278133392334f, -0.09575521945953369f, -0.7120360136032104f, -0.1738443374633789f, -0.5059349536895752f, -0.18646687269210815f, -0.965086817741394f, 0.4351935386657715f, 0.14744234085083008f, 0.6258940696716309f, 0.16536450386047363f, -0.10651493072509766f, -0.045277178287506104f, 0.9903297424316406f, -0.8825535178184509f, -0.851479172706604f, 0.14744234085083008f, 0.6258940696716309f, 0.16536450386047363f, -0.10651493072509766f, -0.045277178287506104f, 0.9903297424316406f, -0.8825535178184509f, -0.851479172706604f, 0.2815326452255249f, 0.19455957412719727f, -0.5547952651977539f, -0.5604243278503418f, 0.260486364364624f, 0.8470253944396973f, 0.475877046585083f, -0.0742955207824707f, 0.2815326452255249f, 0.19455957412719727f, -0.5547952651977539f, -0.5604243278503418f, 0.260486364364624f, 0.8470253944396973f, 0.475877046585083f, -0.0742955207824707f, -0.12287641316652298f, 0.701172947883606f, 0.9053244590759277f, 0.8978216648101807f, 0.7981722354888916f, 0.5340273380279541f, -0.3328615427017212f, 0.07348501682281494f, -0.12287641316652298f, 0.701172947883606f, 0.9053244590759277f, 0.8978216648101807f, 0.7981722354888916f, 0.5340273380279541f, -0.3328615427017212f, 0.07348501682281494f, -0.5617278814315796f, -0.04489755630493164f, 0.899640679359436f, -0.06766283512115479f, 0.768635630607605f, 0.934553861618042f, -0.6324692964553833f, -0.08392202854156494f, -0.5617278814315796f, -0.04489755630493164f, 0.899640679359436f, -0.06766283512115479f, 0.768635630607605f, 0.934553861618042f, -0.6324692964553833f, -0.08392202854156494f})
                        }, { // weights1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.4614590108394623f, 0.15338100492954254f, 0.5297430157661438f, -0.003712180070579052f, 0.6762670278549194f, -0.21134600043296814f, 0.3174929916858673f, 0.9696890115737915f, -0.34325098991394043f, 0.18642300367355347f, 0.3981510102748871f, 0.1523990035057068f, 0.4485040009021759f, 0.31766200065612793f, 0.5235559940338135f, -0.32351401448249817f, 0.48087701201438904f, 0.33311301469802856f, -0.7577139735221863f, -0.6744869947433472f, -0.6435850262641907f, 0.21776600182056427f, -0.025146199390292168f, 0.7951200008392334f, -0.5955740213394165f, -0.4224439859390259f, 0.37157198786735535f, -0.4521780014038086f, -0.556069016456604f, -0.48218798637390137f, -0.6854559779167175f, -0.7278509736061096f, 0.8418290019035339f, 0.5515350103378296f, -0.23233599960803986f, 0.7291579842567444f, -0.0029490599408745766f, -0.6975399851799011f, 0.7660729885101318f, -0.17842400074005127f, 0.36951300501823425f, -0.42324098944664f, 0.5485470294952393f, -0.015202299691736698f, -0.7574819922447205f, -0.8549100160598755f, 0.25133100152015686f, -0.9891830086708069f, 0.30626100301742554f, -0.34071600437164307f, 0.8861029744148254f, -0.07267569750547409f, -0.7235230207443237f, -0.7843030095100403f, 0.03542950004339218f, 0.5665640234947205f, -0.4854690134525299f, -0.62049800157547f, 0.8325459957122803f, 0.6978840231895447f, -0.2791149914264679f, 0.2944149971008301f, -0.5843129754066467f, 0.5487719774246216f, 0.06488189846277237f, 0.9687259793281555f, 0.7238339781761169f, -0.008045200258493423f, -0.35038599371910095f, -0.27280300855636597f, 0.11512099951505661f, -0.41264399886131287f, -0.8247129917144775f, -0.992842972278595f, -0.5929039716720581f, -0.4178929924964905f, 0.8637909889221191f, -0.423460990190506f, -0.14760099351406097f, -0.7706639766693115f, -0.47900599241256714f, 0.6547819972038269f, 0.5873140096664429f, -0.6391580104827881f, 0.8169689774513245f, -0.337228000164032f, 0.6598780155181885f, 0.7310699820518494f, 0.7547680139541626f, -0.3370420038700104f, 0.0960841029882431f, 0.36835700273513794f, 0.2441910058259964f, -0.8177030086517334f, -0.21122300624847412f, 0.4420120120048523f, 0.3722499907016754f, -0.6235979795455933f, -0.40542298555374146f, 0.45510101318359375f, 0.6736559867858887f, -0.14534500241279602f, -0.5113459825515747f, -0.9016749858856201f, -0.8125200271606445f, -0.12700599431991577f, 0.8098649978637695f, -0.72188401222229f, 0.6362550258636475f, 0.8689889907836914f, -0.3479729890823364f, -0.10179000347852707f, -0.7774490118026733f, 0.917273998260498f, 0.8192859888076782f, 0.20621800422668457f, -0.00785117968916893f, 0.16714100539684296f, 0.45871999859809875f, 0.9729340076446533f, -0.2767980098724365f, 0.8378610014915466f, 0.7479580044746399f, -0.015156599693000317f, -0.3300569951534271f, -0.4690769910812378f, 0.27730798721313477f, 0.4158180058002472f})
                        }, { // recurrent_weights1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f})
                        }, { // bias1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.06569194793701172f, -0.6905524730682373f, 0.11079549789428711f, -0.9708412885665894f, -0.23957067728042603f, -0.2356656789779663f, -0.38918399810791016f, 0.4748154878616333f, -0.4791103005409241f, 0.29931795597076416f, 0.10463274270296097f, 0.8391817808151245f, 0.3719726800918579f, 0.6195706129074097f, 0.39569640159606934f, -0.3760990500450134f})
                        }, { // hidden_state1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // activation1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // output1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 2, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.49672600626945496f, 0.0f, 0.9659960269927979f, 0.0f, 0.05842540040612221f, 0.0f, 0.0f, 0.12314999848604202f, 0.0f, 0.0f, 0.6122660040855408f, 0.45660099387168884f, 0.0f, 0.5228599905967712f, 1.1609899997711182f, 0.029123200103640556f, 0.49672600626945496f, 0.0f, 0.9659960269927979f, 0.0f, 0.05842540040612221f, 0.0f, 0.0f, 0.12314999848604202f, 0.0f, 0.0f, 0.6122660040855408f, 0.45660099387168884f, 0.0f, 0.5228599905967712f, 1.1609899997711182f, 0.029123200103640556f, 0.0f, 0.0f, 0.5249009728431702f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0211600065231323f, 0.0f, 1.3576200008392334f, 0.0f, 0.35690900683403015f, 0.4364149868488312f, 0.03557270020246506f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5249009728431702f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0211600065231323f, 0.0f, 1.3576200008392334f, 0.0f, 0.35690900683403015f, 0.4364149868488312f, 0.03557270020246506f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.26233500242233276f, 0.0f, 0.0f, 0.0f, 1.3399200439453125f, 0.0f, 2.973900079727173f, 0.0f, 0.0f, 1.3191399574279785f, 2.6614699363708496f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.26233500242233276f, 0.0f, 0.0f, 0.0f, 1.3399200439453125f, 0.0f, 2.973900079727173f, 0.0f, 0.0f, 1.3191399574279785f, 2.6614699363708496f, 0.0f, 0.0f, 0.9425680041313171f, 0.0f, 0.0f, 0.0f, 0.02550699934363365f, 0.0f, 0.0f, 0.0f, 0.3214290142059326f, 0.5691409707069397f, 1.2527400255203247f, 1.5771900415420532f, 0.8158000111579895f, 1.2180500030517578f, 0.5862389802932739f, 0.2542699873447418f, 0.9425680041313171f, 0.0f, 0.0f, 0.0f, 0.02550699934363365f, 0.0f, 0.0f, 0.0f, 0.3214290142059326f, 0.5691409707069397f, 1.2527400255203247f, 1.5771900415420532f, 0.8158000111579895f, 1.2180500030517578f, 0.5862389802932739f, 0.2542699873447418f, 1.0443600416183472f, 0.0f, 0.6307250261306763f, 0.0f, 0.13380099833011627f, 0.21069300174713135f, 0.3630259931087494f, 0.0f, 0.5334259867668152f, 0.0f, 1.2592600584030151f, 0.7227069735527039f, 0.0f, 1.2203099727630615f, 1.301169991493225f, 0.4958670139312744f, 1.0443600416183472f, 0.0f, 0.6307250261306763f, 0.0f, 0.13380099833011627f, 0.21069300174713135f, 0.3630259931087494f, 0.0f, 0.5334259867668152f, 0.0f, 1.2592600584030151f, 0.7227069735527039f, 0.0f, 1.2203099727630615f, 1.301169991493225f, 0.4958670139312744f, 0.22218699753284454f, 0.0f, 0.7272499799728394f, 0.0f, 0.7670029997825623f, 0.0f, 0.0f, 0.14783500134944916f, 0.0f, 0.0f, 0.0f, 0.6087579727172852f, 0.4693939983844757f, 0.007202980108559132f, 0.9275370240211487f, 0.0f, 0.22218699753284454f, 0.0f, 0.7272499799728394f, 0.0f, 0.7670029997825623f, 0.0f, 0.0f, 0.14783500134944916f, 0.0f, 0.0f, 0.0f, 0.6087579727172852f, 0.4693939983844757f, 0.007202980108559132f, 0.9275370240211487f, 0.0f, 0.8569740056991577f, 0.4242570102214813f, 0.0f, 0.0f, 0.9373289942741394f, 0.0f, 0.0f, 0.0f, 0.4764249920845032f, 0.0f, 0.5660169720649719f, 0.41846200823783875f, 0.14191100001335144f, 0.996213972568512f, 1.1306300163269043f, 0.0f, 0.8569740056991577f, 0.4242570102214813f, 0.0f, 0.0f, 0.9373289942741394f, 0.0f, 0.0f, 0.0f, 0.4764249920845032f, 0.0f, 0.5660169720649719f, 0.41846200823783875f, 0.14191100001335144f, 0.996213972568512f, 1.1306300163269043f, 0.0f, 0.9678990244865417f, 0.0f, 0.0f, 0.0f, 0.08313039690256119f, 0.0f, 0.0f, 1.0037800073623657f, 0.0f, 0.0f, 0.0f, 1.4481799602508545f, 1.017680048942566f, 0.9438909888267517f, 0.5027449727058411f, 0.0f, 0.9678990244865417f, 0.0f, 0.0f, 0.0f, 0.08313039690256119f, 0.0f, 0.0f, 1.0037800073623657f, 0.0f, 0.0f, 0.0f, 1.4481799602508545f, 1.017680048942566f, 0.9438909888267517f, 0.5027449727058411f, 0.0f, 0.9401350021362305f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.132430076599121f, 0.0f, 0.7120800018310547f, 0.12391799688339233f, 1.5390700101852417f, 1.3022500276565552f, 1.5964399576187134f, 0.7022200226783752f, 0.0f, 0.9401350021362305f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.132430076599121f, 0.0f, 0.7120800018310547f, 0.12391799688339233f, 1.5390700101852417f, 1.3022500276565552f, 1.5964399576187134f, 0.7022200226783752f, 0.0f, 0.804328978061676f, 0.0f, 0.43057599663734436f, 0.0f, 0.5058720111846924f, 0.5096030235290527f, 0.3434480130672455f, 0.0f, 0.10775599628686905f, 0.6145439743995667f, 1.4454900026321411f, 1.523110032081604f, 0.04542979970574379f, 0.3002670109272003f, 0.5627840161323547f, 0.39509499073028564f, 0.804328978061676f, 0.0f, 0.43057599663734436f, 0.0f, 0.5058720111846924f, 0.5096030235290527f, 0.3434480130672455f, 0.0f, 0.10775599628686905f, 0.6145439743995667f, 1.4454900026321411f, 1.523110032081604f, 0.04542979970574379f, 0.3002670109272003f, 0.5627840161323547f, 0.39509499073028564f, 0.2281540036201477f, 0.0f, 0.6753230094909668f, 0.0f, 1.7053600549697876f, 0.7662169933319092f, 0.0f, 0.0f, 0.0f, 0.7353630065917969f, 0.07592669874429703f, 1.9101699590682983f, 0.9418879747390747f, 0.0f, 0.0f, 0.0f, 0.2281540036201477f, 0.0f, 0.6753230094909668f, 0.0f, 1.7053600549697876f, 0.7662169933319092f, 0.0f, 0.0f, 0.0f, 0.7353630065917969f, 0.07592669874429703f, 1.9101699590682983f, 0.9418879747390747f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.59089994430542f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755000114440918f, 0.0f, 0.18468700349330902f, 0.0f, 1.5629600286483765f, 0.6252850294113159f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.59089994430542f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755000114440918f, 0.0f, 0.18468700349330902f, 0.0f, 1.5629600286483765f, 0.6252850294113159f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888013124466f, 0.0f, 0.0f, 0.0f, 0.0f, 0.4883829951286316f, 0.2527860105037689f, 0.0f, 0.0f, 0.0f, 1.0281699895858765f, 1.8566499948501587f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888013124466f, 0.0f, 0.0f, 0.0f, 0.0f, 0.4883829951286316f, 0.2527860105037689f, 0.0f, 0.0f, 0.0f, 1.0281699895858765f, 1.8566499948501587f, 0.0f, 0.0f, 0.009818360209465027f, 0.0f, 1.0637099742889404f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2904449999332428f, 0.3164060115814209f, 0.0f, 0.304161012172699f, 1.250789999961853f, 0.07071519643068314f, 0.0f, 0.009818360209465027f, 0.0f, 1.0637099742889404f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2904449999332428f, 0.3164060115814209f, 0.0f, 0.304161012172699f, 1.250789999961853f, 0.07071519643068314f, 0.0f, 0.9862639904022217f, 0.3092010021209717f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.648959994316101f, 0.34624800086021423f, 0.0f, 0.9181749820709229f, 0.7888399958610535f, 0.5249810218811035f, 1.9207600355148315f, 2.0701301097869873f, 0.3332439959049225f, 0.9862639904022217f, 0.3092010021209717f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.648959994316101f, 0.34624800086021423f, 0.0f, 0.9181749820709229f, 0.7888399958610535f, 0.5249810218811035f, 1.9207600355148315f, 2.0701301097869873f, 0.3332439959049225f, 0.41515299677848816f, 0.21031799912452698f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0261600017547607f, 0.0f, 0.7282559871673584f, 0.8418300151824951f, 0.09074530005455017f, 0.6288809776306152f, 3.5809900760650635f, 1.4997400045394897f, 0.0f, 0.41515299677848816f, 0.21031799912452698f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0261600017547607f, 0.0f, 0.7282559871673584f, 0.8418300151824951f, 0.09074530005455017f, 0.6288809776306152f, 3.5809900760650635f, 1.4997400045394897f, 0.0f})
                        }},
                .operations = {{
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {0, 1, 2, 3, 4},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_2
    };
    return model;
}

const auto dummy_test_model_blackbox_time_major_float16 = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_time_major_float16", get_test_model_blackbox_time_major_float16());

}  // namespace generated_tests::unidirectional_sequence_rnn

namespace generated_tests::unidirectional_sequence_rnn {

const TestModel& get_test_model_blackbox_time_major_float16_all_inputs_as_internal() {
    static TestModel model = {
        .main = {
                .operands = {{ // input1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({})
                        }, { // weights1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({})
                        }, { // recurrent_weights1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({})
                        }, { // bias1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({})
                        }, { // hidden_state1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({})
                        }, { // activation1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // time_major1
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({1})
                        }, { // output1
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 2, 16},
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.49672600626945496f, 0.0f, 0.9659960269927979f, 0.0f, 0.05842540040612221f, 0.0f, 0.0f, 0.12314999848604202f, 0.0f, 0.0f, 0.6122660040855408f, 0.45660099387168884f, 0.0f, 0.5228599905967712f, 1.1609899997711182f, 0.029123200103640556f, 0.49672600626945496f, 0.0f, 0.9659960269927979f, 0.0f, 0.05842540040612221f, 0.0f, 0.0f, 0.12314999848604202f, 0.0f, 0.0f, 0.6122660040855408f, 0.45660099387168884f, 0.0f, 0.5228599905967712f, 1.1609899997711182f, 0.029123200103640556f, 0.0f, 0.0f, 0.5249009728431702f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0211600065231323f, 0.0f, 1.3576200008392334f, 0.0f, 0.35690900683403015f, 0.4364149868488312f, 0.03557270020246506f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5249009728431702f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0211600065231323f, 0.0f, 1.3576200008392334f, 0.0f, 0.35690900683403015f, 0.4364149868488312f, 0.03557270020246506f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.26233500242233276f, 0.0f, 0.0f, 0.0f, 1.3399200439453125f, 0.0f, 2.973900079727173f, 0.0f, 0.0f, 1.3191399574279785f, 2.6614699363708496f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.26233500242233276f, 0.0f, 0.0f, 0.0f, 1.3399200439453125f, 0.0f, 2.973900079727173f, 0.0f, 0.0f, 1.3191399574279785f, 2.6614699363708496f, 0.0f, 0.0f, 0.9425680041313171f, 0.0f, 0.0f, 0.0f, 0.02550699934363365f, 0.0f, 0.0f, 0.0f, 0.3214290142059326f, 0.5691409707069397f, 1.2527400255203247f, 1.5771900415420532f, 0.8158000111579895f, 1.2180500030517578f, 0.5862389802932739f, 0.2542699873447418f, 0.9425680041313171f, 0.0f, 0.0f, 0.0f, 0.02550699934363365f, 0.0f, 0.0f, 0.0f, 0.3214290142059326f, 0.5691409707069397f, 1.2527400255203247f, 1.5771900415420532f, 0.8158000111579895f, 1.2180500030517578f, 0.5862389802932739f, 0.2542699873447418f, 1.0443600416183472f, 0.0f, 0.6307250261306763f, 0.0f, 0.13380099833011627f, 0.21069300174713135f, 0.3630259931087494f, 0.0f, 0.5334259867668152f, 0.0f, 1.2592600584030151f, 0.7227069735527039f, 0.0f, 1.2203099727630615f, 1.301169991493225f, 0.4958670139312744f, 1.0443600416183472f, 0.0f, 0.6307250261306763f, 0.0f, 0.13380099833011627f, 0.21069300174713135f, 0.3630259931087494f, 0.0f, 0.5334259867668152f, 0.0f, 1.2592600584030151f, 0.7227069735527039f, 0.0f, 1.2203099727630615f, 1.301169991493225f, 0.4958670139312744f, 0.22218699753284454f, 0.0f, 0.7272499799728394f, 0.0f, 0.7670029997825623f, 0.0f, 0.0f, 0.14783500134944916f, 0.0f, 0.0f, 0.0f, 0.6087579727172852f, 0.4693939983844757f, 0.007202980108559132f, 0.9275370240211487f, 0.0f, 0.22218699753284454f, 0.0f, 0.7272499799728394f, 0.0f, 0.7670029997825623f, 0.0f, 0.0f, 0.14783500134944916f, 0.0f, 0.0f, 0.0f, 0.6087579727172852f, 0.4693939983844757f, 0.007202980108559132f, 0.9275370240211487f, 0.0f, 0.8569740056991577f, 0.4242570102214813f, 0.0f, 0.0f, 0.9373289942741394f, 0.0f, 0.0f, 0.0f, 0.4764249920845032f, 0.0f, 0.5660169720649719f, 0.41846200823783875f, 0.14191100001335144f, 0.996213972568512f, 1.1306300163269043f, 0.0f, 0.8569740056991577f, 0.4242570102214813f, 0.0f, 0.0f, 0.9373289942741394f, 0.0f, 0.0f, 0.0f, 0.4764249920845032f, 0.0f, 0.5660169720649719f, 0.41846200823783875f, 0.14191100001335144f, 0.996213972568512f, 1.1306300163269043f, 0.0f, 0.9678990244865417f, 0.0f, 0.0f, 0.0f, 0.08313039690256119f, 0.0f, 0.0f, 1.0037800073623657f, 0.0f, 0.0f, 0.0f, 1.4481799602508545f, 1.017680048942566f, 0.9438909888267517f, 0.5027449727058411f, 0.0f, 0.9678990244865417f, 0.0f, 0.0f, 0.0f, 0.08313039690256119f, 0.0f, 0.0f, 1.0037800073623657f, 0.0f, 0.0f, 0.0f, 1.4481799602508545f, 1.017680048942566f, 0.9438909888267517f, 0.5027449727058411f, 0.0f, 0.9401350021362305f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.132430076599121f, 0.0f, 0.7120800018310547f, 0.12391799688339233f, 1.5390700101852417f, 1.3022500276565552f, 1.5964399576187134f, 0.7022200226783752f, 0.0f, 0.9401350021362305f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.132430076599121f, 0.0f, 0.7120800018310547f, 0.12391799688339233f, 1.5390700101852417f, 1.3022500276565552f, 1.5964399576187134f, 0.7022200226783752f, 0.0f, 0.804328978061676f, 0.0f, 0.43057599663734436f, 0.0f, 0.5058720111846924f, 0.5096030235290527f, 0.3434480130672455f, 0.0f, 0.10775599628686905f, 0.6145439743995667f, 1.4454900026321411f, 1.523110032081604f, 0.04542979970574379f, 0.3002670109272003f, 0.5627840161323547f, 0.39509499073028564f, 0.804328978061676f, 0.0f, 0.43057599663734436f, 0.0f, 0.5058720111846924f, 0.5096030235290527f, 0.3434480130672455f, 0.0f, 0.10775599628686905f, 0.6145439743995667f, 1.4454900026321411f, 1.523110032081604f, 0.04542979970574379f, 0.3002670109272003f, 0.5627840161323547f, 0.39509499073028564f, 0.2281540036201477f, 0.0f, 0.6753230094909668f, 0.0f, 1.7053600549697876f, 0.7662169933319092f, 0.0f, 0.0f, 0.0f, 0.7353630065917969f, 0.07592669874429703f, 1.9101699590682983f, 0.9418879747390747f, 0.0f, 0.0f, 0.0f, 0.2281540036201477f, 0.0f, 0.6753230094909668f, 0.0f, 1.7053600549697876f, 0.7662169933319092f, 0.0f, 0.0f, 0.0f, 0.7353630065917969f, 0.07592669874429703f, 1.9101699590682983f, 0.9418879747390747f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.59089994430542f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755000114440918f, 0.0f, 0.18468700349330902f, 0.0f, 1.5629600286483765f, 0.6252850294113159f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.59089994430542f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5755000114440918f, 0.0f, 0.18468700349330902f, 0.0f, 1.5629600286483765f, 0.6252850294113159f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888013124466f, 0.0f, 0.0f, 0.0f, 0.0f, 0.4883829951286316f, 0.2527860105037689f, 0.0f, 0.0f, 0.0f, 1.0281699895858765f, 1.8566499948501587f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0857888013124466f, 0.0f, 0.0f, 0.0f, 0.0f, 0.4883829951286316f, 0.2527860105037689f, 0.0f, 0.0f, 0.0f, 1.0281699895858765f, 1.8566499948501587f, 0.0f, 0.0f, 0.009818360209465027f, 0.0f, 1.0637099742889404f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2904449999332428f, 0.3164060115814209f, 0.0f, 0.304161012172699f, 1.250789999961853f, 0.07071519643068314f, 0.0f, 0.009818360209465027f, 0.0f, 1.0637099742889404f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2904449999332428f, 0.3164060115814209f, 0.0f, 0.304161012172699f, 1.250789999961853f, 0.07071519643068314f, 0.0f, 0.9862639904022217f, 0.3092010021209717f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.648959994316101f, 0.34624800086021423f, 0.0f, 0.9181749820709229f, 0.7888399958610535f, 0.5249810218811035f, 1.9207600355148315f, 2.0701301097869873f, 0.3332439959049225f, 0.9862639904022217f, 0.3092010021209717f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.648959994316101f, 0.34624800086021423f, 0.0f, 0.9181749820709229f, 0.7888399958610535f, 0.5249810218811035f, 1.9207600355148315f, 2.0701301097869873f, 0.3332439959049225f, 0.41515299677848816f, 0.21031799912452698f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0261600017547607f, 0.0f, 0.7282559871673584f, 0.8418300151824951f, 0.09074530005455017f, 0.6288809776306152f, 3.5809900760650635f, 1.4997400045394897f, 0.0f, 0.41515299677848816f, 0.21031799912452698f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0261600017547607f, 0.0f, 0.7282559871673584f, 0.8418300151824951f, 0.09074530005455017f, 0.6288809776306152f, 3.5809900760650635f, 1.4997400045394897f, 0.0f})
                        }, { // input1_new
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 2, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.23689353466033936f, 0.28538501262664795f, 0.03702974319458008f, -0.19858193397521973f, -0.27569133043289185f, 0.4377344846725464f, 0.6037933826446533f, 0.3556246757507324f, 0.23689353466033936f, 0.28538501262664795f, 0.03702974319458008f, -0.19858193397521973f, -0.27569133043289185f, 0.4377344846725464f, 0.6037933826446533f, 0.3556246757507324f, -0.6942484378814697f, -0.93421471118927f, -0.8728787899017334f, 0.37144362926483154f, -0.6247671842575073f, 0.2379167079925537f, 0.40060222148895264f, 0.13566219806671143f, -0.6942484378814697f, -0.93421471118927f, -0.8728787899017334f, 0.37144362926483154f, -0.6247671842575073f, 0.2379167079925537f, 0.40060222148895264f, 0.13566219806671143f, -0.9977490305900574f, -0.9885817170143127f, -0.38952237367630005f, -0.47685933113098145f, 0.31073617935180664f, 0.7151104211807251f, -0.6376775503158569f, -0.3172910809516907f, -0.9977490305900574f, -0.9885817170143127f, -0.38952237367630005f, -0.47685933113098145f, 0.31073617935180664f, 0.7151104211807251f, -0.6376775503158569f, -0.3172910809516907f, 0.33468103408813477f, 0.7580188512802124f, 0.3066098690032959f, -0.37354087829589844f, 0.7700284719467163f, -0.6274704337120056f, -0.6857216358184814f, 0.006922006607055664f, 0.33468103408813477f, 0.7580188512802124f, 0.3066098690032959f, -0.37354087829589844f, 0.7700284719467163f, -0.6274704337120056f, -0.6857216358184814f, 0.006922006607055664f, 0.6579146385192871f, 0.35130810737609863f, 0.8083400726318359f, -0.6177767515182495f, -0.21095740795135498f, 0.41213345527648926f, 0.7378480434417725f, 0.09479415416717529f, 0.6579146385192871f, 0.35130810737609863f, 0.8083400726318359f, -0.6177767515182495f, -0.21095740795135498f, 0.41213345527648926f, 0.7378480434417725f, 0.09479415416717529f, 0.47791874408721924f, 0.8649692535400391f, -0.5337622165679932f, 0.8531515598297119f, 0.10288584232330322f, 0.8668400049209595f, -0.01118624210357666f, 0.10513687133789062f, 0.47791874408721924f, 0.8649692535400391f, -0.5337622165679932f, 0.8531515598297119f, 0.10288584232330322f, 0.8668400049209595f, -0.01118624210357666f, 0.10513687133789062f, 0.8782583475112915f, 0.5992914438247681f, 0.6282774209976196f, 0.18899452686309814f, 0.31440186500549316f, 0.9905998706817627f, 0.8717035055160522f, -0.35091716051101685f, 0.8782583475112915f, 0.5992914438247681f, 0.6282774209976196f, 0.18899452686309814f, 0.31440186500549316f, 0.9905998706817627f, 0.8717035055160522f, -0.35091716051101685f, 0.7486187219619751f, 0.17831337451934814f, 0.27554190158843994f, 0.5186471939086914f, 0.5508428812026978f, 0.5898202657699585f, -0.4744308590888977f, 0.20875751972198486f, 0.7486187219619751f, 0.17831337451934814f, 0.27554190158843994f, 0.5186471939086914f, 0.5508428812026978f, 0.5898202657699585f, -0.4744308590888977f, 0.20875751972198486f, -0.058871567249298096f, -0.6660907864570618f, 0.5909807682037354f, 0.7301709651947021f, 0.7460427284240723f, 0.3288288116455078f, -0.17503482103347778f, 0.2239614725112915f, -0.058871567249298096f, -0.6660907864570618f, 0.5909807682037354f, 0.7301709651947021f, 0.7460427284240723f, 0.3288288116455078f, -0.17503482103347778f, 0.2239614725112915f, 0.19379806518554688f, 0.29120302200317383f, 0.07711303234100342f, -0.7033160924911499f, 0.1580430269241333f, -0.9340732097625732f, 0.40182065963745117f, 0.036301374435424805f, 0.19379806518554688f, 0.29120302200317383f, 0.07711303234100342f, -0.7033160924911499f, 0.1580430269241333f, -0.9340732097625732f, 0.40182065963745117f, 0.036301374435424805f, 0.6652182340621948f, 0.03009819984436035f, -0.774704098701477f, -0.020380020141601562f, 0.020698070526123047f, -0.9030006527900696f, 0.6287028789520264f, -0.23068320751190186f, 0.6652182340621948f, 0.03009819984436035f, -0.774704098701477f, -0.020380020141601562f, 0.020698070526123047f, -0.9030006527900696f, 0.6287028789520264f, -0.23068320751190186f, 0.27531278133392334f, -0.09575521945953369f, -0.7120360136032104f, -0.1738443374633789f, -0.5059349536895752f, -0.18646687269210815f, -0.965086817741394f, 0.4351935386657715f, 0.27531278133392334f, -0.09575521945953369f, -0.7120360136032104f, -0.1738443374633789f, -0.5059349536895752f, -0.18646687269210815f, -0.965086817741394f, 0.4351935386657715f, 0.14744234085083008f, 0.6258940696716309f, 0.16536450386047363f, -0.10651493072509766f, -0.045277178287506104f, 0.9903297424316406f, -0.8825535178184509f, -0.851479172706604f, 0.14744234085083008f, 0.6258940696716309f, 0.16536450386047363f, -0.10651493072509766f, -0.045277178287506104f, 0.9903297424316406f, -0.8825535178184509f, -0.851479172706604f, 0.2815326452255249f, 0.19455957412719727f, -0.5547952651977539f, -0.5604243278503418f, 0.260486364364624f, 0.8470253944396973f, 0.475877046585083f, -0.0742955207824707f, 0.2815326452255249f, 0.19455957412719727f, -0.5547952651977539f, -0.5604243278503418f, 0.260486364364624f, 0.8470253944396973f, 0.475877046585083f, -0.0742955207824707f, -0.12287641316652298f, 0.701172947883606f, 0.9053244590759277f, 0.8978216648101807f, 0.7981722354888916f, 0.5340273380279541f, -0.3328615427017212f, 0.07348501682281494f, -0.12287641316652298f, 0.701172947883606f, 0.9053244590759277f, 0.8978216648101807f, 0.7981722354888916f, 0.5340273380279541f, -0.3328615427017212f, 0.07348501682281494f, -0.5617278814315796f, -0.04489755630493164f, 0.899640679359436f, -0.06766283512115479f, 0.768635630607605f, 0.934553861618042f, -0.6324692964553833f, -0.08392202854156494f, -0.5617278814315796f, -0.04489755630493164f, 0.899640679359436f, -0.06766283512115479f, 0.768635630607605f, 0.934553861618042f, -0.6324692964553833f, -0.08392202854156494f})
                        }, { // placeholder25
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f})
                        }, { // param25
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // weights1_new
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 8},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.4614590108394623f, 0.15338100492954254f, 0.5297430157661438f, -0.003712180070579052f, 0.6762670278549194f, -0.21134600043296814f, 0.3174929916858673f, 0.9696890115737915f, -0.34325098991394043f, 0.18642300367355347f, 0.3981510102748871f, 0.1523990035057068f, 0.4485040009021759f, 0.31766200065612793f, 0.5235559940338135f, -0.32351401448249817f, 0.48087701201438904f, 0.33311301469802856f, -0.7577139735221863f, -0.6744869947433472f, -0.6435850262641907f, 0.21776600182056427f, -0.025146199390292168f, 0.7951200008392334f, -0.5955740213394165f, -0.4224439859390259f, 0.37157198786735535f, -0.4521780014038086f, -0.556069016456604f, -0.48218798637390137f, -0.6854559779167175f, -0.7278509736061096f, 0.8418290019035339f, 0.5515350103378296f, -0.23233599960803986f, 0.7291579842567444f, -0.0029490599408745766f, -0.6975399851799011f, 0.7660729885101318f, -0.17842400074005127f, 0.36951300501823425f, -0.42324098944664f, 0.5485470294952393f, -0.015202299691736698f, -0.7574819922447205f, -0.8549100160598755f, 0.25133100152015686f, -0.9891830086708069f, 0.30626100301742554f, -0.34071600437164307f, 0.8861029744148254f, -0.07267569750547409f, -0.7235230207443237f, -0.7843030095100403f, 0.03542950004339218f, 0.5665640234947205f, -0.4854690134525299f, -0.62049800157547f, 0.8325459957122803f, 0.6978840231895447f, -0.2791149914264679f, 0.2944149971008301f, -0.5843129754066467f, 0.5487719774246216f, 0.06488189846277237f, 0.9687259793281555f, 0.7238339781761169f, -0.008045200258493423f, -0.35038599371910095f, -0.27280300855636597f, 0.11512099951505661f, -0.41264399886131287f, -0.8247129917144775f, -0.992842972278595f, -0.5929039716720581f, -0.4178929924964905f, 0.8637909889221191f, -0.423460990190506f, -0.14760099351406097f, -0.7706639766693115f, -0.47900599241256714f, 0.6547819972038269f, 0.5873140096664429f, -0.6391580104827881f, 0.8169689774513245f, -0.337228000164032f, 0.6598780155181885f, 0.7310699820518494f, 0.7547680139541626f, -0.3370420038700104f, 0.0960841029882431f, 0.36835700273513794f, 0.2441910058259964f, -0.8177030086517334f, -0.21122300624847412f, 0.4420120120048523f, 0.3722499907016754f, -0.6235979795455933f, -0.40542298555374146f, 0.45510101318359375f, 0.6736559867858887f, -0.14534500241279602f, -0.5113459825515747f, -0.9016749858856201f, -0.8125200271606445f, -0.12700599431991577f, 0.8098649978637695f, -0.72188401222229f, 0.6362550258636475f, 0.8689889907836914f, -0.3479729890823364f, -0.10179000347852707f, -0.7774490118026733f, 0.917273998260498f, 0.8192859888076782f, 0.20621800422668457f, -0.00785117968916893f, 0.16714100539684296f, 0.45871999859809875f, 0.9729340076446533f, -0.2767980098724365f, 0.8378610014915466f, 0.7479580044746399f, -0.015156599693000317f, -0.3300569951534271f, -0.4690769910812378f, 0.27730798721313477f, 0.4158180058002472f})
                        }, { // placeholder26
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f})
                        }, { // param26
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // recurrent_weights1_new
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.10000000149011612f})
                        }, { // placeholder27
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f})
                        }, { // param27
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // bias1_new
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.06569194793701172f, -0.6905524730682373f, 0.11079549789428711f, -0.9708412885665894f, -0.23957067728042603f, -0.2356656789779663f, -0.38918399810791016f, 0.4748154878616333f, -0.4791103005409241f, 0.29931795597076416f, 0.10463274270296097f, 0.8391817808151245f, 0.3719726800918579f, 0.6195706129074097f, 0.39569640159606934f, -0.3760990500450134f})
                        }, { // placeholder28
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f})
                        }, { // param28
                            .type = TestOperandType::INT32,
                            .dimensions = {},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<int32_t>({0})
                        }, { // hidden_state1_new
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {2, 16},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f})
                        }, { // placeholder29
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .dimensions = {1},
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .zeroPoint = 0,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .channelQuant = {},
                            .isIgnored = false,
                            .data = TestBuffer::createFromVector<_Float16>({0.0f})
                        }, { // param29
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
                            .inputs = {8, 9, 10},
                            .outputs = {0}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {11, 12, 13},
                            .outputs = {1}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {14, 15, 16},
                            .outputs = {2}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {17, 18, 19},
                            .outputs = {3}
                        }, {
                            .type = TestOperationType::ADD,
                            .inputs = {20, 21, 22},
                            .outputs = {4}
                        }, {
                            .type = TestOperationType::UNIDIRECTIONAL_SEQUENCE_RNN,
                            .inputs = {0, 1, 2, 3, 4, 5, 6},
                            .outputs = {7}
                        }},
                .inputIndexes = {8, 11, 14, 17, 20},
                .outputIndexes = {7}
            },
        .referenced = {},
        .isRelaxed = false,
        .expectedMultinomialDistributionTolerance = 0,
        .expectFailure = false,
        .minSupportedVersion = TestHalVersion::V1_2
    };
    return model;
}

const auto dummy_test_model_blackbox_time_major_float16_all_inputs_as_internal = TestModelManager::get().add("unidirectional_sequence_rnn_blackbox_time_major_float16_all_inputs_as_internal", get_test_model_blackbox_time_major_float16_all_inputs_as_internal());

}  // namespace generated_tests::unidirectional_sequence_rnn

