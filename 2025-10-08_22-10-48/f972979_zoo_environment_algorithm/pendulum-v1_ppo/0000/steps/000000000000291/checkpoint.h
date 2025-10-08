// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/standardize/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
#include <rl_tools/nn_models/mlp/network.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace mean {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {145, 86, 60, 190, 27, 36, 116, 60, 57, 242, 65, 63};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Constant>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace precision {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {57, 59, 179, 63, 18, 95, 189, 63, 121, 30, 133, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Constant>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using CONFIG = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::standardize::Configuration<float, unsigned long>; 
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::standardize::BindConfiguration<CONFIG>;
        using INPUT_SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::standardize::Layer<CONFIG, CAPABILITY, INPUT_SHAPE>;
        const TYPE module = {mean::parameters, precision::parameters};
        template <typename T_TYPE = TYPE>
        const T_TYPE factory = {mean::parameters, precision::parameters};
        template <typename T_TYPE = TYPE>
        const T_TYPE factory_function(){return T_TYPE{mean::parameters, precision::parameters};}
    }
    namespace layer_1 {
        namespace input_layer {
            namespace weights {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {187, 233, 240, 62, 127, 143, 202, 62, 246, 254, 35, 63, 167, 106, 8, 191, 105, 175, 221, 190, 182, 159, 89, 63, 24, 102, 152, 190, 245, 4, 13, 191, 215, 62, 57, 187, 176, 111, 22, 190, 24, 54, 202, 189, 249, 117, 71, 62, 104, 50, 210, 62, 203, 57, 121, 62, 96, 138, 19, 63, 73, 7, 73, 190, 201, 30, 232, 62, 177, 223, 109, 61, 69, 227, 45, 190, 103, 78, 59, 63, 224, 122, 144, 190, 211, 141, 71, 62, 247, 28, 224, 62, 254, 51, 18, 63, 64, 174, 157, 189, 206, 219, 165, 62, 162, 228, 136, 188, 30, 1, 245, 62, 186, 184, 18, 191, 136, 164, 163, 61, 209, 21, 17, 62, 104, 211, 53, 63, 83, 190, 169, 62, 72, 118, 230, 190, 171, 102, 228, 62, 86, 116, 131, 189, 120, 116, 155, 62, 207, 160, 48, 63, 117, 73, 113, 62, 16, 157, 198, 62, 199, 240, 51, 191, 82, 47, 218, 190, 108, 188, 247, 190, 181, 39, 47, 63, 80, 133, 34, 61, 213, 35, 199, 59, 60, 205, 45, 190, 222, 142, 129, 61, 249, 104, 41, 188, 37, 246, 112, 62, 233, 221, 132, 190, 218, 164, 128, 190, 41, 196, 223, 190, 4, 150, 19, 191, 29, 135, 162, 62, 27, 31, 251, 62, 2, 255, 117, 190, 98, 241, 2, 191, 182, 89, 12, 63, 119, 82, 148, 189, 222, 39, 159, 62, 29, 190, 232, 62, 248, 90, 217, 190, 89, 212, 2, 190, 208, 130, 17, 63, 49, 190, 146, 190, 104, 88, 241, 190, 197, 76, 178, 61, 122, 102, 47, 190, 161, 210, 239, 190, 96, 47, 10, 189, 143, 48, 30, 63, 0, 194, 195, 190, 18, 101, 46, 191, 205, 54, 46, 62, 141, 71, 198, 190, 52, 231, 249, 62, 5, 27, 137, 62, 73, 196, 221, 62, 173, 222, 217, 190, 51, 208, 187, 190, 236, 34, 223, 61, 137, 107, 81, 191, 218, 161, 16, 60, 68, 184, 21, 62, 198, 77, 56, 191, 122, 81, 240, 62, 143, 144, 109, 190, 134, 209, 189, 62, 17, 83, 124, 190, 132, 233, 21, 62, 145, 32, 185, 60, 185, 10, 13, 63, 83, 203, 29, 61, 224, 40, 186, 190, 37, 206, 197, 187};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
            namespace biases {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {50, 44, 134, 190, 217, 169, 24, 191, 88, 207, 190, 190, 36, 114, 167, 190, 96, 156, 135, 190, 48, 143, 45, 189, 167, 254, 155, 190, 49, 190, 244, 190, 183, 211, 162, 189, 76, 38, 145, 190, 16, 162, 142, 62, 248, 81, 59, 190, 190, 71, 183, 62, 58, 133, 253, 190, 151, 66, 137, 190, 54, 185, 174, 190, 243, 155, 226, 62, 114, 39, 141, 62, 186, 7, 134, 62, 74, 202, 246, 190, 34, 232, 6, 63, 96, 42, 91, 190, 48, 38, 213, 190, 168, 128, 42, 63, 8, 165, 133, 190, 13, 238, 222, 190, 224, 114, 219, 190, 47, 200, 46, 60, 204, 173, 241, 61, 135, 65, 3, 61, 197, 99, 164, 190, 105, 164, 61, 62};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
        }
        namespace input_layer {
            using CONFIG = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Configuration<float, unsigned long, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::FAST_TANH, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::DefaultInitializer<float, unsigned long>, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input>; 
            using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::BindConfiguration<CONFIG>;
            using INPUT_SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
            using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>;
            using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CONFIG, CAPABILITY, INPUT_SHAPE>;
            const TYPE module = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory_function(){return T_TYPE{weights::parameters, biases::parameters};}
        }
        namespace hidden_layer_0 {
            namespace weights {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {16, 0, 71, 62, 240, 217, 11, 190, 251, 18, 123, 190, 220, 46, 61, 61, 211, 65, 50, 189, 245, 160, 38, 62, 132, 195, 125, 62, 145, 67, 149, 62, 251, 115, 59, 189, 245, 223, 156, 188, 36, 105, 132, 62, 16, 74, 119, 62, 177, 167, 169, 61, 196, 58, 165, 190, 150, 252, 202, 61, 189, 68, 232, 189, 149, 235, 219, 61, 19, 169, 108, 189, 35, 79, 100, 61, 55, 106, 94, 61, 211, 202, 196, 61, 85, 183, 21, 188, 75, 61, 174, 61, 159, 42, 92, 62, 178, 72, 33, 190, 8, 105, 182, 188, 4, 149, 239, 189, 28, 16, 212, 189, 186, 90, 119, 189, 227, 150, 233, 61, 148, 114, 143, 189, 63, 181, 196, 60, 168, 222, 20, 62, 61, 225, 250, 189, 66, 169, 53, 188, 221, 158, 176, 189, 63, 117, 3, 61, 107, 181, 121, 62, 198, 46, 91, 61, 215, 239, 135, 61, 185, 214, 128, 62, 216, 210, 68, 61, 149, 80, 218, 61, 68, 45, 94, 62, 147, 13, 122, 62, 0, 77, 187, 190, 151, 50, 37, 62, 227, 22, 167, 187, 139, 0, 254, 60, 66, 73, 158, 190, 236, 191, 193, 188, 166, 181, 48, 62, 130, 20, 135, 62, 39, 97, 89, 189, 247, 144, 255, 187, 14, 210, 67, 60, 207, 223, 187, 189, 148, 161, 39, 62, 139, 182, 44, 190, 178, 165, 109, 190, 87, 1, 74, 190, 71, 169, 249, 61, 11, 59, 65, 62, 45, 167, 17, 187, 81, 188, 221, 60, 230, 197, 165, 190, 77, 129, 130, 60, 149, 181, 11, 61, 168, 249, 46, 189, 28, 244, 221, 61, 37, 127, 66, 62, 103, 10, 25, 62, 183, 16, 11, 189, 39, 104, 160, 61, 94, 224, 72, 62, 7, 134, 116, 61, 151, 240, 93, 61, 113, 178, 73, 189, 214, 152, 98, 62, 43, 26, 118, 61, 16, 68, 57, 189, 233, 220, 173, 190, 222, 219, 139, 60, 224, 1, 130, 62, 245, 28, 73, 62, 131, 91, 68, 62, 60, 202, 116, 61, 89, 35, 121, 62, 112, 10, 134, 190, 136, 82, 159, 189, 213, 105, 29, 190, 75, 50, 172, 190, 234, 142, 15, 189, 236, 55, 72, 62, 216, 88, 55, 189, 28, 96, 105, 189, 211, 103, 187, 189, 189, 85, 129, 190, 155, 214, 186, 57, 15, 26, 47, 189, 180, 86, 2, 62, 11, 94, 51, 61, 134, 163, 151, 62, 30, 92, 158, 189, 125, 3, 75, 62, 159, 108, 159, 189, 209, 129, 23, 188, 83, 94, 178, 188, 193, 170, 197, 189, 65, 242, 98, 190, 12, 111, 134, 189, 143, 59, 43, 190, 227, 225, 25, 190, 46, 37, 232, 189, 215, 69, 103, 60, 86, 23, 148, 189, 108, 185, 106, 62, 93, 57, 60, 61, 9, 227, 29, 61, 214, 154, 229, 188, 116, 164, 183, 189, 220, 175, 48, 62, 34, 117, 181, 188, 70, 62, 136, 190, 157, 27, 135, 190, 198, 191, 167, 188, 19, 83, 147, 189, 26, 33, 120, 190, 175, 73, 209, 189, 136, 197, 175, 62, 50, 10, 151, 61, 131, 123, 19, 61, 210, 136, 28, 190, 173, 185, 155, 190, 166, 222, 59, 189, 186, 86, 51, 189, 248, 100, 34, 190, 126, 161, 64, 189, 246, 204, 139, 189, 3, 254, 92, 60, 24, 86, 111, 189, 163, 87, 29, 62, 178, 200, 29, 190, 8, 135, 237, 61, 169, 226, 239, 61, 105, 182, 138, 62, 55, 207, 12, 190, 224, 128, 152, 189, 248, 249, 250, 189, 60, 207, 115, 190, 170, 253, 133, 189, 122, 222, 99, 190, 127, 227, 49, 60, 41, 87, 41, 190, 207, 105, 148, 62, 85, 70, 9, 61, 122, 64, 135, 62, 141, 183, 36, 190, 89, 128, 252, 60, 105, 7, 134, 186, 225, 171, 52, 62, 224, 236, 161, 190, 238, 0, 148, 189, 208, 1, 246, 60, 227, 249, 185, 189, 40, 57, 218, 60, 68, 66, 78, 188, 176, 66, 88, 61, 212, 232, 144, 62, 20, 175, 221, 189, 35, 27, 29, 62, 73, 217, 134, 60, 137, 146, 212, 188, 28, 88, 178, 190, 146, 214, 216, 60, 48, 76, 250, 189, 217, 200, 140, 61, 35, 232, 143, 190, 251, 222, 77, 187, 103, 245, 113, 62, 29, 17, 247, 61, 156, 74, 110, 61, 203, 232, 61, 62, 169, 147, 183, 189, 54, 152, 20, 60, 64, 109, 225, 61, 205, 71, 119, 190, 196, 20, 133, 190, 132, 56, 221, 189, 230, 253, 135, 189, 47, 168, 188, 61, 182, 77, 132, 61, 181, 217, 88, 62, 147, 237, 141, 190, 89, 44, 191, 59, 250, 198, 72, 190, 86, 215, 214, 61, 160, 188, 134, 60, 247, 8, 246, 187, 21, 106, 218, 61, 193, 62, 118, 62, 180, 33, 35, 189, 129, 210, 92, 62, 47, 219, 19, 62, 90, 138, 81, 61, 23, 233, 134, 190, 146, 210, 20, 62, 247, 204, 38, 62, 214, 85, 19, 190, 88, 164, 232, 189, 97, 88, 214, 188, 235, 13, 124, 61, 144, 205, 197, 61, 33, 181, 15, 62, 163, 41, 102, 189, 88, 40, 39, 62, 91, 56, 37, 61, 255, 88, 189, 61, 182, 162, 45, 190, 8, 222, 142, 190, 16, 117, 132, 190, 211, 48, 178, 189, 39, 154, 1, 62, 225, 230, 32, 190, 16, 243, 197, 61, 6, 86, 132, 190, 48, 70, 37, 190, 18, 130, 32, 190, 163, 159, 241, 61, 229, 199, 32, 61, 8, 143, 113, 188, 80, 126, 15, 61, 254, 26, 9, 61, 57, 218, 109, 190, 164, 143, 82, 62, 235, 70, 142, 187, 119, 151, 112, 189, 0, 82, 205, 188, 213, 240, 52, 62, 35, 185, 122, 60, 209, 113, 3, 60, 194, 179, 71, 60, 88, 232, 92, 62, 221, 111, 17, 62, 73, 129, 147, 188, 40, 214, 71, 61, 188, 25, 205, 189, 16, 236, 32, 62, 219, 9, 33, 60, 250, 170, 69, 61, 41, 35, 89, 189, 77, 105, 173, 189, 202, 178, 219, 60, 252, 128, 52, 189, 227, 140, 46, 62, 249, 131, 230, 188, 113, 98, 24, 61, 44, 144, 174, 190, 29, 184, 194, 188, 170, 30, 43, 189, 106, 66, 2, 62, 171, 147, 117, 62, 147, 47, 241, 61, 87, 47, 67, 62, 57, 203, 79, 62, 106, 93, 113, 189, 252, 251, 49, 187, 57, 123, 73, 62, 46, 119, 190, 189, 81, 134, 182, 189, 234, 43, 94, 62, 108, 52, 181, 189, 152, 227, 110, 188, 240, 206, 155, 189, 216, 21, 126, 60, 220, 103, 137, 61, 251, 123, 118, 188, 178, 104, 22, 62, 99, 96, 57, 189, 98, 238, 61, 62, 77, 113, 227, 188, 112, 21, 193, 61, 220, 1, 15, 190, 71, 179, 70, 190, 69, 6, 246, 189, 34, 217, 112, 62, 219, 127, 90, 190, 225, 252, 48, 190, 85, 2, 63, 190, 26, 104, 4, 60, 190, 92, 189, 189, 52, 132, 181, 61, 119, 60, 74, 189, 94, 4, 100, 190, 51, 152, 116, 190, 58, 253, 140, 189, 13, 93, 232, 61, 73, 143, 62, 62, 209, 178, 128, 61, 61, 237, 183, 189, 60, 161, 79, 190, 247, 14, 131, 61, 94, 177, 26, 190, 212, 94, 6, 190, 97, 233, 146, 189, 167, 6, 166, 61, 212, 209, 66, 190, 70, 142, 222, 61, 144, 247, 3, 61, 248, 208, 34, 189, 175, 49, 119, 189, 142, 158, 17, 190, 94, 227, 99, 62, 116, 20, 241, 188, 136, 232, 174, 61, 120, 165, 95, 62, 231, 98, 71, 62, 211, 53, 217, 189, 230, 124, 227, 61, 91, 145, 253, 189, 166, 251, 47, 62, 211, 49, 163, 188, 159, 6, 39, 61, 25, 69, 43, 61, 136, 144, 19, 189, 1, 128, 197, 60, 129, 192, 224, 188, 212, 71, 181, 189, 100, 91, 55, 190, 184, 47, 98, 61, 205, 97, 172, 61, 154, 83, 4, 189, 148, 7, 254, 189, 54, 58, 122, 189, 182, 239, 173, 61, 248, 111, 139, 61, 254, 36, 250, 189, 104, 160, 105, 187, 214, 151, 12, 190, 3, 84, 107, 61, 215, 154, 190, 61, 84, 114, 226, 189, 157, 93, 221, 189, 185, 39, 217, 61, 183, 163, 41, 62, 52, 150, 167, 188, 112, 27, 239, 61, 186, 159, 160, 188, 146, 255, 110, 189, 70, 33, 103, 61, 228, 179, 9, 61, 9, 235, 149, 61, 177, 83, 198, 189, 170, 135, 165, 190, 129, 132, 206, 189, 11, 105, 57, 190, 174, 231, 217, 61, 154, 42, 11, 62, 2, 156, 155, 62, 52, 149, 8, 62, 208, 82, 27, 189, 255, 225, 71, 61, 194, 12, 145, 62, 39, 29, 97, 62, 180, 227, 44, 60, 81, 102, 147, 190, 1, 185, 152, 62, 175, 65, 40, 190, 89, 184, 19, 61, 146, 12, 132, 190, 0, 67, 78, 62, 47, 249, 162, 185, 166, 59, 238, 61, 6, 157, 182, 61, 153, 8, 193, 61, 5, 229, 57, 61, 8, 174, 45, 190, 33, 128, 206, 61, 153, 139, 6, 190, 144, 223, 9, 190, 225, 33, 6, 189, 209, 190, 171, 189, 72, 165, 36, 62, 155, 208, 140, 190, 123, 105, 62, 62, 6, 88, 155, 189, 187, 172, 102, 61, 162, 84, 203, 61, 253, 5, 231, 189, 220, 141, 169, 61, 237, 128, 45, 61, 42, 107, 42, 62, 163, 57, 192, 61, 42, 77, 179, 189, 17, 195, 143, 61, 153, 33, 90, 61, 51, 179, 171, 188, 105, 13, 100, 190, 203, 1, 122, 189, 118, 36, 60, 189, 128, 143, 236, 59, 95, 213, 81, 190, 252, 248, 20, 189, 57, 108, 241, 61, 148, 43, 230, 61, 61, 16, 143, 61, 125, 103, 194, 189, 158, 50, 121, 62, 165, 248, 3, 190, 0, 115, 169, 61, 43, 240, 173, 189, 104, 224, 142, 190, 10, 134, 56, 190, 118, 144, 186, 60, 50, 24, 16, 190, 81, 131, 21, 190, 59, 157, 40, 62, 184, 226, 163, 190, 26, 196, 120, 61, 71, 221, 9, 62, 95, 68, 59, 62, 80, 158, 137, 62, 125, 14, 95, 62, 225, 11, 230, 61, 47, 38, 102, 61, 58, 225, 128, 190, 5, 84, 204, 60, 116, 165, 85, 61, 84, 13, 54, 62, 53, 223, 56, 190, 119, 242, 16, 62, 53, 66, 247, 61, 135, 111, 200, 61, 129, 213, 114, 190, 223, 111, 241, 61, 133, 226, 30, 189, 189, 88, 47, 62, 47, 21, 13, 189, 126, 35, 132, 61, 20, 235, 124, 61, 158, 60, 123, 187, 25, 207, 10, 190, 229, 139, 3, 190, 99, 244, 182, 190, 200, 145, 20, 190, 232, 200, 55, 62, 111, 172, 174, 188, 44, 196, 126, 189, 146, 214, 86, 60, 219, 20, 197, 61, 217, 222, 23, 62, 108, 11, 13, 190, 48, 153, 33, 190, 136, 162, 61, 60, 217, 62, 154, 190, 100, 249, 111, 190, 150, 182, 73, 190, 58, 168, 51, 62, 200, 3, 79, 60, 221, 227, 183, 60, 97, 188, 88, 190, 235, 66, 134, 62, 165, 131, 138, 189, 244, 15, 150, 60, 46, 38, 180, 189, 83, 124, 248, 60, 80, 51, 163, 189, 240, 120, 222, 189, 19, 162, 132, 61, 189, 72, 38, 190, 193, 150, 82, 189, 207, 207, 45, 190, 82, 17, 96, 62, 221, 245, 134, 187, 236, 15, 138, 62, 64, 145, 242, 61, 29, 211, 148, 188, 245, 34, 202, 61, 185, 188, 22, 189, 167, 230, 127, 62, 156, 99, 27, 190, 152, 1, 60, 61, 123, 20, 95, 189, 225, 218, 3, 60, 22, 104, 27, 190, 207, 59, 49, 190, 53, 111, 20, 190, 124, 49, 36, 190, 238, 58, 36, 189, 118, 129, 172, 189, 141, 131, 104, 190, 90, 43, 237, 189, 77, 121, 33, 190, 225, 19, 136, 62, 194, 231, 191, 187, 53, 83, 10, 190, 73, 59, 16, 189, 94, 25, 103, 60, 235, 187, 75, 189, 212, 114, 115, 189, 202, 22, 63, 190, 123, 161, 51, 190, 156, 101, 57, 190, 16, 120, 58, 61, 182, 149, 214, 61, 27, 113, 143, 61, 53, 217, 34, 62, 107, 116, 187, 61, 7, 250, 28, 187, 147, 162, 52, 190, 116, 241, 153, 60, 229, 66, 42, 62, 231, 69, 39, 190, 22, 85, 111, 62, 145, 80, 215, 61, 92, 81, 132, 189, 48, 107, 31, 62, 214, 57, 194, 189, 33, 152, 147, 190, 184, 138, 46, 190, 46, 220, 151, 190, 238, 168, 1, 62, 182, 79, 17, 59, 15, 194, 212, 188, 33, 128, 21, 187, 187, 150, 141, 61, 171, 58, 75, 190, 18, 73, 105, 187, 139, 173, 163, 189, 25, 194, 116, 62, 179, 163, 132, 190, 247, 178, 4, 61, 253, 223, 55, 190, 116, 208, 238, 189, 104, 122, 90, 190, 184, 17, 17, 60, 193, 233, 34, 62, 225, 63, 22, 62, 118, 208, 189, 61, 131, 121, 174, 62, 30, 100, 67, 62, 173, 51, 222, 60, 96, 91, 108, 189, 57, 87, 49, 189, 65, 180, 7, 189, 200, 194, 82, 62, 182, 124, 18, 62, 8, 61, 213, 61, 164, 236, 233, 188, 24, 74, 33, 190, 6, 54, 135, 188, 167, 207, 41, 189, 20, 11, 132, 190, 117, 198, 172, 61, 119, 224, 105, 188, 217, 118, 172, 61, 201, 189, 157, 60, 5, 123, 178, 61, 211, 54, 55, 190, 49, 17, 152, 189, 63, 104, 127, 189, 164, 70, 70, 61, 87, 128, 31, 189, 18, 63, 39, 188, 135, 101, 2, 190, 185, 206, 106, 59, 92, 82, 153, 61, 186, 207, 72, 189, 227, 85, 155, 61, 201, 199, 96, 60, 119, 211, 94, 62, 120, 38, 243, 186, 104, 208, 140, 62, 174, 2, 126, 189, 219, 97, 238, 189, 144, 189, 129, 62, 26, 84, 11, 190, 196, 59, 153, 62, 11, 248, 212, 61, 5, 214, 13, 61, 7, 43, 202, 189, 176, 116, 107, 187, 215, 188, 178, 57, 61, 202, 158, 189, 13, 235, 116, 190, 141, 81, 123, 62, 32, 62, 70, 61, 148, 37, 196, 189, 200, 180, 99, 188, 182, 227, 80, 62, 110, 80, 150, 188, 216, 60, 2, 190, 62, 196, 16, 186, 30, 126, 214, 61, 241, 32, 19, 61, 162, 224, 135, 190, 247, 14, 162, 189, 28, 84, 125, 190, 62, 130, 39, 188, 214, 45, 17, 60, 144, 176, 132, 62, 172, 63, 74, 190, 56, 45, 173, 61, 125, 125, 37, 62, 197, 27, 85, 62, 205, 103, 149, 61, 138, 46, 121, 61, 85, 152, 67, 62, 196, 141, 27, 62, 121, 163, 48, 190, 237, 145, 78, 190, 87, 186, 186, 61, 38, 10, 50, 61, 165, 72, 64, 62, 184, 210, 80, 62, 255, 13, 14, 61, 89, 124, 167, 62, 146, 9, 152, 189, 55, 142, 166, 60, 81, 73, 202, 60, 30, 103, 148, 188, 168, 78, 145, 190, 59, 152, 8, 61, 38, 64, 65, 61, 31, 241, 161, 61, 232, 142, 153, 59, 113, 183, 202, 61, 145, 146, 132, 188, 232, 174, 103, 189, 88, 105, 140, 62, 223, 152, 11, 61, 193, 135, 79, 61, 243, 228, 99, 190, 65, 68, 207, 61, 91, 159, 5, 189, 190, 212, 147, 190, 70, 239, 90, 190, 51, 81, 97, 61, 255, 48, 4, 190, 112, 60, 108, 190, 215, 244, 88, 189, 30, 36, 113, 189, 113, 44, 98, 190, 201, 52, 158, 189, 81, 60, 150, 61, 237, 116, 133, 62, 153, 173, 147, 62, 37, 136, 254, 61, 221, 56, 157, 62, 174, 225, 79, 189, 165, 203, 9, 61, 182, 114, 134, 62, 195, 180, 39, 62, 104, 240, 161, 189, 30, 222, 241, 60, 160, 78, 46, 190, 100, 63, 94, 60, 98, 190, 155, 189, 171, 54, 227, 186, 221, 33, 152, 61, 177, 8, 132, 61, 153, 103, 158, 62, 203, 193, 253, 189, 136, 42, 35, 189, 160, 49, 7, 190, 3, 255, 133, 189, 118, 13, 134, 189, 218, 149, 195, 190, 247, 1, 46, 190, 200, 246, 2, 61, 250, 129, 15, 188, 185, 211, 138, 190, 62, 112, 227, 61, 105, 16, 158, 190, 165, 109, 18, 61, 63, 210, 91, 189, 186, 44, 235, 61, 142, 112, 34, 62, 181, 203, 128, 62, 187, 46, 75, 62, 34, 216, 161, 61, 71, 13, 131, 61, 21, 149, 115, 62, 39, 170, 65, 61, 202, 66, 225, 60, 4, 192, 187, 189, 173, 135, 128, 62, 246, 245, 73, 61, 50, 99, 6, 61, 235, 176, 159, 190, 35, 204, 37, 189, 68, 137, 70, 62, 12, 154, 133, 189, 6, 84, 34, 62, 72, 162, 228, 189, 201, 227, 30, 62, 88, 34, 126, 190, 134, 56, 139, 61, 74, 14, 54, 190, 237, 46, 53, 190, 56, 176, 134, 190, 236, 136, 143, 60, 217, 25, 255, 189, 6, 32, 76, 61, 177, 116, 173, 61, 248, 86, 22, 62, 203, 143, 173, 61, 68, 90, 35, 62, 201, 210, 111, 61, 250, 78, 41, 190, 245, 152, 28, 61, 161, 147, 206, 189, 29, 66, 158, 189, 196, 216, 157, 61, 47, 253, 176, 189, 197, 108, 202, 189, 215, 222, 123, 190, 118, 170, 160, 62, 4, 72, 144, 61, 30, 32, 23, 60, 243, 7, 142, 61, 61, 178, 138, 62, 18, 71, 33, 61, 186, 141, 102, 190, 200, 12, 162, 189, 96, 75, 234, 187, 168, 210, 35, 190, 70, 67, 84, 190, 80, 228, 89, 62, 236, 62, 48, 61, 62, 121, 101, 62, 163, 37, 94, 60, 12, 84, 32, 62, 129, 45, 76, 189, 71, 127, 16, 190, 34, 169, 185, 189, 171, 81, 57, 62, 203, 74, 158, 189, 9, 210, 165, 61, 215, 95, 197, 61, 164, 96, 216, 61, 96, 73, 93, 62, 197, 125, 199, 62, 180, 101, 9, 62, 4, 238, 193, 61, 112, 99, 122, 190, 111, 231, 98, 189, 33, 23, 80, 62, 39, 190, 170, 189, 26, 83, 29, 189, 231, 19, 85, 62, 247, 9, 74, 61, 76, 219, 37, 62, 182, 149, 55, 189, 246, 175, 138, 62, 252, 83, 135, 62, 150, 120, 53, 62, 181, 231, 153, 62, 38, 50, 22, 62, 132, 146, 250, 188, 163, 179, 72, 61, 131, 212, 77, 62, 227, 132, 42, 190, 217, 24, 64, 190, 209, 42, 150, 190, 117, 143, 36, 62, 88, 101, 11, 190, 183, 163, 17, 190, 243, 254, 135, 61, 246, 187, 138, 62, 6, 115, 92, 62, 203, 69, 161, 189, 17, 48, 149, 61, 150, 217, 12, 190, 37, 57, 91, 189, 35, 130, 38, 61, 188, 212, 73, 187, 82, 136, 246, 188, 126, 119, 50, 190, 28, 187, 7, 62, 20, 48, 214, 61, 59, 58, 219, 60, 147, 89, 104, 61, 218, 203, 205, 60, 115, 244, 196, 187, 254, 153, 6, 61, 152, 65, 16, 188, 76, 54, 240, 61, 146, 115, 112, 190, 206, 109, 4, 190, 64, 113, 26, 62, 9, 244, 61, 189, 228, 98, 87, 189, 189, 80, 165, 60, 7, 95, 210, 188, 55, 249, 141, 62, 86, 82, 106, 62, 96, 135, 80, 190, 27, 70, 148, 189, 84, 182, 235, 61, 5, 0, 185, 60, 130, 210, 64, 62, 14, 72, 179, 189, 55, 87, 250, 189, 218, 175, 184, 189, 61, 144, 91, 190, 19, 221, 76, 190, 176, 245, 44, 188, 76, 93, 48, 60, 59, 140, 54, 62, 138, 221, 202, 189, 188, 76, 167, 189, 228, 233, 99, 187, 39, 85, 185, 61, 230, 249, 253, 189, 78, 251, 218, 61, 165, 139, 182, 61, 39, 226, 57, 62, 43, 42, 45, 190, 18, 98, 16, 190, 196, 97, 121, 190, 95, 8, 24, 61, 100, 178, 65, 59, 71, 97, 31, 190, 221, 120, 35, 61, 183, 253, 160, 61, 25, 161, 6, 62, 144, 14, 153, 62, 37, 100, 122, 62, 36, 25, 121, 188, 88, 50, 199, 189, 133, 176, 89, 187, 93, 208, 222, 61, 9, 167, 121, 189, 165, 45, 1, 190, 0, 211, 28, 62, 145, 83, 191, 61, 245, 211, 7, 62, 23, 126, 227, 59, 166, 159, 158, 61, 201, 103, 63, 189, 255, 75, 1, 62, 55, 251, 94, 60, 35, 249, 185, 189, 156, 101, 38, 190, 67, 117, 249, 189, 174, 215, 41, 189, 74, 29, 229, 189, 204, 121, 158, 188, 99, 164, 31, 188, 99, 106, 16, 190, 28, 119, 226, 189, 71, 252, 6, 62, 45, 222, 238, 60, 134, 236, 228, 189, 120, 221, 140, 188, 26, 195, 53, 62, 104, 234, 204, 61, 114, 60, 215, 189, 105, 200, 164, 189, 124, 7, 133, 188, 193, 254, 178, 61, 59, 108, 34, 190, 249, 215, 159, 189, 209, 111, 161, 189, 1, 207, 64, 62, 126, 227, 170, 61, 156, 108, 48, 61, 115, 85, 115, 190, 250, 57, 85, 190, 2, 106, 85, 190, 166, 147, 127, 190, 186, 231, 247, 188, 241, 205, 143, 189, 244, 89, 41, 190, 157, 242, 14, 61, 101, 205, 234, 189, 205, 180, 145, 61, 187, 137, 79, 190, 231, 170, 171, 61, 5, 71, 249, 187, 68, 242, 161, 62, 115, 159, 15, 61, 74, 83, 59, 190, 93, 77, 249, 188, 236, 169, 195, 189, 56, 133, 120, 61, 124, 22, 86, 190, 173, 84, 163, 62, 230, 13, 104, 189, 162, 7, 145, 62, 224, 124, 136, 62, 131, 79, 3, 62, 26, 140, 163, 59, 229, 163, 53, 190, 144, 125, 27, 62, 30, 222, 251, 189, 47, 172, 79, 190, 200, 98, 63, 190, 5, 143, 35, 189, 37, 95, 235, 61, 174, 171, 209, 188, 108, 188, 94, 189, 158, 97, 19, 62, 140, 246, 39, 61, 192, 98, 37, 190, 152, 74, 71, 62, 186, 221, 62, 62, 48, 149, 30, 58, 45, 142, 37, 61, 212, 57, 183, 189, 133, 15, 164, 61, 252, 255, 163, 189, 64, 30, 102, 61, 106, 64, 143, 61, 246, 158, 129, 61, 119, 21, 227, 189, 40, 1, 176, 186, 183, 104, 122, 189, 149, 22, 8, 190, 125, 5, 12, 62, 233, 37, 134, 189, 70, 68, 76, 61, 131, 214, 16, 189, 194, 232, 254, 189, 204, 170, 212, 61, 2, 255, 210, 185, 234, 50, 177, 187, 136, 81, 21, 190, 186, 167, 130, 62, 140, 133, 131, 60, 105, 1, 202, 187, 179, 231, 143, 190, 95, 85, 136, 190, 134, 206, 125, 189, 45, 188, 66, 190, 204, 137, 15, 190, 32, 126, 95, 62, 3, 180, 223, 59, 171, 87, 69, 190, 23, 134, 95, 190, 252, 250, 64, 62, 253, 101, 39, 190, 212, 102, 135, 61, 185, 18, 150, 59, 160, 145, 234, 59, 140, 243, 131, 189, 146, 253, 25, 190, 66, 23, 31, 190, 253, 223, 143, 60, 235, 126, 222, 189, 77, 230, 51, 190, 237, 218, 205, 61, 186, 36, 42, 190, 135, 232, 13, 62, 149, 244, 138, 62, 229, 192, 64, 62, 157, 110, 216, 61, 157, 151, 106, 61, 44, 79, 21, 61, 232, 250, 37, 61, 93, 91, 170, 190, 57, 216, 251, 60, 33, 250, 13, 189, 162, 235, 84, 62, 71, 98, 138, 62, 75, 145, 0, 62, 86, 190, 142, 189, 88, 15, 149, 62, 185, 195, 143, 188, 52, 230, 77, 62, 223, 215, 46, 62, 133, 168, 44, 62, 151, 58, 95, 190, 96, 190, 22, 62, 54, 83, 247, 61, 149, 231, 245, 189, 178, 28, 186, 189, 190, 74, 94, 62, 198, 192, 183, 189, 224, 180, 3, 189, 65, 196, 212, 61, 43, 251, 11, 189, 237, 32, 90, 62, 60, 91, 190, 189, 4, 184, 11, 62, 162, 101, 235, 189, 23, 106, 16, 190, 200, 8, 8, 190, 5, 208, 252, 61, 194, 105, 10, 62, 3, 237, 152, 189, 208, 92, 151, 59, 173, 62, 96, 190, 68, 111, 168, 189, 122, 245, 141, 61, 62, 129, 0, 62, 124, 51, 82, 62, 187, 164, 19, 62, 37, 214, 227, 60, 84, 88, 154, 62, 159, 163, 125, 190, 24, 66, 244, 60, 120, 3, 194, 60, 15, 40, 41, 62, 39, 31, 150, 190, 29, 239, 90, 61, 175, 93, 219, 60, 26, 59, 194, 61, 49, 192, 109, 190, 109, 22, 209, 61, 18, 196, 216, 61, 37, 210, 103, 62, 41, 187, 233, 61, 202, 234, 165, 188, 216, 161, 176, 189, 103, 135, 113, 190, 33, 56, 13, 62, 61, 79, 106, 189, 4, 146, 139, 190, 134, 77, 104, 190, 42, 14, 110, 62, 207, 57, 245, 61, 52, 106, 149, 190};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
            namespace biases {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {127, 191, 52, 190, 60, 85, 144, 61, 16, 136, 84, 59, 158, 8, 129, 59, 195, 51, 25, 61, 187, 14, 34, 61, 162, 205, 232, 61, 37, 55, 207, 189, 156, 85, 236, 189, 244, 150, 117, 189, 201, 251, 228, 61, 107, 251, 28, 190, 28, 14, 202, 61, 176, 82, 215, 189, 68, 73, 15, 190, 142, 196, 201, 188, 129, 144, 253, 188, 118, 200, 23, 190, 16, 115, 246, 189, 60, 82, 82, 188, 126, 143, 222, 60, 225, 249, 215, 61, 203, 22, 79, 61, 210, 149, 155, 189, 210, 67, 19, 190, 193, 57, 172, 60, 95, 89, 167, 189, 87, 245, 151, 61, 132, 58, 145, 189, 97, 189, 31, 189, 218, 39, 229, 189, 219, 196, 175, 189};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
        }
        namespace hidden_layer_0 {
            using CONFIG = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Configuration<float, unsigned long, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::FAST_TANH, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::DefaultInitializer<float, unsigned long>, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal>; 
            using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::BindConfiguration<CONFIG>;
            using INPUT_SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 32>;
            using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>;
            using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CONFIG, CAPABILITY, INPUT_SHAPE>;
            const TYPE module = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory_function(){return T_TYPE{weights::parameters, biases::parameters};}
        }
        namespace output_layer {
            namespace weights {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {185, 137, 149, 190, 210, 30, 135, 190, 175, 42, 153, 190, 149, 147, 244, 189, 87, 236, 5, 62, 52, 53, 111, 190, 226, 23, 109, 190, 118, 241, 226, 189, 54, 65, 117, 189, 211, 130, 124, 61, 61, 122, 145, 188, 226, 43, 172, 190, 82, 203, 55, 190, 205, 163, 148, 190, 118, 39, 147, 62, 222, 74, 222, 61, 129, 152, 8, 62, 196, 215, 4, 62, 227, 90, 21, 62, 22, 43, 120, 190, 69, 56, 91, 190, 36, 243, 126, 190, 96, 218, 1, 62, 135, 135, 83, 190, 249, 37, 6, 61, 50, 66, 115, 62, 33, 174, 175, 187, 138, 171, 64, 62, 225, 3, 67, 60, 84, 58, 253, 61, 202, 34, 141, 190, 110, 46, 79, 190};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
            namespace biases {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {23, 18, 154, 61};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 1, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
        }
        namespace output_layer {
            using CONFIG = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Configuration<float, unsigned long, 1, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::DefaultInitializer<float, unsigned long>, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output>; 
            using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::BindConfiguration<CONFIG>;
            using INPUT_SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 32>;
            using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>;
            using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CONFIG, CAPABILITY, INPUT_SHAPE>;
            const TYPE module = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory_function(){return T_TYPE{weights::parameters, biases::parameters};}
        }
        using CONFIG = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::mlp::Configuration<float, unsigned long, 1, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::FAST_TANH, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::DefaultInitializer<float, unsigned long>>; 
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::mlp::BindConfiguration<CONFIG>;
        using INPUT_SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::mlp::NeuralNetwork<CONFIG, CAPABILITY, INPUT_SHAPE>;
        const TYPE module = {input_layer::factory<TYPE::SPEC::INPUT_LAYER>, {hidden_layer_0::factory<TYPE::SPEC::HIDDEN_LAYER>}, output_layer::factory<TYPE::SPEC::OUTPUT_LAYER>};
        template <typename T_TYPE = TYPE>
        const T_TYPE factory = {input_layer::factory<typename T_TYPE::SPEC::INPUT_LAYER>, {hidden_layer_0::factory<typename T_TYPE::SPEC::HIDDEN_LAYER>}, output_layer::factory<typename T_TYPE::SPEC::OUTPUT_LAYER>};
        template <typename T_TYPE = TYPE>
        const T_TYPE factory_function(){return T_TYPE{input_layer::factory_function<typename T_TYPE::SPEC::INPUT_LAYER>(), {hidden_layer_0::factory_function<typename T_TYPE::SPEC::HIDDEN_LAYER>()}, output_layer::factory_function<typename T_TYPE::SPEC::OUTPUT_LAYER>()};}
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>; 
        template <typename T_CONTENT, typename T_NEXT_MODULE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::OutputModule>
        using Module = typename RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Module<T_CONTENT, T_NEXT_MODULE>;
        using MODULE_CHAIN = Module<layer_0::TEMPLATE, Module<layer_1::TEMPLATE>>;
        using MODEL = typename RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Build<CAPABILITY, MODULE_CHAIN, layer_0::INPUT_SHAPE>;
    }
    using TYPE = model_definition::MODEL;
    const TYPE module = {layer_0::factory<TYPE::CONTENT>, {layer_1::factory<TYPE::NEXT_MODULE::CONTENT>, {}}};
    template <typename T_TYPE = TYPE>
    const T_TYPE factory = {layer_0::factory<typename T_TYPE::CONTENT>, {layer_1::factory<typename T_TYPE::NEXT_MODULE::CONTENT>, {}}};
    template <typename T_TYPE = TYPE>
    const T_TYPE factory_function(){return T_TYPE{layer_0::factory_function<typename T_TYPE::CONTENT>(), {layer_1::factory_function<typename T_TYPE::NEXT_MODULE::CONTENT>(), {}}};}
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {209, 73, 124, 61, 63, 171, 7, 64, 32, 236, 205, 188, 205, 244, 192, 190, 217, 254, 250, 61, 77, 254, 19, 192, 239, 161, 151, 191, 76, 52, 1, 64, 191, 59, 176, 63, 68, 230, 1, 190, 123, 90, 81, 63, 118, 143, 4, 61, 15, 160, 136, 62, 178, 34, 157, 62, 173, 238, 176, 63, 84, 32, 153, 62, 118, 67, 77, 190, 117, 87, 2, 190, 237, 131, 212, 62, 112, 39, 239, 63, 102, 73, 204, 191, 168, 239, 252, 187, 72, 136, 40, 191, 238, 52, 76, 191, 81, 18, 77, 63, 142, 83, 124, 62, 214, 146, 179, 191, 162, 73, 74, 192, 119, 109, 48, 63, 119, 44, 35, 191, 163, 163, 210, 189, 247, 209, 77, 191, 177, 202, 145, 190, 109, 22, 119, 61, 24, 138, 73, 63, 106, 166, 108, 63, 35, 215, 190, 191, 132, 36, 32, 191, 29, 150, 133, 61};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {52, 30, 173, 192, 153, 222, 221, 191, 192, 2, 173, 192, 144, 24, 165, 192, 58, 104, 77, 192, 46, 187, 27, 64, 115, 142, 172, 192, 164, 186, 154, 64, 137, 148, 133, 191, 164, 123, 132, 192, 22, 89, 163, 64, 85, 229, 163, 192, 139, 128, 130, 64};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2025-10-08_22-10-48/f972979_zoo_environment_algorithm/pendulum-v1_ppo/0000/steps/000000000000291";
   char commit_hash[] = "f97297947bfad3978f702c6edd3063febf9c72ec";
}
