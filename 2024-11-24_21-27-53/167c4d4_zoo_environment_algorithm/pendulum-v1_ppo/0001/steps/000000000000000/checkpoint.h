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
                    alignas(float) const unsigned char memory[] = {124, 46, 186, 190, 70, 35, 12, 191, 60, 33, 255, 62, 197, 89, 4, 63, 137, 243, 152, 189, 75, 67, 144, 188, 59, 51, 84, 190, 72, 157, 72, 190, 37, 78, 204, 190, 76, 35, 107, 62, 17, 7, 13, 62, 18, 176, 224, 190, 195, 57, 140, 188, 111, 218, 137, 190, 110, 243, 28, 62, 67, 35, 188, 62, 250, 212, 9, 61, 147, 105, 88, 62, 201, 195, 217, 186, 136, 112, 128, 60, 134, 66, 205, 61, 144, 235, 129, 62, 41, 177, 168, 62, 13, 199, 142, 190, 104, 139, 90, 61, 255, 15, 218, 187, 111, 51, 219, 189, 6, 248, 190, 190, 51, 132, 248, 190, 45, 211, 10, 63, 26, 2, 112, 190, 181, 128, 0, 191, 164, 211, 122, 190, 184, 232, 226, 190, 155, 136, 238, 190, 68, 42, 188, 190, 79, 15, 216, 187, 48, 201, 228, 61, 238, 133, 155, 61, 241, 115, 164, 190, 87, 96, 232, 190, 127, 36, 158, 62, 246, 209, 182, 61, 66, 145, 49, 190, 148, 98, 196, 190, 33, 180, 28, 190, 214, 84, 176, 190, 191, 41, 20, 189, 9, 104, 54, 62, 201, 37, 160, 188, 208, 70, 173, 62, 115, 206, 64, 62, 89, 189, 5, 190, 217, 165, 5, 62, 245, 24, 17, 63, 42, 50, 189, 61, 143, 246, 224, 190, 86, 197, 207, 190, 74, 95, 109, 62, 89, 69, 208, 62, 123, 55, 52, 60, 119, 168, 33, 55, 227, 38, 167, 190, 168, 207, 17, 63, 52, 71, 59, 190, 12, 101, 90, 190, 120, 163, 142, 190, 91, 87, 171, 189, 88, 201, 182, 62, 38, 4, 45, 190, 238, 128, 163, 62, 8, 24, 24, 189, 161, 130, 133, 190, 177, 32, 6, 63, 77, 76, 176, 62, 129, 184, 185, 62, 122, 17, 247, 190, 0, 117, 4, 63, 60, 228, 190, 62, 216, 108, 207, 62, 150, 52, 143, 60, 160, 242, 164, 190, 180, 194, 11, 191, 100, 207, 145, 62, 187, 230, 161, 189, 58, 232, 255, 190, 89, 145, 229, 62, 15, 107, 2, 63, 233, 26, 11, 63, 26, 243, 99, 59, 175, 229, 110, 62, 165, 199, 240, 61, 209, 55, 116, 62, 95, 133, 179, 188, 94, 142, 195, 190, 254, 17, 8, 63};
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
                    alignas(float) const unsigned char memory[] = {105, 92, 151, 189, 227, 226, 106, 61, 251, 80, 188, 189, 27, 157, 174, 190, 24, 228, 108, 190, 240, 58, 15, 62, 237, 9, 216, 190, 174, 143, 186, 190, 198, 69, 209, 62, 180, 227, 204, 62, 124, 127, 198, 59, 107, 250, 169, 189, 238, 108, 220, 190, 200, 251, 161, 190, 90, 91, 165, 190, 165, 90, 24, 189, 207, 4, 38, 62, 215, 36, 198, 59, 181, 153, 173, 62, 189, 166, 199, 190, 166, 82, 9, 63, 111, 73, 230, 62, 199, 200, 158, 61, 240, 148, 149, 189, 58, 101, 40, 61, 221, 22, 81, 61, 221, 9, 30, 190, 175, 164, 221, 189, 115, 120, 149, 190, 251, 251, 17, 63, 197, 131, 177, 62, 99, 165, 156, 62};
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
                    alignas(float) const unsigned char memory[] = {251, 66, 214, 188, 1, 105, 11, 60, 181, 64, 128, 189, 86, 161, 79, 189, 86, 168, 189, 61, 86, 123, 36, 190, 214, 160, 28, 62, 149, 235, 46, 62, 7, 240, 152, 61, 177, 218, 169, 188, 147, 240, 201, 59, 46, 98, 185, 58, 143, 49, 11, 62, 27, 138, 127, 189, 28, 87, 155, 60, 159, 246, 173, 189, 156, 74, 213, 60, 11, 205, 35, 189, 219, 153, 25, 189, 233, 103, 240, 61, 42, 109, 26, 62, 87, 108, 171, 61, 21, 3, 51, 190, 250, 235, 46, 189, 90, 115, 165, 61, 122, 78, 48, 190, 28, 228, 80, 189, 28, 88, 215, 61, 201, 219, 207, 189, 248, 250, 166, 189, 63, 206, 71, 189, 33, 123, 239, 60, 215, 196, 43, 190, 221, 236, 69, 189, 194, 228, 106, 61, 119, 156, 148, 58, 45, 226, 34, 189, 163, 174, 193, 61, 89, 154, 135, 186, 98, 14, 22, 62, 128, 117, 246, 188, 209, 80, 236, 61, 232, 245, 87, 189, 15, 156, 255, 188, 209, 165, 147, 60, 254, 122, 61, 61, 67, 54, 43, 62, 186, 239, 100, 189, 163, 48, 12, 190, 177, 83, 43, 189, 28, 55, 135, 189, 161, 109, 39, 62, 15, 227, 37, 190, 57, 230, 84, 61, 175, 158, 172, 61, 2, 194, 37, 62, 46, 26, 100, 61, 10, 185, 219, 61, 52, 160, 206, 189, 12, 242, 195, 189, 152, 27, 241, 188, 41, 73, 9, 62, 43, 78, 80, 61, 242, 242, 5, 61, 251, 53, 207, 61, 156, 153, 238, 189, 78, 51, 58, 60, 65, 44, 10, 62, 15, 138, 41, 62, 166, 76, 201, 61, 180, 22, 217, 60, 210, 133, 4, 190, 35, 35, 6, 188, 229, 143, 5, 62, 92, 104, 228, 188, 105, 34, 180, 61, 153, 86, 15, 61, 248, 50, 216, 61, 155, 111, 14, 190, 17, 21, 123, 60, 206, 70, 62, 189, 139, 34, 202, 189, 53, 199, 205, 189, 139, 127, 23, 62, 212, 113, 222, 61, 76, 90, 5, 61, 76, 239, 215, 61, 219, 171, 94, 189, 153, 246, 157, 60, 232, 10, 171, 189, 219, 14, 15, 62, 120, 218, 21, 62, 128, 93, 27, 62, 143, 120, 232, 188, 249, 235, 44, 62, 112, 208, 104, 60, 131, 10, 29, 61, 162, 136, 38, 190, 233, 58, 236, 61, 220, 148, 168, 61, 71, 240, 50, 61, 175, 128, 15, 62, 221, 21, 234, 189, 141, 157, 244, 61, 157, 39, 4, 61, 155, 41, 83, 60, 79, 181, 120, 187, 16, 97, 129, 189, 119, 193, 138, 60, 200, 202, 20, 189, 232, 119, 144, 61, 183, 38, 161, 189, 104, 13, 184, 189, 76, 240, 29, 62, 251, 231, 226, 189, 116, 6, 82, 188, 229, 251, 12, 190, 159, 21, 255, 61, 59, 153, 163, 189, 136, 250, 207, 189, 245, 78, 49, 190, 127, 249, 52, 190, 56, 85, 59, 61, 38, 99, 19, 190, 164, 79, 148, 189, 169, 61, 235, 189, 193, 109, 226, 189, 140, 37, 172, 59, 58, 146, 9, 62, 216, 147, 156, 189, 30, 54, 206, 61, 179, 106, 206, 189, 27, 190, 44, 60, 78, 61, 155, 189, 70, 194, 163, 189, 159, 156, 37, 188, 158, 119, 43, 190, 174, 91, 143, 60, 75, 217, 5, 62, 121, 227, 249, 61, 177, 153, 162, 189, 2, 220, 48, 62, 148, 114, 0, 190, 195, 83, 35, 190, 163, 199, 250, 58, 148, 247, 193, 189, 246, 206, 110, 189, 129, 137, 79, 61, 107, 245, 244, 189, 216, 31, 245, 189, 122, 65, 203, 189, 212, 1, 6, 62, 48, 170, 243, 61, 92, 159, 204, 189, 139, 140, 159, 61, 163, 12, 175, 61, 237, 96, 34, 190, 236, 152, 93, 61, 119, 132, 50, 61, 142, 106, 216, 61, 222, 180, 41, 190, 114, 122, 226, 61, 48, 207, 195, 189, 139, 220, 132, 60, 136, 42, 148, 61, 166, 103, 46, 190, 125, 81, 21, 190, 210, 47, 47, 190, 220, 241, 41, 190, 239, 127, 29, 62, 5, 228, 78, 189, 231, 114, 30, 189, 170, 4, 2, 61, 85, 172, 20, 62, 217, 28, 34, 190, 82, 81, 231, 61, 30, 63, 29, 190, 64, 77, 20, 190, 45, 69, 37, 190, 59, 74, 77, 189, 131, 214, 23, 189, 95, 37, 46, 190, 142, 232, 115, 61, 242, 188, 144, 188, 215, 166, 218, 189, 93, 6, 42, 190, 23, 57, 8, 62, 15, 72, 166, 189, 114, 210, 195, 188, 151, 21, 52, 190, 102, 66, 45, 61, 110, 228, 191, 188, 191, 123, 252, 60, 14, 232, 38, 61, 9, 30, 50, 62, 17, 62, 36, 62, 107, 192, 186, 188, 196, 144, 150, 188, 247, 57, 71, 189, 91, 30, 212, 189, 38, 22, 7, 62, 206, 40, 216, 188, 209, 39, 173, 187, 179, 135, 160, 188, 49, 147, 176, 61, 31, 128, 48, 59, 243, 11, 184, 61, 20, 16, 21, 60, 129, 85, 127, 189, 136, 168, 37, 190, 160, 105, 170, 61, 141, 252, 242, 189, 72, 168, 227, 189, 82, 40, 144, 188, 111, 50, 5, 190, 83, 150, 150, 61, 188, 104, 49, 190, 191, 254, 200, 61, 46, 219, 55, 189, 222, 164, 200, 61, 230, 27, 49, 190, 81, 197, 128, 58, 61, 80, 252, 61, 60, 92, 37, 62, 14, 121, 115, 189, 137, 90, 130, 61, 200, 207, 214, 187, 76, 67, 128, 61, 140, 215, 179, 61, 56, 175, 11, 62, 63, 141, 1, 62, 98, 216, 250, 189, 8, 192, 247, 188, 118, 184, 33, 62, 123, 121, 252, 61, 114, 88, 149, 189, 44, 138, 160, 188, 44, 81, 171, 61, 178, 55, 156, 61, 132, 177, 13, 188, 240, 245, 49, 190, 127, 169, 242, 189, 60, 229, 43, 190, 0, 26, 237, 61, 202, 117, 31, 62, 81, 244, 101, 60, 156, 10, 16, 190, 80, 46, 83, 189, 240, 141, 106, 61, 253, 161, 247, 61, 252, 239, 156, 189, 54, 129, 41, 190, 255, 156, 216, 189, 30, 127, 28, 190, 153, 181, 33, 189, 81, 160, 57, 61, 70, 107, 67, 61, 50, 137, 203, 60, 119, 79, 195, 61, 231, 221, 22, 62, 179, 193, 169, 188, 120, 116, 146, 61, 135, 199, 1, 62, 94, 125, 225, 57, 243, 94, 43, 189, 223, 8, 13, 59, 192, 68, 40, 62, 115, 152, 203, 189, 210, 245, 202, 61, 186, 84, 51, 190, 103, 102, 214, 188, 189, 248, 237, 188, 169, 223, 94, 189, 143, 142, 183, 60, 74, 248, 98, 60, 120, 84, 8, 62, 205, 57, 199, 188, 204, 149, 128, 61, 237, 165, 204, 61, 38, 224, 247, 61, 204, 80, 114, 61, 112, 73, 26, 62, 144, 120, 139, 61, 116, 179, 31, 62, 221, 36, 98, 189, 132, 210, 228, 61, 192, 122, 219, 60, 12, 115, 5, 190, 125, 26, 94, 189, 12, 47, 28, 190, 21, 17, 211, 189, 2, 180, 17, 190, 158, 1, 5, 62, 201, 46, 198, 189, 112, 171, 211, 61, 187, 180, 2, 62, 66, 171, 90, 189, 160, 172, 158, 189, 159, 64, 200, 60, 116, 175, 7, 190, 88, 240, 220, 61, 81, 34, 26, 190, 8, 60, 241, 61, 153, 51, 124, 189, 51, 7, 213, 189, 90, 23, 186, 61, 195, 7, 167, 61, 50, 126, 3, 189, 0, 178, 219, 61, 223, 185, 185, 61, 171, 103, 37, 190, 185, 104, 166, 189, 158, 54, 14, 190, 72, 146, 4, 62, 143, 4, 188, 188, 42, 155, 43, 62, 132, 26, 202, 189, 140, 95, 185, 61, 199, 204, 9, 62, 11, 252, 33, 62, 137, 83, 229, 189, 214, 59, 154, 61, 87, 108, 48, 62, 55, 102, 195, 61, 196, 98, 38, 190, 190, 26, 117, 189, 11, 191, 23, 189, 214, 129, 196, 189, 221, 181, 14, 61, 50, 247, 54, 61, 40, 19, 253, 189, 205, 177, 247, 188, 131, 186, 235, 189, 178, 33, 30, 62, 177, 98, 254, 189, 11, 75, 78, 61, 30, 58, 48, 190, 43, 201, 35, 189, 39, 118, 52, 190, 42, 145, 0, 62, 13, 20, 38, 190, 122, 161, 44, 189, 43, 95, 215, 188, 182, 237, 232, 189, 48, 33, 40, 62, 118, 241, 203, 61, 120, 194, 229, 189, 44, 252, 32, 188, 57, 109, 177, 61, 160, 39, 174, 189, 64, 49, 104, 189, 220, 79, 139, 61, 69, 244, 45, 62, 205, 91, 76, 61, 102, 187, 183, 189, 192, 126, 200, 189, 178, 40, 210, 61, 229, 51, 181, 61, 117, 243, 189, 61, 223, 0, 133, 188, 111, 143, 9, 190, 188, 219, 234, 189, 69, 100, 245, 61, 126, 99, 177, 189, 195, 161, 93, 188, 167, 95, 163, 61, 75, 123, 7, 190, 218, 226, 29, 189, 22, 134, 82, 60, 165, 62, 36, 189, 43, 87, 147, 189, 41, 238, 169, 61, 255, 204, 234, 189, 163, 113, 43, 62, 1, 85, 24, 190, 76, 145, 186, 189, 53, 5, 218, 189, 67, 110, 212, 189, 227, 238, 203, 188, 19, 239, 218, 188, 139, 93, 77, 61, 59, 205, 157, 61, 123, 98, 21, 190, 80, 163, 254, 61, 232, 44, 88, 189, 12, 47, 16, 190, 116, 248, 69, 189, 48, 228, 234, 189, 181, 18, 109, 189, 24, 118, 154, 61, 61, 222, 7, 189, 248, 122, 11, 62, 135, 47, 31, 190, 47, 234, 46, 62, 92, 95, 6, 190, 212, 110, 93, 61, 216, 157, 214, 59, 254, 246, 0, 188, 132, 217, 10, 62, 162, 60, 21, 190, 182, 196, 243, 189, 93, 189, 170, 60, 156, 34, 165, 61, 52, 223, 230, 189, 197, 65, 204, 189, 216, 217, 166, 59, 138, 138, 242, 61, 108, 191, 29, 61, 35, 146, 16, 190, 137, 69, 241, 61, 223, 206, 66, 189, 133, 60, 127, 189, 191, 6, 1, 61, 171, 252, 48, 62, 180, 192, 41, 188, 237, 48, 51, 62, 143, 40, 236, 61, 66, 91, 42, 62, 218, 148, 140, 61, 244, 151, 59, 60, 237, 49, 169, 61, 154, 196, 12, 189, 160, 220, 7, 62, 50, 22, 38, 190, 209, 118, 35, 62, 62, 93, 159, 189, 203, 16, 255, 61, 51, 50, 113, 61, 216, 25, 76, 61, 151, 79, 46, 190, 251, 104, 26, 190, 131, 102, 211, 189, 30, 174, 50, 61, 136, 203, 44, 190, 168, 145, 84, 189, 97, 167, 33, 190, 232, 185, 242, 189, 66, 144, 196, 188, 99, 87, 14, 62, 147, 230, 153, 189, 240, 62, 235, 61, 68, 224, 190, 189, 110, 78, 26, 60, 212, 98, 164, 61, 117, 185, 83, 188, 111, 42, 214, 189, 227, 228, 119, 187, 98, 76, 217, 189, 138, 50, 138, 61, 206, 254, 12, 189, 183, 84, 181, 189, 113, 108, 183, 188, 225, 63, 1, 190, 133, 145, 47, 190, 190, 125, 5, 190, 68, 63, 14, 62, 212, 251, 32, 62, 86, 119, 42, 190, 7, 233, 206, 189, 29, 18, 56, 189, 61, 234, 129, 61, 58, 79, 18, 190, 126, 58, 23, 188, 216, 107, 219, 189, 156, 158, 215, 60, 98, 44, 32, 62, 3, 98, 242, 188, 85, 107, 58, 189, 37, 207, 4, 190, 118, 208, 165, 61, 39, 60, 117, 189, 49, 88, 7, 190, 201, 187, 0, 190, 36, 23, 180, 189, 15, 212, 243, 61, 157, 5, 10, 62, 66, 238, 251, 188, 65, 2, 18, 62, 184, 60, 42, 190, 188, 196, 153, 189, 239, 28, 41, 62, 23, 27, 195, 189, 17, 111, 115, 61, 173, 245, 18, 62, 0, 86, 139, 58, 128, 216, 135, 189, 224, 171, 48, 189, 197, 52, 61, 188, 17, 132, 107, 189, 109, 110, 38, 62, 53, 165, 35, 62, 98, 51, 5, 62, 23, 253, 139, 61, 184, 158, 203, 189, 205, 137, 69, 60, 240, 70, 148, 61, 62, 70, 37, 190, 27, 105, 149, 188, 238, 202, 182, 189, 52, 68, 20, 190, 231, 113, 32, 62, 184, 240, 144, 59, 65, 175, 164, 60, 107, 183, 122, 189, 237, 85, 78, 189, 68, 64, 4, 62, 18, 153, 49, 190, 3, 202, 177, 61, 59, 115, 178, 189, 154, 29, 67, 189, 122, 245, 177, 189, 26, 69, 180, 61, 67, 232, 28, 59, 52, 126, 96, 189, 0, 94, 26, 189, 26, 78, 215, 189, 26, 171, 178, 189, 30, 63, 30, 190, 25, 6, 225, 61, 203, 141, 17, 190, 124, 97, 195, 61, 163, 166, 151, 186, 232, 30, 214, 61, 172, 204, 27, 190, 209, 98, 234, 189, 219, 138, 29, 62, 224, 207, 22, 61, 220, 206, 212, 189, 235, 124, 105, 189, 222, 77, 79, 188, 43, 111, 24, 62, 169, 37, 247, 188, 169, 250, 99, 189, 110, 22, 151, 189, 87, 116, 87, 61, 216, 142, 127, 189, 143, 131, 215, 189, 94, 211, 208, 189, 139, 131, 15, 62, 78, 26, 159, 189, 88, 15, 228, 61, 111, 159, 10, 190, 60, 230, 237, 61, 115, 8, 137, 61, 216, 75, 81, 61, 57, 164, 198, 61, 160, 119, 136, 189, 142, 170, 160, 61, 213, 174, 9, 62, 39, 248, 0, 62, 167, 139, 36, 189, 14, 135, 44, 62, 221, 223, 32, 61, 55, 38, 13, 187, 14, 54, 6, 60, 199, 102, 131, 189, 70, 88, 125, 189, 243, 98, 91, 61, 203, 153, 27, 62, 2, 212, 16, 190, 239, 31, 252, 61, 118, 86, 52, 190, 215, 255, 246, 61, 77, 59, 34, 190, 86, 120, 36, 62, 157, 47, 96, 61, 224, 30, 52, 190, 78, 142, 36, 61, 167, 154, 54, 187, 7, 51, 94, 60, 159, 138, 30, 62, 204, 160, 17, 62, 6, 90, 4, 190, 44, 13, 155, 189, 219, 164, 184, 189, 112, 24, 62, 61, 100, 51, 241, 187, 227, 48, 129, 61, 123, 225, 124, 61, 129, 48, 114, 189, 112, 83, 223, 187, 250, 52, 140, 189, 92, 252, 245, 189, 242, 178, 199, 61, 210, 175, 41, 190, 252, 31, 41, 190, 210, 15, 33, 62, 146, 240, 206, 61, 190, 16, 199, 61, 44, 248, 206, 188, 106, 38, 29, 62, 96, 211, 58, 61, 71, 73, 194, 189, 211, 204, 148, 61, 209, 197, 16, 190, 177, 94, 17, 190, 49, 116, 159, 61, 58, 53, 18, 62, 154, 203, 152, 61, 16, 97, 233, 61, 77, 103, 185, 189, 138, 119, 52, 189, 250, 4, 77, 61, 21, 254, 220, 189, 227, 171, 218, 189, 5, 72, 30, 190, 10, 217, 215, 189, 250, 148, 138, 189, 19, 94, 154, 61, 159, 86, 231, 60, 140, 196, 226, 61, 212, 112, 21, 189, 128, 32, 123, 189, 73, 74, 203, 61, 33, 136, 202, 189, 55, 96, 23, 190, 189, 245, 121, 189, 68, 94, 116, 187, 103, 30, 40, 62, 73, 187, 164, 61, 21, 59, 18, 190, 171, 127, 105, 188, 245, 154, 244, 189, 170, 12, 3, 62, 232, 164, 140, 61, 188, 50, 192, 189, 103, 107, 2, 190, 128, 41, 145, 189, 29, 251, 168, 189, 197, 64, 73, 60, 212, 133, 219, 61, 2, 230, 206, 61, 91, 95, 144, 189, 97, 3, 74, 61, 184, 126, 12, 61, 26, 251, 193, 61, 7, 227, 210, 60, 22, 24, 242, 61, 74, 214, 169, 189, 4, 227, 114, 61, 46, 164, 5, 190, 141, 74, 152, 189, 250, 32, 207, 189, 215, 26, 8, 62, 110, 171, 38, 189, 105, 58, 46, 190, 169, 244, 246, 61, 233, 215, 19, 190, 84, 16, 40, 190, 219, 243, 101, 189, 186, 106, 131, 187, 242, 133, 202, 189, 123, 186, 52, 61, 240, 13, 182, 60, 217, 52, 166, 189, 61, 149, 100, 60, 14, 94, 114, 188, 191, 237, 214, 186, 226, 47, 156, 60, 43, 69, 144, 189, 252, 78, 177, 61, 234, 162, 132, 59, 236, 10, 18, 62, 105, 64, 207, 61, 225, 1, 212, 189, 58, 71, 226, 61, 2, 18, 4, 190, 31, 60, 62, 60, 149, 13, 141, 189, 117, 207, 221, 61, 74, 187, 178, 187, 60, 156, 40, 190, 158, 123, 250, 189, 133, 67, 151, 61, 133, 180, 179, 61, 181, 26, 88, 60, 231, 185, 38, 189, 255, 37, 231, 189, 7, 219, 131, 189, 195, 236, 20, 190, 74, 143, 208, 60, 187, 203, 164, 189, 60, 193, 56, 189, 59, 163, 13, 189, 3, 68, 20, 62, 33, 186, 28, 190, 226, 174, 35, 189, 57, 131, 51, 61, 108, 120, 243, 61, 197, 166, 34, 190, 159, 94, 19, 61, 154, 2, 142, 189, 175, 42, 21, 62, 148, 8, 216, 189, 56, 190, 184, 187, 121, 214, 45, 62, 245, 255, 37, 62, 15, 69, 163, 189, 204, 44, 222, 60, 251, 81, 101, 189, 142, 249, 42, 190, 247, 173, 75, 61, 2, 246, 172, 61, 151, 117, 114, 61, 139, 216, 227, 61, 38, 87, 17, 190, 198, 203, 79, 189, 200, 200, 39, 62, 19, 221, 52, 62, 141, 179, 183, 60, 78, 100, 94, 188, 108, 73, 174, 61, 1, 53, 33, 61, 42, 216, 199, 189, 253, 31, 43, 62, 162, 185, 31, 62, 44, 239, 213, 189, 211, 143, 79, 61, 17, 250, 242, 189, 165, 237, 122, 60, 63, 181, 243, 189, 133, 10, 39, 62, 162, 23, 48, 62, 198, 255, 164, 60, 162, 88, 4, 62, 89, 113, 55, 60, 168, 123, 40, 61, 221, 207, 36, 190, 160, 237, 29, 62, 90, 91, 134, 60, 209, 89, 251, 189, 168, 239, 176, 61, 119, 19, 49, 189, 142, 146, 62, 189, 44, 212, 3, 60, 140, 216, 129, 61, 22, 173, 185, 60, 255, 166, 1, 62, 220, 114, 211, 189, 94, 237, 231, 189, 106, 150, 135, 60, 44, 155, 16, 189, 138, 22, 11, 188, 14, 220, 82, 189, 209, 1, 107, 189, 149, 222, 222, 189, 92, 133, 107, 61, 62, 214, 8, 190, 26, 225, 30, 190, 47, 76, 9, 62, 38, 63, 56, 189, 123, 106, 224, 61, 245, 214, 190, 188, 104, 109, 186, 189, 243, 142, 43, 62, 3, 88, 15, 60, 251, 130, 143, 61, 22, 193, 30, 190, 81, 41, 54, 61, 63, 177, 218, 61, 111, 31, 249, 189, 179, 168, 248, 189, 16, 254, 187, 188, 20, 91, 31, 62, 179, 120, 58, 189, 145, 14, 31, 60, 226, 112, 31, 62, 46, 128, 20, 61, 84, 85, 97, 61, 87, 143, 0, 62, 223, 213, 117, 188, 38, 116, 94, 61, 219, 244, 137, 61, 9, 81, 9, 62, 128, 235, 242, 188, 208, 207, 51, 190, 186, 187, 233, 61, 46, 202, 25, 62, 8, 111, 36, 62, 195, 98, 35, 62, 26, 180, 74, 189, 118, 218, 249, 189, 149, 151, 39, 190, 194, 58, 29, 190, 3, 103, 83, 61, 13, 77, 132, 189, 240, 130, 53, 189, 133, 203, 247, 60, 103, 154, 16, 190, 164, 200, 11, 60, 182, 211, 140, 189, 174, 231, 187, 188, 252, 127, 152, 189, 180, 103, 21, 62, 225, 253, 222, 61, 137, 172, 202, 60, 68, 188, 185, 189, 158, 44, 29, 62, 57, 137, 34, 190, 10, 145, 220, 60, 50, 244, 227, 189, 230, 112, 27, 62, 249, 135, 46, 62, 182, 89, 44, 190, 59, 122, 52, 62, 205, 82, 48, 190, 126, 11, 155, 188, 231, 196, 7, 190, 31, 5, 190, 61, 40, 196, 149, 189, 212, 195, 69, 61, 200, 222, 156, 61, 95, 232, 227, 189, 236, 12, 178, 188, 176, 100, 229, 60, 107, 175, 4, 190, 188, 93, 95, 61, 184, 178, 42, 190, 34, 192, 7, 61, 27, 235, 92, 59, 46, 66, 112, 60, 166, 115, 180, 189, 27, 14, 5, 61, 81, 173, 238, 61, 102, 83, 151, 61, 219, 73, 132, 189, 130, 53, 196, 61, 54, 147, 39, 62, 156, 199, 20, 190, 83, 244, 43, 190, 140, 179, 21, 62, 67, 174, 172, 189, 171, 121, 61, 61, 112, 94, 142, 61, 78, 223, 170, 188, 78, 183, 34, 189, 174, 243, 84, 188, 224, 136, 34, 190, 114, 97, 186, 58, 86, 250, 108, 61, 205, 163, 220, 61, 85, 139, 66, 189, 41, 154, 2, 190, 252, 221, 152, 60, 161, 43, 114, 189, 203, 1, 169, 189, 75, 59, 150, 61, 168, 106, 214, 189, 29, 200, 101, 189, 57, 144, 147, 189, 66, 42, 25, 62, 226, 137, 247, 61, 104, 58, 25, 62, 136, 130, 25, 62, 101, 113, 109, 61, 9, 68, 45, 62, 71, 241, 206, 61, 193, 31, 248, 188, 163, 54, 23, 189, 230, 206, 197, 61, 190, 202, 116, 61, 239, 90, 240, 189, 108, 136, 42, 190, 51, 220, 176, 61, 159, 133, 219, 188, 16, 39, 168, 189, 54, 38, 249, 61, 138, 201, 199, 188, 121, 97, 219, 189, 13, 80, 109, 60, 101, 235, 230, 61, 14, 238, 31, 189, 179, 213, 26, 190, 44, 205, 130, 60, 215, 155, 250, 61, 79, 109, 155, 61, 231, 34, 221, 188, 205, 28, 158, 61, 198, 16, 2, 190, 7, 111, 38, 62, 239, 135, 140, 189, 92, 197, 34, 62, 30, 152, 151, 61, 224, 218, 37, 190, 72, 147, 155, 188, 75, 17, 57, 189, 34, 35, 193, 189, 213, 125, 170, 189, 108, 39, 189, 189, 189, 200, 159, 189, 83, 223, 139, 61, 237, 133, 6, 190, 55, 254, 85, 61, 50, 98, 3, 61, 64, 224, 29, 190, 67, 155, 247, 189, 73, 211, 220, 60, 106, 68, 2, 190, 192, 234, 191, 60, 255, 217, 187, 189, 109, 49, 128, 189, 81, 252, 47, 190, 108, 160, 236, 61, 138, 237, 16, 59, 224, 184, 208, 61, 25, 26, 254, 61, 198, 14, 162, 189, 217, 148, 27, 62, 197, 127, 27, 190, 85, 136, 84, 188, 107, 252, 154, 189, 243, 209, 15, 190, 92, 235, 137, 189, 51, 215, 20, 188, 141, 115, 47, 190, 116, 185, 151, 189, 87, 24, 202, 189, 216, 2, 138, 189, 40, 95, 37, 190, 20, 30, 186, 189, 157, 108, 27, 190, 254, 64, 36, 62, 56, 176, 19, 62, 210, 144, 20, 189, 235, 234, 243, 187, 194, 185, 51, 190, 51, 69, 9, 190, 38, 142, 219, 186, 107, 245, 144, 61, 225, 151, 197, 61, 179, 71, 228, 61, 126, 97, 147, 60, 192, 120, 183, 61, 154, 85, 100, 60, 145, 97, 146, 61, 57, 167, 44, 190, 36, 154, 218, 189, 45, 112, 3, 190, 19, 18, 89, 189, 10, 68, 131, 189, 77, 195, 106, 188, 248, 138, 112, 189, 5, 111, 3, 190, 116, 144, 191, 189, 91, 86, 210, 188, 239, 159, 32, 62, 214, 70, 16, 190, 69, 92, 210, 61, 239, 109, 21, 190, 122, 240, 207, 188, 171, 108, 243, 61, 59, 244, 166, 60, 35, 181, 239, 189, 32, 250, 167, 188, 182, 41, 29, 188, 39, 200, 21, 62, 119, 228, 52, 61, 173, 40, 159, 189, 121, 236, 30, 62, 181, 27, 167, 189, 215, 238, 73, 189, 138, 228, 230, 189, 179, 175, 155, 189, 195, 234, 7, 62, 217, 236, 166, 61, 21, 56, 142, 189, 135, 67, 43, 190, 18, 255, 160, 189, 230, 247, 216, 60, 159, 85, 253, 189, 212, 5, 247, 189, 243, 55, 160, 188, 239, 223, 3, 62, 221, 110, 194, 189, 152, 170, 216, 61, 231, 99, 76, 189, 209, 147, 230, 189, 207, 231, 112, 189, 193, 163, 109, 187, 70, 219, 52, 61, 19, 145, 6, 62, 100, 67, 157, 188, 150, 132, 175, 189, 71, 216, 128, 61, 179, 26, 142, 61, 238, 49, 144, 189, 240, 102, 255, 188, 252, 155, 128, 189, 46, 48, 205, 189, 126, 101, 52, 62, 210, 250, 148, 188, 139, 130, 189, 189, 1, 85, 190, 61, 234, 228, 89, 188, 38, 132, 144, 61, 127, 226, 2, 190, 158, 24, 86, 61, 72, 14, 142, 189, 100, 2, 9, 190, 1, 238, 108, 61, 127, 0, 51, 190, 203, 147, 190, 61, 175, 204, 177, 61, 196, 167, 184, 188, 182, 245, 22, 190, 54, 240, 224, 187, 144, 74, 186, 189, 121, 165, 7, 62, 140, 30, 49, 62, 48, 4, 210, 189, 88, 192, 40, 62, 67, 184, 29, 61, 45, 137, 24, 62, 206, 70, 119, 61, 224, 40, 241, 60, 56, 252, 178, 189, 246, 135, 125, 188, 137, 45, 6, 189, 242, 41, 90, 188, 217, 111, 126, 59, 31, 21, 104, 189, 189, 108, 3, 61, 49, 51, 41, 62, 86, 116, 31, 189};
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
                    alignas(float) const unsigned char memory[] = {0, 222, 149, 189, 151, 245, 8, 62, 149, 217, 105, 61, 247, 58, 23, 62, 121, 133, 18, 190, 242, 193, 154, 189, 76, 191, 151, 189, 148, 247, 185, 189, 94, 49, 26, 62, 152, 222, 234, 188, 29, 18, 159, 61, 10, 206, 90, 61, 165, 52, 156, 61, 141, 55, 66, 189, 217, 65, 173, 189, 1, 189, 253, 61, 251, 114, 238, 189, 101, 172, 92, 61, 11, 147, 234, 58, 10, 95, 19, 62, 145, 239, 181, 189, 164, 197, 52, 62, 80, 215, 2, 62, 150, 175, 11, 190, 159, 167, 136, 188, 97, 164, 47, 189, 203, 230, 145, 188, 180, 111, 189, 61, 120, 73, 226, 61, 32, 70, 210, 189, 169, 60, 140, 189, 235, 109, 142, 60};
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
                    alignas(float) const unsigned char memory[] = {142, 106, 15, 190, 145, 24, 50, 62, 168, 230, 152, 61, 82, 45, 144, 189, 143, 19, 41, 62, 190, 69, 231, 60, 145, 7, 30, 62, 203, 212, 131, 61, 199, 156, 112, 61, 227, 133, 40, 189, 54, 251, 200, 59, 49, 206, 243, 60, 192, 149, 25, 62, 185, 190, 219, 189, 19, 14, 156, 60, 25, 198, 134, 189, 31, 218, 183, 189, 210, 41, 4, 190, 52, 33, 215, 189, 0, 196, 78, 61, 34, 113, 40, 62, 198, 47, 112, 189, 33, 47, 224, 60, 142, 178, 217, 188, 201, 107, 127, 189, 97, 245, 44, 189, 39, 14, 134, 189, 255, 235, 33, 190, 49, 176, 0, 188, 125, 80, 15, 62, 232, 178, 30, 188, 146, 181, 164, 61};
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
                    alignas(float) const unsigned char memory[] = {43, 203, 228, 61};
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
    alignas(float) const unsigned char memory[] = {74, 97, 33, 62, 114, 152, 233, 62, 229, 101, 155, 63, 171, 158, 17, 62, 186, 195, 97, 62, 64, 69, 55, 191, 222, 162, 101, 63, 156, 106, 70, 63, 238, 36, 48, 191, 115, 127, 233, 62, 220, 181, 156, 62, 253, 44, 217, 63, 219, 204, 170, 62, 215, 186, 0, 63, 27, 25, 25, 191, 201, 217, 35, 63, 87, 232, 129, 63, 70, 16, 42, 63, 74, 145, 211, 191, 234, 222, 70, 63, 233, 48, 19, 189, 138, 224, 168, 63, 213, 228, 57, 62, 169, 72, 13, 63, 106, 151, 84, 191, 57, 206, 54, 191, 155, 126, 167, 190, 186, 37, 78, 190, 61, 63, 211, 62, 78, 88, 136, 62, 149, 59, 155, 190, 125, 3, 137, 190, 27, 74, 56, 63, 183, 194, 173, 191, 233, 38, 23, 190, 122, 150, 141, 190, 239, 231, 102, 63, 14, 137, 145, 63, 50, 181, 213, 190};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {143, 79, 188, 62, 161, 99, 203, 189, 114, 64, 12, 190, 250, 58, 222, 62, 109, 116, 180, 189, 121, 98, 31, 62, 229, 248, 66, 62, 236, 120, 233, 61, 228, 135, 92, 61, 92, 157, 45, 62, 103, 40, 149, 62, 187, 249, 195, 61, 3, 12, 210, 189};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-24_21-27-53/167c4d4_zoo_environment_algorithm/pendulum-v1_ppo/0001/steps/000000000000000";
   char commit_hash[] = "167c4d4e8751867aba4e6a2bf4466afbb13f0634";
}