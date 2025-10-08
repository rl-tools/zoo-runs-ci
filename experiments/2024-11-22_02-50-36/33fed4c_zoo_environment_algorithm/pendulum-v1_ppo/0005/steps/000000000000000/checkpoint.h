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
                    alignas(float) const unsigned char memory[] = {130, 70, 4, 63, 88, 171, 70, 190, 8, 205, 171, 190, 203, 206, 0, 191, 219, 121, 7, 191, 153, 149, 25, 190, 74, 96, 15, 63, 26, 200, 224, 61, 134, 203, 236, 190, 185, 66, 0, 62, 162, 1, 192, 189, 197, 195, 15, 61, 9, 100, 162, 188, 93, 222, 16, 62, 17, 68, 192, 62, 240, 195, 150, 62, 128, 116, 139, 62, 39, 24, 2, 190, 230, 210, 153, 190, 169, 124, 186, 61, 71, 154, 203, 190, 233, 159, 132, 62, 116, 233, 16, 63, 6, 224, 244, 62, 99, 39, 255, 188, 197, 67, 205, 189, 187, 16, 83, 62, 33, 97, 178, 62, 163, 104, 191, 62, 194, 197, 69, 189, 97, 139, 77, 62, 129, 66, 129, 62, 82, 50, 208, 190, 243, 248, 40, 190, 226, 195, 139, 62, 54, 185, 9, 62, 226, 243, 135, 189, 244, 157, 65, 61, 57, 157, 179, 61, 210, 113, 245, 190, 54, 72, 7, 63, 185, 152, 163, 190, 2, 201, 166, 190, 34, 87, 167, 190, 254, 125, 192, 62, 91, 11, 60, 189, 225, 22, 18, 63, 240, 27, 88, 61, 108, 9, 170, 62, 252, 142, 74, 62, 173, 206, 141, 62, 136, 31, 130, 62, 251, 124, 128, 62, 175, 19, 176, 62, 153, 199, 225, 62, 220, 56, 47, 190, 132, 34, 190, 62, 36, 117, 101, 190, 185, 162, 230, 189, 67, 17, 145, 62, 203, 43, 4, 190, 213, 120, 132, 62, 39, 118, 15, 189, 250, 91, 120, 62, 141, 169, 16, 63, 223, 121, 31, 190, 223, 151, 252, 62, 232, 53, 21, 190, 67, 69, 137, 62, 250, 113, 151, 190, 113, 218, 246, 190, 3, 112, 84, 62, 160, 48, 2, 191, 137, 37, 160, 62, 212, 163, 210, 62, 168, 132, 38, 188, 76, 145, 127, 190, 91, 41, 26, 61, 125, 241, 205, 190, 25, 249, 7, 189, 44, 18, 180, 62, 192, 145, 6, 62, 229, 198, 138, 62, 60, 66, 148, 190, 213, 152, 246, 189, 110, 180, 71, 190, 191, 17, 142, 61, 30, 9, 132, 61, 134, 1, 8, 62, 178, 158, 118, 61, 37, 5, 50, 189, 228, 222, 12, 63, 66, 201, 73, 62, 101, 213, 226, 62, 216, 178, 188, 190, 170, 251, 191, 188};
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
                    alignas(float) const unsigned char memory[] = {245, 66, 232, 62, 172, 233, 189, 62, 188, 244, 231, 190, 148, 6, 13, 61, 175, 157, 66, 190, 232, 72, 146, 189, 177, 156, 170, 60, 172, 222, 43, 62, 48, 26, 189, 62, 179, 115, 222, 62, 230, 178, 3, 191, 48, 165, 178, 62, 187, 71, 119, 62, 115, 206, 221, 190, 55, 200, 228, 189, 119, 116, 128, 62, 140, 123, 144, 190, 195, 33, 234, 61, 48, 72, 1, 63, 54, 167, 145, 190, 34, 189, 145, 62, 240, 9, 222, 189, 14, 31, 106, 189, 29, 222, 119, 62, 151, 84, 240, 189, 197, 133, 156, 62, 115, 139, 183, 190, 217, 83, 67, 190, 76, 205, 183, 190, 153, 130, 203, 62, 77, 197, 227, 62, 191, 46, 199, 62};
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
                    alignas(float) const unsigned char memory[] = {92, 0, 243, 188, 100, 100, 10, 188, 161, 3, 180, 189, 198, 203, 10, 189, 174, 143, 33, 62, 123, 36, 175, 61, 177, 229, 46, 62, 59, 0, 236, 61, 12, 48, 150, 60, 44, 172, 132, 61, 28, 117, 144, 60, 254, 152, 2, 190, 74, 13, 81, 188, 109, 220, 146, 61, 30, 214, 37, 189, 204, 183, 31, 190, 147, 241, 5, 189, 178, 136, 222, 189, 126, 145, 155, 189, 178, 202, 25, 62, 241, 181, 52, 190, 35, 109, 9, 189, 102, 98, 189, 188, 5, 170, 254, 189, 33, 244, 252, 60, 113, 253, 131, 61, 67, 247, 3, 60, 1, 169, 243, 189, 53, 49, 131, 61, 49, 167, 86, 61, 119, 22, 21, 190, 190, 217, 179, 189, 49, 10, 38, 190, 67, 91, 202, 61, 72, 19, 38, 62, 221, 163, 219, 189, 130, 11, 29, 190, 89, 80, 210, 187, 56, 234, 149, 59, 180, 30, 51, 189, 188, 211, 101, 189, 164, 193, 35, 190, 12, 184, 103, 61, 136, 7, 133, 189, 92, 100, 249, 61, 233, 6, 88, 61, 53, 106, 22, 61, 154, 96, 176, 189, 12, 153, 252, 60, 159, 97, 135, 188, 27, 166, 10, 190, 246, 206, 5, 190, 224, 97, 152, 61, 25, 144, 9, 62, 177, 242, 213, 189, 9, 207, 49, 62, 194, 46, 95, 187, 194, 127, 18, 190, 0, 196, 39, 190, 0, 34, 203, 61, 126, 169, 133, 189, 202, 88, 131, 189, 90, 110, 3, 62, 196, 249, 185, 188, 150, 113, 106, 61, 191, 71, 135, 60, 135, 106, 128, 189, 10, 105, 63, 189, 46, 37, 44, 190, 96, 156, 237, 61, 8, 66, 146, 61, 135, 240, 161, 189, 229, 232, 214, 61, 178, 134, 7, 190, 252, 148, 8, 190, 94, 213, 181, 60, 30, 19, 254, 61, 238, 118, 168, 189, 18, 96, 19, 62, 132, 37, 199, 61, 68, 186, 218, 189, 117, 34, 232, 189, 94, 124, 21, 190, 135, 25, 205, 61, 211, 36, 5, 62, 58, 101, 28, 61, 1, 229, 227, 61, 150, 231, 37, 190, 239, 0, 142, 189, 194, 120, 177, 60, 17, 187, 43, 190, 76, 125, 115, 61, 18, 237, 187, 61, 14, 183, 30, 62, 7, 252, 72, 61, 34, 23, 207, 61, 190, 84, 181, 61, 211, 64, 20, 62, 43, 169, 136, 186, 84, 226, 127, 61, 108, 140, 37, 190, 181, 175, 156, 189, 194, 111, 229, 61, 232, 211, 144, 188, 71, 22, 48, 190, 158, 57, 50, 62, 78, 239, 144, 60, 240, 196, 178, 189, 210, 118, 193, 60, 11, 97, 11, 62, 119, 35, 12, 190, 146, 239, 96, 189, 186, 74, 30, 190, 16, 118, 157, 189, 165, 108, 216, 60, 204, 255, 145, 61, 33, 40, 168, 187, 211, 119, 86, 189, 40, 201, 143, 189, 172, 49, 36, 190, 159, 156, 38, 190, 98, 204, 37, 189, 65, 230, 65, 61, 217, 9, 210, 61, 72, 1, 8, 190, 254, 228, 19, 62, 76, 209, 48, 190, 22, 14, 28, 190, 216, 114, 33, 62, 70, 178, 143, 189, 94, 81, 159, 189, 138, 121, 231, 189, 43, 199, 230, 61, 78, 197, 28, 190, 144, 216, 41, 190, 221, 47, 202, 61, 200, 172, 233, 61, 73, 187, 15, 189, 232, 86, 152, 61, 186, 12, 184, 189, 255, 47, 254, 61, 3, 180, 9, 60, 3, 58, 37, 190, 200, 104, 177, 189, 94, 188, 30, 59, 22, 207, 254, 61, 239, 227, 211, 189, 109, 29, 191, 187, 167, 95, 167, 61, 20, 87, 50, 61, 129, 175, 81, 61, 67, 69, 43, 62, 184, 193, 205, 61, 25, 89, 82, 189, 11, 114, 206, 188, 187, 96, 199, 189, 241, 148, 60, 61, 27, 80, 45, 62, 204, 69, 84, 189, 196, 49, 252, 60, 38, 99, 46, 62, 120, 82, 40, 61, 221, 172, 41, 62, 38, 179, 89, 187, 216, 130, 148, 61, 209, 101, 176, 189, 60, 0, 46, 190, 126, 134, 190, 189, 88, 101, 35, 61, 244, 108, 250, 59, 170, 86, 181, 189, 43, 82, 118, 61, 154, 40, 6, 190, 169, 248, 143, 60, 177, 172, 65, 189, 139, 197, 43, 189, 206, 39, 217, 189, 244, 131, 80, 61, 1, 244, 192, 61, 177, 2, 16, 62, 188, 48, 29, 62, 178, 81, 206, 59, 237, 117, 43, 190, 107, 4, 10, 62, 250, 160, 176, 189, 199, 206, 221, 189, 107, 74, 169, 189, 35, 154, 234, 61, 191, 125, 1, 190, 167, 224, 126, 189, 208, 117, 35, 62, 36, 214, 139, 61, 71, 117, 146, 61, 195, 67, 80, 189, 221, 16, 210, 61, 47, 77, 35, 190, 123, 144, 209, 189, 24, 157, 189, 189, 45, 83, 99, 61, 237, 152, 10, 62, 17, 206, 21, 62, 137, 36, 40, 62, 66, 115, 195, 189, 213, 243, 97, 61, 241, 57, 32, 190, 152, 22, 147, 189, 5, 196, 151, 189, 148, 137, 31, 190, 56, 160, 161, 188, 171, 240, 3, 62, 209, 38, 50, 190, 101, 180, 249, 189, 82, 186, 196, 61, 113, 221, 166, 189, 43, 104, 196, 189, 152, 157, 139, 60, 33, 249, 142, 61, 204, 94, 179, 189, 217, 207, 237, 61, 216, 146, 249, 61, 162, 28, 131, 60, 45, 72, 77, 58, 195, 73, 147, 58, 138, 96, 177, 187, 36, 184, 18, 62, 219, 55, 140, 61, 220, 87, 22, 62, 154, 239, 184, 189, 222, 20, 187, 189, 202, 168, 212, 188, 153, 57, 46, 190, 120, 58, 70, 61, 23, 155, 118, 61, 198, 181, 8, 190, 62, 33, 166, 189, 24, 54, 36, 62, 0, 215, 47, 190, 28, 106, 227, 188, 184, 218, 17, 190, 213, 85, 146, 188, 54, 18, 235, 188, 147, 62, 201, 189, 79, 96, 9, 190, 182, 159, 0, 190, 25, 23, 212, 189, 220, 45, 177, 61, 104, 112, 177, 61, 190, 204, 254, 61, 93, 87, 128, 188, 125, 49, 170, 188, 169, 236, 11, 190, 108, 106, 173, 189, 175, 32, 206, 189, 131, 216, 17, 190, 195, 195, 27, 62, 252, 177, 30, 190, 100, 80, 5, 190, 203, 115, 77, 61, 85, 144, 36, 62, 97, 126, 81, 61, 114, 179, 207, 61, 17, 132, 130, 61, 255, 106, 129, 189, 80, 91, 226, 60, 186, 230, 200, 188, 58, 5, 206, 61, 109, 154, 17, 60, 210, 10, 233, 61, 77, 141, 187, 60, 173, 161, 84, 61, 195, 85, 212, 61, 55, 247, 231, 189, 150, 37, 13, 190, 211, 214, 163, 61, 212, 60, 140, 188, 150, 226, 155, 189, 93, 113, 155, 60, 100, 65, 247, 61, 46, 155, 21, 62, 199, 57, 203, 60, 192, 130, 25, 62, 47, 38, 22, 190, 98, 196, 243, 187, 213, 199, 20, 62, 140, 188, 12, 190, 138, 122, 89, 188, 196, 65, 146, 61, 40, 89, 32, 62, 12, 92, 38, 190, 23, 201, 14, 190, 210, 29, 14, 190, 174, 74, 10, 62, 40, 41, 185, 61, 2, 183, 28, 190, 236, 228, 37, 190, 226, 5, 184, 188, 193, 73, 140, 188, 114, 212, 138, 61, 222, 222, 228, 61, 235, 173, 203, 189, 66, 7, 234, 188, 69, 96, 5, 190, 91, 126, 224, 189, 251, 24, 238, 61, 229, 167, 248, 61, 177, 7, 155, 60, 40, 49, 14, 190, 8, 127, 199, 189, 174, 125, 153, 189, 7, 45, 178, 60, 189, 239, 204, 189, 112, 77, 236, 61, 129, 252, 78, 188, 87, 229, 17, 62, 105, 161, 130, 189, 2, 30, 57, 61, 159, 27, 20, 62, 78, 22, 213, 61, 249, 208, 206, 61, 145, 123, 143, 61, 187, 82, 244, 188, 110, 94, 2, 190, 97, 75, 185, 189, 67, 239, 33, 61, 21, 58, 137, 60, 116, 130, 254, 61, 194, 208, 25, 62, 170, 107, 25, 62, 152, 194, 1, 61, 240, 231, 106, 61, 47, 100, 121, 188, 123, 132, 174, 189, 216, 162, 196, 60, 66, 157, 161, 189, 166, 243, 201, 188, 113, 49, 68, 61, 83, 206, 172, 189, 197, 124, 162, 61, 108, 252, 23, 190, 21, 197, 140, 189, 82, 23, 29, 62, 211, 219, 128, 61, 16, 212, 195, 189, 208, 116, 22, 59, 21, 36, 48, 190, 50, 128, 238, 61, 105, 197, 228, 188, 211, 184, 132, 61, 145, 44, 29, 190, 246, 120, 20, 62, 19, 191, 2, 60, 184, 152, 9, 190, 57, 254, 245, 61, 223, 103, 192, 189, 128, 74, 34, 62, 107, 76, 184, 60, 156, 58, 213, 60, 165, 170, 206, 189, 200, 132, 51, 190, 147, 71, 248, 189, 248, 226, 40, 190, 34, 65, 67, 61, 134, 134, 253, 188, 218, 86, 143, 189, 23, 175, 113, 188, 181, 5, 15, 62, 95, 116, 1, 188, 126, 141, 90, 61, 220, 92, 131, 61, 47, 102, 16, 62, 166, 143, 184, 61, 169, 91, 193, 189, 225, 69, 232, 61, 224, 120, 174, 189, 112, 145, 94, 189, 225, 158, 193, 61, 46, 119, 38, 61, 4, 124, 171, 189, 7, 37, 27, 189, 204, 11, 70, 61, 238, 42, 163, 61, 5, 13, 73, 61, 28, 214, 183, 60, 44, 120, 234, 58, 27, 7, 172, 61, 34, 147, 34, 189, 249, 237, 244, 61, 40, 184, 66, 61, 170, 133, 215, 61, 181, 39, 5, 62, 163, 154, 181, 60, 16, 173, 91, 61, 181, 66, 33, 62, 156, 118, 6, 190, 251, 55, 241, 189, 132, 228, 20, 190, 239, 199, 163, 189, 216, 127, 128, 61, 97, 105, 28, 190, 65, 31, 81, 189, 114, 182, 130, 61, 7, 39, 134, 189, 85, 245, 244, 189, 233, 54, 13, 62, 132, 36, 91, 189, 94, 192, 3, 62, 249, 106, 242, 189, 187, 82, 221, 61, 53, 231, 81, 189, 52, 158, 78, 189, 183, 253, 100, 189, 130, 223, 75, 61, 49, 103, 172, 189, 244, 31, 15, 61, 239, 56, 38, 62, 223, 124, 191, 189, 228, 228, 1, 61, 87, 40, 204, 60, 133, 239, 51, 62, 157, 55, 49, 190, 128, 5, 34, 190, 85, 4, 160, 60, 54, 14, 190, 189, 34, 88, 49, 62, 222, 193, 116, 189, 51, 107, 0, 62, 78, 230, 217, 61, 116, 34, 151, 189, 42, 31, 163, 188, 153, 151, 187, 187, 157, 79, 30, 190, 210, 27, 248, 188, 156, 152, 131, 189, 60, 163, 180, 188, 81, 82, 239, 61, 88, 110, 36, 190, 125, 167, 172, 61, 199, 243, 23, 189, 0, 36, 160, 189, 13, 98, 163, 188, 49, 134, 165, 61, 38, 109, 248, 189, 79, 142, 130, 189, 238, 101, 232, 189, 64, 150, 251, 189, 209, 230, 0, 62, 116, 139, 47, 62, 180, 79, 184, 189, 101, 142, 95, 60, 26, 79, 29, 61, 90, 207, 190, 189, 144, 46, 23, 62, 30, 195, 34, 190, 120, 18, 79, 61, 68, 48, 40, 62, 177, 17, 212, 188, 185, 177, 20, 62, 222, 216, 20, 189, 148, 178, 80, 189, 49, 80, 35, 190, 149, 155, 11, 190, 220, 154, 23, 190, 73, 3, 233, 188, 52, 216, 142, 188, 98, 165, 229, 189, 92, 229, 24, 62, 132, 42, 78, 61, 166, 15, 193, 189, 252, 84, 196, 61, 147, 138, 5, 62, 151, 45, 189, 61, 104, 187, 221, 61, 29, 123, 29, 190, 13, 240, 235, 189, 117, 17, 49, 61, 109, 218, 135, 189, 39, 85, 13, 188, 61, 98, 207, 188, 8, 104, 24, 61, 42, 18, 2, 62, 78, 71, 66, 61, 127, 165, 16, 62, 18, 45, 235, 61, 96, 228, 236, 189, 188, 155, 136, 186, 187, 75, 175, 189, 246, 212, 238, 60, 224, 254, 213, 189, 4, 124, 133, 188, 24, 24, 173, 61, 175, 7, 175, 189, 23, 223, 233, 189, 166, 94, 43, 61, 251, 202, 39, 189, 182, 110, 218, 60, 39, 127, 136, 189, 143, 4, 5, 62, 204, 120, 195, 61, 144, 182, 25, 62, 213, 212, 52, 190, 142, 196, 214, 60, 93, 7, 182, 61, 225, 135, 140, 61, 169, 128, 13, 62, 161, 29, 28, 189, 236, 22, 7, 189, 107, 131, 127, 61, 255, 109, 62, 61, 61, 95, 52, 62, 142, 134, 249, 61, 118, 111, 31, 62, 74, 148, 119, 189, 27, 33, 182, 61, 70, 162, 30, 62, 250, 179, 128, 189, 23, 6, 39, 190, 211, 78, 204, 189, 201, 230, 43, 190, 180, 173, 181, 61, 113, 76, 233, 189, 15, 156, 234, 60, 14, 41, 141, 189, 221, 147, 48, 190, 77, 127, 47, 62, 176, 112, 178, 59, 217, 140, 32, 62, 210, 253, 46, 62, 208, 31, 191, 61, 151, 69, 43, 61, 228, 64, 50, 61, 190, 46, 219, 189, 5, 193, 41, 62, 80, 14, 224, 61, 78, 122, 211, 60, 87, 203, 153, 61, 182, 166, 207, 189, 130, 102, 50, 190, 52, 180, 4, 190, 110, 8, 160, 61, 115, 251, 190, 61, 16, 171, 137, 61, 151, 62, 30, 60, 192, 152, 197, 61, 121, 209, 229, 61, 90, 197, 212, 61, 83, 86, 23, 190, 78, 113, 118, 61, 251, 205, 218, 61, 243, 100, 200, 61, 168, 225, 188, 189, 63, 59, 136, 61, 154, 78, 186, 189, 189, 81, 206, 188, 157, 185, 172, 189, 238, 12, 239, 61, 71, 89, 223, 189, 122, 145, 22, 62, 191, 76, 65, 188, 170, 227, 200, 61, 123, 52, 176, 189, 62, 240, 21, 190, 166, 198, 45, 62, 38, 205, 34, 62, 219, 212, 189, 189, 136, 128, 4, 188, 214, 220, 173, 60, 248, 143, 11, 62, 180, 221, 172, 61, 32, 67, 22, 190, 85, 117, 22, 62, 46, 168, 30, 62, 184, 246, 10, 61, 211, 14, 134, 189, 174, 234, 17, 190, 255, 160, 228, 188, 186, 251, 131, 60, 60, 26, 224, 61, 29, 36, 20, 190, 212, 175, 15, 62, 113, 107, 211, 189, 13, 134, 145, 61, 1, 109, 240, 60, 26, 135, 248, 189, 101, 44, 38, 189, 7, 207, 34, 190, 164, 127, 14, 190, 75, 94, 94, 61, 65, 94, 49, 190, 60, 104, 248, 60, 3, 107, 15, 62, 157, 153, 8, 59, 165, 83, 115, 61, 191, 32, 37, 190, 94, 249, 126, 189, 38, 213, 143, 188, 105, 197, 11, 62, 62, 20, 244, 60, 14, 39, 41, 62, 174, 8, 226, 189, 144, 127, 23, 190, 160, 255, 94, 61, 71, 110, 173, 189, 138, 78, 77, 189, 64, 224, 43, 60, 195, 62, 15, 190, 122, 74, 24, 62, 159, 245, 193, 189, 175, 73, 193, 189, 35, 157, 29, 62, 84, 78, 249, 188, 78, 57, 17, 62, 110, 80, 42, 190, 117, 77, 106, 189, 240, 202, 45, 61, 100, 243, 198, 189, 125, 94, 143, 61, 78, 70, 229, 189, 54, 165, 17, 189, 136, 29, 33, 190, 104, 186, 42, 62, 91, 30, 37, 62, 18, 46, 11, 61, 74, 188, 255, 189, 45, 66, 226, 61, 76, 187, 37, 62, 161, 119, 243, 189, 217, 247, 104, 189, 71, 131, 91, 61, 204, 139, 31, 190, 231, 37, 31, 190, 239, 37, 231, 61, 113, 69, 33, 190, 217, 175, 219, 61, 64, 130, 66, 189, 150, 114, 84, 188, 113, 5, 180, 61, 175, 52, 197, 61, 254, 71, 148, 189, 20, 42, 180, 61, 101, 167, 253, 61, 241, 161, 21, 190, 23, 219, 156, 189, 228, 197, 208, 61, 192, 110, 1, 190, 190, 31, 142, 189, 89, 119, 20, 62, 84, 99, 38, 62, 71, 97, 24, 190, 13, 149, 157, 61, 88, 101, 163, 61, 247, 131, 120, 61, 51, 229, 24, 190, 185, 215, 91, 189, 43, 31, 118, 61, 73, 122, 248, 189, 211, 48, 31, 190, 161, 215, 167, 61, 184, 189, 12, 190, 152, 23, 47, 62, 35, 212, 14, 188, 83, 169, 27, 190, 158, 181, 23, 190, 102, 5, 13, 62, 124, 115, 41, 190, 146, 38, 15, 189, 255, 47, 74, 61, 29, 181, 16, 62, 128, 17, 15, 62, 80, 29, 44, 190, 13, 65, 194, 187, 247, 209, 116, 60, 8, 126, 244, 61, 177, 82, 151, 61, 51, 116, 129, 189, 10, 198, 28, 62, 98, 246, 141, 189, 51, 188, 43, 62, 155, 24, 252, 61, 96, 84, 255, 60, 155, 202, 66, 61, 28, 127, 33, 62, 48, 85, 23, 190, 143, 175, 148, 61, 163, 93, 170, 61, 42, 161, 76, 188, 197, 72, 5, 190, 91, 65, 22, 62, 8, 224, 12, 62, 49, 136, 230, 60, 145, 94, 166, 61, 246, 214, 188, 189, 177, 149, 250, 189, 10, 5, 32, 189, 253, 152, 127, 189, 147, 147, 225, 188, 188, 52, 238, 189, 5, 63, 243, 189, 217, 203, 233, 61, 236, 247, 43, 190, 124, 112, 34, 62, 212, 248, 33, 190, 55, 23, 50, 190, 179, 38, 129, 61, 197, 132, 23, 190, 247, 137, 118, 188, 105, 240, 251, 189, 33, 105, 42, 60, 40, 249, 218, 189, 212, 127, 255, 61, 52, 118, 230, 61, 122, 113, 89, 189, 51, 213, 13, 62, 218, 133, 227, 189, 55, 78, 132, 188, 146, 244, 157, 189, 118, 99, 174, 61, 160, 36, 42, 190, 119, 80, 217, 60, 156, 253, 153, 189, 10, 14, 133, 187, 98, 222, 125, 61, 227, 28, 81, 61, 221, 159, 208, 60, 28, 78, 34, 62, 79, 145, 66, 61, 253, 253, 218, 61, 192, 87, 41, 62, 116, 182, 1, 189, 215, 245, 204, 188, 153, 255, 179, 189, 233, 7, 206, 189, 198, 17, 52, 190, 224, 211, 44, 190, 127, 33, 151, 189, 227, 36, 127, 61, 130, 125, 45, 62, 234, 115, 220, 188, 221, 179, 255, 189, 185, 48, 104, 60, 142, 219, 53, 187, 236, 247, 29, 190, 178, 171, 2, 190, 145, 136, 1, 190, 66, 240, 3, 61, 220, 205, 47, 62, 187, 195, 207, 189, 107, 244, 78, 60, 51, 51, 210, 61, 249, 230, 201, 189, 254, 31, 22, 190, 26, 140, 77, 61, 176, 122, 222, 188, 127, 65, 164, 61, 189, 68, 26, 190, 218, 158, 190, 58, 203, 13, 184, 188, 89, 226, 119, 189, 88, 62, 167, 61, 151, 227, 160, 61, 104, 68, 197, 189, 149, 225, 5, 190, 20, 190, 8, 190, 114, 167, 159, 61, 85, 26, 43, 62, 175, 87, 151, 188, 16, 176, 50, 188, 80, 237, 191, 59, 191, 191, 32, 62, 11, 98, 45, 61, 211, 47, 2, 62, 253, 113, 18, 190, 244, 192, 133, 189, 242, 186, 44, 190, 188, 0, 142, 61, 157, 36, 13, 62, 121, 207, 10, 190, 243, 120, 17, 61, 222, 238, 177, 188, 42, 48, 191, 59, 211, 64, 157, 61, 171, 130, 46, 62, 188, 42, 13, 62, 210, 226, 31, 62, 11, 137, 165, 60, 52, 138, 177, 61, 169, 40, 65, 61, 251, 137, 193, 189, 13, 194, 58, 60, 229, 135, 29, 62, 84, 93, 95, 189, 41, 80, 92, 188, 250, 92, 250, 61, 158, 71, 116, 61, 255, 15, 215, 60, 210, 110, 94, 188, 102, 23, 173, 189, 253, 196, 10, 190, 189, 33, 215, 61, 238, 127, 3, 190, 44, 54, 242, 61, 163, 117, 136, 188, 17, 26, 46, 62, 248, 13, 130, 61, 75, 167, 129, 189, 187, 64, 19, 190, 75, 210, 104, 61, 122, 40, 161, 61, 195, 125, 133, 58, 145, 207, 108, 189, 157, 128, 192, 60, 172, 219, 44, 190, 112, 61, 19, 62, 227, 132, 148, 61, 9, 230, 35, 190, 190, 190, 139, 60, 16, 58, 133, 189, 3, 177, 237, 61, 144, 181, 231, 61, 117, 78, 11, 190, 253, 1, 9, 189, 99, 143, 50, 62, 241, 122, 26, 62, 63, 137, 114, 189, 84, 202, 26, 61, 143, 134, 4, 190, 116, 3, 60, 189, 155, 173, 37, 190, 253, 0, 174, 60, 28, 183, 129, 189, 163, 214, 20, 189, 41, 16, 210, 189, 182, 24, 32, 62, 23, 83, 13, 62, 46, 244, 37, 62, 159, 150, 234, 61, 112, 15, 205, 189, 187, 148, 146, 61, 225, 116, 119, 189, 108, 93, 213, 61, 121, 89, 169, 189, 147, 215, 250, 189, 173, 196, 165, 189, 145, 238, 219, 189, 98, 120, 135, 61, 12, 181, 239, 189, 227, 92, 14, 62, 132, 181, 164, 61, 187, 4, 244, 60, 106, 23, 36, 190, 213, 213, 15, 189, 173, 226, 94, 61, 39, 12, 215, 188, 163, 185, 91, 60, 19, 119, 153, 60, 102, 234, 50, 62, 253, 218, 140, 189, 45, 229, 38, 190, 216, 114, 175, 189, 106, 99, 120, 189, 12, 104, 20, 62, 23, 139, 187, 189, 202, 73, 133, 59, 82, 65, 44, 189, 110, 185, 9, 190, 85, 112, 204, 60, 189, 94, 206, 189, 140, 11, 181, 189, 34, 6, 30, 190, 237, 16, 51, 190, 235, 123, 24, 188, 252, 212, 208, 60, 120, 158, 200, 61, 102, 89, 77, 189, 236, 223, 35, 62, 252, 181, 132, 61, 242, 71, 232, 61, 247, 20, 37, 61, 241, 116, 37, 190, 15, 65, 236, 189, 210, 167, 25, 62, 174, 212, 143, 189, 36, 201, 67, 61, 94, 78, 156, 61, 163, 150, 17, 189, 211, 193, 200, 188, 115, 112, 46, 62, 151, 62, 4, 190, 55, 125, 17, 190, 208, 20, 236, 189, 101, 38, 145, 188, 44, 104, 163, 61, 26, 94, 24, 190, 236, 57, 52, 61, 209, 106, 164, 189, 200, 120, 160, 60, 195, 37, 22, 62, 200, 117, 52, 62, 19, 127, 33, 189, 58, 124, 238, 189, 76, 44, 157, 188, 74, 207, 156, 189, 248, 75, 244, 60, 144, 248, 151, 61, 125, 251, 141, 61, 151, 224, 27, 190, 24, 196, 157, 61, 218, 194, 19, 189, 183, 55, 5, 61, 25, 198, 49, 62, 200, 3, 166, 189, 246, 173, 38, 62, 100, 200, 4, 189, 170, 136, 153, 61, 78, 149, 199, 61, 192, 135, 17, 62, 51, 101, 71, 188, 165, 86, 252, 188, 37, 31, 11, 189, 98, 210, 24, 61, 132, 90, 0, 62, 87, 98, 186, 61, 127, 62, 51, 62, 48, 7, 22, 62, 184, 49, 231, 188, 117, 50, 52, 190, 86, 85, 66, 61, 71, 113, 47, 62, 164, 231, 20, 62, 168, 48, 250, 189, 139, 227, 232, 61, 115, 49, 151, 189, 97, 112, 136, 188, 89, 65, 85, 61, 125, 163, 128, 61, 122, 226, 232, 189, 57, 85, 25, 190, 230, 56, 159, 189, 212, 14, 173, 189, 30, 236, 29, 62, 99, 248, 109, 188, 60, 8, 134, 189, 180, 50, 254, 61, 12, 62, 18, 190, 167, 210, 19, 62, 222, 97, 120, 185, 90, 54, 162, 189, 88, 127, 25, 190, 223, 31, 28, 190, 150, 79, 180, 189, 113, 142, 131, 189, 51, 202, 36, 62, 146, 73, 47, 189, 226, 74, 247, 61, 199, 200, 252, 60, 157, 88, 254, 189, 80, 224, 222, 189, 157, 197, 183, 189, 2, 86, 226, 187, 185, 49, 33, 190, 211, 24, 221, 188, 142, 119, 215, 61, 118, 193, 223, 61, 189, 82, 12, 190, 129, 53, 22, 62, 151, 26, 36, 190, 54, 250, 52, 61, 148, 117, 143, 61, 74, 20, 22, 190, 202, 65, 180, 187, 198, 86, 240, 57, 137, 146, 151, 189, 12, 135, 114, 61, 78, 242, 8, 62, 121, 112, 14, 190, 102, 163, 5, 62, 225, 30, 238, 60, 16, 104, 21, 190, 100, 25, 185, 61, 203, 253, 89, 188, 223, 164, 37, 189, 100, 200, 105, 61, 145, 198, 235, 61, 179, 244, 16, 188, 70, 28, 239, 189, 48, 56, 19, 190, 84, 244, 170, 189, 212, 243, 152, 61, 52, 208, 220, 61, 89, 19, 231, 61, 87, 159, 133, 61, 86, 114, 36, 62, 38, 48, 204, 61, 166, 175, 232, 189, 14, 197, 191, 188, 186, 38, 36, 62, 89, 86, 12, 190, 55, 233, 233, 189, 13, 174, 194, 189, 59, 154, 142, 61, 42, 197, 29, 189, 250, 161, 138, 189, 131, 192, 8, 190, 94, 55, 84, 59, 72, 75, 239, 189, 28, 16, 22, 62, 95, 79, 198, 188, 84, 29, 201, 61, 21, 47, 140, 186, 125, 81, 180, 61, 194, 39, 224, 61, 30, 228, 12, 190, 115, 36, 177, 61, 204, 154, 21, 62, 209, 121, 159, 189, 244, 237, 17, 62, 45, 246, 42, 62, 181, 68, 47, 62, 233, 155, 216, 61, 130, 26, 12, 190, 6, 196, 18, 62, 73, 184, 41, 189, 163, 160, 97, 188, 242, 241, 162, 189, 33, 192, 167, 61};
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
                    alignas(float) const unsigned char memory[] = {13, 122, 43, 61, 239, 210, 58, 61, 96, 86, 169, 60, 79, 156, 186, 60, 238, 181, 161, 189, 164, 60, 36, 62, 155, 191, 182, 189, 193, 32, 0, 190, 64, 41, 50, 190, 137, 226, 249, 58, 187, 250, 148, 61, 122, 186, 36, 189, 5, 65, 9, 61, 20, 17, 253, 61, 40, 153, 172, 189, 37, 50, 201, 188, 212, 226, 1, 190, 171, 79, 177, 189, 12, 51, 134, 61, 120, 8, 50, 190, 144, 207, 142, 188, 71, 218, 65, 61, 144, 54, 178, 189, 3, 120, 47, 190, 69, 162, 55, 61, 37, 137, 215, 61, 13, 65, 215, 60, 137, 143, 7, 62, 203, 210, 32, 190, 193, 139, 242, 189, 56, 87, 217, 189, 4, 123, 21, 190};
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
                    alignas(float) const unsigned char memory[] = {244, 154, 190, 61, 55, 129, 16, 62, 143, 162, 126, 189, 142, 164, 240, 58, 141, 108, 7, 189, 37, 208, 201, 189, 254, 166, 48, 62, 226, 140, 35, 190, 85, 63, 65, 189, 120, 236, 9, 62, 97, 231, 206, 189, 227, 87, 34, 62, 74, 153, 107, 189, 209, 103, 184, 61, 91, 102, 155, 60, 236, 150, 234, 61, 186, 146, 176, 61, 111, 217, 136, 189, 132, 62, 10, 60, 219, 81, 6, 190, 148, 121, 9, 190, 160, 132, 16, 190, 56, 135, 81, 61, 233, 10, 121, 61, 174, 213, 244, 61, 170, 167, 1, 190, 165, 31, 155, 60, 208, 39, 25, 62, 158, 64, 200, 189, 84, 180, 184, 189, 197, 143, 52, 61, 89, 158, 179, 61};
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
                    alignas(float) const unsigned char memory[] = {51, 126, 252, 61};
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
    alignas(float) const unsigned char memory[] = {125, 129, 4, 191, 187, 235, 214, 191, 76, 216, 105, 63, 213, 82, 10, 63, 68, 76, 212, 190, 228, 158, 138, 189, 59, 71, 61, 61, 153, 155, 255, 190, 165, 98, 196, 190, 164, 32, 30, 191, 191, 71, 137, 190, 71, 120, 117, 63, 216, 174, 200, 63, 207, 174, 160, 191, 173, 88, 25, 191, 133, 68, 74, 62, 208, 79, 93, 190, 71, 37, 17, 62, 25, 194, 59, 192, 194, 251, 40, 63, 203, 234, 172, 63, 236, 161, 1, 63, 51, 54, 238, 187, 87, 155, 151, 63, 31, 0, 170, 191, 95, 193, 118, 63, 0, 126, 79, 191, 149, 19, 225, 190, 50, 55, 229, 63, 10, 175, 173, 62, 233, 169, 38, 190, 228, 176, 21, 63, 145, 172, 10, 63, 124, 46, 3, 192, 108, 205, 251, 190, 58, 2, 185, 190, 79, 147, 91, 191, 242, 107, 58, 63, 32, 151, 172, 63};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {170, 14, 27, 62, 154, 168, 79, 61, 7, 61, 204, 61, 232, 68, 90, 62, 214, 74, 92, 189, 177, 19, 205, 61, 196, 19, 180, 62, 187, 179, 211, 61, 161, 9, 136, 62, 218, 150, 100, 62, 68, 232, 47, 62, 183, 111, 152, 62, 176, 97, 139, 62};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-22_02-50-36/33fed4c_zoo_environment_algorithm/pendulum-v1_ppo/0005/steps/000000000000000";
   char commit_hash[] = "33fed4c713be98958cdf6a535b2cfacce4a1de78";
}