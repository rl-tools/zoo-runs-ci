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
                    alignas(float) const unsigned char memory[] = {155, 55, 13, 63, 114, 173, 227, 62, 146, 184, 139, 63, 69, 74, 47, 191, 56, 216, 145, 189, 40, 163, 177, 63, 189, 25, 179, 190, 219, 51, 30, 191, 18, 113, 73, 61, 44, 248, 170, 190, 179, 99, 8, 62, 123, 25, 43, 63, 162, 115, 1, 63, 179, 244, 148, 62, 162, 46, 126, 63, 159, 187, 46, 190, 220, 218, 171, 62, 18, 50, 12, 189, 57, 134, 91, 190, 24, 179, 7, 63, 201, 169, 226, 190, 255, 246, 243, 62, 91, 57, 249, 62, 81, 153, 111, 63, 16, 90, 62, 189, 29, 203, 104, 62, 181, 100, 247, 189, 159, 151, 7, 63, 102, 9, 236, 190, 187, 201, 0, 62, 246, 151, 231, 61, 208, 211, 36, 63, 109, 214, 186, 62, 252, 193, 248, 190, 160, 10, 135, 62, 134, 86, 174, 190, 144, 2, 195, 62, 121, 82, 72, 63, 23, 3, 131, 62, 207, 222, 228, 62, 31, 86, 27, 191, 184, 227, 22, 191, 181, 170, 233, 190, 164, 3, 242, 62, 139, 166, 129, 190, 237, 187, 169, 60, 4, 38, 131, 190, 80, 124, 39, 62, 247, 94, 193, 60, 138, 239, 64, 62, 99, 7, 224, 190, 136, 54, 211, 190, 108, 10, 243, 190, 246, 24, 105, 191, 250, 66, 181, 62, 193, 103, 118, 62, 239, 238, 11, 191, 33, 32, 11, 191, 55, 90, 132, 62, 1, 120, 8, 191, 13, 50, 4, 63, 16, 198, 203, 61, 30, 27, 125, 191, 136, 69, 36, 190, 70, 100, 218, 62, 184, 14, 209, 190, 251, 198, 24, 191, 64, 57, 123, 190, 16, 71, 2, 191, 185, 134, 7, 191, 128, 67, 39, 61, 20, 176, 87, 63, 67, 165, 199, 190, 120, 248, 225, 190, 107, 220, 208, 62, 228, 29, 202, 190, 147, 64, 38, 63, 36, 138, 175, 62, 128, 255, 233, 62, 155, 188, 178, 190, 27, 24, 2, 191, 19, 221, 210, 61, 193, 58, 57, 191, 20, 175, 150, 61, 241, 131, 45, 62, 79, 168, 17, 191, 69, 152, 27, 63, 116, 8, 80, 190, 61, 233, 130, 62, 49, 187, 187, 190, 147, 130, 64, 62, 14, 177, 207, 189, 209, 64, 44, 63, 107, 170, 23, 188, 201, 88, 123, 190, 70, 101, 60, 61};
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
                    alignas(float) const unsigned char memory[] = {19, 21, 41, 191, 151, 127, 44, 191, 126, 110, 208, 190, 240, 204, 198, 190, 29, 73, 27, 191, 132, 212, 59, 189, 210, 164, 172, 190, 83, 138, 35, 191, 74, 90, 100, 189, 170, 152, 160, 190, 102, 156, 79, 62, 29, 47, 108, 190, 131, 6, 205, 62, 222, 153, 46, 191, 53, 41, 149, 190, 65, 172, 180, 190, 30, 207, 248, 62, 151, 207, 252, 62, 27, 123, 154, 62, 251, 254, 13, 191, 22, 68, 18, 63, 230, 0, 111, 190, 245, 192, 243, 190, 7, 213, 97, 63, 244, 188, 131, 190, 29, 148, 238, 190, 145, 162, 25, 191, 99, 66, 23, 60, 183, 4, 33, 62, 22, 49, 152, 187, 57, 184, 202, 190, 70, 120, 43, 62};
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
                    alignas(float) const unsigned char memory[] = {171, 6, 191, 62, 225, 79, 207, 190, 28, 128, 19, 190, 179, 17, 37, 189, 255, 254, 202, 61, 187, 144, 151, 61, 54, 200, 94, 62, 227, 253, 218, 62, 126, 152, 16, 190, 218, 40, 135, 187, 20, 142, 6, 62, 141, 22, 132, 62, 57, 95, 202, 189, 152, 76, 210, 190, 123, 28, 85, 61, 84, 55, 197, 189, 209, 243, 220, 61, 99, 117, 53, 190, 225, 97, 105, 61, 60, 245, 230, 61, 214, 148, 122, 62, 88, 247, 31, 189, 21, 117, 74, 62, 254, 20, 194, 62, 178, 212, 201, 189, 13, 30, 17, 190, 119, 165, 65, 190, 249, 3, 12, 61, 186, 201, 238, 188, 195, 111, 209, 61, 41, 68, 162, 189, 202, 248, 204, 61, 158, 10, 189, 62, 89, 47, 201, 190, 193, 136, 94, 61, 206, 216, 44, 190, 148, 159, 96, 62, 176, 236, 47, 62, 246, 222, 32, 61, 163, 86, 119, 62, 8, 191, 52, 62, 78, 246, 158, 61, 193, 103, 171, 60, 143, 131, 105, 62, 67, 229, 205, 61, 161, 44, 235, 190, 195, 35, 253, 61, 216, 55, 166, 60, 233, 32, 162, 60, 40, 238, 245, 190, 138, 16, 60, 59, 112, 85, 111, 62, 128, 154, 213, 62, 89, 165, 151, 189, 1, 92, 174, 61, 111, 98, 44, 62, 41, 193, 139, 189, 45, 164, 111, 61, 20, 9, 111, 190, 238, 105, 244, 189, 223, 61, 38, 190, 170, 23, 192, 61, 39, 64, 80, 62, 119, 55, 58, 61, 227, 30, 80, 62, 254, 16, 22, 191, 23, 220, 12, 62, 68, 86, 78, 189, 126, 132, 197, 61, 51, 164, 192, 60, 246, 2, 44, 62, 24, 45, 146, 62, 39, 218, 244, 189, 214, 191, 197, 61, 223, 106, 106, 61, 26, 29, 173, 61, 159, 85, 18, 190, 146, 174, 234, 189, 60, 239, 55, 62, 254, 153, 178, 61, 173, 194, 82, 189, 131, 244, 230, 190, 80, 62, 61, 59, 36, 126, 165, 62, 165, 129, 173, 62, 220, 231, 50, 62, 163, 226, 65, 62, 74, 152, 194, 62, 27, 142, 62, 190, 218, 159, 64, 190, 60, 58, 82, 190, 223, 204, 79, 190, 248, 32, 128, 188, 73, 205, 72, 62, 252, 88, 89, 189, 120, 170, 143, 59, 239, 44, 12, 187, 83, 172, 250, 190, 217, 252, 199, 61, 28, 4, 54, 190, 245, 104, 69, 62, 30, 100, 142, 189, 16, 100, 131, 62, 113, 222, 15, 189, 29, 247, 219, 61, 13, 181, 202, 188, 241, 236, 14, 190, 166, 202, 135, 189, 195, 15, 134, 190, 44, 206, 69, 190, 84, 58, 38, 190, 253, 175, 31, 190, 11, 18, 12, 190, 98, 34, 16, 190, 44, 36, 5, 61, 79, 103, 163, 189, 100, 64, 194, 62, 24, 171, 147, 60, 130, 116, 199, 61, 63, 170, 166, 187, 29, 144, 14, 189, 44, 93, 177, 60, 235, 242, 64, 60, 69, 141, 25, 190, 49, 15, 133, 190, 60, 135, 20, 189, 48, 194, 242, 189, 163, 11, 41, 190, 21, 128, 150, 190, 111, 147, 32, 63, 131, 114, 237, 188, 203, 139, 9, 62, 69, 116, 155, 190, 134, 31, 91, 190, 23, 144, 209, 188, 218, 4, 67, 190, 199, 252, 144, 189, 167, 65, 141, 189, 203, 216, 109, 61, 254, 76, 147, 187, 33, 71, 1, 62, 120, 156, 109, 62, 64, 237, 207, 189, 13, 246, 187, 61, 84, 34, 245, 61, 123, 115, 203, 62, 232, 174, 22, 190, 110, 138, 13, 190, 163, 7, 146, 190, 32, 148, 99, 190, 140, 38, 58, 190, 161, 165, 186, 190, 240, 99, 48, 189, 95, 23, 45, 189, 202, 211, 177, 62, 130, 49, 199, 189, 195, 165, 121, 62, 131, 154, 31, 190, 181, 160, 42, 61, 145, 173, 120, 189, 36, 42, 174, 62, 9, 1, 17, 191, 147, 193, 81, 61, 148, 188, 68, 189, 140, 178, 34, 61, 216, 102, 171, 189, 5, 16, 79, 189, 239, 89, 48, 62, 93, 243, 56, 62, 174, 137, 158, 189, 71, 95, 173, 60, 213, 244, 93, 60, 108, 97, 92, 190, 252, 239, 207, 190, 168, 220, 51, 189, 82, 238, 185, 189, 62, 0, 105, 61, 122, 176, 194, 190, 30, 114, 188, 188, 21, 191, 141, 62, 135, 80, 128, 62, 89, 148, 176, 60, 164, 190, 150, 62, 66, 152, 54, 61, 176, 144, 180, 61, 24, 15, 136, 188, 192, 160, 147, 190, 194, 201, 239, 189, 158, 106, 140, 189, 137, 155, 181, 189, 153, 195, 178, 61, 122, 88, 15, 62, 100, 73, 200, 62, 195, 159, 4, 191, 57, 239, 225, 61, 155, 31, 133, 190, 148, 140, 128, 62, 194, 2, 157, 189, 205, 193, 66, 189, 233, 173, 122, 62, 2, 254, 15, 62, 234, 172, 64, 188, 255, 9, 202, 61, 96, 12, 14, 62, 24, 116, 2, 190, 201, 149, 175, 190, 230, 152, 174, 61, 182, 185, 69, 62, 1, 14, 37, 190, 8, 34, 118, 190, 234, 59, 25, 189, 111, 6, 212, 61, 8, 125, 95, 62, 236, 14, 199, 61, 192, 196, 34, 61, 166, 206, 160, 62, 139, 163, 217, 61, 202, 247, 205, 188, 64, 102, 111, 190, 235, 177, 32, 190, 98, 18, 95, 190, 4, 11, 245, 189, 236, 136, 9, 62, 243, 12, 164, 189, 163, 113, 72, 62, 148, 96, 212, 190, 54, 40, 79, 61, 50, 178, 46, 190, 100, 207, 69, 62, 74, 134, 140, 189, 54, 70, 147, 189, 168, 101, 204, 61, 133, 4, 167, 189, 235, 92, 81, 190, 50, 245, 144, 60, 135, 86, 2, 188, 196, 104, 164, 190, 102, 204, 70, 189, 121, 6, 223, 61, 126, 143, 168, 61, 176, 128, 49, 189, 167, 217, 200, 188, 201, 235, 203, 61, 86, 124, 52, 62, 69, 249, 186, 60, 173, 97, 21, 188, 222, 59, 39, 61, 18, 30, 145, 62, 153, 192, 64, 62, 31, 60, 128, 189, 37, 113, 184, 189, 197, 101, 144, 61, 21, 10, 185, 61, 138, 250, 154, 189, 181, 170, 61, 62, 70, 72, 153, 61, 202, 124, 105, 62, 199, 74, 27, 191, 58, 152, 53, 61, 161, 122, 33, 190, 187, 22, 145, 62, 10, 183, 11, 62, 10, 163, 150, 61, 168, 201, 166, 62, 159, 195, 220, 61, 10, 189, 216, 188, 60, 59, 183, 189, 76, 18, 58, 62, 89, 233, 102, 190, 8, 186, 19, 190, 166, 230, 10, 62, 113, 64, 163, 189, 120, 38, 127, 187, 9, 141, 76, 190, 74, 88, 53, 61, 84, 95, 179, 61, 8, 160, 31, 62, 102, 0, 201, 61, 26, 28, 241, 60, 253, 36, 143, 62, 79, 116, 84, 187, 22, 191, 50, 189, 31, 3, 43, 190, 140, 182, 145, 189, 124, 121, 159, 189, 18, 2, 88, 62, 5, 158, 97, 190, 255, 79, 214, 189, 183, 5, 161, 190, 44, 68, 70, 62, 224, 115, 69, 190, 110, 227, 27, 62, 196, 142, 25, 190, 64, 249, 32, 190, 213, 197, 94, 190, 29, 83, 44, 190, 210, 248, 62, 62, 249, 218, 52, 62, 78, 107, 35, 62, 87, 89, 214, 189, 48, 255, 83, 189, 99, 163, 0, 62, 18, 213, 232, 189, 252, 254, 29, 190, 161, 158, 129, 189, 103, 168, 41, 62, 3, 147, 50, 190, 11, 96, 132, 61, 65, 161, 143, 189, 89, 6, 139, 188, 126, 60, 30, 190, 253, 93, 124, 190, 25, 122, 34, 62, 119, 56, 125, 61, 29, 43, 10, 62, 39, 129, 255, 61, 143, 20, 46, 62, 28, 236, 203, 189, 201, 238, 233, 61, 165, 247, 55, 190, 53, 158, 181, 62, 102, 60, 152, 190, 41, 27, 131, 62, 200, 142, 233, 60, 138, 237, 235, 61, 235, 61, 170, 189, 192, 94, 129, 189, 151, 20, 137, 61, 152, 205, 157, 190, 57, 175, 199, 61, 153, 146, 0, 190, 25, 253, 180, 188, 142, 55, 224, 190, 32, 63, 254, 189, 95, 159, 50, 60, 140, 255, 37, 62, 103, 90, 71, 190, 184, 247, 229, 189, 76, 9, 105, 190, 90, 73, 250, 61, 190, 45, 60, 62, 231, 193, 22, 190, 172, 90, 3, 62, 107, 19, 152, 62, 59, 137, 164, 62, 150, 23, 45, 190, 254, 217, 107, 61, 160, 3, 247, 61, 42, 33, 189, 188, 216, 201, 146, 60, 94, 183, 153, 61, 236, 113, 53, 62, 199, 116, 242, 61, 116, 206, 18, 191, 26, 139, 43, 188, 108, 219, 127, 190, 39, 43, 147, 62, 231, 26, 139, 61, 82, 120, 141, 62, 98, 175, 158, 62, 93, 241, 243, 189, 18, 70, 170, 61, 80, 86, 55, 62, 173, 109, 115, 62, 221, 205, 30, 190, 11, 92, 184, 190, 34, 208, 137, 62, 201, 7, 1, 190, 235, 73, 86, 60, 36, 28, 217, 190, 221, 97, 82, 62, 183, 123, 153, 61, 126, 206, 128, 62, 158, 131, 106, 61, 53, 83, 88, 62, 159, 187, 60, 62, 190, 246, 250, 189, 136, 81, 43, 60, 130, 17, 59, 190, 86, 115, 152, 188, 131, 147, 57, 60, 148, 39, 232, 189, 246, 83, 64, 62, 183, 53, 103, 190, 11, 235, 160, 62, 171, 48, 129, 190, 212, 177, 75, 62, 161, 234, 128, 61, 89, 20, 105, 188, 188, 228, 208, 188, 115, 131, 20, 189, 9, 148, 129, 62, 39, 175, 216, 188, 101, 158, 151, 189, 231, 14, 46, 189, 51, 86, 254, 60, 172, 54, 84, 190, 159, 216, 158, 190, 89, 175, 18, 190, 167, 187, 224, 188, 145, 96, 159, 187, 50, 182, 142, 190, 117, 113, 220, 189, 131, 1, 242, 61, 208, 178, 62, 62, 130, 2, 51, 188, 155, 156, 114, 187, 73, 149, 221, 62, 254, 247, 184, 187, 85, 165, 30, 189, 32, 9, 53, 190, 53, 253, 21, 190, 33, 56, 212, 189, 250, 97, 131, 188, 203, 115, 16, 190, 130, 29, 37, 189, 41, 159, 162, 62, 50, 181, 17, 191, 218, 93, 60, 62, 21, 224, 120, 61, 33, 19, 156, 62, 135, 9, 38, 62, 122, 33, 26, 62, 27, 177, 106, 62, 201, 46, 150, 189, 103, 16, 103, 190, 108, 10, 248, 189, 201, 172, 96, 61, 98, 193, 199, 188, 50, 249, 122, 190, 203, 238, 165, 61, 206, 102, 20, 62, 14, 43, 184, 61, 128, 54, 170, 190, 25, 227, 192, 61, 214, 152, 28, 60, 126, 34, 154, 62, 196, 197, 203, 189, 106, 202, 59, 62, 130, 128, 96, 62, 134, 196, 170, 61, 103, 194, 132, 190, 114, 52, 65, 190, 174, 6, 77, 190, 32, 35, 181, 189, 23, 220, 26, 62, 176, 201, 205, 188, 207, 227, 56, 61, 49, 169, 17, 190, 15, 80, 145, 62, 17, 184, 59, 61, 203, 116, 197, 189, 141, 183, 141, 190, 193, 204, 161, 61, 187, 59, 104, 190, 201, 37, 176, 190, 129, 126, 184, 189, 39, 191, 88, 62, 86, 150, 151, 61, 233, 78, 79, 60, 3, 161, 127, 189, 41, 209, 232, 62, 123, 43, 154, 188, 194, 207, 30, 61, 63, 103, 209, 189, 181, 223, 13, 62, 76, 220, 7, 189, 234, 143, 0, 190, 161, 61, 218, 188, 160, 111, 174, 189, 3, 190, 8, 190, 178, 164, 219, 190, 164, 26, 248, 61, 62, 5, 209, 61, 11, 183, 228, 62, 62, 187, 64, 60, 122, 235, 187, 189, 38, 225, 236, 61, 215, 225, 246, 188, 61, 153, 14, 62, 240, 129, 215, 190, 45, 124, 74, 62, 137, 141, 26, 190, 135, 47, 132, 60, 240, 170, 201, 190, 65, 15, 147, 189, 128, 8, 176, 189, 187, 206, 200, 190, 209, 175, 126, 61, 141, 28, 50, 190, 153, 48, 45, 190, 106, 166, 137, 189, 178, 185, 2, 189, 34, 52, 153, 62, 84, 214, 147, 61, 64, 129, 97, 190, 198, 220, 58, 61, 98, 54, 121, 62, 178, 64, 75, 188, 209, 126, 153, 189, 244, 74, 117, 190, 207, 84, 211, 189, 169, 125, 114, 190, 167, 29, 10, 189, 49, 145, 28, 61, 175, 120, 26, 62, 212, 139, 42, 62, 128, 73, 154, 188, 85, 212, 188, 189, 247, 73, 166, 189, 168, 139, 182, 189, 149, 174, 1, 62, 113, 111, 166, 190, 91, 168, 237, 62, 121, 113, 209, 188, 121, 180, 168, 58, 146, 180, 234, 60, 237, 187, 40, 189, 2, 246, 143, 190, 86, 84, 156, 190, 224, 94, 118, 190, 192, 157, 246, 61, 42, 215, 11, 62, 169, 174, 141, 189, 243, 4, 74, 62, 236, 106, 255, 61, 168, 144, 57, 190, 243, 87, 11, 189, 203, 90, 136, 189, 192, 93, 178, 62, 228, 36, 112, 190, 220, 110, 103, 189, 63, 190, 153, 190, 58, 207, 241, 189, 121, 60, 186, 190, 66, 207, 205, 189, 100, 171, 153, 61, 253, 50, 109, 62, 158, 33, 11, 62, 154, 158, 116, 62, 143, 82, 67, 62, 8, 71, 60, 60, 189, 105, 100, 189, 32, 40, 175, 189, 121, 14, 241, 60, 225, 148, 4, 63, 157, 4, 209, 60, 159, 220, 201, 62, 252, 210, 228, 60, 111, 80, 253, 61, 220, 15, 25, 62, 238, 77, 155, 61, 156, 45, 202, 188, 227, 60, 179, 189, 144, 53, 134, 62, 89, 98, 151, 62, 201, 220, 121, 62, 75, 123, 192, 189, 92, 189, 167, 61, 43, 177, 179, 189, 28, 197, 231, 189, 114, 230, 189, 189, 93, 145, 202, 189, 165, 52, 37, 62, 23, 133, 181, 190, 142, 220, 28, 62, 24, 23, 45, 62, 16, 148, 243, 59, 180, 71, 204, 60, 5, 66, 173, 62, 116, 187, 121, 61, 158, 231, 134, 190, 252, 189, 43, 62, 140, 61, 130, 61, 146, 149, 158, 187, 98, 153, 63, 61, 119, 93, 156, 190, 111, 248, 13, 63, 77, 202, 34, 188, 51, 231, 253, 61, 70, 105, 109, 190, 220, 16, 154, 61, 118, 210, 95, 60, 72, 135, 83, 190, 155, 154, 44, 190, 163, 229, 101, 62, 193, 77, 54, 62, 153, 112, 242, 189, 16, 68, 47, 62, 157, 90, 128, 62, 46, 133, 187, 60, 7, 92, 31, 190, 37, 67, 168, 59, 217, 159, 87, 62, 51, 200, 32, 61, 28, 51, 170, 190, 70, 13, 100, 190, 235, 71, 120, 190, 6, 74, 11, 190, 118, 138, 195, 189, 221, 108, 72, 62, 182, 3, 187, 189, 22, 152, 237, 61, 13, 52, 51, 61, 242, 41, 79, 62, 35, 210, 138, 61, 102, 165, 148, 61, 61, 63, 16, 62, 86, 141, 162, 62, 185, 100, 229, 190, 135, 50, 221, 189, 145, 189, 167, 188, 76, 15, 51, 62, 225, 59, 220, 61, 164, 114, 64, 62, 148, 96, 42, 62, 31, 156, 130, 62, 4, 181, 68, 189, 221, 202, 235, 189, 183, 79, 58, 61, 163, 92, 72, 190, 204, 206, 163, 190, 61, 121, 12, 188, 169, 98, 133, 61, 39, 203, 178, 61, 167, 108, 207, 189, 185, 188, 246, 61, 77, 160, 74, 61, 126, 249, 224, 61, 100, 118, 138, 62, 43, 52, 30, 62, 94, 43, 22, 62, 86, 120, 58, 190, 248, 204, 91, 188, 104, 20, 93, 189, 177, 153, 43, 190, 131, 240, 97, 190, 31, 252, 123, 61, 173, 18, 27, 190, 89, 213, 54, 190, 107, 221, 205, 61, 155, 139, 168, 190, 166, 155, 20, 190, 177, 159, 73, 190, 221, 49, 69, 62, 253, 72, 91, 62, 72, 126, 158, 62, 21, 77, 130, 62, 47, 102, 143, 62, 199, 120, 39, 189, 141, 49, 188, 189, 250, 107, 155, 62, 183, 248, 161, 186, 65, 158, 243, 189, 231, 29, 86, 60, 86, 207, 38, 190, 18, 48, 4, 61, 250, 253, 54, 190, 185, 179, 22, 61, 117, 41, 32, 62, 70, 141, 112, 62, 23, 193, 178, 62, 209, 2, 184, 186, 75, 131, 22, 61, 74, 236, 226, 189, 214, 178, 41, 190, 31, 116, 172, 189, 61, 169, 158, 190, 218, 224, 109, 190, 133, 17, 141, 61, 157, 229, 64, 189, 95, 59, 127, 190, 220, 82, 153, 62, 100, 9, 14, 191, 131, 7, 9, 62, 196, 234, 254, 189, 82, 53, 138, 62, 196, 69, 140, 61, 224, 141, 71, 62, 213, 83, 177, 62, 241, 86, 16, 189, 62, 73, 189, 61, 223, 95, 254, 61, 95, 159, 73, 61, 130, 25, 22, 190, 241, 7, 51, 190, 10, 150, 77, 62, 198, 224, 152, 61, 227, 249, 174, 60, 182, 58, 229, 190, 142, 51, 69, 189, 178, 49, 121, 62, 217, 15, 137, 61, 26, 123, 201, 61, 223, 126, 63, 188, 251, 105, 164, 62, 125, 125, 60, 190, 144, 34, 47, 189, 156, 50, 125, 190, 51, 76, 35, 189, 73, 209, 79, 190, 194, 128, 152, 188, 174, 85, 228, 189, 6, 32, 15, 62, 227, 213, 133, 189, 46, 2, 163, 62, 15, 255, 86, 189, 211, 100, 67, 62, 44, 55, 120, 189, 11, 197, 169, 189, 83, 240, 167, 61, 111, 0, 88, 190, 112, 163, 35, 60, 5, 209, 152, 61, 6, 141, 125, 60, 115, 5, 206, 189, 224, 225, 140, 189, 171, 40, 215, 62, 67, 126, 5, 62, 147, 222, 157, 188, 70, 100, 189, 61, 185, 33, 188, 62, 91, 80, 209, 61, 254, 239, 128, 190, 136, 232, 24, 190, 160, 142, 37, 61, 13, 171, 132, 190, 83, 227, 194, 190, 188, 167, 207, 61, 16, 218, 24, 62, 232, 213, 165, 62, 211, 118, 205, 189, 215, 130, 210, 61, 235, 166, 228, 188, 213, 179, 29, 190, 72, 147, 38, 190, 8, 174, 180, 62, 130, 157, 219, 190, 59, 111, 230, 61, 135, 208, 167, 189, 13, 237, 122, 62, 89, 218, 157, 61, 149, 225, 158, 62, 147, 144, 122, 62, 158, 246, 5, 189, 111, 12, 64, 190, 252, 58, 39, 190, 120, 217, 37, 62, 224, 118, 88, 190, 173, 35, 87, 189, 91, 79, 188, 61, 178, 159, 27, 61, 48, 218, 78, 62, 33, 238, 21, 190, 122, 11, 185, 62, 91, 105, 134, 62, 26, 138, 211, 62, 64, 107, 117, 62, 244, 150, 75, 62, 241, 6, 184, 60, 35, 110, 206, 60, 110, 122, 132, 60, 141, 21, 30, 190, 164, 233, 21, 189, 149, 138, 132, 190, 1, 4, 8, 62, 169, 4, 50, 190, 73, 14, 118, 189, 111, 204, 11, 62, 212, 191, 27, 63, 155, 249, 195, 61, 246, 13, 127, 62, 124, 229, 9, 62, 12, 209, 10, 62, 19, 201, 235, 61, 93, 14, 35, 62, 32, 34, 116, 62, 185, 151, 70, 190, 222, 152, 231, 61, 247, 177, 174, 62, 88, 148, 175, 62, 49, 192, 19, 190, 179, 84, 161, 62, 33, 211, 207, 59, 102, 101, 72, 189, 126, 35, 220, 189, 137, 177, 166, 189, 88, 158, 149, 62, 39, 46, 250, 190, 144, 128, 196, 60, 82, 110, 132, 62, 62, 249, 164, 60, 133, 205, 205, 189, 111, 197, 184, 62, 111, 151, 45, 190, 33, 222, 187, 60, 132, 201, 252, 61, 102, 44, 158, 189, 117, 0, 17, 61, 212, 227, 198, 189, 218, 100, 9, 190, 161, 91, 207, 62, 251, 201, 100, 190, 212, 156, 109, 189, 225, 181, 94, 190, 185, 164, 196, 189, 231, 227, 17, 190, 234, 235, 248, 189, 12, 225, 255, 61, 98, 253, 7, 62, 25, 99, 243, 60, 47, 232, 130, 189, 197, 165, 61, 62, 174, 181, 9, 62, 127, 62, 54, 189, 162, 45, 131, 61, 190, 39, 231, 61, 154, 237, 139, 62, 66, 2, 1, 190, 0, 132, 41, 190, 225, 243, 178, 190, 193, 247, 197, 61, 217, 130, 199, 189, 85, 192, 148, 190, 196, 191, 112, 189, 113, 208, 77, 62, 23, 228, 47, 62, 241, 26, 26, 62, 30, 230, 54, 62, 186, 203, 221, 60, 27, 205, 211, 189, 203, 169, 181, 189, 33, 25, 30, 63, 59, 190, 5, 189, 248, 59, 70, 188, 74, 39, 135, 62, 236, 163, 32, 63, 26, 237, 207, 60, 20, 135, 143, 189, 119, 166, 7, 63, 254, 11, 182, 189, 230, 52, 197, 62, 191, 28, 235, 60, 48, 212, 84, 190, 81, 88, 113, 190, 7, 240, 140, 189, 176, 52, 22, 190, 42, 79, 12, 62, 15, 139, 142, 190, 177, 68, 213, 190, 105, 130, 121, 190, 164, 88, 250, 189, 109, 125, 5, 61, 28, 7, 99, 189, 79, 63, 179, 189, 28, 13, 31, 189, 215, 18, 142, 62, 10, 214, 217, 61, 7, 238, 125, 59, 177, 223, 233, 60, 115, 229, 1, 62, 164, 196, 8, 190, 226, 185, 92, 62, 136, 143, 251, 189, 218, 106, 94, 191, 242, 121, 96, 62, 40, 69, 147, 59, 33, 213, 43, 189, 255, 152, 125, 191, 241, 40, 79, 189, 62, 107, 233, 189, 124, 63, 115, 191, 141, 98, 181, 61, 228, 165, 169, 190, 30, 38, 87, 190, 212, 53, 80, 62, 227, 9, 164, 189, 117, 70, 51, 60, 101, 239, 64, 189, 199, 106, 16, 190, 238, 183, 96, 62, 147, 101, 137, 63, 143, 236, 183, 61, 171, 159, 0, 190, 160, 198, 156, 60, 182, 227, 6, 61, 27, 231, 189, 61, 21, 190, 11, 190, 74, 18, 144, 62, 195, 208, 189, 188, 91, 0, 30, 62, 60, 226, 23, 62, 140, 221, 102, 189, 64, 36, 132, 62, 191, 37, 8, 191, 70, 157, 98, 62, 223, 102, 154, 190, 5, 135, 7, 62, 234, 230, 196, 190, 193, 43, 34, 188, 245, 183, 29, 189, 248, 155, 205, 61, 23, 3, 6, 60, 230, 13, 240, 188, 142, 102, 42, 62, 44, 49, 124, 190, 62, 198, 207, 62, 44, 93, 70, 62, 58, 65, 155, 62, 148, 105, 127, 61, 218, 187, 6, 188, 172, 196, 140, 188, 40, 244, 9, 59, 224, 229, 46, 62, 212, 230, 3, 62, 26, 74, 72, 187, 74, 213, 102, 190, 186, 27, 114, 61, 28, 167, 133, 190, 24, 53, 160, 190, 146, 228, 254, 59, 157, 229, 152, 61, 183, 95, 140, 61, 190, 183, 91, 190, 9, 177, 62, 190, 55, 232, 41, 62, 174, 218, 64, 189, 203, 236, 217, 189, 62, 85, 184, 190, 113, 16, 16, 63, 196, 62, 114, 189, 2, 212, 220, 61, 135, 214, 231, 190, 27, 109, 62, 190, 251, 123, 120, 189, 238, 191, 179, 190, 207, 230, 127, 189, 232, 73, 74, 62, 111, 104, 244, 61, 128, 107, 88, 190, 21, 117, 107, 189, 105, 111, 141, 62, 164, 117, 235, 189, 128, 176, 83, 61, 132, 227, 125, 187, 182, 38, 31, 62, 220, 226, 213, 189, 238, 216, 91, 190, 119, 248, 173, 190, 52, 87, 141, 60, 236, 47, 91, 190, 155, 141, 160, 190, 133, 201, 158, 61, 90, 251, 21, 189, 34, 63, 69, 62, 55, 203, 19, 62, 206, 232, 56, 62, 131, 59, 220, 61, 255, 108, 150, 61, 146, 148, 36, 188, 248, 10, 133, 62, 6, 121, 17, 191, 240, 109, 218, 61, 196, 111, 200, 189, 240, 179, 201, 62, 52, 118, 61, 62, 3, 15, 173, 61, 93, 77, 215, 61, 187, 118, 77, 62, 47, 132, 222, 60, 142, 223, 2, 62, 215, 226, 31, 62, 10, 225, 252, 60, 226, 220, 147, 190, 9, 36, 181, 61, 106, 108, 31, 62, 190, 229, 19, 190, 90, 56, 134, 190, 26, 17, 98, 62, 251, 21, 85, 189, 166, 55, 187, 61, 245, 62, 106, 61, 141, 187, 41, 61, 19, 193, 175, 62, 119, 199, 84, 189, 169, 10, 14, 61, 249, 254, 38, 190, 35, 38, 8, 189, 88, 189, 167, 189, 59, 175, 156, 61, 45, 67, 42, 62, 129, 113, 176, 188, 27, 182, 60, 62, 6, 14, 254, 190, 225, 158, 194, 58, 149, 222, 31, 189, 11, 236, 138, 62, 154, 227, 14, 62, 143, 205, 1, 62, 114, 103, 51, 62, 32, 62, 105, 62, 29, 201, 101, 190, 110, 108, 220, 189, 198, 22, 111, 61, 93, 70, 73, 188, 146, 205, 178, 190, 30, 51, 1, 61, 135, 80, 59, 61, 75, 173, 205, 61, 134, 108, 183, 190, 113, 158, 6, 62, 202, 52, 67, 62, 102, 162, 202, 62, 250, 10, 215, 61, 8, 186, 222, 61, 6, 89, 246, 60, 228, 255, 81, 190, 4, 195, 4, 61, 101, 204, 192, 189, 22, 131, 25, 190, 10, 121, 100, 190, 58, 47, 113, 62, 69, 255, 211, 61, 52, 139, 116, 190};
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
                    alignas(float) const unsigned char memory[] = {98, 122, 64, 190, 182, 203, 74, 61, 170, 138, 221, 188, 249, 228, 197, 186, 66, 202, 130, 61, 172, 68, 132, 60, 64, 237, 191, 61, 222, 120, 13, 190, 105, 202, 246, 189, 142, 119, 52, 189, 133, 162, 3, 61, 147, 1, 68, 190, 84, 20, 225, 61, 231, 154, 242, 189, 183, 172, 66, 190, 67, 161, 70, 61, 247, 91, 39, 60, 141, 212, 75, 190, 254, 145, 173, 189, 102, 83, 42, 189, 208, 245, 151, 187, 168, 74, 189, 61, 41, 88, 110, 61, 52, 237, 158, 189, 120, 193, 70, 190, 201, 139, 55, 61, 236, 150, 147, 190, 69, 42, 145, 62, 140, 13, 101, 60, 9, 147, 153, 188, 178, 215, 17, 190, 125, 143, 234, 189};
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
                    alignas(float) const unsigned char memory[] = {47, 40, 185, 190, 125, 78, 159, 190, 228, 17, 205, 190, 194, 170, 2, 190, 115, 203, 126, 62, 131, 243, 171, 190, 187, 215, 179, 190, 176, 231, 108, 190, 23, 183, 227, 189, 37, 69, 119, 61, 185, 247, 171, 190, 148, 200, 209, 190, 155, 6, 146, 190, 30, 84, 206, 190, 191, 97, 175, 62, 67, 233, 74, 62, 210, 71, 76, 62, 218, 196, 97, 62, 36, 12, 89, 62, 17, 107, 118, 190, 191, 254, 52, 190, 254, 141, 171, 190, 178, 245, 82, 62, 146, 203, 127, 190, 94, 132, 60, 62, 122, 210, 159, 62, 152, 107, 119, 190, 22, 24, 240, 62, 176, 63, 130, 62, 153, 216, 76, 62, 61, 230, 170, 190, 142, 154, 92, 190};
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
                    alignas(float) const unsigned char memory[] = {143, 48, 180, 61};
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
    alignas(float) const unsigned char memory[] = {71, 26, 186, 190, 187, 241, 28, 191, 12, 8, 75, 61, 70, 1, 152, 62, 146, 215, 5, 63, 197, 130, 179, 63, 169, 47, 171, 63, 177, 195, 150, 63, 186, 184, 132, 61, 83, 208, 235, 191, 137, 231, 18, 63, 139, 185, 75, 63, 29, 113, 184, 63, 237, 7, 58, 63, 21, 109, 199, 62, 234, 121, 86, 191, 60, 121, 81, 190, 150, 130, 113, 62, 224, 167, 92, 191, 84, 244, 132, 63, 212, 30, 155, 189, 154, 110, 11, 63, 197, 66, 233, 190, 229, 209, 172, 191, 232, 110, 103, 63, 248, 153, 166, 191, 16, 20, 40, 63, 251, 182, 116, 63, 131, 26, 183, 191, 151, 84, 128, 62, 117, 7, 164, 191, 175, 91, 209, 62, 138, 96, 92, 61, 164, 213, 63, 62, 144, 198, 154, 61, 200, 243, 226, 63, 232, 119, 65, 191, 104, 218, 10, 191, 94, 252, 110, 63};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {110, 29, 65, 64, 44, 98, 156, 192, 184, 76, 200, 192, 14, 23, 49, 64, 238, 102, 178, 192, 181, 100, 221, 63, 87, 144, 33, 192, 163, 36, 152, 64, 216, 202, 157, 64, 234, 69, 167, 64, 227, 53, 47, 63, 141, 62, 242, 191, 46, 122, 95, 64};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-28_22-56-21/d5a6a26_zoo_environment_algorithm/pendulum-v1_ppo/0000/steps/000000000000679";
   char commit_hash[] = "d5a6a26dcb13386d840b5cfcd6cdd36fd1e3186a";
}