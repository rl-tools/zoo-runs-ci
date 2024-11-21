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
                    alignas(float) const unsigned char memory[] = {50, 181, 13, 63, 63, 138, 217, 62, 232, 212, 135, 63, 12, 104, 38, 191, 43, 29, 171, 189, 211, 219, 177, 63, 70, 37, 177, 190, 88, 178, 30, 191, 156, 189, 210, 60, 239, 20, 159, 190, 197, 27, 251, 61, 188, 212, 45, 63, 219, 221, 1, 63, 125, 224, 138, 62, 253, 69, 118, 63, 48, 4, 58, 190, 244, 86, 161, 62, 83, 16, 208, 188, 124, 92, 104, 190, 255, 97, 4, 63, 76, 53, 219, 190, 227, 32, 242, 62, 188, 22, 239, 62, 123, 188, 104, 63, 151, 107, 135, 189, 87, 183, 98, 62, 84, 197, 179, 189, 227, 7, 10, 63, 17, 108, 223, 190, 123, 136, 215, 61, 4, 238, 238, 61, 91, 135, 43, 63, 193, 127, 200, 62, 149, 145, 255, 190, 232, 196, 118, 62, 111, 242, 162, 190, 227, 192, 190, 62, 63, 9, 74, 63, 115, 193, 145, 62, 140, 210, 229, 62, 4, 20, 20, 191, 181, 196, 23, 191, 215, 65, 241, 190, 91, 63, 236, 62, 18, 226, 110, 190, 26, 137, 158, 60, 169, 196, 139, 190, 122, 98, 16, 62, 103, 228, 150, 60, 99, 103, 78, 62, 218, 125, 208, 190, 105, 203, 209, 190, 3, 218, 231, 190, 16, 5, 99, 191, 144, 31, 173, 62, 43, 104, 124, 62, 70, 213, 10, 191, 135, 224, 14, 191, 153, 138, 123, 62, 75, 169, 2, 191, 187, 217, 248, 62, 195, 47, 235, 61, 42, 226, 126, 191, 148, 243, 50, 190, 21, 104, 209, 62, 110, 150, 201, 190, 21, 150, 26, 191, 234, 23, 134, 190, 60, 34, 254, 190, 30, 180, 6, 191, 121, 67, 73, 188, 203, 211, 90, 63, 143, 250, 196, 190, 231, 54, 231, 190, 68, 215, 204, 62, 97, 1, 189, 190, 47, 143, 41, 63, 185, 42, 170, 62, 248, 115, 235, 62, 201, 187, 160, 190, 5, 54, 4, 191, 46, 117, 229, 61, 167, 174, 52, 191, 158, 164, 149, 61, 105, 204, 56, 62, 9, 17, 14, 191, 82, 167, 26, 63, 205, 117, 108, 190, 108, 144, 114, 62, 62, 143, 173, 190, 82, 147, 64, 62, 134, 199, 240, 189, 169, 177, 35, 63, 129, 191, 133, 59, 252, 104, 136, 190, 138, 152, 46, 61};
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
                    alignas(float) const unsigned char memory[] = {11, 189, 40, 191, 49, 53, 50, 191, 91, 247, 198, 190, 127, 79, 203, 190, 22, 209, 26, 191, 244, 120, 66, 189, 58, 1, 170, 190, 75, 96, 36, 191, 57, 10, 111, 189, 121, 121, 163, 190, 236, 38, 60, 62, 3, 17, 103, 190, 241, 161, 192, 62, 6, 114, 43, 191, 45, 209, 148, 190, 196, 248, 182, 190, 250, 87, 2, 63, 93, 252, 252, 62, 194, 219, 163, 62, 141, 20, 12, 191, 79, 65, 23, 63, 119, 111, 103, 190, 116, 18, 237, 190, 80, 101, 96, 63, 147, 3, 137, 190, 140, 168, 235, 190, 78, 177, 22, 191, 93, 6, 21, 60, 64, 34, 19, 62, 19, 203, 132, 60, 45, 216, 208, 190, 29, 179, 57, 62};
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
                    alignas(float) const unsigned char memory[] = {233, 5, 179, 62, 179, 12, 206, 190, 25, 28, 13, 190, 119, 17, 34, 189, 15, 67, 163, 61, 183, 245, 139, 61, 55, 176, 87, 62, 236, 204, 207, 62, 162, 145, 25, 190, 154, 97, 203, 58, 137, 190, 216, 61, 173, 45, 132, 62, 162, 69, 223, 189, 6, 121, 201, 190, 170, 148, 80, 61, 169, 172, 178, 189, 118, 155, 219, 61, 43, 113, 30, 190, 150, 66, 101, 61, 79, 196, 228, 61, 131, 247, 121, 62, 234, 39, 59, 189, 169, 138, 78, 62, 21, 175, 194, 62, 39, 73, 197, 189, 92, 253, 16, 190, 130, 249, 55, 190, 82, 172, 72, 61, 215, 59, 171, 188, 12, 217, 204, 61, 93, 1, 175, 189, 217, 132, 225, 61, 78, 48, 175, 62, 70, 212, 199, 190, 156, 28, 116, 61, 28, 141, 44, 190, 161, 42, 73, 62, 155, 211, 44, 62, 167, 130, 11, 61, 73, 48, 93, 62, 170, 44, 46, 62, 221, 7, 162, 61, 4, 87, 158, 187, 174, 110, 107, 62, 189, 170, 185, 61, 205, 164, 229, 190, 142, 90, 254, 61, 69, 233, 208, 60, 149, 198, 177, 60, 7, 150, 232, 190, 27, 127, 35, 59, 130, 46, 111, 62, 151, 81, 213, 62, 161, 57, 161, 189, 71, 203, 182, 61, 210, 205, 46, 62, 50, 24, 137, 189, 84, 160, 109, 61, 52, 72, 106, 190, 149, 231, 216, 189, 172, 120, 32, 190, 125, 26, 194, 61, 109, 185, 70, 62, 207, 64, 101, 61, 44, 78, 50, 62, 105, 65, 20, 191, 178, 3, 22, 62, 6, 70, 64, 189, 212, 175, 146, 61, 185, 224, 129, 60, 177, 154, 29, 62, 54, 123, 131, 62, 41, 32, 11, 190, 218, 55, 198, 61, 115, 134, 4, 61, 203, 33, 172, 61, 33, 232, 29, 190, 136, 240, 218, 189, 169, 176, 52, 62, 82, 17, 191, 61, 164, 18, 80, 189, 18, 182, 216, 190, 170, 63, 99, 187, 201, 72, 163, 62, 107, 16, 171, 62, 50, 12, 36, 62, 230, 217, 68, 62, 138, 181, 201, 62, 36, 104, 53, 190, 179, 249, 65, 190, 133, 232, 83, 190, 192, 148, 58, 190, 154, 242, 198, 58, 254, 28, 68, 62, 213, 77, 121, 189, 33, 42, 201, 60, 134, 75, 10, 189, 188, 15, 253, 190, 100, 113, 201, 61, 181, 11, 63, 190, 53, 100, 40, 62, 255, 218, 156, 189, 17, 158, 122, 62, 237, 142, 135, 189, 132, 23, 197, 61, 169, 60, 212, 188, 249, 160, 34, 190, 253, 53, 140, 189, 222, 205, 136, 190, 86, 182, 63, 190, 108, 111, 42, 190, 96, 227, 36, 190, 255, 253, 254, 189, 15, 25, 225, 189, 206, 150, 24, 61, 222, 171, 176, 189, 171, 5, 198, 62, 64, 125, 237, 59, 50, 183, 195, 61, 70, 250, 153, 59, 181, 173, 14, 189, 75, 189, 121, 60, 255, 33, 54, 60, 62, 73, 13, 190, 231, 73, 128, 190, 152, 32, 22, 189, 66, 54, 12, 190, 94, 33, 24, 190, 65, 10, 137, 190, 3, 24, 31, 63, 178, 156, 26, 189, 26, 164, 6, 62, 53, 55, 144, 190, 89, 23, 83, 190, 211, 119, 90, 188, 128, 247, 40, 190, 106, 87, 103, 189, 239, 71, 148, 189, 205, 18, 173, 61, 16, 87, 104, 187, 130, 102, 13, 62, 61, 184, 96, 62, 8, 80, 201, 189, 61, 187, 170, 61, 183, 91, 246, 61, 27, 152, 190, 62, 90, 195, 17, 190, 97, 176, 9, 190, 80, 49, 144, 190, 12, 236, 86, 190, 144, 116, 61, 190, 122, 77, 191, 190, 70, 170, 76, 189, 88, 112, 40, 189, 167, 12, 176, 62, 75, 231, 238, 189, 103, 203, 106, 62, 33, 171, 26, 190, 66, 171, 67, 61, 235, 255, 158, 189, 29, 178, 163, 62, 124, 214, 16, 191, 202, 43, 115, 61, 125, 53, 70, 189, 28, 139, 187, 60, 139, 83, 186, 189, 86, 23, 109, 189, 38, 249, 28, 62, 48, 215, 46, 62, 187, 73, 143, 189, 242, 225, 198, 187, 150, 229, 97, 60, 239, 40, 105, 190, 55, 229, 196, 190, 30, 224, 58, 189, 252, 79, 163, 189, 111, 122, 97, 61, 139, 101, 184, 190, 116, 253, 197, 188, 124, 160, 141, 62, 215, 170, 128, 62, 248, 24, 112, 60, 184, 227, 153, 62, 29, 246, 57, 61, 52, 154, 187, 61, 241, 128, 143, 188, 203, 46, 141, 190, 20, 201, 208, 189, 79, 130, 120, 189, 148, 126, 187, 189, 93, 101, 168, 61, 192, 239, 25, 62, 41, 85, 191, 62, 224, 99, 4, 191, 120, 163, 242, 61, 131, 63, 133, 190, 9, 221, 114, 62, 214, 102, 172, 189, 123, 22, 97, 189, 194, 44, 106, 62, 33, 211, 5, 62, 242, 141, 70, 187, 236, 145, 143, 61, 21, 126, 13, 62, 5, 15, 16, 190, 35, 147, 164, 190, 182, 128, 170, 61, 247, 148, 81, 62, 63, 181, 39, 190, 77, 78, 100, 190, 96, 165, 29, 189, 208, 124, 210, 61, 72, 7, 96, 62, 251, 145, 184, 61, 134, 202, 58, 61, 110, 86, 161, 62, 42, 151, 223, 61, 239, 186, 215, 188, 34, 64, 98, 190, 206, 223, 17, 190, 219, 204, 86, 190, 73, 223, 252, 189, 32, 128, 6, 62, 10, 198, 142, 189, 149, 158, 50, 62, 84, 72, 218, 190, 234, 213, 67, 61, 160, 41, 58, 190, 56, 80, 50, 62, 126, 157, 144, 189, 220, 89, 144, 189, 6, 37, 165, 61, 194, 10, 167, 189, 81, 175, 76, 190, 251, 128, 211, 186, 88, 201, 178, 187, 27, 90, 166, 190, 247, 94, 227, 188, 36, 84, 227, 61, 124, 141, 169, 61, 168, 65, 17, 189, 147, 106, 101, 187, 129, 238, 226, 61, 215, 64, 55, 62, 47, 131, 16, 61, 37, 247, 206, 187, 62, 89, 57, 61, 187, 218, 141, 62, 54, 86, 55, 62, 210, 15, 133, 189, 162, 128, 153, 189, 56, 25, 151, 61, 159, 83, 176, 61, 206, 114, 144, 189, 218, 5, 47, 62, 132, 137, 157, 61, 57, 120, 76, 62, 68, 228, 25, 191, 80, 230, 85, 61, 68, 41, 31, 190, 236, 173, 132, 62, 144, 138, 4, 62, 122, 102, 123, 61, 124, 148, 152, 62, 196, 159, 190, 61, 146, 184, 212, 188, 183, 156, 232, 189, 7, 46, 58, 62, 229, 174, 113, 190, 97, 8, 11, 190, 46, 118, 8, 62, 54, 190, 151, 189, 235, 50, 46, 187, 69, 193, 48, 190, 143, 190, 33, 61, 136, 185, 172, 61, 103, 74, 28, 62, 225, 133, 175, 61, 122, 164, 5, 61, 128, 99, 149, 62, 109, 175, 131, 59, 181, 41, 56, 189, 142, 86, 43, 190, 232, 67, 85, 189, 185, 5, 130, 189, 80, 159, 84, 62, 19, 98, 106, 190, 190, 168, 176, 189, 187, 78, 150, 190, 10, 107, 71, 62, 64, 67, 73, 190, 221, 190, 29, 62, 197, 228, 6, 190, 246, 64, 30, 190, 123, 247, 91, 190, 243, 244, 24, 190, 228, 27, 67, 62, 75, 180, 49, 62, 55, 122, 55, 62, 212, 11, 219, 189, 136, 160, 53, 189, 39, 220, 225, 61, 110, 59, 235, 189, 111, 201, 35, 190, 177, 199, 132, 189, 53, 44, 21, 62, 36, 43, 52, 190, 118, 133, 129, 61, 165, 176, 148, 189, 19, 28, 116, 188, 223, 37, 35, 190, 76, 88, 124, 190, 214, 136, 34, 62, 149, 24, 122, 61, 236, 23, 1, 62, 127, 176, 237, 61, 135, 177, 43, 62, 243, 135, 207, 189, 119, 81, 252, 61, 9, 116, 61, 190, 0, 183, 161, 62, 197, 47, 163, 190, 159, 68, 119, 62, 226, 208, 165, 59, 8, 95, 164, 61, 219, 133, 185, 189, 7, 124, 131, 189, 79, 196, 240, 60, 123, 228, 158, 190, 238, 198, 209, 61, 30, 45, 21, 190, 169, 117, 199, 188, 89, 69, 221, 190, 50, 20, 220, 189, 64, 68, 8, 60, 137, 78, 24, 62, 151, 255, 48, 190, 201, 171, 150, 189, 147, 65, 81, 190, 38, 121, 244, 61, 131, 220, 83, 62, 77, 76, 21, 190, 110, 225, 252, 61, 11, 21, 148, 62, 76, 212, 153, 62, 112, 123, 58, 190, 69, 149, 144, 61, 127, 124, 2, 62, 150, 13, 238, 188, 210, 181, 204, 60, 126, 34, 60, 61, 93, 214, 62, 62, 72, 179, 194, 61, 197, 118, 16, 191, 196, 235, 139, 187, 211, 88, 122, 190, 148, 95, 137, 62, 88, 69, 129, 61, 217, 5, 136, 62, 64, 33, 147, 62, 93, 226, 6, 190, 55, 241, 173, 61, 239, 117, 33, 62, 74, 224, 114, 62, 79, 121, 39, 190, 17, 200, 180, 190, 130, 8, 137, 62, 188, 22, 244, 189, 194, 203, 64, 60, 199, 251, 205, 190, 42, 132, 76, 62, 22, 237, 145, 61, 32, 1, 123, 62, 3, 78, 60, 61, 1, 133, 89, 62, 60, 168, 69, 62, 1, 155, 238, 189, 151, 181, 62, 60, 245, 255, 58, 190, 113, 111, 34, 187, 85, 80, 208, 60, 63, 89, 241, 189, 44, 176, 60, 62, 53, 32, 87, 190, 54, 0, 153, 62, 168, 57, 130, 190, 23, 23, 82, 62, 196, 37, 120, 61, 41, 126, 216, 188, 159, 161, 3, 189, 211, 117, 36, 189, 0, 11, 117, 62, 20, 86, 9, 189, 15, 131, 130, 189, 59, 81, 142, 189, 163, 221, 0, 61, 130, 224, 95, 190, 137, 76, 144, 190, 196, 66, 19, 190, 97, 220, 128, 188, 66, 222, 239, 187, 213, 167, 134, 190, 54, 129, 217, 189, 65, 252, 244, 61, 11, 189, 65, 62, 141, 217, 108, 188, 5, 216, 56, 59, 122, 108, 219, 62, 114, 121, 172, 187, 194, 179, 31, 189, 30, 134, 33, 190, 28, 249, 9, 190, 55, 216, 202, 189, 165, 54, 150, 188, 5, 200, 19, 190, 166, 27, 12, 189, 105, 239, 152, 62, 81, 122, 16, 191, 172, 76, 71, 62, 131, 76, 130, 61, 169, 105, 148, 62, 205, 210, 27, 62, 112, 112, 13, 62, 22, 252, 87, 62, 216, 14, 181, 189, 163, 26, 95, 190, 254, 64, 25, 190, 194, 211, 87, 61, 191, 115, 30, 189, 116, 122, 104, 190, 232, 164, 156, 61, 133, 250, 32, 62, 92, 121, 176, 61, 61, 157, 160, 190, 241, 148, 182, 61, 29, 53, 201, 59, 250, 121, 152, 62, 210, 35, 229, 189, 240, 224, 64, 62, 51, 190, 101, 62, 193, 145, 185, 61, 240, 184, 133, 190, 105, 3, 56, 190, 178, 200, 56, 190, 2, 56, 152, 189, 233, 192, 19, 62, 25, 221, 219, 188, 111, 162, 121, 61, 114, 166, 5, 190, 232, 27, 146, 62, 152, 28, 36, 61, 172, 106, 195, 189, 231, 206, 137, 190, 46, 182, 175, 61, 180, 222, 101, 190, 19, 125, 171, 190, 52, 48, 173, 189, 137, 241, 71, 62, 252, 102, 209, 61, 208, 51, 96, 60, 135, 220, 85, 189, 173, 235, 210, 62, 192, 36, 150, 188, 201, 233, 170, 60, 34, 127, 194, 189, 183, 250, 1, 62, 172, 64, 13, 189, 104, 251, 1, 190, 249, 147, 233, 188, 208, 175, 169, 189, 48, 8, 13, 190, 246, 70, 212, 190, 140, 107, 249, 61, 154, 134, 203, 61, 12, 225, 212, 62, 214, 140, 157, 57, 87, 80, 198, 189, 94, 173, 246, 61, 92, 111, 5, 189, 176, 138, 13, 62, 152, 202, 199, 190, 141, 96, 79, 62, 52, 93, 32, 190, 206, 99, 180, 60, 227, 49, 188, 190, 90, 50, 136, 189, 201, 76, 173, 189, 214, 222, 186, 190, 143, 155, 135, 61, 115, 225, 57, 190, 196, 100, 14, 190, 110, 222, 140, 189, 7, 74, 160, 188, 207, 202, 137, 62, 69, 7, 148, 61, 203, 127, 106, 190, 32, 138, 54, 61, 113, 232, 89, 62, 96, 88, 138, 188, 148, 163, 157, 189, 84, 38, 123, 190, 59, 214, 210, 189, 221, 142, 121, 190, 183, 149, 185, 188, 134, 188, 36, 61, 35, 83, 29, 62, 116, 12, 21, 62, 156, 234, 249, 188, 163, 77, 188, 189, 64, 84, 171, 189, 89, 26, 160, 189, 217, 71, 248, 61, 112, 66, 149, 190, 39, 178, 234, 62, 118, 241, 2, 189, 126, 160, 134, 185, 76, 236, 109, 61, 151, 172, 14, 189, 91, 205, 136, 190, 177, 51, 139, 190, 143, 116, 101, 190, 237, 178, 254, 61, 248, 135, 34, 62, 173, 123, 143, 189, 103, 158, 82, 62, 106, 155, 250, 61, 169, 122, 55, 190, 57, 183, 15, 189, 108, 106, 145, 189, 213, 218, 161, 62, 1, 251, 106, 190, 172, 141, 87, 189, 22, 12, 152, 190, 64, 7, 212, 189, 4, 82, 187, 190, 215, 101, 240, 189, 51, 90, 137, 61, 95, 84, 111, 62, 143, 126, 17, 62, 204, 92, 95, 62, 235, 159, 49, 62, 175, 195, 89, 60, 37, 195, 48, 189, 142, 238, 220, 189, 46, 188, 239, 60, 241, 156, 6, 63, 134, 197, 205, 60, 84, 72, 199, 62, 193, 219, 253, 60, 240, 150, 209, 61, 61, 60, 8, 62, 231, 43, 147, 61, 200, 216, 47, 189, 226, 85, 157, 189, 14, 246, 134, 62, 233, 55, 137, 62, 251, 51, 128, 62, 31, 6, 203, 189, 163, 116, 100, 61, 245, 155, 178, 189, 175, 72, 240, 189, 243, 110, 188, 189, 204, 178, 210, 189, 60, 47, 8, 62, 247, 146, 185, 190, 177, 234, 10, 62, 110, 70, 3, 62, 46, 117, 203, 59, 62, 29, 231, 60, 5, 81, 158, 62, 83, 143, 104, 61, 150, 254, 123, 190, 138, 197, 61, 62, 117, 159, 52, 61, 210, 100, 228, 59, 92, 76, 122, 61, 163, 65, 140, 190, 185, 177, 12, 63, 216, 35, 133, 188, 155, 18, 251, 61, 13, 71, 81, 190, 83, 47, 165, 61, 194, 169, 204, 60, 163, 237, 51, 190, 228, 201, 30, 190, 76, 36, 104, 62, 86, 208, 76, 62, 101, 227, 244, 189, 71, 54, 56, 62, 212, 75, 123, 62, 248, 166, 197, 60, 43, 36, 34, 190, 12, 41, 234, 58, 107, 219, 56, 62, 178, 232, 48, 61, 35, 200, 168, 190, 62, 101, 97, 190, 235, 113, 108, 190, 239, 17, 14, 190, 18, 80, 222, 189, 241, 211, 65, 62, 198, 205, 184, 189, 84, 128, 243, 61, 219, 211, 211, 60, 123, 71, 65, 62, 55, 15, 141, 61, 191, 56, 172, 61, 95, 219, 250, 61, 179, 247, 144, 62, 60, 17, 227, 190, 133, 14, 219, 189, 110, 253, 165, 188, 229, 247, 19, 62, 231, 44, 215, 61, 49, 110, 55, 62, 127, 85, 8, 62, 231, 11, 123, 62, 73, 87, 85, 189, 71, 132, 5, 190, 209, 159, 63, 61, 169, 20, 75, 190, 155, 151, 163, 190, 235, 194, 9, 188, 154, 151, 129, 61, 29, 182, 191, 61, 223, 74, 142, 189, 144, 241, 243, 61, 240, 42, 61, 61, 131, 229, 221, 61, 66, 209, 133, 62, 31, 68, 29, 62, 75, 128, 35, 62, 192, 194, 55, 190, 186, 247, 85, 188, 254, 56, 116, 189, 225, 94, 30, 190, 47, 148, 86, 190, 138, 254, 127, 61, 148, 4, 42, 190, 229, 117, 39, 190, 54, 229, 125, 61, 48, 66, 166, 190, 21, 1, 23, 190, 175, 175, 74, 190, 233, 249, 33, 62, 36, 200, 88, 62, 48, 57, 153, 62, 153, 35, 94, 62, 80, 204, 137, 62, 114, 206, 62, 189, 36, 67, 210, 189, 91, 71, 155, 62, 43, 17, 109, 57, 243, 129, 254, 189, 148, 247, 69, 60, 80, 98, 45, 190, 209, 121, 42, 61, 61, 187, 18, 190, 236, 61, 22, 61, 19, 30, 26, 62, 99, 144, 111, 62, 147, 57, 173, 62, 230, 222, 197, 187, 83, 57, 86, 61, 200, 194, 224, 189, 86, 115, 42, 190, 140, 113, 192, 189, 155, 65, 152, 190, 136, 96, 96, 190, 117, 49, 142, 61, 110, 132, 132, 189, 118, 251, 109, 190, 161, 143, 143, 62, 194, 93, 12, 191, 81, 41, 19, 62, 185, 200, 245, 189, 141, 130, 130, 62, 117, 180, 123, 61, 66, 149, 61, 62, 143, 43, 168, 62, 161, 211, 65, 189, 165, 37, 202, 61, 97, 21, 197, 61, 76, 81, 70, 61, 8, 32, 36, 190, 54, 198, 34, 190, 24, 41, 75, 62, 17, 91, 177, 61, 57, 153, 140, 60, 146, 213, 219, 190, 115, 190, 90, 189, 70, 226, 118, 62, 148, 23, 127, 61, 117, 78, 181, 61, 90, 13, 227, 187, 77, 153, 166, 62, 246, 0, 54, 190, 49, 118, 45, 189, 111, 87, 117, 190, 168, 34, 185, 188, 32, 176, 67, 190, 67, 65, 195, 188, 42, 33, 231, 189, 40, 144, 28, 62, 215, 30, 77, 189, 237, 230, 164, 62, 207, 24, 111, 189, 4, 24, 71, 62, 198, 168, 70, 189, 112, 8, 154, 189, 46, 104, 176, 61, 112, 155, 74, 190, 128, 203, 141, 60, 103, 67, 126, 61, 223, 68, 47, 61, 143, 186, 204, 189, 171, 135, 107, 189, 219, 231, 198, 62, 82, 29, 7, 62, 16, 5, 3, 189, 127, 63, 194, 61, 73, 81, 180, 62, 131, 133, 203, 61, 147, 76, 129, 190, 189, 152, 29, 190, 165, 111, 52, 61, 36, 172, 135, 190, 211, 195, 191, 190, 11, 81, 209, 61, 213, 196, 25, 62, 233, 133, 154, 62, 69, 72, 230, 189, 150, 185, 201, 61, 189, 8, 205, 188, 82, 5, 26, 190, 87, 87, 44, 190, 154, 191, 159, 62, 122, 196, 216, 190, 86, 163, 242, 61, 168, 96, 166, 189, 209, 151, 84, 62, 56, 47, 153, 61, 122, 222, 152, 62, 163, 193, 80, 62, 44, 154, 67, 189, 147, 149, 77, 190, 145, 176, 59, 190, 134, 57, 43, 62, 32, 158, 96, 190, 235, 157, 115, 189, 34, 206, 191, 61, 177, 166, 5, 61, 103, 8, 88, 62, 222, 213, 219, 189, 200, 88, 182, 62, 74, 178, 133, 62, 247, 13, 210, 62, 113, 4, 105, 62, 253, 73, 79, 62, 205, 217, 62, 61, 184, 79, 12, 61, 119, 96, 110, 60, 232, 220, 45, 190, 37, 52, 147, 188, 8, 5, 123, 190, 75, 132, 13, 62, 199, 241, 70, 190, 164, 143, 15, 189, 34, 245, 16, 62, 4, 98, 33, 63, 181, 80, 221, 61, 166, 3, 133, 62, 172, 15, 19, 62, 173, 61, 219, 61, 12, 143, 183, 61, 52, 56, 35, 62, 67, 173, 87, 62, 123, 103, 54, 190, 144, 164, 218, 61, 44, 105, 157, 62, 192, 119, 173, 62, 146, 113, 23, 190, 149, 109, 144, 62, 229, 220, 129, 60, 204, 93, 129, 189, 174, 115, 228, 189, 63, 90, 205, 189, 88, 228, 131, 62, 243, 247, 2, 191, 94, 1, 76, 187, 66, 49, 94, 62, 50, 27, 177, 60, 210, 162, 172, 189, 83, 153, 168, 62, 241, 240, 49, 190, 172, 253, 74, 61, 72, 234, 26, 62, 251, 211, 216, 189, 199, 44, 104, 61, 100, 167, 155, 189, 39, 4, 238, 189, 19, 236, 206, 62, 48, 182, 109, 190, 4, 234, 109, 189, 240, 201, 79, 190, 63, 244, 180, 189, 91, 180, 9, 190, 39, 204, 214, 189, 125, 196, 10, 62, 55, 110, 0, 62, 61, 210, 100, 61, 167, 3, 130, 189, 141, 207, 74, 62, 246, 58, 233, 61, 106, 239, 44, 189, 211, 238, 88, 61, 191, 53, 236, 61, 210, 217, 130, 62, 59, 222, 253, 189, 232, 142, 40, 190, 218, 24, 179, 190, 246, 180, 213, 61, 160, 109, 211, 189, 239, 24, 150, 190, 118, 120, 129, 189, 217, 209, 78, 62, 205, 10, 36, 62, 65, 22, 11, 62, 106, 74, 46, 62, 33, 65, 254, 60, 63, 88, 204, 189, 225, 122, 203, 189, 77, 217, 17, 63, 45, 195, 51, 189, 78, 135, 82, 186, 197, 250, 129, 62, 161, 74, 19, 63, 242, 160, 223, 60, 194, 12, 68, 189, 154, 146, 254, 62, 52, 122, 164, 189, 158, 68, 203, 62, 242, 201, 120, 188, 128, 81, 70, 190, 88, 131, 131, 190, 242, 226, 90, 188, 68, 60, 7, 190, 60, 236, 35, 62, 215, 161, 146, 190, 70, 165, 189, 190, 33, 71, 114, 190, 188, 117, 208, 189, 32, 169, 48, 61, 79, 247, 9, 189, 65, 74, 145, 189, 89, 146, 135, 189, 179, 129, 140, 62, 255, 177, 228, 61, 201, 22, 49, 61, 34, 121, 3, 61, 94, 209, 211, 61, 247, 168, 239, 189, 40, 70, 77, 62, 82, 198, 10, 190, 169, 163, 63, 191, 94, 164, 98, 62, 166, 187, 205, 186, 27, 158, 27, 189, 95, 154, 98, 191, 103, 92, 113, 189, 211, 173, 2, 190, 244, 38, 91, 191, 77, 120, 155, 61, 144, 131, 165, 190, 62, 168, 61, 190, 41, 177, 69, 62, 134, 34, 141, 189, 126, 209, 2, 188, 98, 200, 103, 189, 156, 177, 21, 190, 192, 202, 95, 62, 109, 210, 120, 63, 250, 88, 177, 61, 173, 24, 10, 190, 242, 86, 133, 60, 202, 137, 144, 60, 38, 115, 171, 61, 100, 157, 241, 189, 105, 209, 144, 62, 124, 199, 220, 188, 204, 230, 16, 62, 175, 193, 25, 62, 87, 206, 26, 189, 193, 107, 117, 62, 133, 165, 2, 191, 168, 170, 107, 62, 100, 226, 131, 190, 26, 142, 23, 62, 47, 249, 192, 190, 83, 57, 9, 60, 49, 66, 133, 58, 150, 99, 216, 61, 219, 19, 240, 59, 140, 186, 86, 60, 76, 143, 44, 62, 164, 186, 125, 190, 8, 66, 221, 62, 61, 253, 68, 62, 217, 168, 155, 62, 0, 91, 63, 61, 231, 50, 16, 188, 130, 155, 243, 187, 167, 241, 128, 188, 136, 4, 2, 62, 10, 142, 229, 61, 228, 42, 92, 187, 88, 125, 120, 190, 167, 79, 101, 61, 58, 118, 133, 190, 193, 235, 156, 190, 143, 228, 176, 60, 237, 139, 173, 61, 41, 103, 109, 61, 34, 167, 101, 190, 107, 53, 55, 190, 87, 25, 32, 62, 158, 47, 151, 188, 238, 129, 240, 189, 157, 249, 167, 190, 227, 11, 15, 63, 40, 59, 130, 189, 104, 171, 219, 61, 213, 203, 217, 190, 96, 3, 58, 190, 178, 58, 87, 189, 235, 18, 164, 190, 28, 160, 90, 189, 145, 114, 73, 62, 5, 113, 17, 62, 198, 31, 89, 190, 198, 89, 76, 189, 148, 16, 137, 62, 13, 190, 233, 189, 38, 111, 67, 61, 13, 198, 225, 187, 92, 19, 0, 62, 90, 78, 211, 189, 124, 130, 89, 190, 77, 68, 173, 190, 66, 85, 206, 60, 79, 60, 93, 190, 169, 216, 163, 190, 145, 150, 153, 61, 59, 58, 20, 189, 112, 127, 67, 62, 50, 184, 3, 62, 155, 188, 46, 62, 225, 13, 221, 61, 244, 195, 173, 61, 13, 188, 189, 188, 199, 45, 117, 62, 243, 112, 16, 191, 49, 225, 239, 61, 254, 232, 195, 189, 94, 70, 193, 62, 68, 71, 53, 62, 47, 228, 153, 61, 247, 111, 175, 61, 181, 168, 64, 62, 41, 11, 7, 61, 222, 96, 197, 61, 80, 186, 31, 62, 217, 248, 119, 60, 5, 1, 139, 190, 81, 66, 176, 61, 54, 83, 42, 62, 231, 117, 22, 190, 199, 161, 119, 190, 90, 57, 94, 62, 0, 107, 90, 189, 156, 72, 182, 61, 105, 192, 68, 61, 204, 184, 67, 61, 41, 228, 177, 62, 88, 77, 61, 189, 159, 183, 5, 61, 48, 88, 30, 190, 180, 72, 115, 188, 233, 63, 147, 189, 191, 233, 148, 61, 22, 180, 38, 62, 153, 53, 206, 187, 100, 64, 27, 62, 169, 179, 250, 190, 73, 53, 108, 185, 195, 209, 25, 189, 145, 167, 120, 62, 217, 69, 13, 62, 193, 243, 239, 61, 173, 223, 18, 62, 214, 106, 95, 62, 19, 84, 105, 190, 155, 163, 241, 189, 181, 113, 109, 61, 19, 138, 55, 188, 10, 124, 180, 190, 161, 168, 254, 60, 44, 231, 47, 61, 102, 237, 217, 61, 94, 43, 168, 190, 129, 17, 5, 62, 175, 163, 61, 62, 206, 21, 201, 62, 77, 235, 193, 61, 4, 196, 213, 61, 127, 92, 49, 61, 181, 142, 80, 190, 28, 72, 10, 61, 124, 89, 208, 189, 205, 138, 14, 190, 129, 182, 86, 190, 141, 251, 111, 62, 102, 27, 187, 61, 68, 231, 101, 190};
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
                    alignas(float) const unsigned char memory[] = {170, 42, 66, 190, 55, 50, 78, 61, 9, 17, 177, 188, 41, 189, 54, 60, 95, 235, 123, 61, 248, 217, 81, 60, 134, 193, 183, 61, 80, 207, 13, 190, 110, 18, 237, 189, 128, 119, 45, 189, 34, 212, 56, 61, 1, 169, 65, 190, 8, 7, 212, 61, 162, 57, 246, 189, 20, 201, 53, 190, 22, 110, 90, 61, 126, 19, 18, 58, 89, 220, 61, 190, 220, 168, 187, 189, 103, 63, 4, 189, 147, 95, 18, 60, 114, 58, 183, 61, 146, 81, 134, 61, 235, 88, 128, 189, 75, 84, 59, 190, 143, 164, 68, 61, 54, 242, 158, 190, 16, 39, 148, 62, 3, 82, 58, 59, 233, 231, 185, 188, 200, 236, 19, 190, 137, 184, 213, 189};
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
                    alignas(float) const unsigned char memory[] = {177, 77, 176, 190, 179, 74, 147, 190, 16, 209, 198, 190, 62, 231, 11, 190, 179, 212, 110, 62, 12, 61, 164, 190, 156, 114, 167, 190, 93, 170, 125, 190, 144, 83, 208, 189, 196, 232, 97, 61, 136, 186, 170, 190, 116, 201, 198, 190, 178, 115, 138, 190, 13, 107, 198, 190, 82, 185, 160, 62, 187, 163, 57, 62, 149, 127, 64, 62, 22, 209, 98, 62, 164, 65, 79, 62, 45, 111, 109, 190, 239, 49, 43, 190, 193, 100, 160, 190, 246, 23, 67, 62, 249, 73, 118, 190, 163, 93, 60, 62, 19, 64, 159, 62, 157, 126, 93, 190, 29, 249, 218, 62, 138, 246, 133, 62, 214, 104, 58, 62, 208, 107, 161, 190, 239, 56, 76, 190};
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
                    alignas(float) const unsigned char memory[] = {67, 24, 186, 61};
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
    alignas(float) const unsigned char memory[] = {3, 196, 149, 190, 94, 72, 157, 191, 8, 91, 73, 190, 221, 57, 160, 63, 56, 60, 175, 63, 228, 1, 34, 63, 154, 200, 78, 63, 123, 202, 184, 62, 42, 161, 43, 61, 148, 146, 25, 190, 237, 116, 8, 64, 92, 121, 47, 63, 207, 170, 107, 190, 148, 248, 7, 63, 208, 177, 78, 63, 29, 8, 225, 191, 152, 219, 19, 64, 115, 29, 66, 191, 228, 79, 244, 62, 15, 107, 169, 191, 155, 243, 227, 62, 226, 27, 4, 63, 166, 253, 95, 63, 32, 185, 218, 61, 27, 221, 195, 190, 18, 231, 98, 63, 68, 215, 144, 190, 114, 179, 128, 190, 93, 146, 171, 63, 125, 90, 187, 63, 229, 82, 85, 63, 236, 219, 151, 188, 247, 7, 12, 190, 31, 73, 140, 63, 170, 18, 113, 190, 27, 38, 174, 63, 243, 97, 195, 191, 39, 150, 249, 63, 80, 184, 41, 62};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {224, 142, 73, 64, 142, 115, 183, 192, 248, 82, 25, 192, 129, 191, 169, 192, 110, 254, 17, 192, 222, 158, 2, 192, 106, 148, 119, 64, 245, 75, 146, 192, 211, 223, 61, 192, 65, 244, 147, 192, 7, 95, 42, 63, 238, 171, 187, 191, 159, 78, 235, 191};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-21_22-43-46/5f3332d_zoo_environment_algorithm/pendulum-v1_ppo/0000/steps/000000000000582";
   char commit_hash[] = "5f3332d6ce49564c7695a5d8580a7a5c0bf9b995";
}