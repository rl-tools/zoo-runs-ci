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
                    alignas(float) const unsigned char memory[] = {159, 217, 236, 62, 107, 100, 95, 61, 52, 129, 193, 190, 214, 62, 210, 62, 83, 0, 126, 62, 215, 236, 0, 62, 30, 180, 230, 61, 139, 217, 167, 190, 1, 248, 211, 190, 186, 223, 162, 190, 193, 245, 17, 191, 94, 157, 106, 62, 161, 92, 238, 62, 235, 52, 154, 189, 165, 55, 29, 62, 208, 70, 18, 191, 8, 187, 178, 190, 73, 28, 171, 61, 194, 196, 35, 190, 21, 229, 14, 63, 5, 65, 246, 61, 70, 244, 255, 189, 143, 45, 230, 61, 244, 108, 184, 62, 45, 13, 5, 62, 159, 30, 6, 190, 241, 15, 138, 190, 138, 42, 42, 62, 246, 252, 6, 63, 233, 230, 183, 62, 138, 45, 14, 191, 28, 184, 4, 63, 223, 10, 8, 191, 109, 139, 3, 63, 125, 141, 216, 62, 234, 191, 125, 189, 89, 179, 138, 189, 17, 75, 251, 190, 177, 96, 0, 191, 12, 162, 191, 190, 12, 76, 196, 190, 244, 79, 216, 62, 154, 24, 203, 62, 175, 131, 216, 189, 118, 90, 251, 62, 124, 237, 218, 62, 254, 88, 1, 63, 188, 52, 198, 62, 157, 80, 141, 190, 128, 163, 231, 190, 63, 59, 9, 191, 121, 91, 160, 190, 0, 203, 85, 61, 130, 192, 170, 190, 151, 194, 188, 190, 83, 182, 34, 62, 56, 109, 89, 190, 134, 25, 153, 190, 175, 33, 49, 62, 179, 93, 19, 190, 24, 221, 28, 62, 33, 133, 18, 62, 186, 190, 163, 190, 156, 146, 213, 190, 242, 202, 189, 190, 163, 21, 182, 61, 10, 98, 47, 190, 118, 176, 63, 59, 155, 135, 24, 189, 28, 255, 38, 190, 80, 160, 145, 190, 231, 110, 246, 190, 221, 20, 146, 190, 76, 184, 19, 62, 215, 201, 5, 191, 58, 222, 253, 62, 235, 41, 34, 190, 185, 254, 155, 190, 31, 207, 183, 62, 64, 107, 182, 190, 255, 0, 221, 190, 96, 216, 250, 190, 138, 189, 187, 190, 35, 113, 91, 62, 22, 40, 4, 63, 160, 58, 161, 189, 58, 243, 89, 190, 94, 116, 222, 62, 68, 207, 196, 189, 75, 80, 106, 62, 140, 211, 41, 190, 103, 18, 225, 189, 37, 48, 239, 62, 141, 31, 18, 190, 129, 152, 170, 61, 8, 252, 204, 62};
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
                    alignas(float) const unsigned char memory[] = {58, 14, 10, 63, 34, 186, 11, 63, 20, 204, 105, 62, 207, 201, 12, 63, 218, 9, 146, 190, 78, 44, 165, 62, 161, 154, 214, 62, 28, 189, 198, 190, 53, 37, 17, 191, 112, 191, 6, 191, 138, 0, 151, 189, 24, 68, 169, 62, 14, 58, 193, 190, 48, 61, 238, 61, 212, 249, 137, 62, 188, 255, 3, 61, 5, 59, 205, 60, 132, 15, 202, 190, 144, 216, 230, 60, 56, 242, 232, 189, 74, 208, 243, 189, 115, 23, 158, 62, 240, 30, 19, 190, 184, 183, 92, 62, 222, 115, 129, 61, 170, 210, 233, 62, 59, 166, 34, 62, 188, 237, 38, 187, 210, 89, 247, 62, 155, 53, 195, 62, 0, 62, 239, 62, 29, 159, 71, 190};
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
                    alignas(float) const unsigned char memory[] = {139, 7, 169, 61, 126, 179, 2, 62, 226, 19, 144, 61, 57, 146, 10, 61, 254, 121, 117, 61, 90, 94, 22, 190, 82, 16, 24, 190, 107, 219, 12, 61, 231, 218, 36, 190, 170, 79, 184, 189, 207, 141, 18, 190, 105, 106, 168, 61, 50, 154, 204, 189, 8, 225, 14, 62, 193, 77, 222, 61, 80, 178, 170, 59, 128, 173, 16, 190, 216, 249, 21, 61, 2, 194, 29, 190, 87, 118, 29, 190, 48, 186, 32, 62, 51, 35, 104, 60, 97, 27, 244, 189, 172, 63, 6, 190, 24, 12, 5, 61, 158, 231, 37, 61, 185, 11, 35, 62, 148, 116, 69, 189, 41, 240, 64, 189, 164, 224, 193, 61, 74, 49, 45, 190, 183, 114, 35, 190, 204, 66, 13, 190, 221, 188, 139, 189, 61, 63, 133, 61, 174, 57, 241, 61, 50, 196, 169, 59, 179, 114, 27, 62, 225, 126, 207, 60, 250, 86, 6, 190, 212, 222, 248, 61, 134, 196, 239, 61, 1, 16, 142, 187, 166, 161, 207, 61, 140, 145, 224, 61, 38, 81, 137, 61, 175, 89, 109, 59, 172, 220, 89, 61, 72, 125, 26, 62, 2, 81, 30, 62, 186, 188, 113, 61, 238, 11, 191, 189, 84, 89, 254, 189, 123, 202, 214, 187, 223, 37, 68, 189, 11, 189, 26, 62, 183, 108, 4, 62, 226, 148, 233, 189, 104, 207, 88, 189, 0, 60, 251, 189, 94, 43, 225, 189, 111, 81, 41, 62, 32, 152, 30, 188, 93, 227, 129, 189, 104, 172, 11, 62, 155, 58, 44, 61, 240, 108, 131, 60, 245, 36, 183, 188, 127, 168, 58, 189, 96, 28, 173, 189, 104, 114, 3, 190, 238, 129, 253, 188, 71, 73, 12, 190, 163, 128, 234, 188, 154, 217, 26, 190, 56, 177, 17, 62, 95, 30, 222, 189, 191, 163, 45, 62, 181, 245, 51, 190, 96, 242, 50, 61, 224, 105, 8, 62, 74, 231, 22, 190, 117, 66, 30, 62, 135, 181, 168, 61, 68, 109, 117, 58, 207, 97, 129, 61, 148, 52, 179, 61, 214, 16, 236, 61, 101, 10, 137, 187, 0, 234, 92, 189, 142, 153, 51, 190, 213, 179, 31, 190, 48, 54, 90, 188, 112, 239, 33, 61, 57, 91, 0, 190, 10, 31, 8, 190, 97, 235, 187, 61, 91, 88, 183, 61, 110, 47, 213, 61, 100, 230, 184, 61, 146, 82, 4, 189, 202, 39, 23, 62, 255, 171, 32, 62, 194, 73, 28, 62, 106, 53, 236, 189, 114, 98, 20, 190, 178, 59, 32, 62, 122, 159, 220, 189, 180, 231, 71, 188, 32, 8, 178, 60, 128, 109, 190, 61, 150, 62, 49, 190, 182, 15, 183, 61, 86, 147, 195, 189, 115, 55, 46, 62, 141, 172, 39, 190, 77, 88, 43, 62, 58, 120, 22, 190, 58, 129, 38, 190, 254, 9, 107, 61, 179, 60, 47, 190, 202, 247, 241, 60, 169, 195, 122, 60, 49, 68, 164, 61, 27, 193, 40, 190, 101, 102, 18, 62, 232, 15, 100, 61, 134, 247, 46, 190, 40, 158, 15, 62, 202, 51, 113, 61, 185, 198, 180, 58, 59, 229, 169, 188, 191, 70, 38, 61, 142, 191, 164, 189, 120, 60, 4, 190, 44, 204, 34, 62, 221, 96, 34, 188, 229, 72, 165, 61, 157, 224, 66, 61, 214, 186, 50, 190, 195, 72, 62, 187, 16, 15, 17, 190, 75, 48, 28, 62, 242, 181, 62, 61, 120, 207, 29, 62, 77, 122, 153, 189, 128, 146, 100, 183, 49, 199, 5, 189, 159, 220, 2, 189, 172, 217, 203, 61, 241, 17, 225, 61, 71, 56, 83, 189, 255, 183, 182, 59, 192, 40, 26, 62, 81, 232, 110, 187, 216, 159, 159, 61, 166, 24, 6, 62, 32, 101, 150, 60, 231, 31, 16, 62, 145, 1, 231, 189, 249, 236, 2, 189, 28, 55, 166, 61, 197, 88, 190, 61, 229, 65, 189, 60, 251, 175, 49, 62, 125, 141, 13, 62, 181, 90, 26, 190, 175, 7, 133, 189, 211, 59, 4, 190, 157, 207, 183, 61, 153, 207, 173, 61, 104, 218, 159, 189, 251, 174, 241, 61, 91, 186, 9, 190, 80, 225, 20, 190, 214, 175, 197, 189, 41, 134, 238, 61, 107, 96, 198, 61, 202, 157, 207, 61, 127, 73, 208, 61, 105, 73, 136, 61, 241, 69, 90, 61, 177, 207, 103, 189, 253, 113, 139, 189, 159, 160, 160, 188, 88, 20, 52, 62, 226, 144, 65, 189, 177, 179, 148, 189, 22, 134, 246, 61, 220, 115, 115, 61, 184, 157, 120, 189, 146, 177, 170, 189, 46, 218, 224, 188, 150, 151, 29, 62, 75, 132, 8, 62, 57, 13, 24, 62, 210, 30, 12, 61, 156, 173, 41, 62, 9, 237, 158, 189, 112, 176, 222, 61, 114, 120, 180, 61, 114, 141, 21, 190, 166, 228, 164, 61, 48, 27, 20, 190, 83, 107, 137, 61, 202, 83, 165, 60, 22, 31, 140, 188, 202, 243, 0, 62, 129, 174, 180, 187, 49, 24, 11, 62, 242, 67, 9, 189, 150, 45, 70, 61, 121, 161, 35, 62, 214, 4, 37, 62, 55, 13, 47, 190, 207, 15, 252, 189, 18, 35, 135, 189, 209, 152, 201, 189, 247, 112, 49, 62, 171, 146, 114, 189, 199, 9, 11, 62, 145, 23, 176, 189, 167, 204, 45, 190, 99, 250, 135, 189, 49, 35, 10, 190, 96, 245, 18, 190, 218, 134, 52, 189, 179, 148, 169, 189, 112, 61, 42, 190, 168, 225, 220, 189, 207, 218, 90, 60, 149, 78, 25, 189, 55, 104, 33, 62, 3, 150, 209, 61, 54, 239, 158, 188, 178, 30, 21, 190, 10, 203, 51, 61, 57, 230, 48, 189, 237, 235, 33, 61, 165, 225, 28, 189, 104, 230, 28, 62, 240, 25, 143, 189, 88, 207, 169, 61, 106, 18, 60, 188, 11, 50, 235, 61, 165, 163, 49, 62, 40, 183, 109, 189, 234, 6, 179, 61, 152, 132, 19, 62, 231, 164, 22, 190, 208, 238, 227, 189, 223, 15, 39, 61, 132, 65, 5, 189, 28, 173, 220, 189, 0, 239, 171, 61, 8, 146, 44, 189, 82, 253, 33, 62, 167, 203, 11, 62, 83, 155, 191, 189, 69, 146, 2, 62, 169, 121, 8, 189, 250, 122, 242, 189, 93, 198, 42, 62, 244, 245, 194, 189, 33, 30, 37, 190, 47, 9, 34, 190, 225, 127, 155, 189, 238, 222, 1, 62, 167, 51, 166, 189, 196, 211, 104, 189, 120, 50, 87, 188, 97, 152, 26, 189, 43, 211, 217, 188, 237, 69, 166, 189, 30, 28, 185, 61, 244, 103, 8, 190, 48, 239, 179, 189, 60, 111, 121, 188, 179, 139, 3, 62, 219, 21, 192, 189, 248, 208, 253, 60, 70, 233, 182, 60, 136, 182, 150, 61, 153, 56, 215, 189, 172, 210, 43, 190, 168, 236, 131, 59, 75, 167, 3, 190, 177, 79, 34, 62, 200, 154, 57, 189, 213, 113, 172, 189, 228, 113, 36, 62, 112, 121, 228, 189, 255, 78, 32, 190, 31, 236, 13, 190, 207, 90, 141, 60, 173, 56, 20, 190, 175, 133, 16, 61, 99, 97, 31, 60, 44, 44, 39, 62, 248, 25, 214, 189, 247, 238, 25, 62, 30, 252, 149, 189, 20, 179, 124, 59, 38, 239, 25, 62, 86, 227, 187, 61, 163, 92, 231, 189, 206, 75, 44, 62, 208, 141, 75, 61, 150, 62, 171, 61, 195, 157, 16, 190, 128, 89, 36, 62, 89, 222, 184, 188, 135, 229, 30, 62, 197, 175, 171, 61, 95, 59, 211, 187, 92, 147, 237, 61, 52, 141, 103, 61, 26, 172, 32, 189, 73, 208, 231, 189, 58, 132, 12, 190, 208, 156, 145, 60, 22, 141, 4, 62, 87, 110, 211, 61, 29, 176, 223, 60, 77, 77, 52, 62, 81, 177, 159, 189, 252, 50, 243, 61, 156, 144, 8, 190, 197, 103, 40, 60, 87, 40, 194, 189, 41, 220, 251, 188, 102, 196, 7, 190, 33, 94, 30, 190, 120, 195, 192, 189, 19, 26, 220, 189, 27, 152, 40, 189, 143, 185, 133, 188, 8, 125, 37, 190, 213, 156, 89, 189, 181, 64, 245, 61, 240, 39, 229, 189, 49, 76, 11, 189, 24, 191, 5, 62, 21, 31, 195, 60, 119, 188, 85, 189, 164, 36, 69, 61, 227, 114, 242, 189, 230, 236, 4, 190, 184, 114, 151, 189, 115, 19, 23, 190, 135, 255, 177, 61, 126, 178, 248, 189, 59, 8, 48, 62, 27, 190, 107, 61, 71, 46, 15, 190, 228, 17, 130, 189, 45, 3, 224, 188, 243, 53, 225, 58, 126, 201, 7, 62, 15, 49, 20, 190, 161, 22, 244, 60, 193, 147, 63, 61, 229, 171, 46, 190, 199, 219, 74, 60, 177, 185, 12, 62, 208, 214, 148, 189, 167, 197, 39, 189, 132, 64, 212, 60, 202, 150, 240, 189, 220, 90, 14, 189, 237, 201, 107, 189, 216, 215, 215, 61, 82, 87, 8, 61, 8, 21, 81, 189, 167, 90, 39, 190, 42, 116, 139, 189, 108, 136, 79, 61, 110, 141, 4, 190, 124, 115, 31, 61, 59, 214, 12, 62, 202, 95, 196, 189, 47, 8, 7, 189, 132, 70, 214, 188, 166, 45, 4, 62, 150, 177, 166, 61, 15, 76, 45, 190, 108, 192, 11, 61, 213, 14, 243, 60, 113, 52, 228, 61, 76, 67, 158, 188, 65, 81, 111, 61, 235, 172, 247, 61, 143, 61, 255, 189, 48, 232, 217, 189, 87, 154, 46, 61, 36, 11, 172, 188, 187, 12, 28, 190, 5, 128, 114, 61, 224, 136, 16, 62, 145, 71, 28, 190, 135, 20, 206, 61, 179, 126, 81, 189, 7, 158, 51, 190, 101, 180, 134, 61, 141, 245, 28, 62, 113, 150, 184, 189, 35, 64, 204, 189, 93, 251, 68, 189, 29, 56, 170, 189, 178, 17, 224, 60, 6, 21, 10, 62, 185, 38, 3, 189, 11, 186, 37, 62, 212, 104, 8, 62, 225, 131, 187, 189, 123, 74, 2, 62, 56, 211, 241, 61, 247, 61, 174, 61, 160, 138, 213, 188, 79, 185, 231, 58, 174, 94, 224, 189, 239, 12, 41, 190, 97, 24, 73, 61, 115, 46, 212, 189, 222, 21, 208, 188, 32, 243, 246, 61, 75, 141, 6, 59, 161, 171, 250, 61, 253, 190, 90, 61, 11, 246, 43, 62, 158, 70, 31, 62, 226, 17, 204, 189, 86, 50, 223, 61, 206, 128, 40, 62, 0, 105, 8, 190, 249, 139, 192, 60, 94, 132, 19, 62, 190, 120, 31, 62, 224, 53, 128, 61, 248, 26, 17, 190, 8, 192, 130, 189, 66, 30, 39, 62, 96, 136, 166, 61, 182, 210, 46, 189, 62, 6, 17, 188, 209, 250, 11, 190, 239, 196, 176, 60, 111, 41, 35, 190, 91, 195, 220, 189, 71, 89, 252, 189, 102, 121, 253, 61, 11, 223, 71, 189, 56, 11, 50, 187, 206, 33, 186, 188, 220, 239, 45, 62, 225, 30, 32, 190, 218, 78, 102, 61, 233, 255, 161, 61, 140, 196, 164, 189, 65, 208, 122, 189, 181, 161, 82, 61, 33, 21, 6, 188, 221, 180, 186, 189, 218, 54, 34, 62, 147, 255, 78, 61, 1, 56, 5, 62, 89, 160, 12, 190, 193, 75, 164, 189, 19, 165, 83, 189, 7, 108, 16, 189, 204, 37, 51, 60, 253, 80, 206, 60, 73, 135, 52, 190, 35, 195, 9, 190, 38, 130, 100, 60, 220, 117, 214, 61, 251, 76, 77, 189, 3, 60, 127, 189, 147, 79, 206, 59, 68, 40, 11, 190, 91, 7, 150, 61, 113, 2, 20, 62, 54, 183, 172, 59, 151, 63, 249, 61, 60, 53, 43, 190, 250, 200, 184, 189, 58, 215, 181, 60, 172, 181, 20, 62, 194, 78, 191, 61, 159, 43, 231, 61, 219, 199, 41, 190, 158, 234, 59, 189, 23, 54, 100, 61, 21, 30, 255, 188, 165, 234, 180, 189, 228, 141, 49, 62, 185, 117, 187, 188, 155, 58, 3, 190, 86, 228, 26, 190, 117, 74, 248, 189, 5, 176, 58, 60, 14, 176, 8, 190, 127, 223, 30, 62, 131, 164, 16, 190, 26, 84, 141, 189, 152, 157, 177, 61, 47, 4, 30, 190, 101, 235, 100, 61, 141, 36, 252, 61, 135, 239, 178, 187, 210, 11, 34, 62, 161, 238, 19, 189, 185, 167, 197, 188, 111, 229, 19, 62, 156, 81, 5, 62, 145, 241, 19, 62, 29, 167, 176, 61, 94, 207, 169, 61, 86, 48, 133, 59, 23, 232, 239, 61, 117, 207, 177, 61, 46, 188, 244, 189, 14, 131, 216, 189, 112, 50, 250, 61, 92, 123, 50, 62, 112, 83, 244, 188, 40, 170, 3, 189, 128, 116, 154, 189, 216, 121, 120, 61, 30, 44, 179, 60, 178, 51, 153, 189, 39, 109, 1, 62, 43, 121, 183, 61, 116, 144, 193, 188, 223, 105, 159, 60, 49, 221, 24, 190, 172, 44, 103, 189, 231, 6, 154, 189, 179, 211, 24, 190, 149, 115, 155, 189, 52, 44, 32, 190, 53, 174, 142, 61, 41, 227, 150, 189, 97, 192, 36, 62, 15, 62, 145, 60, 133, 67, 214, 61, 82, 103, 178, 189, 147, 188, 52, 190, 237, 20, 147, 61, 97, 51, 49, 62, 169, 18, 255, 189, 91, 76, 6, 62, 12, 181, 30, 190, 36, 138, 40, 62, 72, 201, 87, 61, 172, 13, 237, 59, 10, 238, 51, 189, 248, 177, 181, 61, 223, 121, 142, 188, 233, 107, 6, 190, 30, 60, 26, 190, 6, 102, 23, 62, 81, 82, 235, 187, 62, 240, 150, 189, 149, 182, 25, 61, 77, 160, 11, 190, 30, 176, 46, 62, 23, 53, 88, 61, 20, 63, 45, 190, 48, 61, 183, 61, 227, 3, 194, 59, 90, 35, 16, 61, 95, 78, 153, 187, 162, 89, 37, 190, 76, 57, 53, 61, 55, 19, 248, 61, 84, 84, 205, 61, 149, 80, 54, 186, 85, 182, 47, 60, 176, 55, 210, 60, 34, 56, 35, 189, 93, 194, 108, 58, 80, 85, 211, 60, 159, 165, 214, 61, 180, 222, 158, 189, 132, 83, 19, 62, 168, 57, 142, 188, 58, 104, 128, 189, 229, 56, 239, 189, 21, 123, 162, 61, 95, 201, 139, 189, 77, 28, 96, 61, 253, 88, 210, 61, 179, 127, 55, 189, 55, 56, 160, 61, 44, 193, 219, 61, 161, 10, 78, 187, 229, 59, 141, 61, 52, 96, 25, 189, 226, 76, 60, 187, 92, 231, 147, 61, 76, 79, 208, 60, 243, 46, 25, 62, 143, 136, 34, 62, 162, 187, 60, 188, 236, 252, 74, 61, 226, 133, 253, 188, 223, 87, 67, 61, 23, 218, 44, 189, 39, 141, 169, 188, 226, 30, 204, 61, 51, 60, 44, 62, 66, 209, 6, 62, 247, 19, 142, 189, 122, 241, 137, 189, 65, 243, 9, 62, 241, 97, 123, 189, 122, 65, 134, 189, 184, 208, 122, 61, 101, 200, 38, 190, 167, 226, 152, 189, 119, 236, 115, 61, 138, 111, 23, 190, 220, 118, 255, 61, 194, 110, 153, 189, 197, 91, 240, 61, 60, 179, 142, 61, 124, 11, 205, 189, 55, 10, 119, 58, 52, 88, 136, 186, 131, 227, 231, 60, 123, 71, 127, 189, 187, 207, 54, 61, 79, 20, 33, 190, 126, 88, 75, 60, 240, 188, 131, 61, 130, 2, 39, 62, 136, 126, 168, 60, 191, 241, 224, 61, 76, 174, 15, 62, 91, 166, 251, 61, 17, 255, 139, 61, 72, 223, 169, 189, 221, 118, 218, 61, 184, 175, 27, 61, 99, 5, 182, 61, 82, 116, 242, 61, 193, 177, 31, 62, 73, 78, 255, 189, 159, 12, 103, 189, 78, 216, 207, 61, 195, 67, 126, 189, 184, 188, 171, 59, 15, 180, 48, 190, 167, 216, 187, 60, 92, 120, 28, 190, 96, 226, 9, 190, 224, 36, 39, 62, 155, 193, 45, 190, 233, 60, 17, 188, 162, 41, 40, 61, 87, 251, 8, 190, 205, 134, 17, 190, 9, 246, 13, 190, 219, 127, 103, 61, 204, 230, 203, 59, 239, 177, 213, 60, 193, 101, 91, 61, 110, 158, 190, 189, 67, 237, 241, 61, 96, 123, 209, 60, 134, 237, 206, 60, 231, 136, 112, 189, 102, 121, 30, 190, 99, 102, 145, 61, 95, 7, 206, 189, 119, 34, 226, 189, 50, 69, 194, 189, 197, 36, 114, 189, 11, 18, 13, 62, 207, 60, 9, 190, 97, 41, 32, 190, 53, 213, 130, 61, 137, 48, 97, 61, 209, 175, 101, 60, 254, 91, 246, 61, 44, 77, 175, 188, 187, 175, 92, 61, 226, 78, 195, 189, 121, 211, 222, 61, 8, 220, 248, 61, 120, 173, 153, 189, 97, 239, 21, 189, 191, 222, 1, 62, 185, 68, 21, 62, 33, 45, 16, 190, 61, 61, 165, 189, 108, 6, 51, 62, 35, 195, 70, 61, 231, 151, 224, 61, 128, 244, 171, 61, 153, 89, 47, 190, 181, 120, 239, 189, 232, 17, 176, 189, 34, 208, 2, 62, 187, 161, 191, 61, 68, 57, 204, 189, 189, 165, 20, 190, 60, 228, 227, 189, 122, 208, 250, 187, 116, 77, 36, 190, 181, 8, 23, 190, 171, 244, 17, 190, 46, 229, 39, 62, 33, 88, 184, 187, 206, 181, 242, 61, 176, 192, 36, 190, 30, 200, 193, 189, 14, 167, 14, 62, 96, 169, 248, 61, 177, 127, 23, 189, 152, 57, 179, 61, 246, 248, 182, 189, 233, 193, 13, 190, 39, 97, 233, 61, 224, 199, 168, 189, 40, 212, 7, 62, 212, 105, 77, 61, 190, 231, 114, 61, 125, 253, 149, 61, 62, 124, 3, 62, 72, 118, 98, 189, 226, 234, 40, 190, 125, 82, 6, 190, 161, 8, 15, 190, 24, 190, 237, 186, 147, 38, 191, 61, 150, 187, 195, 61, 14, 175, 244, 59, 55, 81, 9, 190, 97, 71, 221, 189, 111, 68, 93, 189, 255, 171, 141, 189, 188, 80, 155, 61, 67, 92, 186, 61, 248, 95, 99, 61, 170, 165, 99, 188, 88, 122, 199, 61, 135, 14, 192, 61, 211, 39, 35, 190, 95, 151, 234, 189, 119, 80, 47, 62, 28, 231, 133, 61, 164, 70, 24, 62, 146, 235, 216, 61, 213, 9, 180, 189, 190, 70, 12, 62, 23, 61, 30, 190, 224, 6, 146, 189, 60, 136, 1, 61, 87, 55, 21, 62, 37, 59, 76, 61, 104, 42, 248, 60, 23, 135, 156, 61, 249, 9, 149, 189, 12, 103, 21, 190, 206, 207, 41, 190, 255, 186, 196, 61, 70, 112, 198, 61, 98, 179, 34, 62, 244, 175, 39, 62, 110, 198, 215, 60, 241, 169, 44, 189, 160, 156, 144, 189, 82, 215, 186, 189, 224, 135, 118, 189, 34, 204, 30, 190, 238, 34, 88, 187, 57, 81, 205, 189, 220, 54, 47, 62, 122, 236, 216, 61, 164, 40, 201, 188, 95, 128, 26, 61, 230, 87, 35, 189, 0, 62, 43, 62, 200, 57, 253, 186, 168, 149, 237, 188, 213, 127, 201, 189, 51, 117, 20, 62, 62, 132, 151, 189, 75, 197, 144, 189, 6, 134, 224, 61, 96, 111, 39, 189, 121, 60, 14, 62, 26, 18, 48, 61, 128, 239, 59, 189, 225, 122, 165, 188, 157, 102, 207, 187, 58, 18, 148, 61, 220, 21, 18, 62, 221, 135, 154, 61, 49, 186, 42, 62, 81, 175, 116, 188, 249, 12, 222, 189, 82, 219, 37, 62, 169, 28, 201, 189, 249, 140, 11, 62, 94, 120, 134, 61, 197, 2, 89, 188, 222, 29, 254, 60, 6, 253, 221, 189, 93, 106, 153, 189, 200, 84, 243, 61, 202, 108, 54, 189, 131, 244, 15, 62, 144, 82, 98, 59, 253, 4, 121, 61, 180, 110, 28, 189, 249, 31, 221, 61, 209, 183, 11, 190, 62, 34, 46, 190, 189, 165, 27, 62, 115, 174, 46, 61, 181, 97, 71, 188, 126, 78, 222, 61, 33, 134, 28, 61, 102, 14, 155, 189, 212, 11, 36, 62, 159, 137, 249, 189, 138, 66, 28, 62, 95, 92, 13, 62, 129, 208, 46, 62, 86, 26, 234, 61, 124, 82, 77, 189, 15, 141, 131, 189, 53, 245, 224, 60, 139, 56, 127, 189, 63, 2, 197, 189, 100, 106, 144, 189, 120, 72, 116, 189, 39, 22, 250, 61, 191, 28, 135, 61, 226, 154, 52, 62, 87, 30, 189, 61, 80, 244, 203, 61, 193, 111, 9, 62, 124, 137, 42, 62, 69, 28, 102, 61, 118, 36, 32, 188, 205, 206, 216, 61, 199, 120, 38, 190, 234, 200, 224, 189, 153, 22, 25, 60, 238, 164, 158, 61, 123, 208, 32, 190, 252, 22, 46, 62, 127, 145, 168, 189, 88, 254, 19, 62, 147, 250, 182, 189, 157, 216, 205, 61, 10, 163, 106, 188, 230, 71, 14, 62, 134, 78, 26, 62, 6, 24, 130, 188, 113, 250, 131, 189, 184, 224, 21, 190, 227, 24, 73, 61, 5, 124, 246, 61, 2, 153, 247, 60, 208, 169, 247, 61, 124, 104, 38, 190, 237, 48, 19, 62, 36, 155, 166, 189, 113, 190, 43, 189, 98, 152, 244, 60, 170, 126, 51, 62, 244, 133, 29, 190, 35, 160, 139, 61, 254, 76, 30, 190, 103, 45, 197, 61, 248, 6, 51, 189, 156, 164, 198, 61, 85, 38, 9, 190, 192, 124, 29, 190, 251, 0, 247, 188, 106, 163, 188, 61, 30, 65, 125, 61, 6, 61, 210, 61, 76, 214, 32, 188, 9, 164, 217, 60, 195, 75, 46, 190, 208, 207, 161, 189, 134, 35, 27, 62, 67, 115, 0, 189, 106, 87, 180, 189, 47, 208, 185, 189, 19, 17, 199, 61, 112, 93, 166, 188, 98, 163, 148, 188, 96, 221, 253, 61, 204, 244, 165, 61, 85, 254, 28, 62, 98, 22, 236, 61, 211, 204, 4, 190, 242, 215, 4, 187, 225, 0, 28, 190, 189, 108, 164, 61, 188, 89, 242, 61, 25, 16, 72, 187, 100, 65, 249, 61, 29, 62, 135, 61, 20, 52, 22, 62, 220, 224, 194, 61, 222, 84, 210, 61, 104, 147, 146, 61, 12, 144, 243, 61, 166, 180, 241, 61, 236, 18, 230, 61, 96, 145, 74, 61, 85, 155, 38, 190, 160, 169, 64, 61, 58, 136, 234, 189, 11, 253, 47, 190, 178, 61, 37, 190, 11, 190, 48, 62, 235, 176, 52, 190, 10, 100, 205, 189, 234, 139, 44, 62, 1, 202, 52, 62, 80, 156, 249, 61, 60, 213, 160, 60, 80, 212, 154, 189, 187, 226, 254, 189, 52, 246, 106, 189, 16, 184, 3, 190, 177, 69, 45, 61, 43, 251, 20, 62, 31, 119, 125, 188, 16, 61, 23, 62, 25, 133, 219, 189, 121, 127, 245, 60, 147, 166, 1, 62, 209, 247, 160, 61, 162, 45, 248, 60, 161, 64, 16, 61, 190, 108, 6, 190, 137, 48, 154, 61, 143, 57, 37, 61, 189, 43, 45, 62, 137, 110, 62, 189, 34, 209, 188, 188, 239, 0, 239, 60, 55, 17, 25, 190, 52, 164, 227, 58, 39, 208, 24, 190, 207, 12, 71, 189, 205, 54, 95, 61, 190, 140, 102, 189, 92, 179, 31, 190, 101, 30, 118, 189, 61, 104, 14, 62, 200, 174, 10, 62, 64, 113, 38, 62, 13, 147, 30, 62, 210, 250, 35, 190, 27, 234, 11, 190, 128, 243, 41, 190, 176, 17, 202, 189, 73, 43, 189, 189, 6, 164, 49, 62, 224, 152, 26, 190, 250, 237, 23, 62, 64, 15, 120, 189, 216, 164, 57, 61, 202, 129, 225, 187, 234, 208, 22, 188, 147, 130, 235, 60, 38, 224, 209, 61, 136, 137, 227, 61, 49, 176, 141, 187, 239, 71, 48, 62, 251, 53, 44, 62, 137, 122, 150, 61, 26, 62, 194, 61, 86, 53, 30, 190, 155, 120, 70, 61, 169, 231, 186, 61, 70, 113, 12, 190, 245, 86, 165, 61, 55, 149, 159, 61, 0, 55, 40, 190, 211, 125, 10, 190, 131, 12, 0, 190, 253, 199, 192, 60, 131, 58, 3, 62, 242, 43, 75, 58, 150, 130, 212, 60, 39, 85, 162, 61, 212, 103, 182, 60, 81, 252, 164, 61, 96, 173, 143, 61, 157, 73, 44, 62, 20, 10, 250, 61, 67, 253, 154, 188, 115, 191, 33, 62, 75, 199, 127, 189, 162, 159, 29, 190, 189, 49, 42, 190, 86, 119, 38, 190, 78, 63, 18, 190, 158, 240, 24, 190, 56, 111, 155, 188, 152, 13, 45, 62, 251, 39, 167, 61, 145, 120, 69, 60, 80, 159, 182, 61, 131, 51, 52, 189, 196, 208, 243, 189, 2, 59, 30, 61, 17, 96, 241, 189, 75, 30, 9, 190, 206, 46, 31, 61, 190, 12, 33, 189, 131, 216, 44, 62};
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
                    alignas(float) const unsigned char memory[] = {192, 32, 250, 61, 150, 132, 239, 59, 251, 68, 27, 189, 145, 114, 138, 189, 99, 45, 74, 60, 81, 161, 2, 190, 45, 120, 128, 189, 177, 205, 15, 190, 82, 46, 113, 189, 220, 103, 134, 60, 72, 102, 182, 188, 129, 133, 35, 62, 59, 235, 221, 189, 115, 3, 82, 187, 198, 6, 208, 60, 60, 75, 207, 189, 32, 229, 78, 187, 186, 222, 184, 189, 146, 185, 255, 61, 130, 113, 164, 189, 36, 195, 39, 62, 63, 87, 22, 62, 201, 51, 230, 189, 202, 108, 196, 189, 16, 120, 110, 61, 170, 6, 28, 190, 151, 111, 204, 61, 74, 159, 227, 61, 29, 88, 50, 190, 100, 235, 34, 189, 72, 234, 13, 190, 142, 90, 45, 190};
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
                    alignas(float) const unsigned char memory[] = {64, 197, 200, 189, 149, 45, 125, 61, 161, 25, 21, 62, 254, 170, 248, 189, 4, 232, 44, 190, 218, 66, 43, 62, 111, 90, 248, 61, 202, 30, 38, 190, 200, 201, 46, 62, 14, 194, 15, 190, 29, 209, 231, 189, 124, 96, 242, 189, 66, 79, 211, 187, 96, 85, 49, 62, 105, 238, 207, 61, 206, 0, 175, 189, 167, 247, 9, 61, 68, 96, 135, 61, 190, 203, 211, 61, 14, 242, 128, 61, 227, 3, 196, 61, 178, 239, 47, 189, 118, 86, 204, 189, 15, 65, 146, 189, 18, 97, 131, 189, 48, 159, 177, 61, 124, 235, 20, 62, 231, 83, 23, 190, 52, 124, 200, 189, 82, 19, 45, 190, 82, 170, 215, 61, 94, 157, 8, 189};
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
                    alignas(float) const unsigned char memory[] = {20, 169, 147, 189};
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
    alignas(float) const unsigned char memory[] = {223, 205, 126, 61, 240, 166, 46, 63, 150, 35, 117, 189, 83, 133, 134, 61, 178, 123, 88, 191, 253, 109, 67, 63, 35, 207, 126, 190, 249, 211, 78, 61, 47, 181, 97, 191, 20, 128, 164, 63, 132, 167, 179, 191, 224, 196, 210, 190, 244, 41, 10, 64, 144, 198, 248, 191, 128, 7, 177, 63, 44, 40, 4, 61, 170, 244, 10, 191, 149, 184, 30, 64, 81, 40, 138, 62, 105, 183, 103, 62, 21, 155, 128, 63, 71, 43, 95, 190, 19, 114, 227, 63, 81, 52, 121, 63, 90, 148, 79, 62, 10, 163, 94, 191, 5, 144, 25, 64, 138, 116, 149, 191, 207, 163, 239, 61, 0, 137, 218, 63, 0, 136, 145, 191, 235, 4, 180, 190, 173, 95, 165, 62, 48, 26, 75, 63, 74, 34, 154, 63, 142, 130, 131, 63, 70, 250, 155, 191, 82, 201, 198, 62, 119, 151, 28, 63};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {90, 251, 105, 189, 48, 101, 7, 62, 192, 26, 160, 58, 181, 186, 10, 62, 92, 223, 61, 62, 128, 124, 235, 61, 28, 21, 118, 61, 126, 12, 190, 189, 218, 133, 239, 61, 0, 236, 140, 61, 88, 192, 124, 61, 88, 94, 62, 189, 176, 134, 209, 60};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-22_16-21-36/85b1858_zoo_environment_algorithm/pendulum-v1_ppo/0003/steps/000000000000000";
   char commit_hash[] = "85b1858df64b35417cf5021a83a97320eba83b00";
}