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
                    alignas(float) const unsigned char memory[] = {38, 132, 16, 191, 143, 128, 10, 63, 137, 11, 154, 190, 87, 211, 16, 190, 212, 239, 17, 61, 17, 24, 187, 62, 125, 160, 183, 189, 161, 110, 16, 191, 61, 120, 4, 62, 85, 76, 157, 62, 17, 236, 230, 189, 27, 238, 231, 189, 52, 251, 219, 62, 12, 102, 204, 188, 252, 28, 252, 62, 26, 250, 208, 190, 113, 51, 77, 61, 13, 74, 110, 62, 180, 38, 230, 189, 81, 29, 123, 62, 53, 41, 188, 62, 198, 130, 13, 191, 186, 199, 174, 189, 125, 9, 46, 190, 254, 23, 169, 188, 189, 18, 12, 63, 249, 151, 221, 62, 32, 229, 3, 191, 39, 63, 166, 190, 235, 157, 137, 190, 4, 198, 117, 190, 246, 188, 14, 63, 64, 184, 80, 62, 125, 192, 107, 190, 158, 80, 82, 190, 150, 150, 187, 190, 119, 89, 141, 189, 197, 183, 162, 190, 17, 146, 18, 61, 144, 154, 3, 63, 28, 52, 234, 62, 195, 232, 128, 60, 166, 59, 77, 62, 38, 75, 15, 63, 36, 166, 223, 190, 8, 228, 69, 190, 180, 94, 47, 190, 8, 88, 133, 190, 121, 90, 166, 61, 90, 44, 156, 62, 50, 84, 61, 62, 215, 213, 128, 190, 128, 51, 85, 190, 176, 240, 208, 190, 98, 81, 228, 190, 49, 228, 135, 190, 96, 110, 67, 62, 155, 244, 0, 191, 148, 116, 35, 62, 102, 4, 196, 188, 139, 232, 47, 62, 236, 25, 245, 61, 133, 2, 214, 190, 122, 10, 93, 62, 7, 87, 10, 191, 149, 16, 10, 191, 26, 204, 239, 62, 75, 141, 171, 62, 110, 191, 161, 190, 184, 98, 165, 61, 194, 143, 198, 61, 129, 37, 141, 190, 185, 180, 188, 190, 174, 102, 125, 189, 67, 189, 20, 190, 102, 48, 239, 188, 119, 59, 22, 62, 79, 132, 147, 190, 173, 229, 202, 62, 75, 89, 206, 190, 2, 98, 204, 62, 131, 164, 131, 62, 5, 65, 236, 190, 78, 27, 137, 189, 202, 83, 101, 61, 90, 246, 1, 63, 126, 187, 21, 62, 113, 232, 159, 185, 97, 28, 20, 190, 226, 120, 140, 62, 6, 4, 77, 189, 208, 135, 63, 62, 7, 14, 10, 62, 211, 115, 67, 62, 3, 171, 9, 189, 246, 50, 141, 189};
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
                    alignas(float) const unsigned char memory[] = {34, 198, 220, 62, 50, 69, 218, 62, 70, 3, 158, 190, 222, 109, 164, 189, 156, 124, 214, 60, 150, 232, 130, 61, 66, 62, 154, 62, 128, 131, 13, 62, 136, 102, 121, 190, 58, 140, 68, 190, 54, 89, 0, 191, 161, 3, 220, 190, 85, 169, 253, 190, 245, 136, 251, 189, 111, 186, 54, 190, 242, 78, 11, 191, 124, 193, 12, 190, 63, 182, 1, 63, 200, 174, 159, 189, 124, 252, 177, 62, 71, 254, 254, 190, 226, 190, 174, 62, 99, 183, 82, 189, 70, 110, 16, 63, 143, 76, 8, 191, 192, 90, 184, 190, 87, 78, 168, 190, 57, 243, 42, 61, 148, 169, 136, 62, 221, 11, 3, 63, 204, 110, 226, 61, 3, 43, 72, 60};
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
                    alignas(float) const unsigned char memory[] = {114, 42, 48, 190, 47, 112, 28, 190, 26, 163, 43, 190, 214, 202, 188, 188, 251, 175, 165, 189, 101, 106, 198, 188, 22, 21, 205, 61, 203, 113, 227, 189, 19, 73, 32, 62, 93, 18, 44, 60, 253, 145, 10, 190, 255, 125, 15, 61, 64, 224, 177, 61, 100, 247, 159, 61, 203, 52, 45, 62, 51, 47, 140, 189, 29, 167, 178, 61, 62, 115, 10, 189, 60, 38, 205, 186, 44, 184, 233, 61, 25, 121, 10, 190, 67, 91, 252, 60, 229, 167, 204, 61, 130, 136, 149, 61, 178, 58, 41, 190, 57, 50, 117, 59, 217, 88, 14, 190, 124, 253, 238, 61, 182, 106, 189, 189, 184, 201, 159, 61, 30, 15, 130, 189, 211, 153, 4, 62, 23, 193, 214, 189, 181, 155, 38, 188, 89, 224, 145, 189, 218, 191, 56, 188, 116, 40, 12, 188, 223, 214, 227, 61, 191, 47, 20, 187, 249, 25, 187, 189, 133, 238, 27, 61, 155, 176, 52, 61, 28, 239, 230, 61, 255, 90, 32, 60, 252, 151, 32, 60, 225, 214, 22, 61, 70, 2, 31, 62, 225, 235, 169, 189, 51, 191, 161, 61, 56, 148, 195, 188, 210, 154, 232, 189, 219, 58, 34, 59, 131, 97, 45, 61, 93, 191, 17, 189, 89, 100, 180, 60, 33, 225, 153, 189, 174, 185, 190, 61, 31, 136, 24, 62, 34, 9, 222, 61, 144, 82, 255, 188, 153, 207, 145, 189, 195, 218, 209, 189, 49, 235, 2, 190, 6, 1, 26, 62, 115, 81, 240, 188, 234, 2, 50, 190, 24, 112, 2, 190, 228, 244, 208, 61, 206, 233, 16, 190, 150, 137, 64, 58, 133, 242, 23, 62, 231, 249, 51, 62, 115, 98, 146, 189, 206, 61, 47, 62, 195, 245, 34, 62, 190, 157, 197, 189, 79, 132, 107, 189, 105, 101, 253, 61, 90, 167, 36, 189, 11, 129, 226, 61, 2, 33, 21, 62, 35, 15, 191, 189, 198, 220, 128, 61, 218, 37, 99, 61, 185, 254, 200, 61, 29, 193, 44, 62, 8, 104, 141, 61, 107, 172, 167, 61, 206, 205, 28, 62, 238, 101, 18, 190, 158, 216, 36, 189, 141, 180, 96, 57, 154, 45, 244, 189, 159, 8, 90, 188, 191, 77, 174, 189, 1, 192, 52, 190, 202, 3, 49, 62, 240, 206, 158, 61, 136, 182, 8, 62, 181, 166, 150, 60, 208, 194, 204, 189, 237, 210, 171, 188, 88, 154, 24, 61, 20, 96, 223, 61, 1, 119, 34, 188, 11, 56, 176, 60, 54, 8, 76, 189, 162, 120, 86, 61, 25, 174, 41, 60, 153, 17, 22, 189, 107, 191, 187, 60, 241, 165, 71, 61, 234, 131, 241, 61, 76, 1, 8, 190, 74, 71, 30, 190, 160, 193, 196, 188, 12, 9, 26, 61, 223, 114, 221, 186, 40, 107, 167, 58, 103, 32, 238, 188, 83, 248, 245, 189, 131, 185, 85, 189, 201, 92, 0, 190, 18, 29, 130, 61, 106, 157, 71, 61, 78, 214, 123, 189, 120, 160, 10, 62, 4, 186, 219, 189, 115, 131, 96, 188, 136, 120, 208, 188, 194, 240, 253, 189, 217, 207, 8, 62, 190, 93, 159, 61, 234, 21, 8, 188, 22, 142, 244, 60, 64, 199, 63, 189, 210, 246, 203, 188, 14, 202, 187, 189, 178, 242, 35, 190, 189, 142, 35, 190, 193, 231, 139, 60, 81, 52, 235, 189, 239, 53, 7, 190, 116, 112, 164, 60, 96, 236, 227, 60, 27, 70, 46, 60, 233, 166, 238, 189, 82, 20, 128, 60, 185, 7, 34, 190, 89, 128, 145, 189, 139, 36, 37, 188, 50, 76, 4, 62, 117, 63, 198, 189, 84, 55, 251, 61, 14, 29, 226, 61, 75, 175, 70, 188, 207, 22, 3, 190, 182, 0, 182, 61, 50, 155, 21, 190, 187, 83, 205, 61, 34, 4, 63, 189, 68, 44, 140, 61, 120, 166, 233, 189, 95, 236, 135, 59, 221, 240, 178, 189, 56, 229, 251, 187, 204, 93, 190, 189, 107, 179, 101, 189, 76, 141, 28, 189, 216, 196, 25, 62, 12, 105, 50, 190, 109, 18, 21, 62, 231, 166, 158, 189, 150, 137, 150, 61, 161, 187, 86, 60, 228, 26, 7, 62, 18, 216, 222, 188, 71, 176, 141, 60, 147, 91, 56, 60, 159, 164, 42, 62, 167, 213, 173, 61, 201, 196, 196, 61, 222, 29, 28, 62, 124, 99, 168, 60, 177, 251, 123, 189, 132, 238, 156, 61, 93, 31, 166, 189, 80, 193, 43, 189, 205, 185, 9, 188, 139, 156, 184, 187, 194, 189, 30, 61, 14, 236, 136, 61, 59, 186, 251, 61, 73, 226, 42, 190, 121, 113, 88, 189, 225, 84, 214, 189, 197, 146, 223, 61, 99, 144, 184, 189, 146, 155, 140, 189, 10, 104, 184, 188, 133, 119, 173, 61, 20, 155, 61, 61, 196, 112, 4, 189, 224, 200, 143, 189, 165, 71, 42, 62, 222, 38, 44, 62, 41, 62, 145, 61, 188, 94, 6, 62, 219, 56, 6, 190, 176, 214, 46, 61, 143, 44, 35, 62, 188, 195, 106, 189, 170, 177, 214, 188, 206, 35, 239, 189, 100, 60, 34, 189, 94, 80, 103, 61, 1, 216, 50, 62, 118, 0, 156, 61, 3, 175, 82, 61, 156, 22, 29, 190, 188, 59, 43, 190, 150, 52, 199, 61, 95, 240, 137, 61, 220, 178, 12, 62, 1, 123, 63, 61, 208, 52, 36, 189, 50, 62, 147, 61, 134, 199, 210, 189, 179, 148, 3, 62, 246, 80, 7, 62, 150, 116, 34, 62, 254, 102, 133, 61, 129, 129, 86, 189, 73, 59, 11, 62, 4, 150, 31, 190, 113, 164, 169, 61, 22, 226, 136, 189, 78, 18, 10, 62, 80, 84, 238, 189, 197, 109, 176, 61, 156, 101, 54, 189, 230, 247, 37, 190, 147, 5, 184, 58, 166, 245, 10, 62, 173, 86, 210, 61, 38, 55, 201, 189, 226, 208, 35, 62, 30, 160, 6, 61, 156, 47, 152, 189, 79, 143, 9, 62, 134, 165, 35, 62, 195, 99, 199, 61, 193, 198, 228, 189, 171, 129, 15, 190, 209, 153, 173, 188, 255, 184, 40, 190, 105, 39, 118, 187, 165, 78, 173, 189, 50, 243, 71, 61, 47, 202, 46, 190, 190, 139, 164, 61, 147, 182, 183, 189, 206, 55, 225, 60, 44, 89, 36, 189, 23, 122, 30, 62, 15, 60, 131, 186, 15, 17, 135, 189, 76, 64, 142, 189, 243, 57, 27, 190, 71, 76, 48, 190, 227, 223, 8, 190, 47, 111, 8, 62, 135, 161, 48, 62, 107, 22, 191, 189, 43, 17, 194, 188, 126, 137, 203, 189, 21, 244, 148, 61, 233, 130, 51, 190, 156, 241, 202, 59, 148, 193, 173, 189, 71, 120, 42, 189, 63, 236, 162, 189, 24, 55, 197, 188, 188, 166, 212, 60, 95, 153, 113, 189, 84, 106, 236, 59, 208, 221, 134, 60, 92, 170, 216, 61, 255, 138, 201, 61, 40, 199, 243, 61, 132, 180, 27, 62, 118, 140, 170, 61, 133, 237, 20, 60, 36, 248, 217, 189, 170, 120, 29, 62, 227, 58, 2, 190, 155, 18, 229, 61, 124, 121, 138, 189, 96, 20, 225, 189, 203, 202, 1, 61, 116, 0, 143, 61, 19, 18, 156, 188, 91, 60, 22, 62, 118, 18, 9, 61, 146, 235, 17, 62, 117, 2, 142, 188, 35, 243, 2, 62, 249, 36, 232, 189, 228, 204, 85, 61, 214, 156, 59, 61, 159, 141, 38, 62, 246, 130, 47, 62, 215, 1, 181, 189, 221, 208, 78, 61, 254, 233, 142, 61, 242, 1, 231, 188, 133, 66, 8, 190, 196, 122, 167, 61, 106, 182, 107, 61, 81, 155, 100, 189, 187, 51, 164, 61, 90, 15, 121, 61, 246, 23, 164, 189, 43, 109, 43, 186, 37, 79, 51, 190, 21, 78, 0, 189, 179, 145, 189, 61, 134, 192, 4, 62, 255, 95, 14, 189, 245, 59, 47, 188, 52, 49, 12, 61, 64, 233, 131, 189, 86, 97, 155, 189, 48, 244, 35, 190, 193, 115, 3, 62, 91, 111, 102, 61, 67, 154, 6, 190, 7, 13, 185, 61, 245, 102, 46, 190, 23, 123, 179, 58, 86, 254, 24, 62, 220, 38, 166, 61, 141, 5, 6, 189, 120, 74, 74, 61, 140, 128, 230, 61, 139, 100, 74, 58, 66, 29, 42, 62, 77, 179, 225, 189, 101, 126, 10, 62, 149, 199, 78, 189, 136, 110, 103, 60, 54, 86, 166, 61, 140, 109, 181, 61, 142, 216, 153, 61, 3, 201, 33, 190, 134, 175, 164, 189, 13, 36, 208, 188, 239, 241, 105, 61, 106, 243, 29, 61, 200, 0, 60, 60, 118, 48, 168, 61, 155, 212, 45, 62, 91, 5, 18, 189, 211, 82, 115, 61, 92, 170, 128, 60, 112, 192, 121, 61, 237, 226, 47, 189, 32, 249, 176, 60, 36, 150, 103, 189, 13, 252, 219, 189, 191, 167, 123, 189, 102, 139, 239, 189, 128, 40, 232, 61, 229, 223, 43, 62, 138, 2, 25, 190, 147, 13, 211, 189, 124, 218, 39, 190, 154, 37, 42, 60, 244, 0, 134, 61, 72, 42, 38, 190, 247, 103, 70, 189, 10, 241, 27, 62, 91, 110, 31, 62, 88, 3, 39, 188, 207, 19, 10, 190, 173, 215, 255, 188, 175, 212, 240, 60, 110, 227, 18, 189, 106, 146, 4, 62, 229, 253, 116, 59, 186, 159, 108, 189, 153, 108, 248, 189, 213, 82, 17, 190, 107, 190, 46, 62, 45, 223, 121, 189, 13, 63, 64, 61, 233, 193, 28, 62, 134, 142, 27, 62, 178, 215, 58, 189, 173, 80, 74, 61, 9, 236, 109, 189, 46, 205, 68, 61, 156, 12, 135, 189, 30, 67, 18, 61, 197, 84, 51, 62, 107, 194, 183, 189, 101, 16, 1, 190, 198, 117, 154, 189, 123, 2, 226, 188, 38, 61, 241, 189, 222, 152, 202, 185, 170, 66, 150, 61, 156, 135, 198, 189, 145, 239, 0, 62, 149, 143, 186, 187, 145, 36, 203, 189, 243, 138, 30, 190, 99, 174, 26, 190, 158, 206, 11, 189, 219, 10, 129, 61, 238, 154, 40, 62, 65, 47, 179, 59, 147, 168, 0, 190, 235, 98, 59, 61, 110, 171, 160, 60, 252, 97, 157, 61, 145, 70, 200, 61, 54, 146, 12, 188, 191, 232, 220, 189, 8, 175, 112, 61, 16, 12, 91, 189, 247, 31, 36, 189, 78, 206, 200, 189, 187, 217, 26, 61, 47, 146, 63, 188, 235, 229, 218, 189, 103, 137, 29, 62, 7, 19, 231, 61, 149, 6, 62, 61, 205, 15, 181, 188, 102, 0, 13, 190, 30, 160, 191, 189, 123, 176, 99, 189, 45, 196, 42, 62, 101, 136, 147, 61, 82, 248, 11, 62, 213, 9, 51, 62, 129, 2, 43, 62, 177, 16, 47, 189, 209, 153, 219, 59, 89, 80, 248, 61, 223, 247, 199, 189, 176, 31, 40, 62, 19, 227, 92, 189, 163, 198, 211, 189, 194, 229, 4, 190, 112, 211, 254, 189, 217, 126, 228, 189, 145, 150, 45, 62, 144, 154, 145, 189, 162, 109, 1, 189, 82, 110, 35, 190, 150, 23, 230, 61, 15, 228, 160, 189, 71, 10, 193, 58, 49, 238, 22, 190, 242, 190, 4, 62, 145, 119, 42, 190, 164, 196, 200, 61, 26, 54, 40, 62, 180, 232, 125, 189, 88, 103, 123, 189, 54, 89, 39, 190, 37, 126, 136, 61, 180, 109, 157, 61, 204, 128, 159, 189, 12, 51, 120, 189, 50, 248, 172, 188, 102, 158, 9, 190, 117, 47, 231, 61, 54, 126, 212, 61, 142, 142, 123, 188, 206, 196, 22, 60, 96, 26, 2, 190, 175, 172, 83, 189, 185, 48, 51, 62, 130, 33, 125, 189, 194, 163, 4, 62, 248, 175, 10, 62, 129, 37, 176, 61, 190, 124, 12, 190, 224, 180, 26, 61, 164, 180, 41, 189, 180, 109, 15, 62, 66, 67, 38, 190, 38, 250, 138, 189, 113, 78, 66, 61, 175, 50, 132, 61, 36, 22, 32, 62, 255, 10, 8, 189, 156, 142, 199, 60, 117, 98, 124, 189, 2, 18, 70, 189, 88, 79, 28, 62, 231, 120, 135, 189, 49, 255, 33, 60, 235, 10, 147, 61, 152, 53, 1, 189, 209, 57, 255, 189, 25, 154, 8, 188, 124, 24, 160, 61, 115, 187, 137, 189, 102, 119, 8, 62, 58, 194, 159, 189, 59, 206, 85, 189, 117, 242, 42, 62, 149, 71, 141, 188, 16, 128, 116, 189, 237, 148, 138, 189, 214, 242, 38, 62, 35, 7, 248, 60, 218, 134, 16, 62, 62, 227, 129, 189, 192, 66, 225, 189, 171, 2, 199, 61, 113, 74, 40, 190, 107, 114, 198, 61, 99, 97, 54, 189, 211, 79, 179, 60, 157, 136, 139, 61, 230, 73, 7, 190, 121, 24, 35, 62, 6, 17, 0, 62, 58, 218, 77, 189, 129, 85, 194, 61, 103, 65, 62, 189, 103, 115, 166, 188, 195, 209, 2, 190, 156, 252, 11, 62, 37, 188, 185, 61, 193, 179, 20, 62, 200, 126, 55, 188, 112, 252, 13, 190, 173, 113, 213, 187, 123, 4, 226, 189, 121, 250, 252, 188, 0, 81, 33, 190, 200, 214, 171, 61, 92, 16, 135, 61, 155, 124, 35, 62, 237, 175, 196, 187, 110, 21, 96, 61, 8, 7, 237, 61, 124, 110, 11, 62, 156, 246, 42, 190, 215, 160, 83, 60, 23, 217, 240, 61, 161, 10, 26, 190, 246, 195, 245, 61, 84, 47, 41, 62, 124, 62, 161, 189, 200, 105, 50, 189, 47, 147, 117, 189, 55, 151, 22, 190, 129, 145, 163, 61, 30, 114, 7, 62, 105, 106, 172, 61, 204, 203, 211, 187, 41, 91, 213, 61, 141, 255, 9, 62, 78, 157, 22, 190, 214, 216, 251, 61, 214, 157, 125, 188, 125, 172, 114, 189, 178, 253, 253, 61, 237, 213, 236, 189, 195, 207, 226, 61, 160, 237, 161, 61, 124, 165, 157, 189, 130, 39, 223, 61, 48, 110, 49, 190, 129, 89, 12, 190, 191, 226, 26, 61, 121, 189, 45, 62, 50, 192, 23, 190, 150, 208, 124, 189, 194, 171, 8, 62, 220, 17, 233, 189, 10, 82, 214, 61, 137, 127, 118, 61, 45, 152, 140, 61, 176, 161, 50, 190, 143, 26, 173, 60, 182, 142, 226, 188, 162, 61, 4, 62, 82, 58, 142, 61, 168, 145, 29, 189, 85, 95, 51, 190, 35, 211, 196, 61, 233, 186, 126, 189, 14, 214, 30, 190, 88, 96, 1, 190, 56, 91, 46, 62, 143, 187, 9, 190, 157, 142, 202, 186, 175, 11, 31, 62, 88, 10, 5, 62, 81, 14, 26, 190, 203, 253, 18, 188, 211, 110, 49, 190, 171, 179, 108, 189, 238, 7, 135, 61, 95, 181, 28, 62, 67, 32, 225, 189, 44, 88, 239, 60, 93, 190, 91, 189, 68, 32, 130, 61, 116, 4, 23, 62, 70, 54, 90, 188, 213, 176, 229, 188, 76, 41, 112, 61, 224, 131, 34, 62, 33, 192, 29, 190, 124, 46, 105, 60, 152, 117, 16, 60, 138, 128, 47, 190, 106, 142, 5, 62, 135, 78, 52, 189, 207, 109, 39, 60, 234, 205, 18, 62, 231, 180, 14, 189, 1, 156, 46, 190, 186, 114, 20, 190, 162, 147, 40, 189, 117, 62, 93, 61, 2, 47, 98, 189, 115, 100, 133, 61, 115, 126, 106, 188, 44, 166, 143, 61, 128, 53, 135, 189, 144, 78, 85, 61, 176, 142, 5, 189, 217, 255, 184, 61, 25, 48, 4, 188, 109, 247, 197, 188, 13, 140, 157, 189, 240, 24, 252, 61, 180, 175, 28, 189, 85, 175, 46, 62, 143, 59, 32, 190, 238, 92, 2, 62, 182, 249, 101, 185, 64, 204, 19, 62, 193, 111, 238, 188, 33, 64, 181, 189, 202, 66, 13, 189, 114, 158, 242, 188, 90, 56, 222, 189, 233, 46, 131, 189, 165, 73, 75, 186, 43, 221, 45, 189, 65, 89, 86, 61, 80, 44, 64, 61, 144, 196, 64, 61, 146, 50, 3, 62, 182, 75, 0, 62, 184, 170, 5, 189, 60, 46, 46, 190, 132, 197, 225, 61, 178, 99, 216, 189, 123, 180, 8, 61, 22, 72, 247, 60, 80, 92, 27, 62, 104, 36, 52, 190, 31, 229, 4, 62, 90, 251, 112, 61, 66, 5, 143, 188, 70, 207, 90, 61, 233, 112, 49, 62, 93, 107, 224, 61, 131, 73, 1, 190, 174, 177, 228, 188, 142, 120, 135, 189, 212, 92, 255, 189, 246, 174, 52, 190, 31, 132, 31, 187, 122, 49, 61, 189, 146, 60, 20, 190, 41, 116, 193, 189, 187, 191, 195, 60, 144, 232, 173, 189, 165, 212, 193, 60, 237, 249, 39, 62, 209, 164, 29, 61, 40, 152, 94, 189, 148, 245, 8, 62, 200, 69, 51, 190, 253, 126, 163, 61, 211, 229, 88, 61, 83, 154, 156, 61, 8, 203, 31, 62, 167, 3, 209, 60, 142, 31, 11, 59, 75, 52, 10, 190, 184, 188, 192, 61, 77, 95, 45, 62, 27, 177, 215, 61, 101, 42, 208, 188, 28, 177, 44, 62, 158, 75, 193, 61, 138, 139, 170, 189, 200, 133, 27, 190, 24, 226, 214, 189, 1, 32, 39, 61, 105, 140, 26, 190, 9, 39, 38, 189, 104, 219, 21, 190, 112, 92, 15, 62, 89, 110, 121, 189, 12, 208, 137, 189, 77, 98, 18, 62, 42, 240, 165, 189, 73, 90, 235, 189, 9, 86, 70, 189, 127, 145, 15, 190, 253, 196, 41, 190, 165, 85, 117, 61, 157, 80, 92, 189, 17, 214, 128, 188, 126, 226, 216, 189, 107, 154, 43, 190, 99, 166, 228, 61, 29, 244, 168, 189, 46, 105, 16, 190, 215, 198, 145, 61, 223, 157, 41, 190, 84, 30, 17, 59, 253, 247, 5, 62, 224, 114, 25, 61, 20, 113, 81, 189, 7, 165, 213, 187, 11, 73, 212, 188, 163, 60, 2, 190, 213, 236, 241, 187, 17, 178, 64, 60, 46, 140, 165, 189, 37, 19, 221, 61, 56, 54, 178, 189, 137, 49, 254, 61, 34, 114, 14, 62, 35, 107, 13, 62, 25, 47, 30, 61, 253, 74, 208, 61, 50, 91, 182, 189, 202, 192, 32, 62, 57, 135, 76, 188, 255, 225, 123, 189, 165, 76, 187, 60, 84, 242, 234, 189, 215, 96, 49, 62, 89, 43, 161, 61, 44, 31, 234, 189, 30, 150, 38, 61, 228, 247, 48, 61, 100, 98, 46, 190, 25, 178, 2, 190, 214, 223, 9, 62, 200, 225, 193, 61, 140, 135, 27, 190, 240, 49, 49, 189, 68, 25, 4, 62, 114, 28, 81, 61, 198, 50, 146, 61, 170, 162, 154, 188, 189, 156, 86, 61, 7, 167, 235, 189, 8, 112, 223, 61, 29, 101, 186, 188, 227, 108, 148, 189, 205, 69, 253, 188, 8, 114, 242, 60, 113, 110, 46, 190, 131, 186, 208, 60, 186, 151, 52, 190, 248, 181, 248, 61, 54, 210, 181, 61, 101, 210, 238, 59, 64, 129, 195, 61, 169, 58, 38, 190, 209, 112, 137, 61, 27, 128, 20, 62, 104, 16, 227, 189, 149, 153, 127, 189, 209, 180, 129, 61, 181, 20, 147, 61, 167, 126, 41, 190, 96, 42, 235, 61, 203, 64, 10, 62, 145, 252, 186, 61, 99, 102, 43, 190, 88, 86, 5, 61, 98, 112, 197, 189, 64, 250, 39, 190, 205, 40, 26, 189, 204, 13, 43, 61, 139, 190, 183, 61, 250, 197, 44, 190, 228, 174, 50, 62, 35, 78, 116, 61, 106, 193, 4, 62, 202, 113, 225, 60, 41, 198, 25, 189, 27, 228, 7, 188, 205, 203, 154, 61, 14, 164, 147, 189, 75, 183, 249, 189, 198, 142, 107, 188, 154, 220, 75, 189, 135, 1, 233, 61, 106, 198, 31, 60, 179, 174, 57, 189, 17, 50, 33, 62, 199, 100, 250, 189, 152, 139, 56, 61, 52, 145, 132, 61, 159, 21, 166, 61, 33, 39, 20, 61, 50, 248, 250, 61, 46, 50, 135, 60, 69, 59, 52, 190, 129, 175, 22, 186, 192, 43, 11, 190, 53, 61, 27, 190, 28, 196, 188, 61, 41, 226, 87, 61, 7, 11, 95, 61, 56, 26, 51, 62, 68, 228, 6, 62, 16, 177, 213, 61, 197, 254, 42, 61, 218, 149, 141, 60, 66, 175, 115, 61, 254, 184, 203, 61, 75, 209, 53, 189, 50, 105, 46, 189, 205, 100, 77, 189, 111, 252, 34, 190, 16, 243, 178, 188, 113, 242, 174, 188, 52, 165, 69, 60, 62, 0, 49, 61, 122, 248, 51, 62, 248, 106, 135, 59, 182, 163, 126, 189, 202, 49, 193, 187, 237, 108, 231, 189, 196, 35, 222, 189, 254, 181, 3, 190, 185, 209, 215, 188, 196, 8, 201, 61, 255, 234, 20, 190, 74, 13, 11, 190, 191, 174, 24, 62, 58, 100, 19, 190, 127, 206, 51, 62, 101, 166, 132, 61, 86, 230, 16, 62, 181, 43, 36, 61, 103, 129, 210, 61, 0, 163, 179, 61, 104, 24, 183, 189, 13, 140, 215, 61, 200, 105, 227, 189, 136, 202, 46, 190, 20, 210, 128, 61, 30, 11, 195, 189, 203, 39, 32, 190, 105, 128, 245, 61, 126, 167, 37, 188, 229, 84, 108, 61, 191, 61, 23, 62, 99, 145, 203, 189, 140, 10, 52, 61, 32, 179, 230, 189, 178, 102, 87, 189, 219, 61, 121, 189, 172, 58, 252, 61, 233, 216, 111, 186, 212, 163, 15, 190, 204, 187, 48, 190, 35, 142, 72, 61, 114, 232, 138, 60, 23, 224, 69, 61, 69, 185, 102, 61, 242, 133, 12, 62, 82, 120, 2, 62, 19, 251, 38, 62, 42, 36, 196, 189, 138, 181, 21, 60, 23, 250, 245, 188, 248, 65, 102, 61, 93, 143, 91, 189, 172, 111, 181, 189, 205, 48, 242, 61, 122, 101, 23, 190, 49, 101, 102, 185, 108, 244, 34, 190, 7, 176, 155, 61, 101, 163, 170, 189, 109, 112, 13, 190, 231, 107, 22, 62, 50, 203, 105, 189, 32, 30, 201, 187, 221, 240, 195, 61, 218, 117, 155, 189, 42, 108, 51, 190, 40, 135, 137, 60, 61, 243, 137, 189, 208, 236, 11, 62, 245, 78, 4, 190, 189, 62, 47, 190, 198, 61, 181, 61, 247, 78, 13, 62, 145, 166, 31, 190, 77, 222, 187, 189, 245, 240, 1, 190, 217, 254, 227, 61, 225, 243, 132, 59, 245, 231, 111, 61, 87, 189, 101, 61, 90, 50, 173, 189, 113, 137, 190, 61, 207, 144, 209, 61, 238, 145, 162, 61, 251, 61, 30, 62, 171, 80, 218, 61, 181, 98, 215, 61, 98, 89, 57, 188, 102, 249, 19, 190, 160, 78, 191, 61, 233, 30, 154, 61, 223, 157, 209, 189, 124, 68, 102, 189, 113, 250, 139, 189, 106, 239, 105, 61, 92, 118, 27, 190, 110, 39, 213, 59, 197, 8, 150, 61, 52, 106, 140, 61, 104, 107, 5, 190, 185, 210, 220, 189, 67, 15, 180, 189, 143, 131, 199, 61, 184, 156, 24, 190, 255, 248, 203, 61, 45, 4, 108, 61, 100, 154, 15, 62, 109, 34, 2, 62, 129, 18, 46, 62, 79, 249, 251, 61, 174, 203, 176, 189, 209, 100, 85, 188, 89, 85, 20, 190, 41, 114, 205, 187, 6, 252, 192, 189, 154, 66, 159, 189, 72, 219, 52, 62, 41, 149, 27, 61, 148, 218, 31, 62, 64, 251, 232, 61, 133, 77, 111, 61, 66, 219, 49, 190, 253, 208, 228, 188, 224, 92, 184, 189, 236, 204, 12, 189, 183, 209, 17, 61, 245, 226, 51, 189, 241, 217, 45, 61, 104, 72, 203, 187, 3, 127, 32, 188, 67, 32, 159, 189, 192, 84, 133, 58, 130, 215, 24, 190, 77, 79, 182, 61, 229, 59, 221, 60, 212, 190, 234, 61, 0, 234, 0, 62, 70, 111, 131, 189, 186, 1, 134, 189, 63, 2, 136, 60, 146, 160, 237, 60, 123, 4, 203, 188, 191, 230, 226, 189, 99, 229, 131, 189, 184, 90, 155, 189, 42, 60, 28, 190, 94, 233, 50, 62, 243, 201, 133, 189, 99, 78, 112, 189, 73, 207, 50, 190, 166, 4, 34, 190, 44, 87, 44, 190, 177, 8, 175, 60, 48, 56, 197, 61, 200, 189, 200, 61, 181, 236, 12, 189, 36, 86, 165, 189, 82, 187, 21, 62, 74, 255, 26, 190, 38, 43, 49, 62, 193, 124, 29, 188, 199, 200, 40, 61, 11, 98, 6, 62, 195, 190, 30, 190, 125, 197, 173, 61, 13, 6, 43, 189, 227, 242, 81, 189, 11, 1, 34, 190, 41, 43, 14, 62, 251, 84, 13, 190, 237, 101, 187, 61, 17, 47, 242, 61, 211, 122, 127, 189, 228, 181, 47, 61};
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
                    alignas(float) const unsigned char memory[] = {166, 206, 49, 190, 146, 157, 27, 62, 190, 19, 68, 61, 50, 184, 252, 189, 226, 30, 41, 190, 233, 209, 213, 188, 114, 116, 226, 189, 179, 30, 30, 190, 26, 229, 229, 189, 138, 61, 44, 62, 209, 203, 151, 61, 7, 57, 13, 62, 9, 146, 238, 189, 165, 111, 97, 61, 217, 215, 71, 189, 29, 193, 11, 190, 118, 12, 244, 189, 26, 210, 12, 190, 45, 28, 49, 62, 157, 0, 203, 189, 158, 134, 183, 189, 88, 231, 162, 60, 248, 169, 125, 61, 123, 185, 160, 60, 102, 20, 166, 61, 169, 102, 133, 61, 238, 134, 215, 189, 77, 198, 46, 62, 5, 77, 12, 62, 234, 132, 120, 61, 168, 93, 93, 187, 45, 152, 184, 61};
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
                    alignas(float) const unsigned char memory[] = {30, 110, 22, 62, 99, 2, 185, 188, 56, 167, 30, 190, 183, 94, 64, 189, 111, 210, 4, 189, 104, 99, 130, 189, 89, 189, 156, 61, 221, 91, 20, 62, 41, 79, 27, 190, 201, 219, 184, 61, 36, 107, 14, 190, 184, 134, 203, 61, 122, 100, 78, 189, 105, 47, 76, 61, 134, 221, 31, 62, 228, 218, 169, 61, 16, 59, 226, 61, 22, 41, 49, 190, 84, 233, 39, 61, 230, 241, 206, 188, 21, 128, 41, 189, 236, 68, 206, 61, 72, 123, 8, 190, 37, 71, 23, 62, 54, 228, 240, 189, 156, 57, 2, 60, 147, 171, 97, 61, 117, 137, 136, 61, 65, 193, 9, 190, 49, 158, 35, 62, 182, 176, 215, 189, 83, 195, 167, 60};
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
                    alignas(float) const unsigned char memory[] = {40, 34, 19, 62};
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
    alignas(float) const unsigned char memory[] = {204, 6, 19, 63, 231, 221, 171, 63, 84, 222, 29, 190, 23, 243, 202, 191, 138, 76, 168, 62, 2, 91, 130, 63, 244, 4, 64, 191, 182, 103, 225, 62, 165, 123, 92, 190, 246, 52, 6, 191, 149, 120, 143, 190, 102, 39, 112, 63, 106, 121, 73, 63, 17, 187, 117, 63, 62, 96, 150, 62, 12, 183, 82, 191, 25, 246, 228, 190, 248, 94, 11, 63, 25, 118, 131, 190, 72, 210, 171, 63, 70, 100, 27, 190, 216, 229, 111, 190, 94, 236, 5, 63, 195, 238, 26, 63, 130, 19, 56, 190, 184, 74, 152, 191, 191, 212, 7, 191, 222, 159, 32, 191, 205, 235, 77, 189, 171, 78, 109, 191, 70, 218, 111, 60, 174, 56, 198, 190, 163, 181, 26, 190, 199, 216, 248, 189, 116, 244, 131, 191, 166, 88, 24, 191, 178, 143, 169, 191, 133, 163, 154, 63, 42, 202, 32, 63};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {22, 121, 71, 62, 91, 8, 70, 62, 110, 81, 208, 61, 215, 52, 152, 62, 126, 170, 136, 62, 119, 65, 101, 62, 190, 155, 21, 62, 236, 195, 132, 62, 230, 190, 6, 62, 144, 187, 119, 60, 252, 151, 52, 62, 84, 208, 243, 61, 222, 235, 41, 62};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-22_16-34-18/ce2e4d3_zoo_environment_algorithm/pendulum-v1_ppo/0007/steps/000000000000000";
   char commit_hash[] = "ce2e4d3724353c789e2246cf40dd504c2e0a062c";
}