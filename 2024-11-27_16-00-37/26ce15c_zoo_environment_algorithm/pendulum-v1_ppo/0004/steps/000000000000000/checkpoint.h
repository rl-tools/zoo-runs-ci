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
                alignas(float) const unsigned char memory[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
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
                alignas(float) const unsigned char memory[] = {0, 0, 128, 63, 0, 0, 128, 63, 0, 0, 128, 63};
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
                    alignas(float) const unsigned char memory[] = {128, 125, 3, 191, 238, 45, 219, 62, 28, 226, 195, 62, 139, 30, 33, 190, 78, 124, 247, 62, 189, 185, 13, 63, 35, 128, 242, 190, 160, 32, 4, 62, 55, 51, 244, 189, 24, 120, 44, 190, 190, 56, 174, 60, 83, 202, 124, 188, 155, 22, 17, 63, 13, 159, 184, 190, 24, 66, 182, 62, 225, 184, 48, 62, 173, 247, 140, 62, 219, 223, 188, 62, 58, 54, 152, 190, 110, 2, 202, 190, 128, 76, 156, 62, 190, 9, 230, 190, 196, 143, 133, 190, 219, 231, 174, 190, 128, 49, 225, 190, 40, 30, 113, 190, 54, 107, 223, 62, 154, 243, 223, 60, 116, 205, 188, 61, 164, 198, 20, 188, 113, 21, 137, 62, 5, 115, 138, 190, 214, 125, 15, 191, 15, 104, 240, 190, 40, 174, 145, 190, 160, 15, 193, 62, 196, 41, 197, 62, 88, 95, 210, 190, 250, 254, 231, 62, 235, 99, 7, 63, 177, 35, 9, 63, 56, 13, 145, 61, 2, 18, 242, 190, 26, 54, 184, 190, 176, 157, 18, 63, 145, 195, 213, 188, 50, 171, 174, 190, 140, 165, 90, 62, 121, 1, 203, 62, 59, 64, 165, 62, 186, 78, 9, 62, 109, 109, 149, 61, 197, 168, 183, 61, 5, 227, 27, 190, 117, 194, 97, 62, 40, 92, 146, 60, 161, 235, 186, 62, 174, 164, 251, 62, 93, 141, 15, 63, 59, 27, 18, 191, 116, 101, 130, 62, 148, 214, 178, 62, 110, 136, 69, 62, 46, 128, 177, 190, 178, 238, 249, 62, 11, 138, 104, 62, 32, 87, 178, 61, 51, 79, 16, 189, 251, 134, 188, 61, 180, 187, 0, 191, 97, 250, 238, 189, 114, 208, 190, 190, 104, 97, 59, 190, 37, 185, 91, 61, 10, 136, 0, 62, 136, 9, 180, 190, 161, 138, 142, 188, 58, 190, 223, 190, 34, 126, 0, 63, 227, 114, 244, 190, 246, 127, 95, 190, 141, 242, 242, 188, 200, 16, 147, 190, 103, 105, 1, 191, 109, 209, 132, 190, 78, 205, 27, 62, 92, 255, 161, 190, 214, 247, 2, 63, 193, 69, 156, 61, 179, 28, 17, 190, 109, 70, 9, 190, 22, 102, 184, 62, 147, 29, 106, 190, 151, 61, 180, 190, 155, 242, 243, 62, 247, 181, 139, 62};
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
                    alignas(float) const unsigned char memory[] = {7, 92, 164, 190, 188, 99, 173, 190, 135, 62, 91, 188, 222, 52, 157, 62, 12, 68, 112, 190, 90, 222, 247, 190, 37, 203, 138, 189, 15, 159, 224, 62, 190, 209, 202, 189, 211, 71, 24, 62, 181, 80, 236, 61, 29, 151, 126, 190, 5, 228, 75, 190, 33, 177, 197, 190, 104, 11, 8, 63, 215, 157, 12, 191, 55, 76, 108, 62, 199, 5, 13, 191, 245, 80, 19, 191, 178, 75, 37, 62, 80, 108, 142, 190, 54, 8, 219, 62, 171, 37, 19, 191, 226, 82, 14, 63, 18, 123, 185, 62, 121, 33, 160, 62, 58, 50, 11, 191, 11, 182, 229, 190, 54, 110, 9, 63, 46, 54, 187, 62, 6, 12, 32, 62, 242, 65, 252, 62};
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
                    alignas(float) const unsigned char memory[] = {43, 179, 26, 62, 16, 234, 18, 190, 22, 102, 133, 61, 46, 57, 73, 189, 16, 134, 219, 188, 232, 41, 40, 190, 142, 44, 192, 60, 163, 68, 134, 60, 137, 96, 206, 189, 35, 110, 214, 61, 4, 86, 248, 189, 240, 128, 34, 190, 203, 39, 243, 61, 187, 109, 225, 189, 191, 216, 249, 61, 26, 207, 66, 189, 232, 18, 80, 61, 55, 39, 185, 189, 67, 107, 4, 190, 136, 170, 213, 61, 245, 19, 234, 189, 124, 48, 86, 189, 84, 39, 131, 189, 203, 29, 73, 61, 115, 27, 37, 62, 132, 147, 24, 187, 54, 249, 197, 189, 79, 215, 241, 60, 186, 113, 13, 62, 25, 11, 31, 62, 179, 157, 28, 62, 35, 148, 32, 62, 21, 149, 12, 190, 100, 119, 225, 61, 168, 194, 248, 61, 212, 0, 51, 62, 157, 249, 94, 189, 151, 71, 85, 189, 22, 132, 16, 190, 85, 170, 184, 187, 123, 215, 40, 189, 40, 82, 175, 61, 16, 237, 111, 59, 20, 62, 56, 189, 233, 239, 38, 62, 124, 74, 40, 190, 209, 17, 58, 189, 175, 127, 251, 189, 135, 138, 48, 190, 243, 26, 129, 189, 81, 58, 2, 62, 26, 122, 10, 190, 255, 202, 12, 190, 175, 50, 75, 189, 130, 242, 250, 187, 148, 19, 143, 61, 162, 105, 253, 61, 247, 154, 211, 61, 41, 190, 170, 59, 113, 232, 155, 188, 231, 163, 154, 188, 205, 109, 42, 62, 116, 145, 217, 61, 191, 60, 120, 59, 9, 12, 161, 187, 124, 83, 210, 60, 142, 174, 33, 190, 137, 84, 0, 189, 179, 172, 183, 189, 102, 163, 47, 62, 132, 79, 185, 61, 240, 60, 218, 61, 141, 162, 56, 61, 164, 123, 33, 190, 245, 150, 179, 61, 55, 30, 224, 189, 158, 144, 48, 62, 77, 207, 137, 188, 7, 62, 2, 61, 29, 242, 146, 61, 65, 187, 19, 59, 99, 56, 115, 189, 132, 181, 204, 189, 23, 196, 74, 189, 45, 138, 214, 60, 178, 150, 24, 62, 208, 32, 204, 61, 86, 59, 36, 62, 0, 26, 239, 61, 115, 175, 5, 189, 32, 124, 187, 189, 84, 76, 16, 62, 181, 130, 0, 62, 206, 209, 117, 189, 252, 98, 1, 190, 149, 16, 23, 190, 185, 195, 26, 60, 161, 245, 28, 62, 116, 237, 104, 61, 138, 98, 156, 61, 135, 70, 14, 62, 232, 168, 6, 190, 176, 103, 40, 62, 73, 188, 8, 190, 191, 115, 195, 61, 119, 129, 24, 61, 153, 155, 187, 61, 166, 20, 47, 62, 124, 23, 152, 61, 181, 111, 18, 62, 152, 240, 145, 61, 61, 7, 173, 189, 142, 145, 193, 61, 218, 20, 12, 61, 157, 187, 43, 62, 47, 95, 112, 189, 132, 225, 54, 189, 188, 214, 157, 188, 78, 243, 22, 190, 223, 223, 81, 61, 60, 133, 188, 189, 206, 71, 101, 189, 4, 171, 201, 189, 25, 47, 249, 61, 81, 135, 69, 189, 154, 207, 57, 61, 7, 177, 224, 61, 241, 22, 217, 189, 26, 98, 44, 189, 228, 142, 145, 188, 141, 50, 8, 60, 124, 194, 226, 61, 196, 248, 125, 61, 171, 181, 170, 189, 172, 98, 158, 189, 211, 16, 30, 190, 148, 129, 183, 61, 231, 187, 186, 189, 247, 241, 145, 61, 117, 56, 22, 190, 47, 65, 18, 190, 205, 218, 222, 61, 118, 24, 16, 190, 179, 195, 238, 189, 13, 244, 97, 189, 20, 152, 220, 189, 165, 180, 231, 61, 61, 211, 227, 61, 250, 188, 25, 62, 179, 171, 224, 61, 21, 236, 186, 61, 94, 109, 1, 61, 1, 62, 9, 62, 94, 38, 22, 62, 212, 54, 0, 62, 145, 92, 31, 190, 242, 158, 238, 189, 197, 88, 40, 62, 27, 94, 245, 60, 246, 144, 205, 60, 255, 253, 142, 189, 81, 205, 172, 61, 18, 214, 235, 61, 225, 135, 42, 190, 98, 220, 102, 61, 9, 205, 236, 189, 225, 33, 48, 62, 222, 139, 4, 190, 158, 26, 14, 190, 149, 220, 45, 62, 123, 93, 234, 60, 25, 108, 28, 62, 107, 101, 29, 188, 220, 81, 149, 61, 252, 130, 92, 61, 85, 221, 29, 62, 253, 233, 186, 189, 179, 189, 171, 61, 194, 191, 41, 190, 180, 61, 39, 189, 82, 28, 128, 60, 253, 20, 13, 62, 171, 235, 67, 189, 121, 21, 220, 60, 49, 10, 14, 62, 73, 124, 238, 61, 209, 126, 107, 188, 18, 131, 18, 190, 84, 154, 235, 188, 201, 210, 7, 190, 193, 119, 64, 61, 179, 226, 161, 61, 44, 151, 211, 189, 237, 249, 38, 62, 37, 46, 71, 189, 3, 68, 209, 61, 22, 5, 33, 62, 0, 34, 153, 186, 36, 102, 175, 61, 0, 40, 209, 189, 8, 125, 209, 188, 200, 149, 22, 61, 55, 220, 241, 189, 245, 252, 179, 61, 73, 169, 36, 60, 229, 67, 185, 61, 103, 126, 13, 190, 227, 170, 50, 62, 35, 111, 147, 61, 82, 212, 203, 189, 166, 1, 206, 61, 150, 96, 215, 188, 228, 252, 1, 62, 26, 142, 220, 188, 41, 108, 146, 61, 99, 80, 131, 189, 239, 46, 17, 62, 196, 4, 67, 189, 72, 180, 191, 61, 35, 142, 255, 187, 47, 244, 187, 61, 81, 208, 115, 60, 24, 45, 25, 190, 208, 253, 169, 189, 221, 95, 4, 190, 79, 199, 160, 189, 37, 115, 143, 189, 238, 162, 251, 189, 183, 155, 3, 190, 129, 57, 13, 190, 200, 255, 131, 189, 176, 222, 241, 187, 253, 189, 129, 61, 177, 165, 127, 189, 244, 193, 18, 61, 180, 196, 142, 61, 205, 3, 52, 62, 147, 220, 214, 188, 110, 109, 176, 60, 145, 204, 250, 61, 75, 32, 141, 60, 118, 201, 57, 188, 231, 36, 78, 61, 136, 222, 2, 62, 137, 54, 164, 61, 107, 240, 30, 190, 72, 183, 39, 61, 241, 58, 0, 190, 108, 41, 0, 61, 34, 27, 87, 61, 255, 15, 24, 61, 21, 218, 35, 189, 8, 75, 82, 189, 111, 77, 90, 188, 149, 216, 200, 61, 83, 58, 14, 190, 234, 101, 233, 189, 181, 33, 138, 189, 96, 207, 216, 60, 206, 46, 184, 189, 236, 158, 147, 60, 226, 55, 27, 190, 156, 22, 52, 188, 255, 130, 92, 189, 135, 205, 248, 61, 42, 94, 48, 190, 112, 170, 145, 189, 230, 25, 242, 189, 214, 214, 64, 61, 19, 42, 31, 190, 126, 73, 7, 189, 220, 161, 160, 189, 47, 192, 10, 188, 132, 163, 91, 189, 50, 234, 5, 62, 158, 26, 4, 61, 151, 54, 49, 189, 123, 33, 199, 61, 195, 210, 189, 187, 238, 169, 52, 61, 179, 49, 2, 190, 214, 106, 246, 189, 188, 180, 25, 190, 171, 142, 14, 62, 249, 48, 136, 61, 68, 247, 166, 61, 32, 192, 231, 61, 89, 221, 78, 186, 101, 3, 80, 61, 133, 101, 15, 62, 248, 138, 91, 59, 82, 6, 61, 61, 50, 62, 240, 189, 15, 117, 217, 61, 229, 220, 76, 61, 120, 192, 71, 189, 81, 188, 48, 62, 112, 252, 42, 190, 71, 189, 195, 61, 33, 111, 27, 62, 218, 161, 230, 189, 232, 157, 181, 60, 135, 168, 9, 190, 141, 36, 254, 61, 230, 204, 27, 62, 231, 53, 205, 188, 156, 120, 20, 62, 116, 168, 152, 61, 209, 109, 180, 61, 198, 70, 4, 62, 30, 165, 188, 61, 119, 54, 211, 188, 243, 74, 1, 190, 85, 228, 44, 62, 41, 223, 225, 61, 122, 124, 94, 61, 71, 208, 222, 189, 57, 111, 202, 189, 194, 253, 249, 189, 42, 37, 45, 190, 102, 10, 105, 61, 118, 225, 52, 190, 140, 124, 208, 189, 126, 46, 250, 61, 205, 61, 167, 189, 198, 93, 245, 189, 226, 133, 213, 61, 108, 60, 173, 61, 245, 110, 31, 190, 171, 34, 240, 60, 202, 229, 103, 189, 106, 176, 195, 61, 40, 63, 197, 60, 58, 206, 16, 61, 12, 140, 96, 61, 175, 17, 39, 62, 152, 160, 178, 186, 120, 25, 46, 189, 196, 64, 206, 60, 16, 139, 138, 186, 101, 158, 45, 62, 83, 28, 106, 189, 7, 16, 188, 61, 52, 197, 175, 61, 55, 220, 51, 62, 216, 116, 144, 189, 13, 5, 22, 62, 41, 88, 216, 61, 6, 166, 27, 62, 246, 230, 21, 190, 94, 117, 15, 190, 100, 102, 191, 189, 1, 21, 179, 188, 155, 1, 184, 189, 200, 98, 7, 190, 3, 226, 41, 190, 30, 7, 215, 189, 51, 1, 237, 189, 168, 77, 247, 61, 239, 82, 237, 61, 208, 188, 56, 189, 78, 135, 28, 62, 57, 178, 203, 189, 130, 161, 10, 62, 126, 160, 250, 61, 249, 97, 47, 190, 239, 78, 218, 60, 59, 226, 149, 189, 98, 164, 65, 61, 231, 96, 201, 61, 162, 206, 12, 62, 62, 189, 155, 187, 66, 236, 154, 61, 61, 140, 202, 61, 156, 19, 170, 189, 216, 209, 51, 62, 42, 129, 49, 190, 54, 115, 21, 190, 239, 66, 143, 60, 150, 91, 248, 189, 216, 67, 150, 61, 91, 223, 108, 188, 181, 88, 221, 61, 46, 86, 41, 62, 124, 62, 51, 190, 240, 92, 66, 61, 49, 39, 222, 189, 235, 197, 30, 62, 172, 107, 220, 188, 126, 23, 175, 189, 45, 159, 14, 62, 156, 66, 150, 189, 84, 223, 199, 61, 162, 91, 215, 188, 252, 137, 193, 189, 193, 39, 206, 60, 17, 160, 225, 189, 72, 107, 49, 62, 81, 212, 38, 62, 16, 116, 255, 60, 228, 235, 56, 61, 65, 111, 12, 62, 255, 37, 183, 61, 211, 55, 98, 61, 60, 255, 38, 62, 121, 174, 29, 188, 33, 254, 118, 189, 68, 204, 140, 189, 198, 75, 134, 188, 144, 246, 88, 189, 25, 192, 68, 189, 170, 170, 200, 61, 235, 161, 32, 190, 37, 130, 233, 189, 248, 226, 41, 190, 215, 20, 3, 190, 19, 199, 207, 189, 229, 224, 27, 190, 222, 156, 116, 61, 122, 229, 242, 189, 188, 57, 58, 189, 227, 207, 248, 189, 199, 131, 212, 189, 228, 6, 96, 189, 142, 42, 117, 189, 228, 24, 72, 61, 94, 119, 23, 190, 79, 149, 9, 189, 8, 208, 183, 188, 33, 51, 233, 189, 46, 88, 225, 61, 111, 99, 19, 190, 117, 0, 157, 188, 41, 108, 144, 189, 42, 155, 152, 188, 230, 150, 232, 60, 143, 13, 43, 190, 122, 25, 234, 61, 138, 9, 160, 189, 79, 160, 138, 189, 1, 206, 25, 190, 49, 46, 150, 61, 119, 188, 35, 190, 168, 20, 169, 59, 206, 161, 3, 62, 179, 224, 96, 188, 186, 46, 155, 61, 250, 195, 37, 190, 202, 59, 31, 189, 253, 230, 4, 190, 250, 34, 42, 190, 6, 22, 67, 189, 61, 43, 117, 61, 201, 153, 21, 62, 135, 92, 144, 61, 226, 237, 192, 188, 53, 74, 27, 190, 55, 26, 26, 62, 107, 176, 165, 189, 120, 8, 39, 62, 153, 243, 34, 62, 127, 160, 50, 190, 137, 185, 187, 189, 247, 64, 194, 188, 119, 194, 200, 60, 80, 184, 240, 60, 157, 230, 208, 189, 202, 235, 90, 189, 131, 195, 211, 189, 89, 134, 51, 189, 157, 97, 17, 190, 235, 202, 80, 189, 7, 110, 18, 60, 196, 192, 194, 189, 229, 104, 15, 61, 197, 151, 43, 190, 163, 48, 210, 61, 37, 101, 167, 61, 33, 87, 208, 189, 100, 123, 52, 62, 89, 35, 39, 190, 142, 88, 183, 61, 231, 1, 2, 62, 198, 57, 223, 61, 26, 82, 128, 60, 25, 3, 236, 189, 205, 243, 45, 190, 96, 115, 10, 60, 234, 26, 28, 190, 1, 43, 50, 190, 67, 107, 19, 60, 6, 252, 39, 60, 28, 42, 15, 190, 77, 77, 92, 189, 176, 182, 147, 189, 221, 79, 192, 189, 141, 9, 163, 189, 216, 87, 157, 189, 162, 96, 42, 62, 40, 111, 255, 61, 228, 181, 47, 188, 28, 118, 23, 60, 167, 139, 155, 189, 121, 214, 173, 59, 28, 169, 30, 62, 210, 52, 23, 190, 29, 249, 40, 62, 162, 18, 21, 190, 203, 220, 158, 61, 61, 142, 215, 61, 190, 118, 3, 190, 143, 198, 165, 61, 207, 52, 44, 62, 217, 32, 170, 188, 115, 49, 32, 190, 169, 45, 207, 61, 203, 19, 46, 61, 253, 95, 160, 61, 176, 187, 15, 62, 39, 206, 93, 61, 172, 199, 27, 60, 40, 79, 193, 61, 83, 180, 145, 189, 12, 202, 225, 61, 169, 16, 7, 189, 125, 20, 94, 188, 177, 104, 18, 190, 138, 44, 178, 187, 202, 110, 33, 62, 2, 195, 17, 190, 5, 198, 26, 59, 190, 2, 59, 189, 233, 135, 21, 62, 168, 203, 11, 62, 212, 62, 159, 187, 113, 139, 202, 189, 108, 94, 12, 62, 219, 59, 180, 61, 100, 17, 189, 61, 10, 6, 222, 61, 17, 247, 50, 62, 87, 181, 219, 189, 50, 85, 149, 59, 193, 151, 191, 61, 153, 220, 99, 61, 70, 32, 15, 62, 119, 34, 44, 62, 8, 74, 27, 190, 208, 196, 33, 189, 120, 66, 97, 189, 39, 232, 185, 61, 93, 113, 248, 189, 140, 12, 249, 61, 147, 24, 147, 61, 28, 31, 47, 189, 80, 254, 3, 62, 58, 18, 200, 189, 62, 189, 40, 60, 44, 206, 62, 189, 131, 144, 24, 60, 65, 82, 93, 61, 69, 63, 129, 189, 155, 171, 175, 189, 48, 141, 154, 187, 93, 202, 1, 62, 230, 12, 191, 189, 22, 76, 148, 189, 96, 112, 240, 61, 118, 46, 191, 61, 105, 173, 30, 62, 4, 148, 129, 189, 142, 213, 240, 61, 248, 77, 200, 58, 54, 232, 21, 61, 15, 120, 7, 62, 204, 169, 220, 61, 231, 172, 71, 61, 25, 216, 51, 61, 254, 163, 47, 62, 102, 163, 99, 189, 92, 22, 179, 61, 171, 10, 54, 188, 119, 41, 33, 62, 251, 200, 30, 190, 22, 108, 196, 188, 237, 255, 228, 59, 9, 136, 238, 189, 237, 67, 147, 188, 64, 91, 227, 61, 77, 141, 145, 189, 138, 177, 51, 189, 190, 220, 236, 189, 214, 140, 183, 59, 90, 190, 102, 189, 211, 62, 65, 61, 73, 139, 148, 189, 129, 102, 214, 189, 19, 17, 71, 189, 195, 127, 251, 61, 212, 143, 223, 61, 36, 234, 210, 60, 235, 56, 15, 62, 94, 64, 246, 189, 20, 66, 22, 62, 253, 68, 231, 60, 0, 51, 227, 188, 244, 62, 125, 61, 223, 64, 16, 62, 39, 52, 252, 60, 20, 56, 96, 61, 220, 202, 51, 62, 165, 39, 48, 60, 8, 8, 8, 190, 240, 250, 49, 190, 71, 247, 185, 61, 98, 97, 146, 189, 50, 167, 255, 60, 115, 12, 19, 62, 40, 192, 168, 59, 64, 13, 252, 189, 211, 247, 186, 61, 16, 247, 169, 188, 92, 82, 241, 61, 13, 75, 223, 61, 178, 187, 239, 61, 16, 75, 50, 190, 104, 189, 97, 189, 236, 11, 223, 189, 80, 204, 44, 189, 248, 164, 170, 61, 211, 252, 9, 61, 72, 71, 119, 189, 127, 127, 37, 190, 82, 243, 25, 190, 246, 222, 227, 61, 96, 71, 151, 189, 69, 38, 249, 60, 39, 194, 217, 189, 184, 160, 163, 188, 150, 252, 25, 190, 144, 155, 42, 190, 218, 218, 36, 62, 91, 201, 232, 189, 187, 69, 220, 61, 2, 246, 17, 189, 255, 32, 98, 61, 194, 156, 254, 61, 16, 195, 211, 189, 93, 18, 112, 187, 100, 201, 42, 62, 91, 119, 196, 60, 12, 122, 35, 189, 212, 223, 209, 60, 18, 182, 18, 62, 186, 137, 92, 61, 48, 126, 195, 57, 73, 193, 209, 189, 130, 172, 121, 61, 27, 122, 38, 62, 62, 65, 12, 62, 157, 238, 181, 61, 166, 225, 31, 190, 239, 158, 82, 189, 139, 158, 148, 189, 219, 136, 45, 190, 241, 95, 233, 189, 19, 8, 188, 60, 41, 41, 36, 190, 60, 133, 202, 189, 8, 22, 101, 189, 1, 28, 1, 62, 33, 100, 22, 62, 115, 13, 179, 189, 146, 73, 190, 61, 100, 24, 12, 190, 73, 33, 225, 189, 7, 247, 31, 62, 111, 58, 114, 60, 210, 252, 26, 187, 60, 227, 97, 189, 96, 103, 35, 188, 168, 57, 29, 62, 254, 3, 136, 61, 199, 243, 231, 61, 13, 152, 229, 61, 19, 145, 252, 189, 127, 189, 197, 189, 87, 208, 187, 189, 1, 133, 215, 189, 53, 224, 51, 189, 200, 172, 218, 188, 203, 212, 14, 62, 38, 175, 251, 61, 117, 127, 246, 61, 108, 162, 26, 62, 254, 4, 106, 189, 2, 44, 224, 189, 123, 31, 233, 61, 225, 46, 137, 61, 235, 210, 230, 189, 244, 199, 156, 188, 12, 68, 214, 189, 251, 227, 8, 62, 229, 171, 130, 61, 184, 197, 58, 189, 227, 99, 166, 189, 97, 213, 72, 61, 66, 20, 45, 190, 110, 221, 14, 190, 129, 113, 6, 62, 105, 139, 49, 188, 109, 204, 241, 189, 180, 38, 72, 189, 76, 92, 160, 189, 154, 54, 156, 60, 3, 173, 183, 189, 154, 38, 7, 188, 153, 204, 24, 62, 244, 98, 178, 61, 127, 119, 23, 190, 156, 191, 0, 190, 56, 139, 108, 189, 21, 206, 176, 60, 30, 166, 130, 61, 193, 255, 43, 62, 28, 40, 242, 189, 76, 247, 25, 190, 83, 236, 224, 60, 92, 122, 28, 190, 103, 55, 218, 188, 65, 243, 196, 188, 26, 67, 48, 190, 245, 101, 12, 62, 164, 96, 26, 61, 5, 90, 224, 188, 35, 176, 93, 189, 120, 224, 208, 189, 217, 152, 169, 189, 207, 5, 44, 62, 237, 1, 134, 189, 8, 115, 245, 61, 242, 26, 7, 190, 192, 141, 148, 188, 67, 147, 43, 62, 245, 109, 129, 189, 184, 210, 231, 60, 85, 234, 47, 190, 6, 53, 44, 62, 228, 35, 165, 61, 238, 69, 37, 190, 40, 51, 169, 189, 145, 245, 195, 61, 84, 110, 135, 59, 69, 181, 7, 62, 190, 126, 54, 61, 145, 49, 86, 188, 156, 31, 183, 61, 167, 241, 11, 62, 83, 135, 247, 189, 68, 85, 233, 189, 141, 245, 19, 190, 32, 18, 5, 190, 33, 114, 198, 61, 217, 224, 12, 190, 187, 99, 34, 190, 87, 225, 100, 61, 138, 59, 7, 189, 182, 31, 99, 61, 187, 157, 107, 61, 95, 149, 211, 189, 214, 126, 43, 62, 108, 230, 224, 189, 191, 246, 215, 189, 80, 29, 246, 61, 168, 240, 39, 190, 154, 232, 175, 61, 135, 218, 3, 190, 201, 223, 184, 189, 152, 188, 220, 188, 203, 145, 249, 60, 182, 238, 27, 62, 229, 75, 250, 186, 145, 139, 3, 62, 233, 3, 20, 190, 134, 209, 45, 190, 244, 230, 77, 189, 47, 135, 182, 61, 228, 134, 181, 61, 126, 58, 227, 61, 136, 102, 6, 190, 100, 123, 44, 190, 255, 84, 188, 189, 253, 55, 177, 189, 107, 235, 79, 189, 32, 181, 203, 61, 52, 144, 51, 190, 164, 165, 124, 186, 99, 0, 198, 61, 128, 118, 15, 62, 90, 236, 23, 189, 145, 207, 72, 61, 135, 153, 133, 61, 135, 206, 22, 60, 52, 245, 220, 61, 179, 72, 202, 61, 182, 111, 246, 60, 75, 8, 102, 61, 89, 224, 121, 61, 135, 157, 18, 189, 10, 193, 10, 190, 193, 63, 8, 190, 58, 154, 47, 190, 6, 26, 220, 188, 133, 151, 139, 189, 225, 26, 51, 190, 17, 169, 57, 189, 99, 184, 24, 190, 211, 153, 77, 61, 138, 206, 238, 61, 222, 147, 50, 59, 91, 70, 194, 59, 153, 192, 51, 189, 236, 55, 209, 61, 40, 90, 202, 188, 128, 34, 173, 61, 189, 2, 139, 59, 249, 7, 33, 60, 251, 194, 58, 61, 89, 148, 164, 61, 116, 182, 64, 189, 90, 174, 32, 62, 132, 126, 35, 62, 30, 3, 2, 190, 133, 207, 177, 189, 136, 28, 176, 61, 204, 217, 19, 62, 66, 50, 137, 187, 72, 214, 39, 188, 252, 65, 37, 62, 45, 39, 211, 189, 213, 138, 37, 62, 186, 30, 2, 189, 221, 54, 211, 59, 36, 23, 243, 60, 103, 255, 193, 61, 51, 213, 12, 62, 149, 250, 130, 61, 126, 9, 18, 62, 57, 218, 179, 189, 191, 32, 173, 60, 196, 2, 33, 190, 160, 104, 222, 61, 231, 43, 36, 62, 127, 167, 40, 60, 221, 112, 246, 188, 7, 153, 18, 190, 28, 236, 36, 60, 233, 30, 186, 188, 54, 74, 131, 61, 59, 54, 144, 61, 3, 115, 192, 61, 236, 79, 184, 61, 249, 231, 173, 60, 155, 199, 128, 61, 222, 65, 52, 190, 92, 56, 49, 190, 196, 6, 132, 61, 178, 89, 113, 189, 72, 201, 45, 62, 248, 163, 131, 189, 178, 206, 207, 189, 148, 2, 50, 189, 181, 98, 154, 61, 150, 178, 22, 62, 126, 229, 218, 189, 243, 163, 245, 189, 118, 245, 192, 61, 128, 34, 44, 62, 126, 198, 29, 62, 83, 107, 125, 189, 240, 72, 211, 189, 36, 40, 187, 58, 213, 119, 238, 61, 217, 203, 26, 62, 27, 91, 145, 189, 141, 82, 41, 190, 118, 212, 9, 62, 44, 200, 22, 190, 254, 131, 41, 190, 132, 151, 213, 189, 137, 206, 184, 61, 216, 25, 46, 62, 158, 25, 206, 189, 217, 38, 172, 188, 175, 196, 64, 189, 62, 241, 49, 190, 224, 218, 94, 61, 150, 154, 222, 61, 193, 199, 56, 189, 203, 117, 216, 189, 87, 92, 174, 189, 159, 151, 82, 189, 230, 217, 15, 190, 159, 162, 66, 189, 130, 251, 156, 61, 214, 84, 168, 189, 191, 68, 38, 189, 192, 230, 199, 189, 80, 35, 34, 189, 245, 73, 179, 61, 255, 135, 238, 61, 214, 31, 224, 60, 187, 126, 163, 189, 71, 76, 198, 61, 0, 92, 255, 61, 5, 100, 248, 189, 178, 245, 50, 62, 69, 133, 130, 60, 43, 163, 29, 62, 186, 41, 24, 190, 30, 211, 170, 61, 252, 99, 17, 190, 23, 39, 103, 189, 132, 7, 197, 188, 34, 211, 37, 61, 147, 151, 5, 61, 115, 39, 159, 61, 167, 221, 156, 61, 244, 200, 197, 60, 129, 110, 0, 62, 189, 31, 25, 190, 188, 85, 48, 62, 244, 69, 50, 189, 5, 228, 36, 62, 34, 71, 172, 61, 28, 61, 18, 62, 241, 29, 35, 62, 255, 210, 122, 188, 112, 190, 18, 62, 22, 244, 247, 189, 97, 219, 66, 187, 119, 89, 75, 61, 98, 173, 29, 62, 181, 165, 99, 61, 138, 4, 180, 189, 171, 106, 94, 188, 200, 80, 41, 61, 89, 178, 13, 190, 18, 77, 190, 61, 2, 250, 19, 190, 92, 105, 52, 190, 123, 113, 141, 60, 231, 73, 23, 190, 92, 120, 37, 62, 245, 122, 129, 189, 81, 24, 200, 188, 122, 98, 205, 189, 250, 95, 3, 190, 47, 128, 235, 189, 61, 18, 119, 189, 36, 29, 225, 189, 55, 52, 74, 61, 231, 9, 44, 189, 123, 118, 173, 187, 1, 21, 19, 190, 244, 126, 144, 61, 228, 238, 7, 61, 231, 168, 131, 189, 239, 202, 37, 62, 67, 24, 66, 189, 101, 133, 199, 61, 158, 222, 4, 190, 196, 150, 41, 188, 85, 244, 204, 189, 97, 64, 245, 189, 191, 193, 152, 187, 165, 15, 91, 61, 180, 87, 236, 61, 164, 151, 204, 188, 87, 52, 25, 188, 167, 61, 21, 190, 136, 185, 10, 62, 184, 55, 172, 189, 242, 50, 30, 62, 233, 235, 86, 61, 120, 142, 196, 61, 170, 27, 241, 189, 1, 7, 202, 61, 49, 150, 175, 61, 188, 183, 47, 190, 183, 75, 46, 62, 131, 164, 139, 61, 19, 152, 40, 190, 67, 80, 142, 188, 133, 140, 184, 61, 3, 133, 89, 59, 9, 109, 217, 188, 63, 254, 169, 188, 246, 188, 22, 190, 69, 143, 41, 62, 228, 213, 27, 62, 219, 213, 12, 62, 50, 239, 227, 189, 209, 76, 226, 61, 89, 173, 38, 62, 215, 116, 172, 61, 28, 176, 205, 61, 40, 252, 3, 190, 15, 8, 25, 62, 89, 192, 193, 189, 32, 122, 54, 61, 14, 81, 51, 190, 99, 165, 86, 189, 151, 150, 14, 190, 205, 45, 144, 61, 128, 227, 15, 62, 243, 227, 100, 188, 25, 82, 243, 60, 191, 228, 169, 61, 188, 1, 9, 190, 130, 70, 36, 62, 98, 74, 90, 61, 239, 121, 32, 190, 191, 23, 136, 189};
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
                    alignas(float) const unsigned char memory[] = {39, 48, 235, 61, 65, 53, 22, 190, 10, 163, 45, 190, 163, 45, 188, 61, 31, 67, 31, 190, 5, 56, 88, 189, 195, 111, 29, 60, 136, 33, 17, 190, 84, 123, 23, 61, 101, 0, 41, 61, 102, 144, 6, 189, 43, 233, 45, 190, 30, 253, 223, 189, 245, 201, 246, 188, 49, 67, 239, 61, 26, 76, 95, 61, 147, 40, 13, 62, 116, 89, 56, 60, 210, 46, 169, 187, 100, 180, 206, 61, 107, 10, 72, 61, 12, 231, 246, 61, 77, 254, 147, 189, 236, 106, 167, 61, 57, 250, 39, 190, 47, 199, 179, 61, 251, 88, 34, 62, 90, 41, 37, 62, 95, 216, 247, 189, 21, 59, 48, 62, 90, 37, 150, 60, 173, 228, 172, 189};
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
                    alignas(float) const unsigned char memory[] = {90, 218, 236, 61, 64, 180, 201, 188, 32, 26, 231, 189, 248, 20, 43, 190, 57, 84, 143, 189, 29, 81, 75, 189, 121, 162, 32, 62, 9, 128, 222, 188, 116, 164, 171, 60, 152, 170, 235, 189, 17, 33, 194, 61, 102, 209, 37, 190, 69, 47, 103, 189, 199, 163, 67, 61, 76, 136, 124, 187, 190, 108, 190, 189, 109, 117, 10, 190, 214, 208, 144, 61, 6, 27, 106, 189, 157, 244, 240, 188, 228, 36, 137, 188, 76, 29, 16, 62, 150, 88, 195, 189, 200, 88, 146, 189, 83, 103, 27, 62, 196, 52, 108, 60, 193, 247, 244, 61, 57, 174, 155, 189, 26, 150, 24, 189, 8, 103, 34, 62, 240, 128, 27, 190, 204, 233, 160, 189};
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
                    alignas(float) const unsigned char memory[] = {192, 41, 242, 189};
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
    alignas(float) const unsigned char memory[] = {109, 89, 26, 63, 40, 201, 137, 191, 32, 252, 86, 62, 36, 156, 174, 190, 162, 18, 79, 63, 122, 162, 119, 191, 244, 213, 76, 61, 75, 219, 55, 191, 245, 204, 214, 63, 168, 206, 15, 191, 106, 248, 20, 63, 14, 200, 64, 191, 252, 28, 131, 190, 139, 60, 65, 192, 207, 47, 222, 189, 64, 191, 218, 63, 227, 182, 165, 61, 128, 93, 85, 63, 148, 82, 254, 191, 60, 9, 8, 191, 131, 96, 128, 63, 186, 119, 194, 63, 220, 146, 252, 190, 183, 0, 46, 190, 223, 39, 27, 192, 152, 57, 21, 63, 68, 133, 205, 62, 28, 179, 30, 191, 166, 224, 101, 63, 96, 45, 239, 63, 25, 138, 190, 190, 157, 167, 22, 64, 41, 84, 192, 63, 52, 127, 36, 189, 50, 181, 111, 190, 15, 85, 201, 191, 163, 45, 244, 190, 232, 188, 51, 192, 30, 104, 104, 62};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {192, 185, 184, 60, 64, 15, 64, 189, 223, 245, 173, 189, 36, 12, 73, 189, 128, 220, 3, 61, 112, 218, 180, 60, 101, 210, 13, 190, 192, 80, 144, 61, 21, 125, 20, 190, 186, 40, 20, 190, 243, 214, 178, 189, 160, 117, 52, 60, 176, 84, 47, 60};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-27_16-00-37/26ce15c_zoo_environment_algorithm/pendulum-v1_ppo/0004/steps/000000000000000";
   char commit_hash[] = "26ce15c90e85eede67022c9f57d2159cd8a26acb";
}