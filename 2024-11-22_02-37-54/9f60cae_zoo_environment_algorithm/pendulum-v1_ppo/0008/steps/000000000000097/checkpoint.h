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
                alignas(float) const unsigned char memory[] = {42, 153, 122, 190, 39, 70, 32, 61, 220, 225, 58, 191};
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
                alignas(float) const unsigned char memory[] = {121, 250, 179, 63, 93, 93, 194, 63, 68, 101, 132, 62};
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
                    alignas(float) const unsigned char memory[] = {80, 123, 4, 190, 228, 236, 29, 190, 231, 200, 112, 61, 62, 99, 1, 191, 37, 54, 15, 191, 5, 218, 84, 190, 83, 26, 10, 191, 240, 183, 237, 190, 8, 112, 3, 63, 223, 180, 172, 190, 248, 93, 234, 190, 44, 15, 197, 190, 0, 251, 171, 189, 100, 69, 168, 190, 71, 19, 190, 60, 20, 29, 130, 190, 10, 246, 17, 63, 102, 184, 33, 190, 87, 45, 176, 62, 233, 5, 42, 191, 160, 53, 20, 63, 51, 96, 106, 62, 22, 7, 107, 62, 114, 182, 231, 190, 191, 190, 237, 190, 132, 25, 156, 62, 104, 94, 1, 63, 86, 238, 83, 60, 143, 203, 193, 62, 242, 53, 249, 62, 116, 40, 205, 61, 155, 56, 76, 62, 105, 216, 142, 61, 19, 153, 78, 62, 11, 169, 28, 190, 143, 239, 153, 62, 112, 15, 76, 190, 113, 184, 236, 62, 127, 222, 180, 62, 69, 60, 228, 190, 25, 243, 240, 190, 237, 170, 17, 191, 169, 212, 1, 191, 84, 234, 37, 63, 87, 168, 216, 188, 66, 158, 181, 190, 20, 196, 254, 62, 39, 78, 250, 62, 185, 73, 23, 63, 63, 92, 253, 190, 204, 95, 137, 62, 243, 55, 188, 61, 0, 175, 244, 62, 13, 34, 182, 62, 40, 81, 7, 191, 7, 47, 160, 62, 29, 207, 153, 61, 77, 22, 231, 190, 30, 163, 88, 190, 89, 103, 161, 190, 89, 182, 35, 189, 135, 161, 230, 189, 50, 17, 154, 61, 155, 219, 205, 190, 230, 116, 224, 59, 105, 149, 235, 62, 85, 240, 20, 63, 235, 120, 189, 190, 174, 192, 20, 63, 116, 120, 11, 190, 139, 179, 205, 62, 106, 206, 133, 190, 216, 17, 10, 190, 17, 71, 55, 191, 18, 232, 20, 63, 75, 47, 7, 191, 129, 52, 150, 62, 129, 101, 206, 190, 105, 8, 89, 190, 132, 87, 26, 191, 102, 160, 252, 189, 56, 11, 131, 62, 31, 210, 0, 191, 143, 102, 153, 190, 41, 87, 173, 190, 211, 215, 254, 190, 234, 242, 242, 190, 220, 196, 238, 190, 203, 207, 164, 190, 61, 11, 100, 62, 205, 143, 190, 62, 117, 173, 147, 62, 110, 41, 55, 190, 97, 23, 250, 190, 170, 164, 203, 190, 116, 2, 141, 62};
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
                    alignas(float) const unsigned char memory[] = {29, 135, 0, 191, 169, 202, 68, 59, 227, 146, 228, 190, 135, 27, 97, 189, 163, 53, 229, 190, 22, 45, 171, 190, 84, 190, 232, 62, 248, 242, 128, 62, 211, 108, 233, 62, 3, 148, 79, 61, 138, 173, 193, 189, 241, 105, 193, 62, 4, 180, 235, 62, 170, 237, 12, 63, 221, 163, 224, 60, 182, 200, 93, 62, 1, 162, 253, 62, 113, 50, 132, 190, 246, 121, 234, 62, 197, 230, 174, 189, 130, 123, 205, 61, 152, 68, 186, 61, 104, 140, 219, 62, 131, 207, 92, 62, 3, 174, 179, 62, 83, 22, 207, 61, 119, 173, 148, 189, 193, 172, 249, 190, 238, 205, 175, 62, 20, 237, 223, 190, 192, 16, 241, 60, 15, 197, 144, 62};
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
                    alignas(float) const unsigned char memory[] = {18, 74, 109, 186, 165, 133, 95, 190, 252, 202, 94, 190, 236, 100, 180, 189, 9, 157, 203, 61, 67, 218, 118, 60, 69, 144, 33, 188, 117, 231, 213, 188, 153, 230, 178, 189, 211, 130, 117, 61, 152, 245, 17, 189, 32, 3, 54, 189, 95, 98, 42, 62, 75, 160, 208, 189, 160, 159, 143, 61, 106, 51, 145, 60, 216, 136, 198, 189, 91, 104, 135, 187, 182, 126, 174, 189, 155, 156, 152, 189, 91, 228, 214, 61, 41, 221, 212, 61, 11, 255, 218, 189, 131, 205, 136, 61, 212, 240, 132, 189, 115, 41, 210, 61, 109, 6, 236, 60, 251, 60, 198, 189, 208, 40, 127, 190, 93, 27, 88, 189, 131, 202, 18, 189, 181, 142, 134, 61, 15, 154, 130, 60, 255, 24, 151, 189, 107, 115, 161, 187, 101, 252, 164, 189, 62, 208, 77, 62, 73, 85, 130, 190, 30, 166, 14, 188, 89, 99, 76, 188, 252, 50, 78, 190, 195, 53, 194, 61, 172, 74, 228, 188, 227, 77, 217, 61, 79, 13, 146, 189, 217, 82, 219, 61, 104, 44, 96, 190, 209, 193, 83, 59, 237, 76, 107, 189, 63, 130, 160, 61, 207, 177, 90, 189, 133, 144, 45, 190, 59, 150, 132, 189, 99, 141, 172, 189, 32, 183, 116, 189, 115, 234, 12, 188, 235, 204, 119, 61, 44, 153, 54, 190, 117, 142, 5, 62, 84, 150, 64, 62, 50, 157, 164, 189, 103, 79, 10, 190, 71, 112, 15, 189, 188, 162, 22, 62, 245, 119, 147, 189, 150, 235, 13, 61, 156, 157, 137, 189, 249, 4, 235, 60, 135, 30, 122, 190, 7, 27, 156, 60, 153, 149, 206, 59, 98, 136, 178, 189, 132, 154, 130, 62, 133, 24, 123, 62, 128, 212, 140, 189, 186, 86, 34, 188, 33, 206, 141, 62, 16, 42, 84, 190, 173, 63, 139, 62, 202, 166, 28, 187, 145, 93, 123, 190, 10, 45, 103, 62, 103, 232, 39, 62, 220, 29, 183, 60, 44, 186, 165, 187, 139, 147, 145, 189, 243, 149, 165, 187, 253, 217, 245, 61, 182, 103, 142, 60, 180, 132, 63, 187, 231, 63, 148, 187, 220, 211, 59, 188, 190, 205, 9, 190, 166, 251, 121, 189, 177, 74, 62, 62, 252, 20, 23, 62, 188, 122, 183, 59, 11, 107, 208, 189, 175, 19, 95, 62, 77, 55, 63, 62, 29, 226, 42, 189, 189, 4, 168, 189, 130, 182, 218, 61, 94, 73, 82, 190, 231, 194, 171, 189, 233, 237, 118, 189, 36, 66, 255, 60, 63, 36, 25, 62, 66, 185, 115, 190, 231, 139, 116, 189, 212, 76, 51, 186, 82, 93, 142, 188, 223, 191, 72, 62, 45, 208, 131, 188, 136, 186, 216, 189, 80, 86, 214, 61, 242, 64, 29, 190, 1, 47, 136, 61, 155, 135, 59, 62, 247, 108, 131, 190, 71, 184, 4, 62, 68, 197, 84, 61, 89, 86, 126, 62, 49, 248, 252, 61, 58, 14, 230, 61, 209, 7, 2, 61, 218, 127, 7, 62, 125, 19, 229, 189, 221, 104, 30, 62, 197, 231, 209, 189, 205, 61, 14, 190, 214, 232, 25, 61, 156, 76, 40, 190, 195, 181, 41, 62, 100, 223, 50, 190, 21, 232, 212, 61, 50, 215, 209, 60, 254, 104, 109, 62, 205, 213, 183, 189, 188, 38, 107, 61, 175, 218, 103, 60, 51, 190, 241, 187, 83, 47, 141, 62, 98, 77, 121, 62, 151, 224, 168, 61, 196, 64, 26, 62, 161, 166, 101, 187, 93, 209, 97, 189, 203, 2, 31, 190, 253, 26, 20, 62, 97, 69, 165, 61, 130, 13, 29, 188, 56, 20, 151, 60, 185, 224, 2, 62, 234, 104, 56, 189, 46, 150, 173, 189, 21, 220, 77, 190, 177, 1, 151, 189, 36, 117, 141, 188, 219, 3, 232, 189, 39, 29, 24, 62, 92, 24, 223, 59, 204, 167, 132, 189, 242, 230, 73, 189, 195, 230, 33, 62, 5, 26, 225, 189, 172, 107, 37, 62, 222, 117, 134, 61, 247, 124, 224, 189, 39, 158, 122, 60, 99, 242, 191, 60, 33, 3, 81, 61, 148, 172, 50, 190, 160, 25, 171, 61, 82, 135, 225, 59, 229, 205, 132, 188, 201, 28, 236, 188, 240, 98, 188, 189, 204, 76, 55, 189, 128, 73, 53, 190, 3, 191, 120, 188, 146, 179, 60, 189, 21, 151, 22, 62, 8, 99, 127, 190, 67, 135, 89, 61, 39, 192, 68, 189, 62, 201, 130, 62, 156, 161, 129, 62, 103, 5, 83, 62, 227, 218, 126, 61, 250, 144, 240, 61, 90, 149, 16, 189, 237, 45, 9, 62, 82, 230, 16, 190, 106, 180, 18, 189, 76, 184, 241, 188, 86, 195, 21, 190, 81, 44, 248, 61, 225, 144, 17, 190, 32, 167, 198, 188, 181, 206, 183, 61, 16, 103, 117, 61, 19, 108, 3, 190, 237, 166, 32, 190, 22, 237, 31, 62, 46, 53, 0, 61, 231, 72, 104, 62, 12, 80, 18, 62, 30, 213, 67, 61, 145, 36, 105, 188, 153, 137, 220, 189, 80, 255, 253, 189, 22, 164, 37, 62, 68, 96, 185, 186, 219, 68, 222, 189, 27, 22, 6, 62, 33, 47, 197, 61, 161, 178, 146, 61, 199, 7, 204, 189, 26, 228, 112, 61, 127, 243, 37, 189, 249, 37, 37, 187, 83, 227, 20, 62, 223, 101, 194, 189, 124, 90, 131, 61, 162, 19, 24, 62, 116, 159, 181, 189, 214, 16, 204, 58, 42, 211, 24, 62, 141, 250, 83, 188, 128, 148, 52, 189, 74, 234, 10, 190, 248, 17, 160, 60, 131, 35, 139, 190, 94, 194, 29, 189, 83, 246, 12, 62, 220, 189, 6, 190, 11, 252, 99, 62, 105, 66, 107, 190, 135, 171, 30, 190, 205, 34, 44, 62, 253, 122, 138, 190, 90, 50, 111, 61, 70, 56, 89, 189, 129, 196, 195, 60, 16, 94, 236, 189, 31, 7, 239, 61, 214, 214, 165, 188, 254, 250, 189, 61, 54, 23, 250, 61, 61, 230, 50, 62, 56, 0, 108, 61, 1, 53, 28, 62, 204, 31, 223, 61, 113, 15, 9, 190, 91, 7, 15, 190, 84, 7, 203, 61, 80, 85, 196, 61, 141, 52, 215, 61, 247, 201, 87, 190, 34, 10, 239, 189, 134, 246, 141, 188, 240, 232, 194, 189, 122, 231, 249, 61, 33, 204, 44, 62, 135, 115, 158, 189, 27, 72, 214, 189, 200, 233, 206, 189, 221, 109, 229, 61, 176, 149, 106, 61, 93, 250, 202, 61, 44, 247, 152, 61, 169, 116, 60, 61, 67, 101, 107, 62, 121, 109, 192, 189, 60, 47, 132, 189, 124, 80, 22, 190, 37, 100, 147, 188, 191, 29, 163, 189, 33, 18, 77, 189, 149, 128, 14, 190, 35, 131, 46, 62, 150, 253, 187, 189, 23, 177, 81, 61, 63, 185, 65, 190, 149, 137, 20, 190, 234, 9, 48, 62, 221, 51, 161, 189, 180, 103, 74, 61, 120, 4, 59, 61, 13, 130, 114, 190, 73, 74, 23, 190, 26, 33, 107, 190, 58, 66, 212, 188, 124, 196, 39, 190, 133, 93, 158, 61, 188, 58, 36, 61, 44, 216, 224, 187, 104, 110, 137, 61, 163, 38, 161, 61, 113, 159, 221, 61, 111, 22, 7, 61, 103, 90, 84, 61, 27, 126, 173, 187, 16, 202, 242, 189, 205, 252, 13, 62, 34, 120, 145, 187, 201, 86, 14, 188, 83, 119, 220, 189, 46, 17, 13, 190, 22, 48, 231, 186, 169, 26, 95, 62, 182, 247, 67, 190, 173, 131, 129, 189, 123, 12, 216, 189, 55, 60, 55, 190, 209, 76, 54, 190, 88, 98, 10, 190, 42, 95, 15, 62, 255, 236, 28, 190, 210, 215, 208, 61, 80, 17, 61, 190, 86, 232, 204, 189, 68, 211, 13, 61, 223, 96, 204, 61, 51, 65, 117, 62, 6, 130, 57, 190, 62, 61, 136, 187, 225, 212, 15, 62, 98, 69, 50, 62, 77, 75, 76, 189, 245, 176, 14, 62, 17, 244, 168, 188, 106, 220, 116, 190, 41, 214, 141, 62, 17, 28, 237, 60, 43, 35, 68, 190, 97, 96, 161, 189, 6, 192, 13, 62, 156, 251, 206, 189, 177, 100, 213, 61, 227, 136, 32, 190, 48, 219, 114, 188, 58, 51, 153, 189, 219, 249, 5, 190, 9, 56, 209, 61, 155, 51, 17, 190, 93, 144, 41, 190, 114, 169, 66, 61, 221, 169, 160, 61, 0, 72, 6, 190, 112, 52, 138, 189, 146, 80, 25, 62, 250, 116, 206, 61, 219, 157, 129, 189, 186, 104, 88, 62, 105, 32, 139, 61, 250, 230, 95, 190, 162, 165, 5, 61, 214, 131, 166, 61, 130, 194, 180, 58, 82, 233, 96, 190, 58, 196, 252, 189, 108, 210, 118, 61, 199, 51, 117, 190, 24, 167, 34, 189, 133, 152, 24, 190, 248, 191, 121, 190, 229, 129, 99, 60, 223, 103, 182, 189, 194, 53, 79, 187, 65, 75, 30, 190, 200, 32, 173, 61, 186, 253, 41, 61, 131, 29, 140, 189, 107, 55, 13, 189, 140, 45, 242, 189, 45, 77, 253, 189, 106, 79, 120, 62, 41, 143, 52, 62, 89, 35, 142, 60, 134, 238, 233, 189, 62, 103, 189, 189, 72, 27, 254, 189, 178, 8, 54, 62, 111, 39, 26, 189, 169, 197, 182, 61, 119, 214, 19, 62, 83, 132, 225, 188, 126, 175, 61, 190, 174, 188, 44, 62, 86, 61, 45, 61, 224, 38, 53, 61, 22, 31, 251, 188, 112, 94, 42, 61, 199, 1, 33, 61, 168, 118, 104, 190, 180, 172, 15, 62, 197, 189, 62, 190, 24, 56, 120, 190, 120, 242, 76, 62, 68, 136, 241, 189, 50, 1, 143, 61, 19, 83, 145, 188, 22, 250, 163, 61, 56, 33, 66, 190, 123, 42, 3, 189, 176, 1, 64, 190, 99, 146, 78, 62, 182, 149, 195, 61, 162, 235, 60, 189, 174, 10, 36, 62, 183, 224, 69, 62, 100, 107, 85, 62, 224, 119, 255, 61, 105, 29, 35, 189, 236, 132, 195, 61, 103, 153, 160, 61, 137, 202, 215, 61, 196, 52, 2, 189, 131, 110, 167, 61, 155, 237, 136, 190, 100, 97, 39, 189, 121, 103, 30, 190, 127, 14, 59, 190, 130, 60, 89, 189, 11, 91, 89, 190, 186, 199, 225, 61, 248, 175, 165, 189, 140, 34, 96, 61, 201, 165, 44, 190, 229, 147, 139, 190, 96, 139, 161, 188, 78, 219, 234, 60, 76, 171, 240, 189, 208, 236, 38, 189, 75, 36, 6, 60, 49, 188, 155, 189, 62, 144, 40, 62, 56, 216, 159, 61, 188, 41, 178, 61, 146, 77, 97, 190, 121, 57, 10, 62, 71, 25, 134, 189, 161, 162, 213, 61, 230, 199, 73, 62, 57, 144, 135, 189, 8, 170, 6, 62, 144, 211, 223, 59, 213, 126, 17, 189, 119, 241, 211, 189, 253, 33, 16, 61, 192, 103, 41, 189, 86, 92, 99, 62, 160, 138, 157, 189, 36, 157, 29, 62, 254, 110, 127, 62, 88, 8, 190, 61, 248, 121, 67, 60, 55, 239, 226, 61, 162, 79, 246, 188, 135, 71, 108, 190, 250, 160, 97, 189, 186, 132, 87, 62, 40, 255, 230, 189, 183, 14, 17, 189, 105, 111, 37, 62, 153, 196, 110, 61, 145, 197, 50, 189, 207, 196, 12, 62, 123, 194, 13, 190, 43, 189, 12, 60, 56, 57, 62, 190, 157, 201, 238, 59, 108, 224, 42, 190, 201, 116, 149, 61, 82, 194, 176, 188, 96, 136, 16, 190, 209, 138, 171, 61, 183, 8, 176, 61, 69, 33, 87, 188, 183, 63, 212, 61, 65, 207, 158, 186, 210, 201, 25, 62, 158, 116, 23, 62, 102, 12, 185, 189, 239, 57, 73, 61, 31, 31, 89, 188, 96, 119, 188, 188, 64, 25, 122, 190, 8, 136, 25, 190, 155, 216, 4, 190, 120, 70, 209, 60, 36, 252, 203, 61, 212, 129, 176, 188, 46, 172, 174, 189, 109, 248, 128, 61, 238, 128, 118, 190, 211, 26, 215, 60, 236, 142, 250, 189, 84, 0, 255, 61, 236, 144, 75, 190, 240, 150, 40, 62, 77, 94, 103, 190, 244, 131, 40, 189, 93, 68, 40, 190, 213, 98, 30, 62, 113, 154, 23, 62, 102, 211, 214, 61, 107, 160, 87, 62, 241, 247, 214, 61, 15, 127, 161, 60, 229, 149, 6, 190, 235, 8, 62, 61, 253, 154, 34, 61, 118, 8, 189, 189, 229, 69, 87, 61, 228, 110, 89, 190, 140, 253, 34, 62, 83, 78, 41, 189, 205, 228, 143, 189, 84, 181, 87, 189, 10, 239, 90, 61, 128, 110, 198, 61, 162, 188, 201, 61, 174, 63, 193, 187, 159, 147, 99, 190, 226, 94, 108, 190, 122, 176, 166, 61, 214, 18, 75, 190, 133, 206, 205, 189, 118, 19, 177, 188, 55, 50, 59, 189, 215, 197, 223, 189, 89, 110, 39, 62, 117, 0, 102, 190, 170, 160, 82, 62, 161, 118, 218, 60, 123, 57, 120, 189, 11, 151, 98, 62, 211, 29, 69, 188, 231, 107, 198, 189, 4, 69, 62, 190, 229, 6, 8, 190, 221, 248, 119, 189, 83, 208, 71, 62, 33, 218, 215, 61, 187, 115, 45, 62, 124, 172, 85, 62, 232, 14, 81, 190, 78, 79, 222, 61, 127, 110, 173, 189, 148, 214, 39, 188, 14, 74, 68, 190, 48, 200, 232, 60, 176, 7, 136, 189, 128, 181, 154, 61, 142, 69, 17, 62, 254, 15, 29, 61, 38, 167, 117, 189, 133, 211, 174, 60, 255, 227, 16, 189, 26, 216, 129, 61, 207, 18, 180, 189, 249, 10, 187, 189, 106, 239, 133, 189, 18, 205, 122, 62, 204, 153, 27, 190, 91, 230, 227, 59, 245, 209, 78, 190, 83, 21, 204, 61, 111, 189, 102, 62, 52, 147, 226, 61, 138, 69, 237, 60, 251, 104, 168, 189, 159, 25, 42, 190, 48, 32, 177, 60, 198, 241, 88, 62, 20, 201, 0, 61, 203, 169, 138, 61, 183, 3, 37, 189, 234, 191, 50, 190, 186, 236, 149, 61, 31, 254, 185, 189, 28, 52, 67, 61, 51, 185, 138, 60, 117, 71, 74, 60, 1, 51, 108, 60, 47, 88, 113, 61, 72, 172, 154, 61, 50, 67, 74, 190, 124, 20, 131, 190, 113, 8, 7, 62, 78, 170, 63, 187, 200, 130, 161, 188, 53, 119, 254, 189, 81, 109, 36, 189, 9, 48, 28, 190, 179, 133, 7, 189, 254, 104, 49, 189, 28, 158, 241, 60, 5, 218, 12, 188, 221, 153, 88, 62, 59, 146, 157, 58, 110, 123, 88, 62, 182, 253, 61, 62, 166, 85, 211, 189, 64, 124, 106, 61, 14, 99, 211, 61, 136, 169, 171, 189, 196, 103, 48, 62, 12, 197, 205, 189, 249, 112, 87, 61, 135, 211, 57, 190, 144, 198, 24, 62, 56, 49, 7, 62, 35, 87, 130, 190, 175, 198, 121, 190, 248, 147, 36, 189, 236, 245, 42, 186, 109, 38, 59, 189, 185, 107, 83, 62, 60, 139, 120, 189, 191, 237, 112, 190, 81, 163, 215, 187, 119, 97, 99, 61, 107, 245, 10, 190, 153, 250, 221, 61, 46, 47, 53, 62, 64, 41, 30, 62, 3, 19, 163, 60, 99, 66, 73, 190, 252, 151, 5, 62, 127, 99, 200, 61, 252, 15, 51, 60, 35, 12, 74, 62, 114, 98, 218, 61, 213, 181, 147, 188, 246, 5, 216, 61, 176, 108, 78, 60, 238, 22, 183, 189, 239, 105, 102, 190, 85, 28, 249, 60, 50, 36, 157, 189, 76, 190, 205, 189, 24, 203, 154, 61, 240, 104, 84, 190, 69, 42, 48, 62, 54, 109, 46, 62, 37, 177, 158, 189, 196, 201, 236, 188, 138, 137, 99, 189, 207, 218, 22, 62, 245, 19, 166, 61, 80, 127, 185, 61, 193, 33, 40, 189, 48, 95, 11, 61, 156, 196, 44, 62, 232, 106, 104, 62, 62, 97, 200, 61, 104, 9, 196, 186, 221, 52, 244, 189, 109, 197, 138, 189, 214, 204, 71, 60, 213, 194, 213, 61, 236, 58, 102, 61, 247, 154, 189, 189, 111, 103, 86, 190, 228, 220, 107, 190, 12, 105, 253, 61, 25, 114, 223, 61, 125, 63, 92, 61, 157, 25, 7, 190, 195, 116, 48, 190, 134, 106, 115, 61, 242, 110, 149, 188, 246, 48, 236, 189, 247, 120, 148, 189, 91, 81, 4, 190, 56, 246, 237, 61, 143, 52, 250, 61, 182, 226, 30, 188, 222, 248, 160, 61, 229, 206, 76, 190, 194, 244, 199, 61, 5, 209, 136, 188, 95, 200, 140, 62, 12, 4, 135, 62, 162, 133, 2, 190, 151, 117, 27, 62, 11, 67, 147, 61, 118, 39, 237, 189, 87, 118, 237, 189, 250, 46, 194, 60, 203, 5, 129, 190, 2, 215, 120, 62, 146, 81, 99, 189, 29, 115, 143, 188, 172, 1, 119, 190, 110, 171, 59, 189, 239, 106, 23, 189, 153, 26, 131, 188, 219, 216, 109, 189, 104, 53, 14, 62, 135, 110, 6, 190, 245, 166, 104, 61, 106, 40, 174, 189, 220, 199, 202, 60, 101, 185, 238, 188, 66, 252, 177, 61, 244, 18, 83, 190, 131, 23, 211, 61, 204, 76, 34, 62, 174, 101, 72, 60, 76, 50, 124, 62, 235, 165, 215, 61, 104, 222, 115, 62, 73, 204, 15, 190, 164, 240, 72, 189, 255, 167, 30, 62, 189, 181, 3, 190, 138, 12, 153, 61, 116, 41, 201, 189, 156, 196, 14, 190, 174, 187, 11, 62, 205, 101, 142, 188, 243, 19, 197, 188, 199, 167, 5, 62, 22, 13, 54, 190, 5, 136, 109, 61, 227, 30, 55, 190, 224, 187, 103, 61, 108, 106, 141, 61, 254, 134, 44, 190, 75, 50, 162, 61, 76, 200, 140, 61, 11, 162, 27, 61, 234, 193, 140, 61, 107, 250, 0, 190, 75, 102, 245, 189, 58, 126, 230, 188, 1, 165, 73, 62, 178, 200, 108, 190, 184, 21, 19, 62, 247, 14, 241, 61, 86, 79, 71, 62, 56, 32, 131, 189, 9, 69, 73, 190, 96, 136, 227, 61, 91, 50, 20, 190, 21, 179, 115, 62, 163, 178, 162, 61, 111, 158, 0, 190, 149, 76, 157, 189, 23, 214, 165, 189, 8, 117, 211, 61, 91, 242, 212, 189, 162, 41, 135, 189, 52, 52, 141, 189, 191, 77, 239, 61, 4, 96, 185, 188, 168, 118, 198, 61, 132, 76, 144, 61, 84, 233, 17, 189, 96, 164, 145, 61, 77, 31, 161, 189, 42, 156, 52, 189, 186, 146, 239, 60, 16, 73, 70, 189, 30, 187, 40, 62, 116, 237, 128, 62, 165, 200, 79, 61, 60, 93, 23, 189, 4, 136, 130, 61, 67, 44, 140, 62, 200, 133, 63, 190, 91, 251, 143, 60, 6, 160, 2, 190, 222, 44, 202, 189, 105, 222, 232, 61, 158, 254, 73, 190, 110, 111, 188, 61, 156, 227, 125, 190, 66, 199, 12, 58, 17, 12, 63, 62, 17, 196, 210, 186, 208, 11, 151, 189, 199, 62, 133, 189, 0, 207, 214, 61, 3, 25, 122, 189, 145, 131, 30, 188, 176, 25, 68, 190, 102, 81, 200, 189, 240, 208, 76, 61, 84, 162, 55, 189, 16, 19, 158, 61, 125, 202, 204, 61, 190, 202, 34, 62, 247, 44, 225, 61, 217, 37, 49, 62, 24, 215, 85, 189, 181, 80, 74, 190, 111, 205, 219, 189, 86, 36, 50, 190, 71, 206, 59, 189, 89, 123, 165, 60, 17, 43, 221, 187, 76, 0, 114, 189, 22, 165, 204, 189, 228, 26, 187, 189, 103, 133, 57, 61, 236, 156, 9, 190, 119, 71, 52, 62, 128, 211, 54, 59, 13, 221, 41, 188, 36, 221, 39, 62, 173, 104, 254, 58, 6, 151, 37, 189, 40, 66, 16, 60, 255, 210, 183, 61, 78, 66, 55, 190, 194, 192, 19, 61, 119, 8, 142, 187, 78, 22, 245, 188, 67, 169, 128, 61, 242, 218, 222, 189, 240, 189, 169, 61, 116, 180, 188, 60, 163, 188, 79, 190, 188, 79, 145, 189, 98, 243, 127, 61, 146, 146, 14, 62, 66, 201, 28, 62, 156, 205, 64, 62, 178, 136, 7, 62, 11, 254, 207, 189, 68, 235, 49, 62, 248, 118, 86, 190, 135, 159, 197, 61, 102, 205, 49, 190, 28, 172, 118, 190, 33, 190, 20, 190, 148, 178, 34, 61, 178, 118, 70, 62, 55, 17, 46, 190, 114, 134, 22, 61, 184, 43, 218, 189, 250, 185, 161, 189, 115, 57, 237, 60, 159, 83, 7, 190, 142, 144, 165, 61, 7, 193, 33, 62, 228, 22, 53, 189, 122, 215, 129, 61, 229, 56, 69, 62, 46, 150, 40, 61, 211, 160, 0, 189, 134, 198, 55, 190, 80, 146, 168, 189, 55, 228, 114, 62, 62, 230, 238, 60, 210, 236, 91, 189, 191, 139, 100, 189, 50, 172, 181, 61, 38, 163, 78, 189, 140, 70, 41, 190, 90, 135, 207, 187, 62, 152, 42, 190, 29, 202, 67, 190, 11, 122, 59, 62, 190, 170, 15, 190, 209, 226, 221, 61, 150, 105, 95, 62, 124, 30, 26, 189, 159, 255, 125, 189, 177, 223, 30, 60, 14, 229, 177, 60, 165, 185, 128, 188, 41, 17, 132, 62, 116, 104, 156, 189, 202, 156, 136, 190, 2, 241, 139, 60, 78, 3, 50, 62, 243, 242, 22, 190, 79, 57, 193, 61, 72, 101, 107, 189, 216, 17, 15, 58, 235, 201, 161, 60, 133, 115, 143, 61, 182, 135, 9, 62, 248, 48, 4, 190, 74, 226, 66, 190, 20, 76, 21, 190, 199, 115, 12, 190, 9, 118, 12, 61, 47, 221, 236, 189, 106, 168, 25, 62, 205, 4, 172, 188, 135, 114, 126, 62, 222, 194, 199, 189, 16, 43, 57, 62, 145, 226, 22, 190, 29, 231, 11, 62, 160, 32, 30, 190, 140, 7, 120, 190, 40, 107, 161, 60, 211, 215, 137, 188, 194, 45, 178, 61, 72, 95, 244, 60, 82, 188, 103, 62, 247, 106, 121, 189, 43, 189, 208, 189, 81, 68, 107, 62, 7, 12, 69, 190, 202, 1, 72, 190, 71, 0, 201, 61, 104, 153, 32, 190, 115, 54, 235, 189, 184, 99, 55, 62, 144, 57, 223, 189, 27, 128, 57, 62, 47, 133, 21, 60, 224, 139, 154, 188, 87, 45, 5, 62, 140, 147, 160, 189, 189, 77, 30, 61, 118, 133, 13, 62, 220, 28, 161, 61, 44, 94, 215, 189, 81, 61, 191, 61, 82, 166, 163, 189, 137, 125, 237, 189, 0, 112, 237, 189, 217, 205, 62, 61, 164, 79, 92, 190, 93, 167, 41, 62, 223, 148, 133, 189, 11, 86, 14, 62, 104, 74, 29, 189, 26, 138, 195, 189, 254, 87, 102, 61, 223, 153, 20, 189, 242, 183, 51, 62, 157, 179, 121, 189, 247, 106, 49, 190, 230, 35, 226, 188, 119, 201, 87, 62, 39, 125, 198, 60, 113, 75, 33, 190, 10, 37, 32, 62, 18, 210, 119, 60, 220, 249, 74, 61, 8, 112, 147, 189, 208, 174, 210, 189, 58, 22, 35, 190, 240, 245, 135, 190, 36, 120, 78, 190, 159, 242, 216, 189, 5, 110, 115, 61, 147, 80, 94, 189, 240, 123, 150, 189, 128, 7, 112, 60, 40, 110, 96, 190, 96, 126, 164, 61, 64, 40, 222, 189, 169, 128, 166, 61, 197, 248, 7, 190, 234, 189, 69, 62, 154, 68, 86, 61, 255, 51, 130, 62, 218, 139, 219, 189, 243, 161, 36, 190, 221, 78, 158, 61, 72, 186, 95, 189, 7, 115, 135, 61, 82, 46, 25, 62, 169, 85, 41, 190, 58, 112, 163, 189, 197, 125, 180, 189, 17, 200, 236, 189, 160, 178, 2, 190, 120, 38, 206, 61, 65, 205, 56, 188, 204, 218, 46, 61, 218, 221, 174, 189, 79, 221, 42, 62, 255, 197, 187, 60, 144, 95, 159, 61, 38, 126, 50, 61, 216, 210, 61, 187, 145, 232, 77, 60, 86, 12, 66, 190, 90, 50, 249, 189, 71, 134, 78, 190, 202, 83, 158, 188, 85, 255, 211, 189, 131, 31, 58, 61, 217, 237, 23, 189, 170, 14, 146, 190, 37, 227, 48, 62, 173, 53, 253, 61, 107, 184, 0, 62, 170, 208, 113, 61, 108, 152, 128, 61, 120, 154, 64, 189, 61, 192, 35, 190, 164, 127, 7, 189, 45, 170, 4, 62, 17, 33, 117, 61, 15, 225, 88, 62, 29, 190, 112, 62, 216, 184, 53, 62, 17, 242, 114, 189, 17, 25, 211, 188, 185, 145, 23, 190, 178, 23, 59, 62, 18, 107, 76, 190, 149, 234, 26, 62, 91, 165, 53, 190, 144, 161, 33, 190, 183, 5, 230, 189, 217, 111, 167, 189, 149, 191, 171, 61, 128, 185, 3, 190};
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
                    alignas(float) const unsigned char memory[] = {99, 251, 11, 62, 228, 140, 10, 61, 170, 30, 6, 190, 164, 169, 168, 60, 162, 191, 118, 189, 140, 112, 217, 188, 228, 14, 10, 190, 35, 197, 161, 61, 153, 135, 131, 61, 14, 26, 72, 61, 146, 251, 11, 62, 57, 11, 8, 189, 24, 168, 180, 189, 225, 98, 28, 61, 56, 148, 17, 189, 80, 29, 4, 62, 7, 181, 35, 189, 129, 220, 4, 190, 137, 120, 205, 61, 193, 134, 85, 60, 201, 171, 207, 61, 158, 152, 20, 62, 110, 196, 195, 186, 4, 125, 120, 189, 68, 155, 14, 190, 169, 167, 197, 188, 86, 187, 136, 189, 89, 57, 1, 62, 48, 240, 115, 189, 99, 72, 181, 60, 14, 171, 215, 60, 251, 118, 53, 62};
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
                    alignas(float) const unsigned char memory[] = {126, 5, 119, 189, 46, 198, 73, 61, 26, 107, 252, 189, 105, 15, 30, 62, 158, 240, 55, 190, 93, 117, 176, 61, 126, 48, 44, 189, 12, 154, 236, 61, 11, 12, 149, 189, 85, 23, 123, 190, 25, 107, 145, 190, 159, 207, 217, 61, 4, 98, 48, 62, 174, 194, 83, 62, 38, 191, 190, 189, 9, 147, 152, 62, 223, 238, 66, 62, 24, 57, 221, 61, 73, 1, 75, 62, 111, 135, 56, 62, 97, 180, 182, 189, 104, 110, 10, 190, 219, 44, 249, 189, 168, 194, 42, 190, 191, 148, 64, 62, 241, 116, 114, 189, 28, 248, 111, 62, 86, 164, 117, 190, 222, 84, 222, 61, 233, 53, 87, 190, 197, 246, 12, 190, 37, 96, 17, 190};
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
                    alignas(float) const unsigned char memory[] = {162, 188, 184, 188};
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
    alignas(float) const unsigned char memory[] = {181, 181, 119, 191, 180, 242, 169, 190, 117, 60, 62, 63, 249, 151, 19, 189, 164, 186, 214, 191, 242, 103, 32, 191, 209, 161, 37, 62, 253, 180, 148, 191, 243, 59, 219, 63, 185, 201, 16, 62, 158, 154, 201, 190, 119, 131, 242, 63, 175, 190, 157, 63, 118, 208, 203, 63, 179, 226, 27, 63, 182, 117, 189, 62, 115, 121, 53, 63, 171, 197, 8, 60, 75, 68, 107, 192, 66, 229, 44, 191, 250, 19, 65, 191, 15, 160, 241, 63, 18, 251, 197, 190, 183, 220, 68, 190, 201, 175, 22, 63, 43, 198, 83, 190, 195, 39, 161, 62, 126, 102, 61, 191, 14, 72, 254, 190, 249, 14, 124, 191, 195, 175, 150, 190, 10, 221, 189, 62, 85, 222, 106, 191, 249, 5, 173, 191, 235, 13, 156, 191, 8, 97, 130, 191, 229, 46, 49, 63, 174, 254, 76, 190, 211, 198, 9, 62};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {13, 244, 149, 63, 237, 184, 143, 64, 93, 238, 130, 64, 85, 151, 1, 64, 5, 129, 130, 192, 83, 146, 74, 192, 57, 151, 212, 190, 47, 238, 3, 64, 125, 41, 187, 63, 21, 153, 14, 64, 94, 78, 24, 192, 74, 22, 109, 64, 144, 220, 189, 63};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-22_02-37-54/9f60cae_zoo_environment_algorithm/pendulum-v1_ppo/0008/steps/000000000000097";
   char commit_hash[] = "9f60caeb5e543671878a7d367d3320183beaa3a0";
}