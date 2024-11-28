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
                alignas(float) const unsigned char memory[] = {202, 227, 169, 189, 199, 129, 9, 188, 234, 247, 147, 63};
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
                alignas(float) const unsigned char memory[] = {247, 60, 177, 63, 147, 56, 186, 63, 88, 2, 108, 62};
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
                    alignas(float) const unsigned char memory[] = {56, 19, 1, 191, 60, 138, 4, 63, 14, 181, 82, 62, 132, 139, 167, 190, 94, 191, 5, 62, 127, 190, 18, 63, 187, 187, 41, 190, 163, 107, 84, 191, 118, 167, 153, 62, 66, 179, 129, 62, 202, 189, 103, 190, 107, 70, 49, 190, 143, 79, 217, 62, 252, 185, 39, 189, 253, 213, 1, 63, 149, 133, 160, 190, 8, 185, 132, 189, 53, 189, 136, 62, 159, 241, 100, 190, 163, 190, 218, 62, 189, 130, 242, 62, 22, 60, 245, 190, 29, 230, 45, 190, 187, 192, 63, 191, 108, 31, 34, 62, 41, 233, 79, 63, 45, 127, 7, 63, 48, 184, 206, 190, 251, 173, 219, 190, 156, 56, 241, 189, 12, 47, 116, 190, 220, 70, 76, 63, 78, 0, 179, 189, 188, 219, 134, 189, 116, 91, 195, 190, 4, 151, 167, 190, 87, 74, 247, 189, 22, 128, 240, 190, 216, 178, 28, 62, 238, 194, 208, 62, 8, 46, 38, 63, 137, 61, 168, 188, 162, 129, 77, 62, 159, 48, 87, 63, 255, 16, 42, 191, 68, 242, 215, 60, 177, 242, 59, 189, 99, 98, 241, 189, 61, 182, 192, 61, 66, 139, 13, 63, 2, 210, 134, 62, 21, 191, 38, 191, 155, 138, 214, 190, 96, 242, 152, 191, 26, 205, 238, 190, 126, 65, 215, 190, 26, 135, 35, 63, 220, 43, 0, 191, 239, 128, 27, 60, 58, 251, 106, 62, 120, 146, 215, 62, 174, 93, 223, 60, 15, 210, 60, 191, 241, 241, 214, 188, 141, 7, 71, 191, 56, 14, 211, 190, 37, 228, 243, 62, 41, 240, 4, 63, 37, 159, 80, 191, 191, 3, 169, 62, 187, 59, 37, 188, 30, 78, 35, 191, 239, 220, 3, 191, 145, 205, 222, 60, 221, 154, 17, 191, 52, 43, 60, 190, 33, 68, 196, 62, 250, 114, 189, 190, 73, 219, 163, 62, 19, 55, 28, 191, 138, 243, 167, 61, 130, 176, 87, 62, 208, 153, 55, 191, 111, 40, 200, 188, 247, 243, 130, 188, 167, 73, 63, 63, 166, 246, 40, 62, 170, 219, 84, 62, 129, 68, 180, 190, 105, 102, 187, 62, 55, 68, 96, 189, 204, 186, 214, 62, 7, 175, 29, 62, 21, 15, 62, 62, 164, 127, 47, 190, 37, 96, 163, 189};
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
                    alignas(float) const unsigned char memory[] = {153, 40, 207, 62, 172, 52, 17, 63, 70, 66, 131, 190, 184, 74, 52, 190, 99, 145, 238, 62, 247, 244, 208, 61, 119, 221, 190, 62, 94, 4, 200, 62, 36, 101, 130, 190, 145, 130, 13, 190, 72, 22, 221, 190, 206, 200, 165, 190, 52, 63, 221, 190, 43, 237, 179, 189, 183, 206, 202, 59, 190, 136, 7, 191, 17, 46, 31, 190, 0, 241, 27, 63, 37, 255, 146, 190, 119, 76, 140, 62, 92, 114, 75, 191, 223, 136, 136, 62, 235, 112, 139, 62, 183, 59, 230, 62, 167, 29, 53, 191, 192, 92, 184, 190, 189, 114, 2, 190, 252, 150, 24, 61, 93, 58, 62, 62, 222, 199, 249, 62, 237, 245, 158, 61, 102, 105, 122, 188};
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
                    alignas(float) const unsigned char memory[] = {66, 142, 139, 190, 2, 108, 242, 190, 201, 84, 176, 189, 65, 227, 236, 61, 43, 168, 10, 190, 55, 14, 12, 190, 205, 126, 87, 190, 186, 248, 217, 188, 228, 254, 6, 61, 236, 197, 226, 59, 147, 177, 11, 190, 135, 12, 28, 62, 131, 103, 56, 62, 94, 31, 204, 61, 4, 139, 40, 62, 239, 48, 146, 61, 216, 149, 49, 60, 80, 109, 59, 62, 32, 82, 103, 61, 190, 194, 46, 186, 121, 227, 57, 62, 29, 127, 164, 61, 157, 89, 254, 60, 57, 187, 156, 187, 94, 48, 30, 190, 34, 83, 183, 61, 181, 195, 243, 189, 55, 208, 74, 62, 190, 158, 97, 190, 20, 225, 92, 188, 222, 35, 79, 190, 111, 169, 63, 62, 81, 67, 143, 188, 69, 173, 40, 62, 135, 94, 137, 190, 3, 162, 226, 189, 207, 60, 244, 189, 123, 101, 33, 62, 144, 142, 94, 62, 250, 202, 81, 190, 238, 252, 152, 62, 38, 242, 52, 61, 252, 49, 140, 62, 64, 202, 56, 60, 232, 36, 155, 189, 82, 48, 190, 61, 44, 235, 180, 62, 122, 238, 149, 189, 58, 239, 148, 62, 74, 43, 176, 190, 23, 222, 144, 190, 14, 42, 131, 61, 68, 58, 20, 190, 125, 184, 58, 190, 226, 50, 115, 62, 80, 142, 79, 187, 43, 204, 153, 62, 213, 166, 138, 62, 36, 194, 81, 61, 119, 168, 96, 190, 57, 163, 229, 61, 221, 115, 80, 190, 183, 55, 99, 61, 13, 234, 130, 61, 197, 160, 198, 60, 177, 24, 31, 189, 190, 135, 151, 190, 43, 38, 33, 61, 143, 223, 79, 190, 19, 204, 237, 59, 52, 61, 166, 62, 199, 45, 13, 61, 170, 61, 27, 62, 149, 18, 12, 62, 204, 132, 148, 62, 74, 52, 234, 189, 73, 196, 6, 190, 229, 189, 81, 62, 162, 224, 13, 62, 243, 43, 225, 61, 110, 37, 169, 62, 163, 154, 208, 190, 239, 165, 243, 189, 116, 145, 152, 61, 65, 130, 65, 189, 223, 86, 45, 61, 249, 98, 149, 62, 166, 101, 15, 62, 78, 227, 165, 62, 48, 90, 11, 189, 41, 230, 150, 189, 164, 11, 36, 190, 69, 165, 12, 61, 213, 118, 224, 189, 140, 250, 162, 61, 133, 15, 104, 190, 26, 83, 101, 62, 113, 181, 92, 62, 227, 117, 181, 189, 3, 186, 56, 189, 122, 9, 56, 190, 12, 30, 224, 188, 91, 165, 106, 62, 57, 112, 17, 189, 100, 206, 108, 62, 44, 236, 180, 188, 249, 83, 216, 61, 5, 178, 18, 61, 200, 253, 186, 189, 214, 114, 111, 61, 18, 220, 130, 62, 121, 106, 61, 61, 231, 117, 166, 62, 106, 167, 232, 190, 252, 68, 193, 190, 222, 160, 245, 187, 37, 170, 223, 189, 87, 235, 3, 190, 32, 128, 137, 62, 156, 25, 78, 61, 155, 208, 141, 61, 176, 109, 182, 61, 65, 171, 36, 190, 100, 206, 245, 189, 39, 18, 109, 62, 72, 116, 54, 190, 247, 82, 168, 62, 208, 182, 32, 190, 34, 208, 12, 61, 181, 222, 109, 61, 221, 136, 81, 190, 65, 125, 162, 61, 17, 64, 215, 59, 84, 174, 46, 61, 171, 100, 249, 61, 120, 29, 154, 189, 105, 23, 167, 61, 239, 137, 62, 189, 255, 72, 125, 189, 92, 185, 249, 189, 96, 91, 241, 187, 57, 171, 249, 189, 84, 15, 9, 189, 223, 26, 8, 61, 110, 159, 213, 61, 58, 137, 10, 190, 227, 205, 49, 190, 69, 255, 165, 61, 143, 103, 129, 190, 10, 221, 9, 190, 189, 185, 144, 61, 82, 161, 48, 62, 39, 88, 106, 59, 80, 132, 66, 62, 41, 67, 162, 61, 78, 180, 242, 189, 106, 184, 94, 189, 116, 115, 244, 60, 187, 113, 161, 189, 76, 184, 145, 61, 184, 9, 52, 60, 126, 107, 56, 62, 184, 192, 144, 190, 183, 89, 94, 189, 185, 162, 42, 190, 167, 241, 13, 187, 60, 85, 98, 61, 4, 146, 46, 190, 88, 185, 21, 62, 121, 27, 5, 62, 19, 2, 126, 189, 220, 64, 18, 62, 253, 200, 28, 190, 129, 65, 19, 62, 123, 121, 72, 62, 149, 24, 10, 62, 245, 171, 3, 62, 161, 50, 125, 190, 209, 249, 37, 190, 117, 0, 73, 62, 12, 68, 22, 189, 214, 16, 95, 186, 45, 255, 186, 62, 125, 182, 175, 61, 58, 95, 212, 61, 233, 248, 70, 62, 31, 16, 5, 190, 72, 130, 62, 190, 238, 105, 14, 62, 144, 26, 214, 189, 73, 193, 61, 62, 203, 52, 214, 60, 152, 42, 138, 61, 237, 205, 172, 190, 103, 17, 176, 187, 100, 249, 197, 188, 17, 158, 28, 62, 107, 134, 61, 190, 26, 215, 106, 190, 136, 124, 96, 61, 199, 110, 21, 189, 124, 220, 129, 188, 66, 173, 206, 189, 3, 27, 207, 189, 235, 85, 42, 62, 247, 171, 75, 62, 48, 254, 175, 60, 0, 29, 6, 62, 190, 38, 82, 190, 132, 145, 144, 62, 117, 101, 78, 62, 70, 17, 13, 190, 53, 173, 41, 62, 111, 232, 84, 189, 6, 167, 227, 189, 205, 120, 246, 60, 4, 95, 110, 61, 137, 240, 85, 61, 147, 169, 97, 61, 254, 24, 133, 189, 161, 245, 108, 190, 111, 195, 249, 61, 161, 248, 17, 188, 239, 22, 58, 62, 160, 204, 2, 60, 152, 129, 32, 190, 9, 54, 70, 62, 38, 224, 50, 189, 66, 106, 80, 62, 180, 71, 195, 61, 70, 129, 43, 60, 77, 242, 49, 62, 110, 65, 102, 190, 131, 145, 255, 61, 150, 130, 140, 190, 170, 4, 84, 61, 245, 124, 27, 189, 173, 149, 195, 61, 25, 132, 124, 190, 125, 124, 83, 61, 241, 166, 54, 190, 76, 33, 249, 61, 5, 248, 255, 61, 189, 245, 217, 61, 115, 119, 114, 62, 236, 116, 154, 59, 169, 78, 161, 186, 81, 153, 72, 59, 223, 11, 129, 190, 229, 144, 33, 61, 123, 255, 50, 62, 65, 40, 101, 62, 19, 81, 103, 190, 140, 109, 60, 189, 225, 12, 16, 190, 209, 17, 241, 189, 181, 189, 103, 188, 69, 246, 240, 60, 96, 132, 120, 189, 210, 40, 69, 190, 35, 76, 230, 61, 0, 225, 175, 189, 135, 135, 73, 62, 88, 220, 138, 190, 84, 243, 3, 63, 54, 27, 189, 189, 166, 50, 149, 61, 161, 246, 244, 189, 67, 70, 53, 190, 139, 65, 50, 189, 217, 219, 29, 189, 100, 116, 32, 62, 29, 105, 243, 62, 145, 128, 251, 190, 17, 119, 40, 190, 122, 175, 253, 189, 70, 117, 52, 189, 249, 143, 201, 190, 11, 63, 43, 62, 129, 1, 222, 189, 215, 189, 50, 61, 44, 181, 75, 189, 26, 147, 81, 60, 125, 167, 182, 189, 82, 112, 171, 61, 168, 72, 51, 189, 8, 141, 54, 62, 122, 233, 182, 61, 89, 168, 65, 61, 47, 161, 178, 187, 124, 71, 176, 62, 195, 96, 13, 62, 129, 7, 115, 61, 123, 95, 177, 189, 43, 34, 54, 188, 149, 236, 13, 187, 246, 140, 177, 189, 202, 255, 20, 188, 84, 250, 103, 190, 9, 40, 154, 61, 3, 30, 53, 62, 122, 48, 230, 189, 220, 30, 78, 189, 207, 104, 132, 61, 196, 83, 214, 188, 162, 130, 121, 62, 17, 82, 167, 62, 41, 18, 4, 190, 252, 235, 58, 62, 240, 101, 25, 62, 47, 114, 139, 189, 164, 224, 165, 61, 78, 25, 80, 190, 135, 155, 67, 189, 183, 68, 230, 61, 244, 130, 253, 61, 23, 73, 151, 190, 28, 93, 35, 62, 48, 83, 210, 189, 128, 194, 196, 188, 249, 199, 220, 61, 166, 45, 39, 62, 9, 62, 123, 190, 185, 56, 42, 189, 136, 242, 104, 190, 156, 28, 18, 189, 146, 94, 127, 62, 214, 147, 18, 189, 150, 161, 79, 62, 0, 169, 87, 189, 188, 182, 48, 62, 74, 103, 129, 189, 168, 112, 248, 189, 209, 32, 111, 189, 126, 156, 159, 62, 211, 173, 185, 61, 119, 25, 149, 61, 141, 9, 132, 190, 123, 73, 180, 190, 210, 47, 2, 188, 25, 100, 28, 61, 133, 90, 109, 189, 25, 63, 68, 62, 126, 22, 145, 61, 173, 0, 155, 62, 234, 150, 3, 62, 35, 105, 30, 62, 127, 33, 134, 190, 32, 10, 150, 62, 24, 249, 48, 190, 172, 253, 54, 62, 84, 30, 41, 61, 90, 17, 105, 60, 154, 92, 168, 189, 233, 59, 90, 60, 59, 186, 146, 59, 30, 225, 81, 61, 246, 116, 227, 60, 84, 130, 28, 190, 119, 139, 244, 61, 113, 100, 2, 190, 34, 129, 63, 62, 86, 188, 33, 190, 44, 208, 168, 61, 150, 244, 212, 61, 62, 143, 204, 58, 35, 77, 87, 190, 189, 244, 25, 61, 231, 177, 103, 190, 174, 27, 51, 62, 38, 246, 209, 61, 21, 36, 42, 190, 146, 141, 144, 62, 73, 172, 145, 62, 39, 223, 179, 190, 56, 197, 58, 190, 2, 136, 161, 190, 66, 139, 153, 189, 207, 168, 238, 61, 106, 133, 214, 187, 159, 29, 82, 190, 139, 4, 102, 62, 231, 172, 40, 188, 13, 181, 83, 61, 101, 183, 136, 187, 101, 88, 139, 189, 71, 218, 251, 189, 133, 166, 5, 190, 67, 64, 51, 62, 31, 135, 35, 61, 133, 250, 196, 60, 52, 240, 186, 60, 209, 245, 148, 189, 11, 44, 137, 61, 107, 237, 63, 61, 49, 141, 148, 189, 107, 85, 3, 61, 14, 183, 111, 62, 80, 60, 64, 61, 26, 251, 198, 188, 62, 24, 96, 61, 228, 93, 160, 62, 130, 113, 204, 188, 108, 57, 178, 61, 170, 88, 155, 62, 93, 75, 79, 190, 52, 234, 60, 190, 145, 231, 4, 190, 194, 136, 43, 190, 1, 186, 133, 189, 160, 207, 41, 190, 59, 160, 198, 189, 101, 225, 156, 61, 26, 66, 229, 61, 98, 182, 25, 62, 138, 229, 68, 190, 221, 219, 38, 190, 100, 207, 137, 190, 142, 194, 74, 62, 144, 108, 153, 61, 223, 142, 72, 62, 163, 34, 151, 61, 245, 213, 148, 190, 152, 201, 114, 62, 25, 54, 80, 190, 140, 119, 44, 62, 36, 11, 85, 187, 224, 225, 3, 61, 32, 18, 91, 60, 118, 205, 143, 189, 52, 148, 149, 190, 111, 47, 60, 188, 77, 25, 148, 190, 3, 94, 194, 62, 163, 175, 135, 62, 198, 11, 163, 189, 12, 62, 146, 62, 17, 112, 83, 62, 150, 40, 138, 190, 250, 107, 7, 190, 242, 173, 138, 190, 91, 39, 71, 190, 220, 3, 125, 189, 138, 202, 149, 62, 79, 8, 186, 189, 161, 103, 97, 62, 21, 176, 152, 60, 188, 195, 23, 62, 9, 11, 92, 189, 172, 37, 225, 189, 17, 19, 147, 62, 52, 240, 132, 189, 198, 79, 81, 62, 235, 238, 45, 189, 52, 162, 142, 190, 237, 125, 63, 61, 35, 199, 182, 190, 84, 162, 130, 189, 4, 65, 28, 61, 206, 112, 142, 189, 221, 208, 172, 60, 207, 148, 131, 190, 130, 13, 113, 189, 228, 124, 217, 189, 169, 60, 68, 190, 200, 199, 91, 62, 252, 189, 164, 62, 128, 166, 21, 190, 29, 168, 103, 62, 38, 179, 152, 62, 204, 99, 151, 190, 125, 218, 190, 189, 21, 42, 180, 190, 158, 68, 40, 189, 40, 103, 132, 61, 211, 144, 128, 61, 243, 154, 81, 190, 219, 255, 178, 61, 40, 56, 151, 190, 87, 89, 18, 62, 254, 86, 216, 60, 9, 153, 32, 190, 24, 230, 24, 62, 208, 215, 18, 189, 208, 25, 144, 61, 126, 216, 236, 61, 204, 132, 107, 190, 158, 243, 101, 62, 166, 239, 120, 189, 181, 65, 100, 61, 164, 102, 140, 190, 229, 24, 171, 59, 85, 124, 197, 59, 112, 75, 228, 61, 244, 188, 159, 190, 215, 104, 203, 189, 85, 197, 216, 189, 254, 212, 181, 62, 118, 145, 144, 62, 246, 216, 198, 189, 225, 233, 60, 62, 177, 70, 97, 61, 129, 58, 97, 190, 31, 63, 211, 61, 41, 52, 140, 190, 91, 106, 208, 189, 129, 67, 249, 61, 94, 160, 241, 61, 238, 66, 129, 190, 56, 42, 194, 61, 49, 216, 121, 189, 111, 73, 34, 60, 222, 75, 157, 61, 243, 120, 104, 190, 82, 118, 247, 61, 70, 72, 121, 62, 5, 234, 108, 61, 33, 50, 179, 189, 191, 121, 131, 190, 107, 21, 138, 62, 78, 138, 39, 190, 108, 92, 27, 62, 207, 6, 67, 190, 216, 184, 206, 189, 72, 212, 55, 62, 72, 34, 94, 190, 71, 22, 140, 189, 211, 206, 28, 189, 92, 241, 6, 190, 11, 29, 183, 62, 70, 26, 20, 61, 91, 23, 243, 61, 227, 5, 147, 62, 168, 57, 102, 61, 105, 177, 228, 189, 128, 221, 241, 189, 148, 21, 64, 190, 64, 23, 96, 190, 210, 176, 44, 62, 101, 97, 116, 62, 76, 88, 46, 187, 164, 212, 145, 61, 89, 69, 150, 190, 113, 105, 81, 61, 239, 83, 153, 188, 92, 220, 8, 62, 86, 69, 167, 190, 71, 46, 67, 188, 188, 175, 229, 188, 55, 87, 67, 62, 179, 122, 66, 62, 163, 70, 53, 189, 209, 44, 161, 62, 140, 205, 2, 62, 61, 45, 67, 189, 77, 224, 128, 188, 192, 144, 189, 60, 180, 199, 206, 189, 164, 16, 148, 62, 108, 133, 13, 62, 212, 144, 163, 61, 237, 234, 156, 190, 193, 203, 98, 190, 39, 69, 173, 189, 66, 159, 194, 189, 6, 168, 204, 60, 204, 21, 145, 62, 184, 201, 169, 61, 18, 154, 135, 62, 107, 56, 113, 62, 65, 206, 91, 190, 9, 187, 52, 189, 121, 203, 17, 62, 234, 194, 11, 190, 163, 12, 152, 62, 131, 187, 63, 190, 235, 133, 170, 61, 192, 65, 23, 62, 23, 51, 74, 61, 239, 128, 5, 62, 176, 214, 103, 190, 17, 63, 9, 190, 62, 54, 129, 57, 94, 73, 144, 61, 28, 56, 82, 190, 199, 179, 10, 61, 243, 188, 72, 61, 230, 232, 71, 189, 1, 20, 67, 62, 254, 68, 234, 188, 131, 133, 6, 189, 113, 48, 13, 190, 57, 0, 144, 189, 149, 86, 117, 190, 225, 239, 249, 61, 77, 178, 145, 61, 101, 132, 63, 190, 129, 66, 231, 189, 86, 14, 246, 61, 55, 42, 39, 189, 152, 66, 227, 188, 50, 255, 50, 190, 36, 62, 123, 62, 81, 239, 124, 188, 36, 39, 6, 190, 114, 63, 52, 62, 81, 117, 58, 61, 186, 22, 5, 190, 57, 129, 136, 186, 165, 160, 110, 189, 193, 149, 55, 190, 208, 76, 2, 61, 2, 91, 52, 62, 139, 167, 197, 189, 50, 201, 76, 62, 205, 232, 134, 190, 176, 159, 206, 62, 8, 116, 133, 61, 26, 253, 1, 62, 236, 126, 152, 189, 73, 150, 176, 60, 239, 119, 142, 62, 218, 179, 60, 189, 16, 36, 17, 61, 209, 128, 144, 62, 3, 194, 11, 191, 249, 42, 40, 58, 42, 123, 74, 189, 34, 136, 212, 189, 219, 66, 140, 189, 71, 80, 234, 61, 103, 181, 59, 190, 88, 194, 141, 189, 163, 40, 21, 188, 12, 94, 141, 61, 227, 190, 56, 190, 231, 229, 91, 62, 8, 252, 122, 189, 167, 239, 83, 62, 25, 234, 175, 189, 20, 204, 224, 61, 220, 0, 2, 62, 101, 137, 5, 190, 176, 35, 149, 189, 102, 254, 217, 189, 159, 233, 176, 189, 153, 5, 163, 62, 176, 100, 46, 190, 192, 62, 207, 62, 94, 79, 72, 190, 243, 52, 122, 62, 149, 208, 207, 188, 130, 170, 212, 60, 75, 98, 86, 61, 179, 140, 9, 62, 91, 145, 128, 189, 68, 29, 47, 62, 105, 20, 211, 190, 170, 213, 150, 190, 214, 158, 1, 61, 31, 100, 98, 190, 67, 65, 47, 189, 134, 197, 163, 62, 142, 47, 45, 62, 45, 83, 147, 62, 56, 253, 102, 62, 141, 227, 138, 189, 208, 241, 165, 190, 170, 248, 144, 62, 12, 200, 54, 190, 175, 14, 90, 62, 118, 201, 38, 187, 23, 70, 177, 61, 199, 58, 176, 190, 127, 37, 166, 62, 167, 141, 6, 62, 130, 239, 40, 61, 63, 184, 96, 61, 225, 141, 174, 188, 156, 0, 117, 62, 44, 63, 170, 190, 194, 73, 194, 60, 6, 111, 50, 190, 32, 32, 142, 189, 236, 216, 110, 189, 201, 55, 174, 189, 231, 207, 107, 190, 226, 1, 188, 189, 52, 66, 136, 190, 20, 123, 156, 62, 27, 5, 3, 62, 102, 70, 120, 188, 159, 218, 177, 62, 29, 170, 7, 62, 11, 77, 153, 190, 167, 29, 151, 60, 189, 69, 151, 190, 25, 68, 26, 60, 82, 115, 198, 61, 73, 9, 99, 62, 208, 175, 23, 188, 148, 7, 164, 61, 136, 228, 38, 190, 148, 214, 191, 189, 3, 19, 39, 62, 13, 95, 167, 62, 140, 35, 38, 189, 161, 70, 251, 189, 210, 83, 147, 61, 237, 44, 36, 62, 222, 148, 226, 61, 230, 137, 112, 190, 119, 196, 149, 61, 184, 71, 146, 61, 216, 67, 177, 188, 216, 105, 176, 188, 183, 51, 80, 190, 129, 182, 30, 62, 140, 26, 154, 61, 67, 23, 95, 189, 32, 203, 140, 62, 61, 219, 186, 190, 175, 82, 117, 190, 13, 159, 129, 60, 90, 191, 160, 190, 48, 141, 138, 190, 113, 41, 104, 62, 159, 158, 18, 188, 164, 21, 60, 62, 251, 130, 65, 188, 1, 106, 79, 190, 183, 34, 23, 189, 153, 218, 66, 61, 189, 139, 105, 190, 43, 59, 95, 62, 107, 139, 128, 190, 199, 104, 82, 189, 48, 62, 191, 58, 48, 241, 57, 62, 136, 0, 145, 60, 242, 93, 147, 61, 9, 3, 106, 189, 119, 62, 150, 190, 36, 12, 224, 61, 75, 45, 65, 190, 3, 61, 156, 189, 229, 12, 209, 188, 238, 14, 193, 189, 152, 79, 52, 62, 229, 150, 173, 61, 69, 98, 77, 188, 225, 26, 155, 60, 18, 85, 115, 189, 168, 18, 81, 62, 205, 142, 152, 62, 155, 166, 60, 189, 131, 158, 164, 61, 231, 241, 18, 62, 211, 148, 150, 190, 232, 191, 6, 62, 18, 233, 201, 189, 181, 119, 96, 190, 129, 72, 150, 61, 96, 120, 69, 62, 21, 208, 156, 190, 56, 140, 242, 188, 45, 4, 53, 188, 152, 125, 28, 62, 207, 239, 23, 189, 133, 192, 100, 62, 118, 17, 26, 61, 181, 35, 213, 189, 149, 244, 0, 61, 158, 114, 246, 61, 100, 8, 174, 62, 133, 183, 35, 190, 84, 139, 121, 62, 140, 0, 52, 61, 32, 30, 15, 188, 194, 184, 139, 189, 165, 150, 7, 189, 175, 19, 97, 190, 15, 173, 143, 61, 2, 9, 119, 190, 30, 115, 78, 62, 9, 131, 22, 190, 99, 37, 34, 189, 176, 14, 102, 62, 27, 93, 222, 190, 34, 210, 58, 187, 108, 203, 98, 62, 9, 238, 130, 189, 242, 84, 72, 61, 165, 242, 125, 61, 193, 156, 232, 60, 136, 113, 148, 190, 107, 177, 114, 62, 255, 85, 19, 62, 60, 115, 115, 62, 111, 34, 141, 190, 190, 97, 10, 189, 55, 112, 119, 190, 37, 140, 93, 60, 221, 102, 103, 61, 102, 133, 21, 62, 141, 134, 56, 61, 244, 153, 185, 190, 221, 74, 142, 62, 50, 36, 78, 190, 241, 82, 8, 62, 162, 114, 39, 190, 232, 208, 26, 189, 218, 169, 127, 61, 130, 171, 81, 60, 16, 97, 133, 190, 41, 255, 17, 190, 110, 173, 94, 190, 161, 237, 134, 62, 255, 25, 141, 62, 96, 26, 29, 189, 198, 126, 223, 61, 42, 203, 166, 62, 53, 87, 168, 190, 12, 54, 107, 59, 189, 217, 14, 190, 2, 49, 82, 189, 46, 197, 166, 61, 126, 122, 156, 62, 207, 205, 28, 190, 17, 146, 96, 189, 229, 152, 38, 190, 176, 58, 70, 189, 185, 120, 88, 190, 1, 27, 175, 60, 14, 46, 173, 62, 182, 127, 213, 61, 255, 112, 139, 62, 19, 145, 52, 62, 141, 182, 2, 188, 21, 178, 210, 61, 14, 47, 216, 189, 75, 155, 204, 61, 145, 74, 183, 60, 229, 175, 62, 189, 161, 10, 223, 61, 214, 109, 24, 190, 207, 211, 250, 190, 203, 199, 165, 59, 216, 77, 12, 190, 31, 157, 79, 62, 123, 202, 159, 62, 54, 175, 33, 62, 108, 217, 162, 61, 139, 115, 5, 189, 231, 133, 164, 190, 197, 87, 129, 190, 148, 154, 134, 190, 64, 110, 147, 190, 107, 85, 62, 61, 132, 157, 113, 62, 238, 255, 163, 190, 187, 60, 217, 188, 227, 247, 61, 60, 254, 192, 252, 189, 92, 203, 246, 61, 180, 19, 172, 60, 139, 254, 123, 62, 245, 135, 174, 61, 203, 52, 142, 62, 167, 62, 145, 61, 186, 212, 29, 190, 68, 188, 4, 62, 112, 230, 71, 190, 44, 3, 98, 190, 184, 189, 102, 189, 211, 121, 38, 190, 132, 14, 0, 190, 25, 114, 245, 61, 31, 70, 42, 190, 24, 142, 103, 60, 97, 195, 175, 61, 119, 145, 8, 61, 224, 156, 22, 62, 248, 92, 42, 190, 126, 104, 126, 59, 229, 165, 218, 188, 153, 216, 152, 188, 116, 65, 95, 189, 135, 195, 189, 190, 90, 142, 186, 190, 222, 39, 212, 61, 35, 205, 13, 62, 45, 84, 172, 188, 119, 17, 99, 62, 232, 233, 124, 61, 238, 237, 42, 62, 171, 24, 20, 62, 60, 187, 241, 189, 54, 86, 102, 190, 162, 136, 48, 60, 137, 29, 231, 59, 1, 5, 70, 190, 85, 163, 194, 189, 57, 86, 189, 61, 56, 33, 254, 189, 145, 25, 134, 189, 145, 143, 37, 190, 30, 138, 238, 61, 73, 244, 116, 190, 173, 43, 38, 189, 102, 198, 231, 62, 178, 175, 208, 189, 69, 83, 169, 60, 157, 7, 140, 58, 136, 48, 214, 190, 86, 59, 89, 190, 54, 114, 172, 60, 9, 29, 29, 188, 87, 28, 3, 63, 179, 187, 166, 61, 216, 113, 231, 189, 120, 147, 58, 62, 67, 204, 6, 62, 76, 139, 64, 190, 146, 93, 150, 188, 239, 210, 57, 190, 5, 249, 9, 62, 88, 96, 191, 61, 254, 11, 210, 59, 53, 111, 40, 189, 114, 72, 15, 62, 202, 255, 10, 62, 124, 80, 30, 62, 79, 126, 250, 61, 57, 98, 180, 60, 243, 93, 64, 62, 241, 206, 252, 188, 227, 230, 49, 61, 214, 167, 75, 190, 87, 83, 4, 62, 179, 10, 92, 62, 191, 199, 71, 190, 37, 37, 151, 190, 31, 158, 141, 188, 36, 80, 127, 189, 19, 201, 62, 61, 31, 137, 121, 62, 91, 55, 104, 61, 183, 99, 48, 62, 67, 176, 179, 189, 156, 250, 193, 190, 44, 45, 105, 190, 112, 235, 17, 60, 114, 247, 109, 190, 139, 8, 30, 62, 40, 144, 48, 62, 4, 190, 176, 188, 113, 73, 55, 62, 103, 26, 4, 61, 241, 67, 255, 61, 130, 131, 47, 189, 206, 120, 18, 62, 239, 238, 164, 190, 204, 9, 143, 189, 255, 190, 20, 190, 231, 53, 136, 189, 200, 152, 194, 62, 220, 174, 204, 189, 234, 53, 188, 62, 163, 33, 164, 61, 206, 223, 52, 62, 177, 144, 76, 190, 17, 199, 234, 189, 175, 242, 154, 188, 137, 182, 1, 62, 235, 25, 179, 60, 223, 39, 1, 62, 48, 149, 139, 190, 103, 121, 63, 190, 191, 69, 67, 60, 251, 230, 122, 190, 165, 144, 231, 189, 120, 97, 138, 61, 40, 68, 35, 62, 54, 208, 55, 62, 98, 132, 70, 62, 156, 61, 221, 61, 153, 71, 86, 190, 237, 33, 187, 61, 25, 124, 102, 189, 105, 247, 72, 62, 228, 180, 139, 189, 151, 173, 16, 190, 26, 23, 68, 190, 120, 215, 34, 62, 100, 33, 239, 189, 62, 202, 108, 62, 1, 94, 231, 188, 55, 49, 120, 190, 63, 76, 195, 59, 245, 122, 208, 190, 169, 7, 207, 189, 214, 210, 237, 189, 83, 104, 237, 61, 198, 177, 82, 62, 139, 148, 27, 190, 200, 187, 167, 190, 73, 199, 24, 62, 205, 38, 182, 190, 174, 6, 7, 63, 133, 147, 126, 62, 221, 188, 74, 61, 171, 236, 136, 62, 140, 9, 7, 189, 251, 154, 94, 190, 159, 1, 2, 190, 149, 4, 109, 190, 122, 220, 148, 190, 132, 149, 27, 62, 237, 96, 202, 60, 165, 222, 184, 189, 252, 218, 108, 62, 122, 230, 86, 190, 101, 151, 105, 61};
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
                    alignas(float) const unsigned char memory[] = {39, 140, 142, 190, 70, 197, 18, 62, 255, 103, 1, 61, 22, 156, 11, 190, 143, 128, 46, 190, 233, 249, 11, 189, 163, 89, 227, 189, 25, 90, 242, 189, 216, 143, 54, 190, 118, 0, 30, 62, 176, 119, 168, 60, 217, 188, 4, 62, 7, 156, 151, 189, 235, 235, 90, 61, 45, 36, 23, 59, 203, 35, 230, 189, 231, 151, 236, 189, 57, 190, 240, 189, 181, 18, 35, 62, 1, 242, 31, 190, 189, 80, 132, 189, 134, 239, 137, 188, 61, 232, 58, 61, 153, 180, 60, 61, 156, 245, 5, 62, 137, 177, 190, 61, 11, 114, 12, 190, 153, 158, 75, 62, 88, 3, 78, 62, 149, 181, 61, 60, 193, 234, 250, 187, 81, 25, 223, 61};
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
                    alignas(float) const unsigned char memory[] = {84, 21, 26, 62, 224, 177, 41, 190, 77, 255, 105, 190, 183, 58, 54, 190, 74, 11, 47, 189, 107, 58, 216, 189, 133, 115, 232, 61, 195, 16, 52, 62, 95, 187, 127, 190, 121, 125, 197, 61, 242, 105, 100, 190, 181, 109, 36, 62, 165, 242, 28, 62, 30, 0, 50, 62, 129, 114, 123, 62, 200, 117, 56, 62, 187, 120, 98, 62, 207, 237, 91, 190, 215, 100, 77, 189, 158, 181, 186, 189, 35, 19, 73, 190, 135, 253, 59, 62, 179, 223, 109, 190, 145, 208, 68, 62, 128, 163, 82, 190, 188, 8, 242, 61, 70, 120, 26, 62, 71, 142, 122, 61, 51, 24, 66, 190, 0, 109, 48, 62, 123, 84, 93, 190, 83, 227, 38, 62};
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
                    alignas(float) const unsigned char memory[] = {107, 25, 184, 61};
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
    alignas(float) const unsigned char memory[] = {111, 100, 166, 63, 77, 160, 158, 63, 138, 72, 3, 64, 194, 211, 201, 63, 61, 152, 80, 63, 105, 234, 128, 191, 49, 219, 201, 189, 26, 3, 94, 191, 2, 211, 58, 191, 184, 74, 253, 62, 55, 162, 146, 191, 254, 245, 50, 190, 157, 134, 192, 62, 216, 26, 23, 63, 161, 192, 186, 189, 134, 108, 241, 191, 4, 97, 109, 62, 82, 209, 105, 191, 166, 234, 2, 191, 236, 177, 58, 63, 65, 158, 164, 62, 63, 12, 153, 191, 136, 203, 39, 61, 82, 154, 197, 62, 224, 233, 3, 191, 104, 130, 169, 190, 212, 151, 61, 61, 190, 49, 141, 190, 27, 158, 46, 191, 197, 98, 185, 190, 4, 180, 16, 60, 220, 163, 176, 63, 184, 20, 124, 63, 179, 18, 132, 63, 165, 146, 235, 62, 12, 204, 38, 64, 183, 104, 236, 62, 70, 137, 226, 190, 125, 142, 245, 62};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {243, 187, 150, 192, 12, 64, 128, 192, 66, 227, 142, 64, 63, 158, 149, 64, 226, 76, 128, 192, 188, 25, 219, 191, 212, 119, 137, 192, 120, 172, 104, 62, 75, 95, 66, 64, 212, 62, 134, 64, 100, 67, 153, 192, 97, 37, 134, 192, 10, 236, 90, 64};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-28_01-59-27/c723e6f_zoo_environment_algorithm/pendulum-v1_ppo/0007/steps/000000000000485";
   char commit_hash[] = "c723e6fb5b3910d21a9713faa94839df996a29ae";
}