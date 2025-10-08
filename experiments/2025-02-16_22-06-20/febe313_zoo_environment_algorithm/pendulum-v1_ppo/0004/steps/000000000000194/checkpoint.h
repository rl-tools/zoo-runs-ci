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
                alignas(float) const unsigned char memory[] = {226, 244, 6, 191, 51, 135, 18, 60, 118, 235, 207, 190};
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
                alignas(float) const unsigned char memory[] = {135, 219, 250, 63, 102, 62, 188, 63, 202, 54, 155, 62};
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
                    alignas(float) const unsigned char memory[] = {14, 212, 237, 190, 176, 56, 12, 63, 186, 27, 25, 62, 189, 161, 28, 189, 120, 131, 44, 63, 125, 251, 10, 63, 174, 148, 5, 191, 186, 123, 63, 62, 225, 130, 168, 190, 28, 93, 32, 190, 156, 195, 27, 190, 130, 32, 143, 189, 243, 222, 17, 63, 152, 25, 13, 191, 240, 63, 236, 62, 117, 17, 39, 62, 149, 116, 194, 62, 75, 243, 248, 62, 170, 247, 146, 190, 138, 213, 8, 191, 2, 124, 185, 62, 27, 15, 166, 190, 35, 75, 215, 190, 27, 128, 207, 190, 166, 15, 238, 190, 178, 34, 166, 190, 140, 63, 17, 63, 160, 205, 56, 188, 107, 235, 136, 62, 218, 214, 4, 188, 127, 182, 67, 62, 117, 133, 192, 190, 28, 108, 236, 190, 102, 175, 252, 190, 98, 149, 202, 190, 36, 50, 13, 63, 246, 240, 231, 62, 92, 141, 29, 191, 18, 162, 7, 63, 101, 90, 230, 62, 239, 158, 47, 63, 48, 176, 156, 61, 20, 233, 248, 190, 31, 130, 14, 191, 228, 254, 250, 62, 217, 146, 54, 189, 2, 182, 14, 191, 138, 32, 130, 62, 15, 96, 166, 62, 248, 186, 2, 63, 55, 89, 170, 59, 226, 130, 48, 61, 175, 217, 139, 62, 175, 10, 121, 189, 137, 28, 92, 62, 191, 223, 54, 62, 198, 70, 239, 62, 33, 119, 0, 63, 154, 77, 38, 63, 34, 61, 44, 191, 12, 198, 48, 62, 116, 208, 226, 62, 118, 138, 151, 62, 165, 56, 161, 190, 151, 172, 35, 63, 219, 105, 145, 62, 42, 100, 195, 61, 102, 248, 86, 189, 97, 203, 102, 62, 46, 139, 191, 190, 85, 75, 35, 189, 216, 39, 231, 190, 239, 160, 75, 190, 243, 240, 156, 60, 68, 10, 180, 61, 245, 157, 123, 190, 213, 208, 56, 190, 98, 83, 232, 190, 194, 13, 218, 62, 185, 229, 36, 191, 75, 23, 142, 190, 115, 161, 21, 62, 176, 188, 208, 190, 87, 146, 15, 191, 52, 185, 87, 190, 162, 39, 2, 62, 17, 178, 221, 190, 212, 216, 197, 62, 91, 53, 132, 61, 16, 229, 129, 190, 64, 1, 54, 190, 67, 149, 25, 63, 148, 87, 133, 190, 226, 73, 165, 190, 144, 150, 33, 63, 52, 33, 168, 62};
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
                    alignas(float) const unsigned char memory[] = {86, 176, 114, 190, 3, 66, 140, 190, 114, 205, 82, 189, 197, 112, 150, 62, 179, 190, 180, 189, 213, 158, 11, 191, 214, 245, 207, 189, 144, 235, 13, 63, 120, 95, 87, 190, 208, 219, 244, 61, 65, 190, 46, 189, 20, 35, 152, 190, 191, 100, 80, 189, 39, 105, 195, 190, 214, 76, 191, 62, 183, 138, 234, 190, 69, 239, 61, 62, 242, 235, 6, 191, 86, 108, 34, 191, 147, 153, 138, 62, 80, 39, 171, 190, 25, 32, 232, 62, 170, 164, 196, 190, 160, 231, 16, 63, 224, 122, 184, 62, 102, 116, 215, 62, 101, 123, 23, 191, 207, 95, 216, 190, 236, 207, 253, 62, 133, 155, 199, 62, 25, 216, 174, 61, 137, 190, 3, 63};
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
                    alignas(float) const unsigned char memory[] = {96, 26, 6, 62, 209, 149, 155, 190, 199, 137, 139, 61, 9, 234, 249, 60, 197, 191, 3, 188, 53, 101, 234, 190, 137, 89, 74, 61, 167, 109, 27, 62, 37, 142, 170, 189, 88, 229, 173, 61, 171, 9, 56, 189, 129, 152, 3, 190, 141, 166, 19, 62, 246, 86, 66, 190, 125, 237, 7, 62, 115, 160, 106, 189, 202, 8, 96, 60, 131, 67, 1, 190, 77, 140, 196, 190, 202, 93, 126, 61, 121, 176, 143, 190, 100, 33, 22, 190, 16, 244, 28, 190, 49, 223, 51, 62, 217, 137, 40, 62, 27, 40, 7, 62, 219, 106, 224, 188, 83, 101, 26, 62, 243, 74, 140, 62, 136, 238, 23, 62, 31, 123, 243, 61, 136, 26, 105, 61, 230, 213, 1, 190, 50, 235, 65, 62, 238, 154, 24, 62, 222, 237, 31, 62, 78, 189, 184, 189, 11, 57, 44, 61, 196, 140, 53, 190, 66, 127, 152, 189, 74, 57, 181, 189, 89, 230, 180, 61, 218, 30, 208, 188, 160, 9, 200, 189, 235, 184, 1, 62, 197, 165, 244, 189, 213, 212, 139, 189, 109, 171, 6, 190, 98, 12, 28, 190, 228, 151, 53, 189, 24, 0, 80, 62, 130, 220, 142, 189, 66, 16, 133, 189, 193, 181, 68, 59, 140, 176, 223, 60, 199, 144, 150, 60, 151, 43, 243, 61, 254, 80, 74, 61, 21, 7, 18, 189, 92, 248, 170, 189, 27, 192, 134, 189, 108, 58, 54, 62, 35, 241, 3, 62, 148, 223, 115, 61, 48, 244, 195, 60, 78, 8, 18, 62, 206, 184, 202, 189, 150, 63, 47, 189, 102, 151, 86, 190, 111, 251, 146, 62, 204, 206, 179, 188, 166, 122, 244, 60, 88, 67, 77, 189, 7, 42, 123, 189, 178, 242, 42, 61, 4, 47, 100, 190, 44, 59, 207, 60, 35, 192, 118, 61, 52, 234, 208, 187, 135, 104, 154, 188, 157, 203, 146, 61, 8, 117, 28, 189, 205, 109, 12, 189, 189, 147, 197, 61, 238, 109, 13, 62, 248, 215, 147, 62, 79, 156, 195, 61, 87, 15, 253, 61, 69, 43, 18, 62, 99, 152, 146, 189, 48, 130, 86, 190, 48, 153, 236, 60, 172, 80, 0, 62, 2, 75, 166, 188, 223, 48, 198, 60, 248, 140, 243, 187, 195, 214, 64, 61, 134, 205, 137, 62, 228, 221, 3, 62, 106, 161, 143, 61, 17, 122, 47, 60, 136, 203, 150, 188, 35, 56, 141, 61, 50, 122, 75, 190, 199, 102, 89, 60, 89, 233, 242, 61, 174, 85, 44, 61, 155, 185, 146, 61, 181, 222, 160, 189, 137, 7, 84, 62, 10, 145, 51, 61, 192, 252, 36, 190, 247, 187, 24, 62, 226, 166, 121, 61, 201, 229, 107, 62, 154, 25, 147, 61, 254, 173, 108, 61, 7, 189, 241, 61, 7, 136, 23, 190, 250, 121, 198, 60, 105, 219, 129, 189, 177, 156, 172, 189, 12, 62, 91, 190, 47, 193, 71, 60, 156, 34, 61, 189, 223, 19, 149, 61, 85, 144, 130, 62, 247, 27, 1, 61, 12, 74, 48, 60, 16, 100, 167, 61, 158, 64, 238, 61, 214, 52, 0, 62, 32, 178, 189, 189, 136, 200, 6, 60, 21, 222, 35, 190, 130, 115, 72, 190, 209, 172, 241, 60, 24, 156, 235, 187, 191, 192, 29, 60, 205, 189, 105, 190, 59, 245, 162, 190, 38, 93, 24, 62, 48, 123, 3, 190, 105, 239, 67, 190, 223, 250, 1, 189, 94, 123, 172, 189, 96, 190, 37, 62, 93, 38, 111, 62, 158, 96, 109, 62, 25, 38, 130, 62, 151, 35, 187, 61, 246, 216, 234, 60, 96, 151, 58, 62, 110, 54, 20, 62, 12, 142, 164, 187, 215, 171, 132, 190, 212, 196, 212, 189, 15, 236, 38, 62, 220, 221, 68, 62, 22, 61, 46, 62, 180, 172, 109, 189, 62, 236, 82, 62, 197, 96, 40, 62, 188, 169, 65, 190, 95, 246, 131, 189, 159, 56, 10, 60, 198, 65, 231, 60, 156, 84, 93, 190, 146, 113, 140, 190, 4, 215, 135, 62, 14, 155, 247, 58, 253, 133, 53, 187, 129, 103, 42, 190, 148, 4, 41, 62, 92, 172, 187, 187, 4, 92, 54, 61, 6, 250, 209, 187, 206, 26, 218, 61, 248, 80, 188, 189, 251, 72, 27, 62, 32, 225, 9, 62, 13, 197, 141, 62, 233, 217, 70, 189, 248, 211, 204, 188, 33, 177, 23, 62, 73, 54, 145, 61, 7, 197, 0, 190, 75, 30, 122, 190, 17, 236, 19, 189, 252, 57, 141, 189, 193, 172, 84, 62, 206, 90, 94, 62, 197, 13, 12, 190, 92, 192, 200, 60, 88, 201, 215, 189, 74, 126, 38, 62, 118, 16, 141, 62, 9, 158, 43, 190, 12, 225, 74, 62, 50, 223, 13, 59, 241, 202, 136, 61, 255, 145, 34, 189, 169, 74, 149, 189, 38, 97, 68, 62, 200, 143, 48, 62, 66, 243, 231, 187, 71, 214, 153, 189, 149, 20, 118, 62, 148, 163, 187, 60, 13, 7, 52, 190, 239, 206, 127, 188, 249, 132, 46, 190, 98, 124, 92, 188, 39, 185, 25, 190, 226, 203, 204, 60, 133, 188, 187, 59, 138, 236, 38, 62, 118, 236, 104, 60, 216, 102, 69, 62, 114, 53, 130, 61, 233, 226, 3, 62, 208, 250, 160, 186, 145, 122, 166, 190, 39, 37, 80, 190, 224, 13, 172, 189, 42, 125, 89, 61, 36, 16, 2, 188, 67, 152, 218, 189, 127, 185, 119, 190, 19, 69, 215, 187, 175, 114, 251, 189, 60, 26, 170, 189, 51, 221, 180, 60, 86, 28, 173, 188, 253, 167, 45, 189, 255, 230, 29, 60, 208, 229, 76, 61, 13, 237, 216, 60, 245, 144, 221, 60, 30, 132, 130, 61, 97, 67, 127, 61, 63, 108, 35, 187, 33, 242, 7, 62, 180, 64, 90, 62, 171, 132, 67, 62, 135, 82, 216, 59, 17, 228, 48, 61, 28, 223, 41, 190, 131, 157, 193, 61, 65, 100, 159, 58, 147, 155, 213, 189, 115, 146, 68, 190, 89, 110, 138, 189, 147, 237, 220, 186, 77, 66, 91, 62, 207, 67, 223, 60, 10, 144, 25, 190, 212, 204, 85, 190, 88, 71, 61, 189, 58, 136, 187, 189, 155, 189, 32, 62, 13, 158, 147, 190, 209, 39, 210, 61, 188, 206, 190, 60, 178, 238, 96, 62, 129, 241, 127, 190, 131, 25, 79, 188, 118, 49, 5, 58, 95, 242, 88, 62, 184, 47, 109, 190, 145, 48, 111, 187, 31, 239, 122, 60, 25, 223, 146, 189, 189, 227, 147, 189, 246, 202, 96, 61, 97, 197, 255, 189, 15, 207, 40, 190, 86, 60, 136, 189, 72, 32, 40, 187, 85, 36, 163, 61, 94, 91, 44, 190, 171, 43, 172, 189, 246, 107, 49, 188, 137, 69, 138, 62, 204, 12, 136, 61, 104, 51, 55, 61, 185, 3, 56, 189, 13, 113, 41, 190, 251, 191, 143, 61, 195, 207, 137, 62, 249, 217, 59, 61, 111, 220, 65, 61, 192, 251, 95, 190, 41, 3, 119, 62, 55, 183, 65, 189, 124, 92, 1, 190, 107, 248, 176, 61, 146, 210, 157, 189, 146, 223, 39, 61, 49, 101, 62, 61, 3, 53, 113, 190, 96, 169, 197, 61, 155, 52, 36, 190, 34, 163, 41, 61, 159, 211, 98, 62, 109, 215, 221, 188, 116, 53, 93, 62, 223, 228, 83, 62, 235, 252, 85, 62, 16, 203, 140, 62, 204, 119, 160, 61, 71, 241, 131, 189, 130, 181, 160, 189, 53, 13, 251, 61, 189, 187, 95, 188, 43, 98, 168, 189, 105, 171, 226, 189, 140, 187, 82, 189, 51, 208, 173, 59, 37, 101, 162, 188, 15, 29, 99, 60, 20, 186, 144, 190, 167, 160, 72, 190, 145, 67, 4, 62, 103, 17, 101, 61, 214, 41, 105, 190, 53, 139, 65, 62, 62, 155, 8, 62, 174, 96, 164, 189, 184, 186, 212, 188, 175, 1, 39, 188, 251, 171, 62, 62, 206, 219, 60, 62, 78, 49, 48, 188, 206, 12, 144, 61, 102, 107, 95, 62, 22, 19, 188, 188, 245, 27, 169, 189, 201, 85, 49, 189, 126, 229, 5, 190, 36, 151, 172, 61, 137, 189, 56, 190, 198, 73, 137, 61, 140, 187, 217, 61, 94, 205, 33, 62, 41, 135, 110, 189, 210, 72, 128, 62, 148, 206, 57, 62, 103, 240, 37, 62, 19, 181, 25, 190, 133, 79, 146, 190, 177, 233, 92, 190, 92, 20, 59, 187, 226, 236, 203, 60, 181, 184, 159, 189, 82, 18, 61, 190, 5, 99, 99, 190, 172, 199, 93, 58, 111, 253, 104, 187, 160, 187, 33, 61, 34, 158, 34, 190, 93, 64, 123, 62, 102, 230, 6, 190, 145, 30, 152, 59, 125, 142, 217, 188, 62, 102, 184, 189, 252, 226, 201, 188, 136, 11, 45, 190, 230, 177, 240, 61, 213, 218, 252, 61, 0, 180, 81, 62, 103, 156, 36, 62, 113, 57, 62, 62, 215, 140, 109, 62, 236, 253, 168, 189, 200, 205, 8, 62, 108, 151, 36, 190, 172, 75, 59, 190, 229, 102, 185, 189, 151, 192, 93, 190, 41, 134, 144, 61, 203, 237, 11, 61, 108, 162, 133, 62, 106, 126, 152, 62, 64, 85, 18, 190, 53, 0, 70, 62, 141, 29, 132, 189, 120, 88, 8, 62, 95, 5, 252, 189, 227, 20, 185, 61, 90, 105, 118, 61, 177, 54, 45, 190, 182, 22, 255, 60, 215, 70, 25, 61, 223, 42, 35, 190, 216, 114, 111, 189, 34, 48, 102, 190, 228, 94, 128, 62, 23, 60, 12, 62, 26, 220, 180, 188, 177, 241, 208, 61, 180, 215, 38, 62, 254, 251, 77, 62, 69, 35, 41, 62, 224, 51, 154, 62, 63, 49, 253, 61, 105, 102, 41, 189, 208, 245, 1, 190, 191, 41, 80, 60, 136, 35, 245, 189, 247, 86, 35, 190, 141, 92, 242, 188, 123, 187, 64, 190, 43, 222, 178, 189, 65, 112, 91, 189, 97, 166, 254, 59, 165, 252, 21, 190, 242, 74, 157, 190, 214, 66, 12, 59, 111, 223, 189, 189, 170, 185, 129, 61, 204, 208, 155, 190, 35, 178, 212, 188, 109, 89, 35, 61, 181, 121, 89, 59, 80, 88, 242, 187, 81, 187, 158, 189, 74, 82, 63, 61, 193, 201, 213, 61, 246, 241, 67, 190, 195, 21, 12, 62, 247, 168, 198, 189, 12, 26, 144, 189, 83, 4, 225, 189, 147, 176, 8, 190, 72, 105, 166, 189, 168, 35, 158, 190, 102, 71, 154, 188, 126, 65, 217, 189, 148, 17, 85, 188, 219, 255, 49, 190, 161, 81, 10, 62, 221, 138, 67, 189, 168, 208, 0, 62, 199, 142, 36, 62, 95, 54, 251, 188, 161, 170, 46, 189, 76, 177, 151, 190, 153, 238, 110, 189, 46, 215, 103, 190, 170, 156, 128, 190, 86, 34, 113, 189, 10, 109, 92, 62, 164, 220, 154, 61, 223, 50, 53, 62, 135, 74, 79, 60, 4, 226, 72, 189, 193, 51, 184, 61, 222, 232, 75, 189, 201, 188, 145, 62, 253, 217, 176, 62, 144, 23, 95, 190, 180, 78, 149, 189, 160, 223, 146, 61, 62, 21, 42, 188, 68, 40, 142, 60, 209, 247, 7, 190, 74, 66, 91, 190, 132, 243, 43, 190, 15, 63, 68, 190, 175, 91, 252, 189, 60, 252, 91, 189, 24, 173, 223, 188, 185, 114, 195, 189, 42, 23, 52, 62, 172, 82, 152, 189, 46, 195, 158, 61, 124, 197, 79, 61, 249, 218, 133, 190, 117, 91, 223, 60, 208, 251, 233, 189, 79, 69, 58, 62, 160, 205, 107, 62, 178, 95, 188, 61, 172, 190, 10, 190, 111, 13, 91, 188, 43, 80, 136, 190, 118, 184, 94, 189, 97, 185, 103, 190, 29, 110, 209, 189, 229, 169, 242, 188, 172, 91, 167, 189, 254, 190, 164, 190, 167, 228, 175, 59, 101, 246, 183, 189, 11, 251, 34, 190, 62, 184, 91, 189, 11, 56, 193, 188, 59, 51, 110, 62, 91, 147, 131, 62, 22, 84, 168, 61, 71, 150, 242, 61, 165, 190, 100, 189, 239, 167, 145, 188, 182, 11, 39, 62, 87, 11, 40, 190, 28, 170, 143, 61, 243, 123, 79, 190, 223, 14, 153, 61, 215, 47, 210, 61, 120, 9, 32, 61, 111, 251, 62, 62, 38, 37, 84, 62, 225, 181, 219, 61, 197, 202, 172, 189, 218, 34, 180, 61, 205, 139, 168, 189, 167, 211, 79, 62, 26, 214, 69, 61, 90, 147, 108, 188, 195, 205, 145, 189, 7, 66, 46, 62, 162, 204, 1, 190, 163, 95, 94, 60, 75, 118, 56, 190, 27, 252, 74, 61, 134, 239, 45, 190, 44, 111, 158, 189, 91, 67, 82, 62, 164, 109, 229, 189, 134, 6, 163, 61, 210, 236, 173, 61, 117, 82, 128, 62, 193, 40, 145, 62, 198, 109, 36, 60, 188, 252, 9, 190, 78, 146, 34, 62, 200, 171, 88, 61, 0, 248, 214, 188, 160, 234, 159, 187, 106, 243, 36, 62, 54, 1, 178, 189, 184, 23, 21, 62, 19, 35, 119, 62, 91, 199, 36, 187, 208, 149, 50, 61, 228, 153, 124, 61, 40, 42, 33, 190, 31, 233, 250, 61, 142, 224, 13, 190, 18, 192, 52, 62, 127, 239, 148, 189, 246, 53, 65, 62, 78, 227, 69, 188, 238, 236, 197, 59, 159, 146, 92, 62, 66, 51, 180, 61, 31, 71, 20, 189, 134, 234, 12, 189, 154, 130, 181, 61, 200, 190, 139, 60, 211, 94, 199, 189, 146, 92, 253, 189, 200, 20, 251, 189, 55, 54, 57, 61, 213, 92, 110, 190, 192, 126, 115, 189, 121, 44, 251, 61, 5, 29, 95, 61, 31, 189, 35, 62, 70, 214, 130, 61, 219, 242, 84, 62, 131, 242, 201, 188, 18, 184, 208, 60, 114, 185, 4, 189, 229, 54, 242, 188, 77, 77, 156, 61, 222, 135, 55, 62, 36, 20, 112, 62, 31, 69, 165, 189, 97, 2, 58, 189, 164, 93, 246, 61, 249, 119, 181, 60, 39, 157, 119, 190, 109, 17, 21, 190, 195, 29, 212, 61, 110, 199, 33, 190, 106, 57, 34, 190, 237, 233, 107, 189, 112, 210, 146, 60, 226, 7, 204, 189, 43, 25, 94, 190, 208, 84, 165, 61, 58, 181, 180, 188, 70, 169, 0, 62, 104, 229, 219, 61, 45, 210, 147, 60, 27, 222, 204, 61, 6, 140, 5, 62, 8, 44, 120, 61, 33, 124, 19, 61, 86, 153, 194, 61, 139, 245, 119, 190, 26, 94, 43, 61, 212, 18, 161, 60, 75, 112, 154, 60, 20, 59, 110, 62, 116, 91, 147, 62, 62, 211, 18, 61, 82, 48, 242, 61, 196, 239, 114, 62, 207, 240, 224, 59, 215, 55, 102, 190, 213, 176, 206, 189, 7, 211, 9, 61, 146, 68, 222, 189, 128, 10, 21, 189, 46, 212, 22, 62, 40, 7, 205, 187, 203, 194, 76, 190, 176, 184, 74, 188, 147, 253, 193, 59, 4, 83, 205, 61, 228, 20, 159, 61, 108, 102, 0, 62, 125, 172, 31, 190, 152, 104, 166, 187, 32, 87, 17, 188, 160, 91, 59, 60, 207, 47, 28, 62, 38, 174, 78, 61, 21, 247, 160, 189, 59, 36, 34, 190, 41, 195, 40, 190, 171, 206, 68, 61, 154, 206, 252, 189, 233, 250, 134, 60, 238, 158, 180, 189, 74, 142, 51, 61, 184, 149, 161, 189, 35, 128, 204, 189, 154, 194, 143, 62, 84, 223, 24, 60, 126, 72, 11, 62, 156, 80, 83, 190, 197, 92, 31, 62, 50, 214, 74, 61, 226, 173, 12, 190, 1, 36, 142, 189, 198, 6, 79, 62, 173, 134, 42, 189, 244, 80, 0, 190, 18, 14, 33, 190, 104, 162, 54, 62, 207, 147, 96, 61, 150, 31, 98, 189, 62, 153, 170, 189, 88, 206, 187, 61, 234, 157, 90, 62, 202, 14, 134, 62, 104, 241, 40, 62, 19, 169, 11, 188, 162, 85, 53, 189, 88, 104, 142, 189, 134, 24, 241, 189, 162, 22, 211, 189, 180, 22, 228, 189, 189, 49, 134, 190, 98, 135, 172, 189, 164, 17, 102, 189, 186, 61, 136, 62, 189, 96, 150, 62, 80, 175, 225, 189, 45, 106, 216, 188, 117, 23, 67, 190, 83, 192, 188, 189, 21, 219, 140, 62, 244, 245, 222, 189, 246, 21, 231, 61, 70, 227, 235, 60, 142, 157, 182, 61, 88, 166, 99, 61, 182, 216, 223, 61, 243, 49, 108, 62, 55, 57, 134, 62, 189, 178, 82, 190, 218, 137, 104, 189, 183, 41, 198, 185, 121, 170, 50, 190, 18, 79, 142, 189, 11, 118, 204, 189, 130, 253, 54, 188, 85, 146, 135, 59, 120, 190, 166, 188, 254, 245, 24, 62, 180, 251, 66, 188, 183, 116, 5, 190, 84, 111, 34, 62, 174, 28, 61, 62, 80, 247, 237, 186, 89, 32, 83, 188, 207, 188, 21, 190, 204, 164, 173, 188, 66, 236, 157, 189, 24, 34, 103, 187, 91, 36, 132, 60, 207, 52, 20, 62, 112, 228, 35, 190, 34, 188, 146, 190, 153, 96, 100, 62, 107, 255, 213, 189, 139, 248, 41, 190, 183, 43, 252, 189, 222, 135, 96, 60, 147, 126, 8, 189, 197, 218, 60, 190, 18, 249, 55, 190, 28, 228, 74, 62, 218, 148, 175, 61, 246, 138, 108, 190, 136, 142, 184, 189, 49, 153, 19, 189, 97, 234, 142, 61, 43, 149, 73, 62, 172, 50, 130, 62, 214, 37, 192, 60, 105, 4, 29, 190, 181, 64, 148, 60, 140, 245, 227, 189, 70, 101, 11, 189, 227, 12, 25, 190, 94, 153, 140, 190, 195, 32, 25, 62, 211, 105, 80, 61, 102, 128, 10, 62, 250, 203, 179, 61, 122, 21, 117, 189, 35, 162, 22, 61, 127, 249, 120, 62, 150, 157, 143, 189, 122, 188, 47, 188, 223, 220, 68, 188, 246, 27, 216, 189, 175, 135, 206, 61, 5, 164, 13, 190, 97, 137, 207, 61, 175, 136, 104, 190, 246, 47, 152, 61, 126, 42, 148, 189, 7, 166, 209, 189, 59, 61, 206, 189, 2, 195, 232, 60, 75, 188, 86, 61, 49, 179, 34, 62, 230, 60, 239, 61, 191, 242, 228, 61, 2, 40, 68, 62, 127, 130, 140, 62, 134, 97, 235, 189, 107, 191, 20, 190, 41, 211, 228, 189, 112, 56, 39, 190, 193, 83, 174, 188, 103, 242, 126, 190, 140, 176, 41, 190, 198, 108, 159, 61, 245, 171, 220, 61, 141, 93, 70, 62, 166, 202, 193, 60, 140, 166, 99, 190, 160, 60, 212, 61, 139, 38, 195, 189, 243, 244, 120, 60, 81, 233, 14, 187, 41, 113, 139, 189, 12, 134, 36, 62, 15, 62, 66, 189, 155, 95, 50, 190, 220, 138, 201, 60, 162, 128, 4, 62, 11, 242, 152, 62, 168, 244, 145, 189, 115, 242, 31, 62, 5, 232, 138, 189, 63, 45, 102, 190, 160, 95, 160, 189, 191, 131, 104, 60, 172, 20, 43, 189, 114, 131, 237, 58, 183, 194, 138, 190, 46, 205, 51, 190, 165, 236, 89, 189, 192, 139, 224, 189, 188, 201, 53, 188, 30, 88, 92, 62, 249, 196, 130, 189, 248, 72, 19, 60, 20, 25, 142, 61, 91, 47, 143, 187, 102, 23, 54, 190, 189, 220, 135, 61, 95, 233, 38, 62, 2, 180, 163, 61, 242, 177, 201, 61, 31, 88, 187, 188, 58, 142, 254, 61, 90, 167, 194, 188, 108, 214, 32, 60, 118, 138, 243, 189, 188, 105, 196, 189, 244, 136, 44, 190, 252, 240, 139, 190, 38, 50, 44, 190, 22, 94, 9, 189, 139, 82, 60, 190, 69, 120, 211, 189, 201, 84, 249, 189, 44, 12, 146, 61, 150, 42, 63, 62, 9, 106, 8, 62, 87, 94, 156, 61, 25, 152, 139, 61, 64, 171, 234, 61, 20, 168, 68, 189, 18, 144, 206, 61, 50, 47, 215, 188, 5, 191, 186, 189, 227, 132, 43, 189, 9, 152, 112, 61, 133, 28, 216, 188, 85, 182, 135, 62, 186, 119, 140, 62, 250, 187, 32, 190, 136, 215, 85, 190, 151, 8, 147, 60, 32, 83, 27, 62, 255, 77, 254, 61, 183, 39, 3, 190, 33, 15, 138, 62, 54, 6, 21, 189, 91, 58, 130, 62, 76, 22, 254, 189, 253, 159, 102, 61, 177, 105, 15, 62, 37, 243, 129, 62, 65, 12, 142, 61, 132, 120, 194, 61, 91, 218, 108, 62, 103, 225, 16, 190, 100, 124, 186, 186, 192, 29, 99, 190, 92, 108, 30, 189, 186, 23, 91, 61, 72, 181, 14, 190, 253, 150, 246, 188, 89, 149, 231, 189, 164, 80, 168, 188, 163, 254, 188, 59, 35, 127, 68, 62, 152, 141, 54, 62, 156, 95, 187, 61, 190, 206, 108, 61, 76, 104, 17, 190, 183, 36, 178, 189, 118, 44, 40, 190, 2, 159, 19, 190, 11, 210, 12, 62, 72, 198, 252, 188, 201, 23, 220, 60, 122, 12, 87, 189, 96, 99, 108, 190, 56, 189, 134, 189, 82, 142, 58, 189, 25, 42, 127, 62, 141, 172, 200, 189, 112, 17, 133, 190, 73, 168, 156, 189, 38, 232, 94, 62, 55, 170, 236, 61, 16, 250, 69, 190, 161, 195, 227, 188, 172, 140, 246, 186, 191, 69, 179, 61, 254, 169, 158, 62, 54, 19, 234, 188, 168, 196, 72, 189, 25, 158, 130, 61, 59, 182, 4, 190, 60, 138, 248, 189, 163, 77, 156, 189, 111, 76, 154, 188, 251, 213, 221, 61, 22, 196, 181, 188, 168, 133, 100, 61, 233, 235, 226, 61, 75, 111, 116, 189, 50, 224, 120, 61, 184, 122, 91, 62, 187, 202, 63, 60, 240, 0, 178, 189, 185, 58, 79, 190, 122, 83, 74, 61, 203, 153, 128, 190, 253, 84, 198, 189, 9, 178, 13, 189, 212, 39, 193, 187, 253, 152, 143, 189, 170, 157, 105, 190, 73, 56, 57, 190, 225, 53, 21, 62, 24, 213, 179, 61, 3, 171, 135, 189, 186, 234, 141, 188, 30, 15, 178, 61, 219, 11, 42, 62, 173, 60, 38, 61, 61, 173, 135, 62, 41, 215, 27, 62, 21, 196, 3, 62, 17, 248, 40, 190, 81, 29, 5, 62, 157, 245, 30, 190, 152, 161, 47, 190, 156, 104, 15, 190, 43, 163, 112, 61, 71, 234, 186, 61, 198, 194, 85, 62, 26, 228, 92, 62, 91, 96, 148, 188, 236, 13, 118, 60, 149, 45, 112, 190, 182, 108, 45, 62, 57, 177, 188, 61, 177, 247, 96, 61, 252, 9, 50, 62, 15, 104, 73, 62, 236, 9, 104, 62, 3, 196, 221, 189, 207, 106, 80, 62, 168, 22, 15, 189, 5, 88, 33, 62, 215, 101, 113, 187, 64, 158, 34, 62, 121, 37, 12, 62, 61, 61, 252, 189, 28, 83, 19, 189, 51, 80, 132, 188, 197, 141, 134, 190, 124, 31, 80, 187, 93, 161, 148, 190, 175, 106, 53, 190, 109, 131, 4, 61, 195, 216, 64, 190, 64, 243, 53, 62, 188, 73, 131, 61, 180, 75, 168, 61, 185, 162, 218, 189, 179, 67, 14, 190, 206, 73, 142, 190, 57, 23, 84, 190, 142, 4, 166, 189, 143, 222, 49, 62, 89, 97, 147, 60, 71, 67, 83, 189, 76, 194, 136, 190, 76, 157, 88, 62, 100, 145, 176, 189, 11, 14, 30, 190, 166, 200, 113, 61, 39, 67, 2, 61, 31, 195, 125, 61, 224, 231, 123, 190, 216, 85, 58, 190, 126, 120, 63, 188, 246, 108, 55, 190, 129, 131, 164, 189, 46, 178, 215, 61, 163, 160, 55, 62, 216, 149, 144, 61, 47, 49, 22, 62, 138, 38, 192, 188, 13, 73, 132, 62, 132, 164, 81, 189, 146, 152, 195, 61, 6, 110, 31, 61, 227, 53, 62, 61, 142, 97, 94, 190, 100, 58, 10, 61, 242, 218, 125, 61, 174, 216, 21, 190, 154, 220, 182, 62, 63, 222, 63, 62, 60, 64, 29, 190, 245, 247, 218, 187, 77, 28, 184, 61, 10, 45, 48, 188, 68, 127, 55, 189, 147, 34, 131, 187, 87, 6, 75, 190, 106, 72, 25, 62, 199, 135, 248, 61, 242, 39, 46, 62, 60, 78, 223, 189, 32, 43, 157, 61, 138, 22, 1, 62, 207, 186, 3, 62, 182, 188, 127, 61, 147, 44, 36, 190, 89, 240, 57, 62, 69, 111, 142, 189, 69, 102, 37, 61, 124, 123, 0, 190, 191, 26, 163, 188, 98, 0, 250, 189, 35, 255, 138, 61, 244, 171, 8, 62, 143, 111, 202, 188, 222, 63, 23, 61, 213, 141, 145, 61, 174, 106, 250, 189, 222, 153, 56, 62, 146, 82, 137, 61, 169, 138, 194, 189, 153, 17, 90, 189};
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
                    alignas(float) const unsigned char memory[] = {167, 155, 27, 62, 238, 72, 52, 190, 76, 250, 41, 190, 184, 27, 178, 61, 139, 99, 42, 190, 137, 72, 62, 189, 42, 122, 103, 61, 74, 231, 13, 190, 48, 29, 10, 61, 91, 7, 129, 61, 190, 107, 175, 186, 181, 172, 44, 190, 252, 222, 242, 189, 68, 82, 235, 187, 237, 182, 215, 61, 122, 60, 136, 60, 89, 189, 253, 61, 160, 218, 173, 60, 29, 165, 55, 188, 171, 214, 176, 61, 92, 225, 219, 60, 35, 179, 245, 61, 110, 97, 157, 189, 210, 190, 147, 61, 174, 184, 32, 190, 224, 187, 157, 61, 53, 125, 34, 62, 88, 167, 85, 62, 254, 71, 192, 189, 155, 235, 52, 62, 118, 234, 149, 188, 105, 41, 190, 189};
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
                    alignas(float) const unsigned char memory[] = {148, 19, 59, 62, 131, 113, 201, 188, 238, 218, 11, 190, 154, 107, 94, 190, 35, 126, 91, 190, 5, 236, 45, 190, 189, 107, 139, 62, 13, 102, 51, 189, 80, 248, 26, 62, 171, 18, 79, 190, 109, 11, 138, 62, 64, 162, 142, 190, 232, 12, 8, 190, 54, 191, 5, 62, 31, 69, 225, 61, 56, 41, 97, 190, 174, 95, 117, 190, 28, 182, 214, 61, 144, 69, 41, 190, 118, 142, 216, 188, 207, 147, 23, 190, 92, 46, 124, 62, 231, 13, 121, 190, 132, 42, 0, 190, 0, 211, 77, 62, 148, 86, 208, 189, 203, 55, 143, 62, 147, 15, 172, 189, 69, 143, 64, 190, 58, 12, 156, 62, 85, 15, 143, 190, 134, 241, 51, 60};
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
                    alignas(float) const unsigned char memory[] = {35, 159, 251, 189};
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
    alignas(float) const unsigned char memory[] = {84, 139, 167, 63, 75, 169, 38, 61, 102, 56, 223, 191, 17, 138, 166, 191, 92, 38, 161, 63, 207, 209, 197, 191, 60, 106, 54, 63, 121, 191, 32, 63, 251, 132, 16, 191, 87, 109, 235, 62, 209, 238, 115, 63, 193, 181, 192, 190, 240, 131, 10, 63, 111, 73, 70, 191, 252, 71, 180, 190, 223, 35, 146, 191, 26, 199, 186, 63, 155, 56, 213, 191, 79, 59, 41, 191, 120, 60, 212, 63, 35, 217, 50, 63, 102, 181, 28, 63, 195, 106, 158, 191, 205, 246, 174, 191, 254, 241, 143, 63, 188, 69, 204, 62, 242, 128, 7, 192, 119, 42, 250, 63, 25, 245, 70, 190, 45, 172, 5, 64, 15, 183, 13, 190, 214, 214, 89, 191, 49, 22, 251, 61, 153, 240, 36, 63, 180, 232, 86, 63, 150, 139, 128, 190, 64, 122, 248, 191, 131, 246, 87, 63, 117, 148, 160, 191};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {209, 7, 152, 63, 203, 145, 148, 192, 13, 150, 90, 192, 201, 162, 150, 192, 130, 175, 134, 64, 103, 36, 156, 192, 174, 238, 168, 192, 75, 31, 154, 64, 212, 164, 75, 191, 207, 180, 211, 62, 99, 17, 150, 64, 248, 127, 138, 192, 254, 165, 75, 192};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2025-02-16_22-06-20/febe313_zoo_environment_algorithm/pendulum-v1_ppo/0004/steps/000000000000194";
   char commit_hash[] = "febe313f53766cb926a2cf3a16b1300b6b084a6f";
}