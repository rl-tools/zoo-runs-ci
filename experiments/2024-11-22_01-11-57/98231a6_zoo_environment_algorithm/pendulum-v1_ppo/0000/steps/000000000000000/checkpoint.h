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
                    alignas(float) const unsigned char memory[] = {48, 248, 18, 63, 224, 65, 130, 62, 21, 187, 255, 62, 245, 218, 219, 190, 127, 185, 105, 190, 159, 132, 19, 63, 165, 6, 156, 190, 28, 3, 241, 190, 147, 145, 244, 189, 43, 137, 4, 190, 110, 156, 54, 190, 193, 181, 72, 62, 46, 191, 0, 63, 251, 150, 55, 61, 199, 189, 204, 62, 178, 201, 92, 190, 140, 1, 91, 62, 109, 53, 232, 60, 95, 185, 133, 189, 169, 139, 223, 62, 49, 224, 159, 190, 23, 196, 34, 61, 35, 144, 73, 62, 178, 188, 244, 62, 8, 104, 74, 189, 145, 202, 138, 61, 200, 226, 163, 189, 194, 206, 1, 63, 2, 124, 178, 190, 231, 149, 164, 62, 206, 93, 127, 62, 113, 107, 10, 63, 4, 254, 178, 62, 39, 189, 240, 190, 162, 103, 99, 62, 220, 181, 171, 60, 107, 205, 215, 62, 73, 75, 233, 62, 7, 152, 194, 62, 28, 221, 194, 62, 199, 65, 8, 191, 163, 44, 134, 190, 8, 74, 2, 191, 115, 143, 223, 62, 120, 162, 73, 62, 114, 21, 220, 61, 26, 145, 186, 189, 82, 247, 74, 62, 61, 155, 208, 189, 58, 220, 28, 61, 87, 207, 178, 190, 166, 190, 120, 190, 3, 35, 90, 190, 186, 148, 211, 190, 86, 127, 167, 62, 58, 213, 197, 62, 152, 212, 206, 189, 85, 179, 9, 191, 17, 227, 147, 62, 156, 167, 18, 62, 20, 240, 61, 62, 154, 183, 146, 62, 9, 67, 110, 190, 222, 195, 126, 189, 29, 6, 171, 62, 37, 72, 164, 190, 222, 58, 252, 190, 15, 114, 118, 189, 187, 125, 17, 189, 227, 190, 238, 190, 140, 8, 116, 190, 161, 121, 238, 62, 179, 245, 224, 190, 197, 186, 218, 190, 207, 149, 234, 60, 52, 42, 246, 190, 30, 117, 83, 62, 131, 115, 246, 62, 234, 168, 242, 62, 66, 156, 138, 190, 107, 191, 109, 190, 211, 144, 199, 61, 12, 7, 4, 191, 215, 222, 155, 61, 226, 184, 6, 62, 62, 219, 208, 190, 22, 244, 6, 63, 146, 79, 141, 190, 106, 50, 108, 62, 134, 6, 159, 190, 44, 51, 30, 61, 35, 62, 203, 189, 210, 0, 5, 63, 122, 77, 3, 188, 127, 243, 202, 189, 199, 6, 64, 61};
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
                    alignas(float) const unsigned char memory[] = {134, 58, 196, 189, 146, 196, 19, 191, 28, 215, 208, 190, 45, 124, 185, 190, 134, 32, 244, 189, 73, 23, 191, 189, 212, 186, 174, 190, 175, 180, 11, 191, 78, 143, 195, 189, 11, 155, 212, 190, 93, 205, 177, 62, 24, 156, 92, 190, 22, 134, 222, 62, 27, 83, 245, 190, 206, 50, 195, 190, 196, 117, 237, 190, 139, 90, 7, 63, 201, 224, 98, 62, 107, 133, 92, 62, 69, 101, 14, 191, 76, 130, 16, 63, 144, 205, 129, 190, 79, 147, 234, 190, 123, 144, 241, 62, 241, 239, 122, 190, 164, 19, 14, 191, 197, 124, 170, 190, 154, 108, 31, 188, 121, 70, 175, 61, 44, 49, 211, 61, 64, 26, 235, 190, 127, 220, 101, 62};
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
                    alignas(float) const unsigned char memory[] = {84, 59, 192, 61, 45, 239, 79, 60, 57, 154, 36, 190, 49, 51, 109, 61, 160, 88, 2, 190, 119, 126, 172, 59, 10, 185, 211, 61, 226, 245, 32, 62, 231, 58, 42, 190, 179, 176, 250, 60, 204, 180, 10, 62, 14, 12, 18, 62, 53, 69, 108, 60, 136, 63, 3, 190, 91, 170, 150, 188, 142, 152, 2, 190, 229, 247, 13, 62, 55, 147, 222, 61, 221, 70, 49, 189, 6, 46, 20, 189, 88, 148, 94, 60, 56, 79, 242, 189, 101, 141, 92, 61, 79, 198, 26, 62, 95, 234, 72, 189, 101, 117, 92, 189, 171, 169, 205, 60, 124, 155, 181, 61, 199, 155, 71, 61, 216, 163, 163, 61, 217, 73, 7, 190, 137, 197, 10, 62, 177, 24, 51, 61, 202, 246, 85, 61, 163, 179, 181, 61, 208, 132, 83, 189, 141, 209, 90, 189, 225, 153, 190, 61, 10, 151, 166, 189, 167, 195, 79, 189, 125, 83, 15, 62, 208, 9, 183, 61, 39, 69, 208, 188, 124, 15, 10, 62, 66, 74, 40, 62, 109, 203, 48, 190, 68, 176, 108, 61, 56, 65, 47, 186, 244, 59, 48, 61, 196, 77, 26, 190, 19, 122, 11, 190, 107, 198, 207, 61, 132, 187, 34, 62, 17, 211, 29, 190, 233, 17, 145, 188, 114, 136, 81, 189, 93, 10, 227, 60, 74, 246, 31, 62, 56, 8, 5, 189, 60, 16, 46, 189, 174, 105, 190, 189, 221, 95, 190, 61, 250, 9, 18, 62, 225, 167, 196, 61, 147, 212, 143, 189, 236, 250, 51, 190, 248, 123, 197, 61, 221, 164, 41, 61, 63, 78, 251, 189, 133, 11, 123, 189, 132, 191, 227, 60, 198, 188, 28, 60, 18, 194, 49, 190, 217, 185, 11, 62, 236, 92, 151, 61, 9, 178, 78, 189, 13, 17, 42, 188, 208, 231, 19, 62, 227, 149, 191, 61, 254, 164, 50, 61, 187, 225, 60, 188, 155, 74, 47, 190, 216, 66, 167, 189, 15, 121, 27, 62, 204, 43, 240, 61, 97, 57, 138, 61, 41, 167, 148, 60, 212, 12, 52, 62, 170, 165, 27, 190, 53, 64, 237, 189, 8, 113, 31, 188, 243, 94, 3, 190, 208, 199, 175, 61, 197, 157, 28, 62, 49, 12, 223, 189, 247, 130, 142, 61, 238, 31, 29, 190, 250, 60, 195, 189, 154, 249, 184, 61, 137, 25, 63, 59, 117, 211, 183, 61, 227, 4, 211, 189, 184, 38, 25, 62, 87, 43, 35, 190, 10, 41, 153, 61, 252, 132, 218, 59, 72, 7, 8, 190, 186, 75, 237, 189, 108, 210, 45, 190, 135, 39, 22, 189, 170, 135, 43, 190, 33, 38, 14, 190, 115, 197, 42, 190, 255, 78, 99, 59, 72, 195, 183, 189, 221, 10, 16, 190, 19, 88, 2, 62, 16, 252, 152, 189, 249, 238, 96, 60, 69, 58, 194, 189, 36, 253, 152, 60, 90, 80, 41, 62, 37, 168, 247, 61, 169, 131, 160, 189, 85, 16, 8, 190, 190, 224, 192, 189, 90, 227, 159, 189, 83, 223, 19, 190, 68, 239, 202, 60, 6, 3, 42, 62, 201, 181, 237, 188, 42, 195, 176, 60, 40, 98, 63, 189, 175, 68, 46, 190, 239, 161, 226, 61, 105, 174, 217, 61, 227, 58, 152, 189, 231, 88, 193, 189, 137, 104, 157, 61, 47, 94, 222, 61, 252, 144, 35, 61, 38, 101, 34, 189, 21, 177, 211, 188, 191, 157, 3, 62, 33, 96, 182, 61, 103, 239, 178, 61, 178, 19, 209, 188, 162, 227, 162, 60, 62, 109, 207, 188, 5, 158, 3, 190, 213, 251, 71, 189, 170, 83, 31, 190, 127, 2, 251, 189, 156, 22, 9, 190, 162, 71, 30, 62, 204, 227, 36, 190, 168, 193, 22, 62, 49, 26, 14, 190, 228, 40, 204, 61, 143, 155, 198, 189, 114, 56, 154, 61, 116, 252, 39, 190, 123, 245, 172, 60, 19, 124, 95, 61, 61, 121, 48, 190, 168, 9, 6, 190, 60, 246, 26, 190, 79, 230, 148, 189, 15, 44, 41, 62, 208, 143, 73, 189, 111, 61, 197, 60, 161, 44, 163, 189, 177, 214, 214, 189, 93, 61, 26, 190, 215, 85, 179, 189, 45, 225, 251, 189, 124, 140, 176, 61, 173, 3, 245, 189, 89, 136, 220, 189, 162, 212, 30, 62, 252, 163, 235, 60, 57, 158, 58, 189, 88, 42, 42, 62, 46, 233, 34, 190, 130, 33, 251, 61, 111, 120, 174, 61, 206, 94, 188, 189, 101, 197, 145, 189, 224, 91, 16, 187, 77, 17, 214, 189, 229, 182, 45, 61, 30, 106, 46, 62, 244, 73, 14, 62, 116, 130, 248, 189, 225, 201, 187, 61, 70, 75, 46, 190, 142, 216, 90, 61, 42, 171, 27, 190, 2, 167, 38, 190, 243, 49, 158, 187, 82, 69, 227, 61, 66, 251, 25, 61, 141, 31, 190, 61, 60, 106, 199, 60, 10, 132, 129, 188, 102, 62, 132, 189, 193, 91, 56, 60, 224, 229, 48, 62, 122, 111, 13, 190, 132, 247, 230, 60, 91, 38, 0, 190, 250, 146, 45, 189, 205, 163, 75, 59, 207, 143, 147, 60, 37, 228, 205, 189, 32, 164, 177, 61, 203, 196, 22, 62, 79, 19, 117, 61, 111, 60, 91, 188, 104, 55, 170, 189, 43, 34, 5, 190, 233, 0, 29, 190, 213, 84, 191, 61, 96, 35, 60, 189, 222, 217, 59, 61, 137, 34, 26, 190, 63, 219, 209, 189, 80, 121, 18, 190, 188, 3, 183, 61, 222, 150, 244, 189, 57, 238, 28, 190, 225, 220, 79, 189, 232, 140, 173, 189, 164, 131, 18, 190, 118, 170, 220, 61, 16, 39, 1, 190, 47, 250, 221, 189, 25, 11, 28, 62, 253, 245, 73, 61, 196, 207, 221, 60, 217, 231, 14, 60, 237, 237, 245, 61, 2, 204, 25, 62, 200, 139, 50, 61, 53, 100, 171, 189, 54, 32, 126, 189, 141, 35, 29, 190, 28, 25, 165, 61, 183, 52, 170, 61, 90, 180, 3, 60, 245, 19, 197, 61, 69, 120, 171, 61, 38, 165, 19, 62, 152, 69, 242, 189, 254, 99, 28, 62, 213, 113, 135, 61, 125, 250, 211, 188, 167, 87, 192, 189, 69, 126, 165, 61, 247, 28, 41, 61, 77, 155, 185, 61, 176, 143, 34, 62, 82, 70, 20, 189, 45, 251, 34, 62, 90, 240, 25, 62, 207, 21, 164, 60, 116, 174, 214, 189, 48, 119, 22, 62, 62, 31, 50, 190, 129, 2, 77, 61, 254, 90, 26, 62, 46, 73, 31, 189, 30, 202, 148, 189, 39, 77, 162, 187, 30, 39, 241, 189, 201, 14, 23, 61, 42, 75, 44, 190, 142, 129, 143, 60, 169, 4, 139, 188, 78, 75, 26, 62, 216, 66, 223, 61, 2, 153, 23, 62, 85, 156, 62, 189, 131, 60, 24, 189, 10, 38, 30, 61, 14, 184, 39, 62, 50, 103, 40, 190, 209, 20, 236, 189, 125, 72, 7, 190, 146, 151, 24, 190, 142, 29, 4, 190, 139, 225, 139, 61, 206, 49, 3, 59, 183, 106, 48, 190, 253, 57, 45, 190, 184, 86, 106, 188, 187, 46, 34, 62, 194, 3, 39, 62, 94, 219, 236, 61, 30, 32, 112, 189, 246, 148, 47, 190, 201, 181, 33, 188, 126, 117, 234, 189, 23, 221, 14, 190, 170, 50, 115, 189, 63, 138, 142, 58, 234, 151, 5, 190, 120, 162, 11, 62, 94, 24, 224, 61, 130, 34, 71, 60, 103, 216, 96, 189, 76, 58, 158, 189, 255, 85, 31, 62, 119, 149, 82, 189, 219, 137, 237, 60, 1, 120, 15, 62, 222, 38, 9, 62, 142, 46, 187, 189, 72, 157, 249, 61, 83, 95, 44, 190, 113, 156, 40, 62, 250, 101, 104, 188, 168, 213, 202, 188, 27, 60, 134, 60, 24, 153, 94, 189, 76, 54, 216, 61, 47, 54, 223, 60, 247, 39, 155, 189, 68, 54, 7, 190, 178, 212, 97, 187, 223, 238, 34, 62, 237, 134, 15, 61, 206, 245, 134, 189, 76, 101, 47, 190, 64, 241, 35, 62, 36, 96, 7, 61, 179, 231, 203, 189, 1, 24, 192, 188, 227, 245, 181, 189, 132, 141, 222, 61, 215, 181, 3, 62, 237, 198, 133, 189, 171, 175, 191, 189, 172, 61, 14, 62, 37, 40, 228, 61, 159, 127, 225, 60, 161, 71, 126, 60, 17, 205, 228, 189, 43, 141, 223, 189, 168, 123, 208, 61, 108, 167, 0, 61, 11, 61, 34, 61, 137, 128, 33, 190, 208, 69, 47, 190, 209, 36, 231, 188, 163, 5, 35, 190, 226, 168, 129, 61, 136, 169, 17, 189, 206, 140, 23, 62, 211, 188, 222, 60, 176, 223, 52, 190, 56, 14, 5, 62, 241, 154, 44, 62, 31, 52, 207, 61, 20, 187, 50, 189, 59, 157, 177, 189, 41, 135, 43, 62, 104, 61, 23, 190, 40, 165, 23, 61, 166, 207, 247, 189, 27, 28, 238, 61, 129, 89, 210, 189, 59, 99, 216, 60, 242, 72, 239, 188, 97, 121, 57, 61, 132, 145, 92, 189, 101, 66, 155, 189, 69, 187, 144, 61, 11, 127, 251, 60, 27, 3, 143, 61, 251, 8, 181, 61, 102, 247, 25, 190, 53, 185, 1, 62, 222, 208, 39, 190, 66, 140, 209, 61, 164, 104, 143, 61, 191, 1, 17, 62, 165, 244, 3, 62, 191, 84, 51, 190, 133, 100, 128, 189, 43, 188, 170, 189, 28, 84, 119, 61, 136, 248, 60, 188, 197, 72, 142, 188, 1, 2, 75, 189, 195, 187, 42, 189, 63, 26, 188, 189, 176, 40, 1, 189, 161, 161, 44, 190, 62, 172, 14, 189, 254, 112, 55, 60, 104, 58, 132, 189, 65, 226, 5, 190, 226, 142, 48, 61, 14, 1, 178, 60, 133, 6, 202, 188, 37, 132, 240, 189, 225, 136, 43, 62, 138, 151, 228, 188, 217, 189, 128, 61, 116, 186, 133, 61, 59, 66, 218, 189, 177, 182, 163, 189, 235, 75, 212, 188, 40, 102, 49, 190, 223, 219, 98, 189, 119, 131, 215, 61, 48, 115, 41, 190, 246, 146, 9, 62, 200, 112, 29, 62, 215, 52, 18, 62, 167, 65, 204, 61, 183, 164, 107, 61, 151, 212, 203, 59, 17, 99, 166, 189, 38, 15, 47, 190, 64, 78, 179, 189, 39, 175, 145, 189, 157, 124, 0, 62, 98, 223, 107, 60, 95, 138, 32, 60, 177, 74, 2, 62, 186, 201, 218, 61, 104, 0, 228, 189, 2, 243, 209, 60, 183, 197, 22, 190, 48, 208, 168, 61, 181, 253, 36, 190, 12, 65, 220, 59, 220, 191, 162, 188, 18, 36, 196, 61, 115, 6, 46, 190, 25, 111, 199, 60, 75, 192, 28, 190, 50, 161, 70, 188, 39, 191, 225, 61, 143, 207, 99, 189, 177, 94, 69, 61, 153, 144, 197, 61, 225, 200, 48, 189, 7, 238, 148, 61, 13, 49, 24, 190, 56, 142, 189, 189, 104, 204, 46, 62, 54, 240, 36, 190, 115, 137, 230, 189, 120, 106, 158, 189, 81, 207, 225, 61, 52, 45, 4, 62, 41, 192, 7, 62, 190, 139, 26, 190, 255, 108, 136, 61, 118, 47, 104, 61, 1, 71, 201, 60, 177, 92, 226, 189, 159, 123, 245, 189, 5, 25, 1, 60, 245, 217, 63, 188, 77, 56, 18, 62, 255, 54, 96, 189, 70, 238, 15, 188, 163, 23, 199, 189, 95, 69, 251, 61, 182, 248, 5, 61, 111, 77, 245, 61, 96, 238, 135, 189, 54, 152, 2, 190, 253, 183, 22, 62, 6, 120, 105, 60, 205, 77, 20, 62, 122, 221, 175, 189, 1, 178, 203, 189, 85, 223, 12, 190, 38, 97, 171, 188, 152, 81, 222, 189, 87, 123, 228, 187, 11, 41, 26, 185, 26, 110, 113, 189, 130, 131, 165, 61, 232, 202, 49, 190, 48, 74, 211, 189, 122, 52, 253, 58, 117, 113, 182, 189, 120, 190, 122, 61, 60, 163, 254, 61, 224, 240, 32, 190, 101, 186, 243, 188, 87, 240, 247, 189, 98, 250, 40, 61, 173, 52, 24, 61, 168, 216, 192, 189, 93, 229, 130, 189, 110, 26, 16, 190, 222, 97, 13, 62, 36, 181, 183, 59, 188, 64, 210, 61, 220, 105, 4, 188, 107, 141, 204, 189, 26, 126, 251, 189, 102, 18, 217, 189, 236, 100, 48, 61, 14, 167, 130, 61, 244, 236, 248, 189, 250, 54, 95, 61, 213, 17, 112, 59, 50, 176, 0, 190, 195, 178, 48, 62, 40, 32, 182, 61, 161, 162, 0, 190, 7, 66, 201, 189, 106, 136, 35, 190, 23, 50, 224, 59, 2, 122, 16, 62, 142, 147, 206, 61, 79, 234, 155, 61, 83, 239, 44, 190, 91, 86, 137, 189, 175, 89, 126, 189, 1, 10, 27, 189, 39, 3, 7, 62, 194, 197, 23, 190, 176, 152, 249, 61, 181, 38, 86, 189, 241, 171, 94, 60, 9, 167, 52, 190, 243, 185, 4, 62, 243, 123, 52, 61, 223, 216, 34, 62, 212, 6, 217, 189, 11, 88, 236, 61, 81, 46, 53, 61, 23, 52, 0, 62, 93, 72, 129, 189, 57, 69, 17, 190, 174, 28, 91, 61, 190, 187, 161, 61, 173, 92, 147, 61, 240, 183, 187, 61, 80, 165, 31, 61, 149, 175, 7, 189, 211, 241, 216, 61, 81, 244, 147, 61, 211, 128, 40, 190, 9, 58, 247, 60, 123, 172, 195, 61, 33, 0, 42, 62, 24, 202, 167, 61, 215, 1, 142, 189, 56, 255, 173, 189, 2, 219, 134, 189, 143, 230, 175, 189, 29, 16, 198, 189, 124, 152, 63, 61, 44, 145, 121, 61, 129, 8, 96, 189, 23, 246, 201, 61, 205, 192, 214, 61, 82, 176, 146, 59, 42, 250, 155, 188, 230, 235, 38, 61, 129, 187, 204, 61, 252, 124, 36, 190, 219, 145, 49, 62, 202, 28, 156, 188, 187, 162, 144, 189, 77, 112, 41, 62, 222, 96, 75, 189, 7, 74, 17, 62, 106, 126, 156, 60, 221, 188, 112, 60, 93, 95, 0, 189, 215, 223, 43, 62, 21, 186, 40, 62, 8, 211, 69, 61, 83, 2, 215, 189, 203, 208, 50, 62, 26, 108, 50, 62, 114, 111, 133, 60, 209, 139, 102, 61, 84, 19, 25, 60, 188, 203, 223, 61, 60, 253, 3, 190, 133, 106, 114, 188, 19, 246, 80, 189, 114, 56, 12, 62, 246, 134, 43, 190, 155, 145, 68, 60, 113, 230, 245, 189, 63, 211, 223, 60, 61, 220, 177, 61, 137, 38, 23, 62, 115, 3, 42, 190, 130, 146, 134, 189, 41, 68, 65, 189, 224, 189, 163, 61, 240, 46, 3, 62, 174, 3, 221, 61, 122, 131, 139, 61, 196, 65, 138, 61, 50, 244, 143, 187, 119, 115, 225, 189, 16, 53, 247, 61, 96, 67, 168, 188, 41, 211, 160, 60, 0, 70, 236, 60, 174, 159, 166, 189, 30, 79, 49, 62, 195, 150, 153, 187, 17, 101, 214, 189, 15, 78, 162, 189, 48, 169, 182, 189, 170, 214, 198, 189, 128, 52, 172, 189, 185, 133, 84, 61, 234, 36, 181, 61, 118, 119, 24, 62, 183, 57, 121, 188, 35, 225, 216, 189, 159, 104, 32, 190, 130, 133, 9, 62, 91, 83, 69, 59, 27, 16, 70, 188, 40, 144, 208, 189, 43, 231, 162, 61, 107, 54, 216, 61, 133, 188, 142, 189, 108, 191, 146, 189, 202, 180, 126, 187, 95, 6, 43, 190, 13, 144, 214, 189, 211, 239, 20, 190, 145, 247, 248, 61, 9, 17, 242, 189, 154, 78, 44, 189, 97, 220, 138, 58, 176, 234, 180, 61, 28, 59, 208, 61, 161, 19, 129, 59, 151, 30, 18, 62, 213, 55, 109, 60, 21, 22, 203, 189, 63, 85, 38, 62, 221, 108, 172, 61, 90, 23, 220, 61, 147, 94, 175, 189, 48, 81, 41, 190, 232, 247, 185, 60, 208, 156, 151, 61, 31, 19, 5, 190, 166, 187, 74, 188, 160, 60, 57, 189, 175, 7, 34, 62, 191, 5, 23, 190, 73, 180, 201, 189, 224, 173, 4, 59, 106, 168, 168, 189, 255, 195, 140, 61, 201, 133, 23, 190, 234, 53, 121, 188, 243, 189, 206, 188, 74, 229, 72, 189, 226, 140, 13, 190, 111, 190, 65, 61, 13, 111, 36, 190, 107, 94, 219, 61, 86, 113, 34, 189, 175, 127, 142, 61, 103, 66, 112, 188, 244, 193, 192, 61, 52, 176, 170, 61, 156, 38, 100, 189, 239, 77, 20, 62, 88, 108, 250, 61, 248, 44, 161, 189, 193, 78, 206, 188, 194, 22, 230, 61, 180, 155, 234, 61, 155, 94, 98, 61, 156, 47, 55, 61, 120, 239, 48, 190, 59, 24, 1, 190, 15, 106, 170, 61, 231, 163, 24, 190, 82, 224, 21, 61, 216, 97, 46, 190, 8, 89, 130, 61, 192, 220, 28, 190, 113, 44, 243, 60, 130, 232, 111, 188, 127, 240, 212, 60, 52, 252, 11, 190, 169, 68, 73, 189, 240, 245, 42, 190, 45, 17, 38, 62, 201, 74, 48, 62, 211, 69, 24, 189, 4, 114, 35, 189, 116, 205, 178, 61, 155, 107, 243, 61, 176, 217, 137, 188, 223, 141, 46, 62, 114, 144, 144, 188, 101, 53, 247, 60, 13, 9, 254, 187, 53, 137, 119, 61, 211, 149, 22, 188, 135, 202, 21, 190, 130, 131, 219, 61, 146, 236, 49, 62, 203, 89, 13, 189, 55, 97, 202, 61, 21, 131, 18, 62, 171, 250, 50, 62, 16, 154, 39, 190, 7, 145, 94, 61, 99, 78, 198, 61, 15, 120, 39, 190, 69, 136, 7, 190, 62, 163, 158, 61, 66, 160, 43, 61, 233, 53, 136, 61, 95, 68, 49, 190, 5, 148, 29, 61, 198, 192, 95, 60, 22, 145, 14, 190, 61, 237, 51, 190, 128, 89, 35, 62, 48, 0, 200, 61, 109, 197, 18, 62, 90, 65, 13, 62, 141, 77, 214, 61, 86, 151, 117, 59, 106, 88, 22, 62, 114, 48, 156, 61, 86, 82, 0, 190, 65, 220, 24, 190, 116, 212, 247, 189, 118, 250, 38, 61, 200, 45, 226, 189, 154, 152, 244, 61, 155, 100, 49, 61, 78, 236, 141, 61, 50, 235, 18, 62, 15, 120, 159, 60, 250, 97, 49, 62, 190, 195, 2, 62, 118, 222, 152, 61, 186, 161, 177, 61, 105, 215, 167, 61, 8, 124, 170, 189, 18, 46, 20, 62, 140, 239, 52, 62, 217, 140, 15, 189, 230, 140, 213, 60, 161, 32, 181, 189, 253, 96, 73, 61, 57, 118, 236, 189, 68, 170, 110, 187, 253, 247, 12, 62, 174, 90, 226, 61, 83, 150, 7, 62, 232, 191, 255, 189, 173, 211, 251, 61, 183, 170, 170, 189, 79, 237, 85, 61, 149, 11, 231, 61, 194, 220, 247, 60, 68, 38, 137, 189, 164, 38, 158, 189, 94, 167, 46, 62, 109, 255, 49, 62, 189, 248, 168, 189, 87, 250, 216, 61, 219, 240, 66, 60, 147, 165, 23, 58, 25, 87, 134, 189, 103, 45, 197, 61, 53, 183, 20, 62, 112, 6, 8, 190, 34, 63, 65, 189, 189, 108, 24, 62, 82, 86, 192, 188, 105, 201, 36, 190, 229, 105, 142, 59, 216, 130, 196, 189, 213, 228, 30, 62, 145, 252, 247, 61, 137, 208, 41, 190, 252, 199, 140, 189, 115, 9, 157, 61, 96, 144, 13, 62, 255, 76, 89, 61, 235, 35, 43, 190, 14, 232, 0, 190, 33, 120, 255, 59, 250, 157, 140, 189, 97, 254, 123, 189, 134, 20, 12, 62, 39, 38, 2, 62, 63, 13, 12, 62, 105, 123, 169, 60, 218, 73, 176, 59, 92, 189, 137, 61, 137, 165, 168, 189, 4, 141, 136, 188, 245, 178, 9, 62, 177, 207, 57, 61, 53, 233, 58, 186, 114, 252, 151, 189, 169, 52, 113, 189, 129, 162, 49, 190, 59, 229, 14, 62, 23, 79, 222, 60, 37, 250, 213, 189, 106, 135, 136, 189, 33, 107, 231, 61, 144, 12, 200, 59, 70, 88, 245, 61, 73, 193, 22, 62, 122, 12, 4, 60, 168, 243, 212, 188, 122, 200, 244, 189, 10, 140, 34, 62, 245, 98, 58, 189, 25, 127, 31, 190, 181, 89, 28, 62, 129, 237, 11, 62, 202, 41, 30, 62, 232, 82, 215, 60, 79, 82, 249, 61, 206, 114, 47, 189, 137, 33, 24, 62, 120, 13, 76, 61, 111, 5, 197, 189, 142, 191, 6, 190, 238, 88, 21, 190, 209, 27, 7, 189, 231, 114, 197, 189, 190, 240, 79, 189, 219, 103, 134, 189, 11, 151, 252, 189, 162, 126, 235, 189, 154, 14, 1, 62, 195, 22, 27, 61, 176, 22, 16, 190, 206, 71, 250, 188, 29, 12, 36, 62, 31, 16, 229, 61, 168, 64, 241, 189, 109, 253, 227, 189, 231, 128, 175, 188, 153, 44, 146, 61, 130, 226, 245, 189, 171, 0, 188, 189, 36, 246, 214, 60, 96, 168, 249, 187, 118, 176, 90, 189, 157, 10, 18, 189, 97, 101, 32, 190, 178, 147, 162, 189, 32, 92, 196, 189, 190, 82, 34, 190, 88, 165, 109, 61, 157, 204, 2, 190, 40, 222, 126, 186, 122, 193, 201, 61, 244, 77, 220, 59, 65, 29, 233, 189, 28, 135, 235, 189, 236, 169, 241, 60, 161, 208, 204, 60, 84, 255, 26, 62, 14, 216, 51, 62, 117, 10, 14, 190, 194, 105, 229, 61, 30, 40, 137, 188, 138, 170, 8, 61, 138, 22, 249, 189, 145, 83, 44, 62, 58, 196, 141, 189, 149, 97, 17, 62, 3, 63, 191, 61, 128, 116, 10, 61, 120, 205, 55, 61, 158, 71, 41, 190, 111, 217, 152, 61, 80, 245, 221, 189, 45, 90, 29, 190, 161, 62, 28, 190, 182, 203, 139, 188, 62, 115, 9, 62, 189, 99, 52, 189, 125, 113, 130, 189, 88, 24, 44, 62, 161, 77, 23, 61, 225, 103, 240, 189, 190, 205, 36, 62, 219, 42, 43, 62, 97, 228, 243, 188, 41, 172, 193, 61, 178, 50, 220, 189, 244, 197, 234, 61, 58, 210, 241, 189, 87, 12, 64, 61, 108, 189, 52, 61, 228, 89, 116, 61, 140, 163, 32, 190, 108, 233, 5, 188, 52, 72, 120, 189, 114, 67, 48, 190, 123, 237, 45, 62, 178, 222, 84, 189, 83, 168, 196, 61, 50, 179, 55, 187, 62, 119, 210, 189, 149, 154, 166, 61, 239, 0, 247, 60, 90, 185, 53, 188, 179, 188, 118, 188, 171, 113, 36, 61, 27, 46, 3, 190, 199, 90, 130, 189, 195, 19, 49, 190, 222, 129, 12, 190, 112, 3, 187, 61, 82, 100, 135, 189, 57, 94, 130, 189, 26, 211, 50, 62, 148, 93, 47, 62, 94, 1, 242, 189, 114, 146, 202, 189, 43, 202, 86, 188, 100, 147, 105, 189, 245, 63, 68, 61, 220, 107, 10, 60, 145, 151, 39, 190, 166, 143, 184, 61, 5, 166, 178, 189, 176, 91, 81, 188, 3, 8, 6, 62, 41, 212, 7, 190, 169, 119, 2, 190, 117, 195, 135, 189, 25, 122, 46, 190, 33, 108, 209, 58, 25, 94, 137, 61, 158, 194, 123, 61, 49, 88, 6, 62, 5, 156, 195, 61, 18, 63, 81, 189, 106, 115, 21, 189, 34, 185, 44, 190, 88, 99, 3, 62, 180, 18, 221, 59, 106, 126, 28, 62, 176, 116, 224, 61, 17, 158, 142, 188, 207, 116, 48, 190, 25, 247, 43, 62, 86, 195, 121, 61, 97, 82, 143, 61, 124, 67, 135, 61, 52, 162, 183, 61, 64, 255, 146, 188, 49, 66, 225, 60, 103, 43, 22, 62, 101, 73, 4, 190, 163, 14, 81, 61, 66, 204, 222, 61, 80, 31, 51, 190, 16, 32, 15, 190, 120, 102, 180, 187, 128, 52, 110, 189, 65, 22, 2, 62, 88, 107, 186, 60, 31, 60, 239, 61, 248, 134, 49, 61, 147, 255, 87, 61, 139, 180, 114, 188, 205, 138, 123, 61, 9, 136, 226, 61, 231, 91, 227, 60, 5, 142, 163, 189, 192, 177, 223, 188, 74, 80, 175, 60, 70, 73, 221, 61, 250, 176, 120, 61, 24, 97, 139, 60, 105, 180, 85, 189, 112, 207, 182, 189, 217, 210, 0, 62, 153, 30, 49, 190, 3, 209, 220, 189, 200, 63, 183, 189, 84, 20, 179, 61, 28, 29, 181, 189, 8, 88, 152, 189, 173, 164, 39, 61, 122, 64, 198, 61, 233, 96, 172, 189, 137, 75, 209, 188, 251, 158, 12, 60, 38, 204, 222, 61, 175, 104, 45, 189, 170, 26, 84, 189, 23, 244, 39, 190, 233, 78, 207, 189, 51, 204, 248, 61, 223, 136, 193, 61, 178, 233, 144, 188, 219, 142, 138, 189, 41, 129, 44, 62, 49, 227, 168, 61, 161, 56, 32, 190};
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
                    alignas(float) const unsigned char memory[] = {43, 239, 34, 190, 10, 185, 137, 61, 13, 102, 213, 60, 213, 186, 78, 188, 170, 98, 248, 60, 90, 118, 40, 61, 39, 53, 238, 61, 198, 0, 208, 189, 228, 247, 47, 190, 59, 152, 82, 189, 135, 196, 18, 62, 138, 151, 35, 190, 1, 179, 184, 61, 165, 214, 202, 189, 46, 83, 28, 190, 140, 169, 62, 188, 10, 239, 126, 60, 104, 227, 35, 190, 230, 62, 1, 190, 197, 249, 230, 187, 251, 77, 7, 61, 89, 208, 228, 61, 23, 138, 184, 61, 25, 205, 158, 189, 113, 197, 9, 190, 110, 163, 181, 187, 161, 231, 182, 189, 160, 79, 9, 62, 12, 36, 19, 190, 114, 100, 174, 188, 47, 213, 5, 190, 65, 71, 182, 189};
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
                    alignas(float) const unsigned char memory[] = {6, 243, 243, 189, 247, 186, 201, 189, 135, 211, 229, 189, 67, 1, 207, 189, 61, 49, 111, 60, 40, 252, 217, 189, 102, 149, 164, 189, 20, 108, 1, 190, 36, 250, 27, 187, 225, 0, 50, 189, 143, 100, 169, 61, 7, 97, 43, 190, 239, 66, 228, 189, 164, 220, 12, 190, 7, 79, 24, 62, 177, 203, 124, 61, 194, 203, 103, 61, 184, 15, 217, 61, 22, 161, 137, 61, 82, 221, 23, 190, 199, 84, 240, 189, 174, 68, 194, 189, 253, 127, 134, 61, 158, 179, 211, 189, 177, 109, 19, 61, 68, 23, 23, 62, 98, 104, 96, 61, 15, 2, 153, 61, 102, 253, 204, 59, 9, 17, 156, 60, 254, 220, 27, 190, 74, 139, 141, 189};
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
                    alignas(float) const unsigned char memory[] = {121, 4, 177, 61};
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
    alignas(float) const unsigned char memory[] = {190, 161, 177, 190, 67, 88, 94, 191, 240, 53, 105, 191, 101, 234, 242, 191, 95, 127, 166, 190, 197, 30, 47, 64, 170, 171, 227, 191, 141, 248, 246, 190, 136, 86, 117, 62, 239, 218, 175, 62, 220, 217, 198, 190, 65, 126, 147, 191, 219, 141, 158, 59, 247, 34, 189, 190, 243, 139, 232, 62, 180, 195, 148, 190, 167, 74, 17, 191, 26, 203, 77, 191, 101, 228, 49, 191, 135, 142, 122, 190, 40, 138, 38, 63, 251, 222, 160, 62, 140, 227, 134, 191, 89, 133, 134, 191, 34, 178, 81, 191, 205, 216, 159, 191, 18, 75, 116, 191, 198, 149, 167, 63, 10, 67, 107, 190, 89, 153, 29, 61, 239, 100, 182, 191, 13, 25, 113, 191, 114, 208, 205, 190, 181, 166, 62, 190, 189, 13, 143, 188, 221, 99, 244, 62, 172, 186, 89, 63, 157, 232, 187, 191, 189, 105, 62, 191};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {45, 30, 212, 189, 185, 184, 192, 62, 87, 235, 17, 62, 115, 127, 223, 189, 242, 181, 168, 61, 171, 168, 157, 189, 246, 108, 33, 62, 22, 189, 20, 190, 153, 254, 205, 189, 64, 208, 145, 59, 100, 52, 167, 60, 140, 143, 236, 61, 180, 50, 20, 190};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-22_01-11-57/98231a6_zoo_environment_algorithm/pendulum-v1_ppo/0000/steps/000000000000000";
   char commit_hash[] = "98231a66de456fcaa4d8344a3f52cd9e78aa0c10";
}