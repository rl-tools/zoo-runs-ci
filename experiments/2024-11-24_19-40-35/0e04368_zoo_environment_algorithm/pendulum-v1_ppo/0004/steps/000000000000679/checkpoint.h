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
                alignas(float) const unsigned char memory[] = {226, 244, 6, 191, 51, 135, 18, 60, 119, 235, 207, 190};
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
                alignas(float) const unsigned char memory[] = {137, 219, 250, 63, 103, 62, 188, 63, 202, 54, 155, 62};
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
                    alignas(float) const unsigned char memory[] = {217, 153, 11, 191, 99, 65, 37, 63, 23, 98, 165, 62, 125, 252, 44, 61, 65, 178, 56, 63, 180, 73, 74, 63, 133, 243, 38, 191, 108, 203, 178, 189, 95, 110, 52, 191, 29, 141, 194, 189, 185, 254, 150, 190, 240, 145, 204, 61, 214, 143, 59, 63, 225, 162, 130, 190, 3, 208, 70, 63, 197, 183, 78, 62, 49, 225, 203, 62, 210, 4, 16, 63, 72, 11, 192, 190, 61, 45, 184, 190, 7, 52, 249, 62, 87, 176, 129, 190, 174, 182, 211, 190, 141, 167, 247, 190, 200, 38, 32, 191, 136, 171, 23, 189, 170, 248, 64, 63, 246, 142, 35, 189, 128, 174, 75, 62, 177, 237, 91, 61, 100, 32, 4, 62, 110, 187, 155, 190, 53, 32, 54, 191, 65, 73, 32, 191, 91, 111, 6, 190, 188, 112, 61, 63, 95, 165, 44, 63, 49, 45, 151, 190, 107, 156, 72, 63, 0, 109, 158, 62, 54, 116, 47, 63, 130, 147, 221, 58, 143, 90, 217, 190, 108, 77, 243, 190, 83, 185, 9, 63, 8, 120, 190, 189, 248, 52, 208, 190, 142, 106, 207, 62, 17, 119, 128, 62, 216, 225, 1, 63, 197, 74, 36, 189, 148, 82, 99, 61, 56, 107, 134, 62, 34, 198, 165, 189, 103, 124, 121, 62, 22, 77, 66, 62, 225, 237, 4, 63, 226, 193, 37, 63, 248, 17, 186, 62, 185, 18, 80, 191, 165, 29, 22, 62, 31, 218, 220, 62, 14, 115, 180, 62, 35, 170, 143, 190, 149, 190, 240, 62, 5, 111, 36, 63, 65, 217, 199, 61, 92, 174, 122, 61, 27, 175, 122, 62, 102, 115, 142, 190, 72, 191, 14, 190, 37, 218, 5, 191, 217, 245, 87, 190, 141, 51, 16, 190, 78, 41, 170, 62, 218, 116, 75, 190, 164, 76, 49, 190, 150, 213, 233, 190, 85, 255, 180, 62, 240, 8, 238, 190, 239, 160, 47, 191, 198, 132, 110, 62, 194, 86, 192, 190, 220, 150, 101, 191, 37, 136, 96, 190, 86, 233, 148, 186, 22, 143, 211, 190, 42, 98, 9, 63, 163, 253, 57, 190, 158, 185, 33, 191, 149, 200, 79, 190, 246, 222, 239, 62, 105, 136, 183, 190, 43, 125, 154, 190, 184, 176, 234, 62, 84, 181, 56, 63};
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
                    alignas(float) const unsigned char memory[] = {164, 26, 53, 190, 118, 244, 139, 190, 120, 139, 20, 190, 97, 227, 175, 62, 174, 104, 131, 61, 183, 124, 49, 191, 232, 48, 84, 190, 175, 162, 69, 63, 233, 134, 224, 190, 232, 2, 234, 61, 161, 127, 86, 190, 81, 123, 245, 190, 178, 63, 186, 61, 198, 153, 16, 191, 129, 209, 147, 62, 216, 99, 250, 190, 66, 148, 55, 62, 214, 28, 18, 191, 101, 63, 77, 191, 21, 108, 243, 62, 20, 231, 239, 190, 210, 122, 40, 63, 65, 8, 231, 190, 68, 232, 86, 63, 244, 32, 219, 62, 216, 227, 28, 63, 59, 43, 90, 191, 222, 62, 14, 191, 209, 6, 56, 63, 61, 44, 242, 62, 116, 66, 156, 61, 73, 54, 59, 63};
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
                    alignas(float) const unsigned char memory[] = {71, 219, 102, 62, 199, 117, 1, 191, 197, 216, 161, 58, 114, 160, 187, 62, 249, 131, 177, 60, 16, 236, 139, 191, 96, 13, 144, 61, 254, 161, 53, 63, 111, 17, 4, 187, 96, 246, 243, 61, 83, 54, 165, 60, 228, 78, 110, 189, 110, 226, 59, 62, 8, 43, 167, 190, 138, 42, 85, 62, 250, 16, 36, 190, 207, 185, 9, 61, 216, 184, 164, 190, 226, 47, 141, 191, 30, 236, 202, 59, 248, 173, 33, 191, 27, 148, 46, 190, 184, 152, 240, 190, 104, 102, 53, 63, 115, 36, 166, 62, 170, 177, 39, 63, 91, 187, 245, 185, 133, 255, 132, 62, 186, 200, 53, 63, 167, 231, 161, 61, 97, 143, 27, 62, 34, 67, 140, 59, 36, 127, 135, 190, 249, 200, 194, 61, 213, 89, 163, 62, 199, 131, 123, 62, 219, 252, 75, 190, 184, 222, 85, 60, 108, 46, 184, 189, 94, 46, 64, 189, 127, 69, 62, 190, 124, 16, 138, 189, 35, 85, 50, 60, 30, 108, 66, 190, 44, 79, 192, 60, 53, 246, 137, 190, 114, 79, 72, 61, 121, 132, 152, 188, 151, 168, 151, 190, 159, 23, 202, 189, 246, 125, 98, 62, 56, 240, 212, 188, 47, 226, 51, 190, 16, 131, 171, 188, 199, 235, 34, 60, 182, 168, 132, 188, 95, 168, 41, 62, 119, 90, 146, 61, 17, 88, 76, 189, 156, 237, 17, 190, 208, 1, 200, 189, 242, 44, 159, 62, 197, 145, 171, 59, 192, 83, 149, 61, 116, 208, 197, 189, 90, 167, 161, 61, 52, 128, 41, 61, 136, 120, 125, 60, 190, 243, 154, 190, 156, 150, 140, 62, 179, 150, 107, 187, 180, 176, 62, 61, 163, 153, 60, 190, 102, 66, 27, 190, 10, 11, 138, 61, 84, 62, 179, 190, 22, 2, 132, 189, 134, 138, 12, 189, 146, 215, 79, 61, 220, 216, 250, 60, 155, 17, 139, 188, 211, 213, 162, 189, 80, 72, 181, 188, 164, 21, 65, 62, 11, 12, 145, 61, 210, 41, 148, 62, 145, 185, 153, 61, 146, 22, 223, 61, 169, 16, 52, 62, 110, 116, 59, 189, 39, 243, 119, 190, 30, 34, 238, 188, 188, 174, 232, 61, 149, 135, 251, 61, 94, 153, 102, 189, 27, 116, 207, 60, 61, 95, 21, 189, 2, 133, 146, 62, 247, 183, 131, 62, 23, 175, 203, 61, 206, 180, 165, 189, 53, 76, 0, 61, 92, 249, 172, 61, 102, 255, 111, 190, 81, 125, 186, 189, 248, 198, 140, 61, 61, 68, 180, 59, 16, 232, 233, 188, 158, 8, 42, 190, 47, 16, 27, 62, 201, 211, 200, 61, 44, 159, 253, 189, 211, 126, 167, 61, 182, 160, 27, 61, 76, 82, 147, 62, 82, 9, 23, 62, 11, 27, 90, 61, 146, 5, 36, 62, 175, 186, 10, 190, 10, 152, 233, 188, 151, 1, 166, 188, 230, 166, 224, 189, 94, 99, 143, 190, 66, 202, 209, 189, 237, 6, 182, 189, 192, 81, 58, 62, 94, 117, 76, 62, 121, 245, 216, 61, 166, 168, 141, 189, 148, 151, 167, 61, 4, 10, 153, 62, 12, 173, 55, 62, 150, 143, 101, 190, 108, 124, 45, 61, 171, 134, 15, 190, 10, 208, 87, 190, 228, 31, 191, 189, 226, 87, 142, 189, 220, 46, 129, 188, 208, 89, 178, 190, 14, 244, 229, 190, 61, 27, 125, 61, 145, 215, 142, 189, 95, 20, 15, 190, 115, 174, 2, 190, 63, 68, 231, 189, 192, 250, 86, 62, 207, 95, 168, 62, 63, 144, 72, 62, 124, 36, 157, 62, 253, 119, 171, 61, 75, 52, 94, 188, 153, 207, 101, 62, 111, 141, 14, 62, 212, 203, 177, 189, 96, 200, 187, 190, 0, 232, 10, 190, 196, 233, 143, 62, 220, 93, 17, 62, 156, 121, 129, 62, 131, 130, 75, 190, 184, 61, 31, 62, 129, 138, 154, 62, 127, 216, 11, 190, 161, 169, 32, 190, 213, 94, 155, 60, 68, 56, 57, 61, 182, 44, 107, 190, 25, 0, 214, 190, 19, 74, 35, 62, 172, 34, 14, 60, 227, 202, 18, 190, 0, 83, 125, 190, 101, 221, 173, 61, 247, 172, 123, 61, 56, 162, 176, 61, 69, 220, 162, 189, 98, 250, 64, 61, 247, 68, 112, 189, 243, 204, 124, 62, 104, 72, 179, 61, 96, 237, 151, 62, 214, 143, 139, 189, 7, 14, 135, 189, 170, 107, 74, 62, 189, 251, 138, 61, 109, 185, 61, 190, 155, 22, 182, 190, 10, 209, 136, 189, 8, 3, 212, 61, 34, 113, 206, 61, 16, 110, 143, 62, 224, 60, 77, 188, 32, 242, 108, 61, 252, 142, 112, 190, 70, 79, 200, 61, 124, 150, 181, 62, 155, 217, 35, 190, 207, 188, 66, 62, 59, 59, 237, 187, 193, 44, 76, 62, 75, 16, 200, 60, 52, 59, 169, 189, 117, 230, 164, 62, 46, 101, 117, 62, 27, 12, 148, 61, 225, 51, 253, 189, 137, 253, 84, 62, 121, 59, 173, 61, 128, 191, 221, 189, 206, 81, 240, 188, 180, 53, 137, 190, 139, 16, 70, 61, 253, 187, 45, 190, 125, 230, 132, 61, 154, 35, 217, 60, 35, 229, 252, 61, 39, 208, 199, 186, 174, 2, 119, 62, 144, 187, 15, 62, 27, 150, 16, 62, 206, 244, 24, 190, 26, 158, 81, 190, 145, 184, 128, 190, 144, 182, 61, 190, 40, 35, 83, 61, 12, 94, 15, 62, 238, 129, 145, 189, 87, 103, 177, 190, 176, 31, 243, 60, 206, 149, 1, 190, 159, 224, 210, 189, 47, 175, 234, 189, 78, 164, 158, 189, 191, 69, 128, 189, 202, 236, 244, 189, 215, 149, 92, 189, 29, 209, 34, 189, 250, 114, 110, 61, 180, 121, 197, 61, 206, 183, 93, 188, 169, 130, 173, 188, 225, 61, 56, 62, 8, 220, 165, 62, 66, 166, 43, 62, 43, 255, 57, 61, 214, 124, 69, 61, 131, 235, 82, 190, 253, 199, 242, 61, 181, 243, 44, 187, 186, 178, 41, 190, 108, 18, 144, 190, 202, 79, 196, 189, 180, 57, 242, 61, 134, 8, 31, 62, 58, 93, 196, 61, 219, 135, 114, 189, 106, 167, 112, 190, 182, 222, 67, 190, 8, 43, 207, 189, 92, 13, 134, 62, 137, 118, 182, 190, 13, 193, 212, 61, 126, 197, 169, 61, 114, 156, 177, 62, 101, 200, 66, 190, 55, 145, 144, 60, 94, 171, 0, 62, 59, 161, 161, 62, 228, 235, 69, 190, 13, 27, 34, 189, 191, 208, 228, 188, 156, 245, 10, 188, 83, 181, 139, 189, 0, 224, 199, 188, 246, 224, 103, 190, 250, 62, 54, 190, 121, 136, 207, 189, 30, 75, 234, 188, 163, 66, 33, 62, 254, 140, 63, 190, 59, 47, 28, 189, 237, 247, 61, 61, 222, 227, 194, 62, 151, 14, 5, 62, 224, 110, 162, 189, 122, 228, 91, 60, 255, 232, 109, 190, 195, 175, 74, 59, 74, 188, 206, 62, 190, 157, 15, 62, 47, 60, 142, 189, 88, 36, 140, 190, 191, 223, 221, 62, 150, 58, 111, 189, 175, 141, 152, 190, 196, 172, 130, 186, 142, 232, 223, 189, 152, 145, 234, 188, 103, 190, 25, 189, 1, 9, 149, 190, 248, 21, 20, 62, 39, 249, 60, 190, 50, 157, 211, 61, 64, 132, 69, 62, 26, 4, 93, 61, 61, 247, 202, 62, 123, 236, 142, 62, 30, 193, 186, 62, 134, 101, 157, 62, 154, 184, 67, 62, 97, 76, 108, 190, 0, 145, 255, 189, 180, 152, 220, 188, 161, 158, 84, 189, 61, 187, 72, 190, 89, 170, 131, 190, 28, 24, 180, 60, 151, 71, 45, 189, 127, 65, 25, 61, 77, 91, 198, 61, 101, 79, 134, 190, 13, 213, 198, 190, 196, 250, 166, 61, 90, 204, 81, 62, 99, 97, 129, 190, 69, 34, 54, 62, 246, 229, 26, 62, 66, 195, 71, 61, 139, 40, 42, 61, 212, 242, 167, 187, 41, 107, 160, 62, 49, 163, 171, 62, 206, 221, 138, 61, 77, 99, 97, 60, 216, 72, 48, 62, 73, 87, 135, 61, 30, 111, 129, 189, 223, 241, 175, 189, 76, 240, 107, 190, 179, 107, 251, 61, 176, 120, 97, 190, 7, 100, 162, 61, 136, 4, 23, 62, 7, 168, 249, 61, 80, 55, 96, 189, 189, 64, 165, 62, 143, 31, 143, 62, 104, 80, 66, 62, 153, 6, 143, 190, 98, 253, 129, 190, 67, 89, 146, 190, 20, 213, 255, 189, 29, 32, 191, 188, 197, 136, 141, 61, 129, 102, 3, 190, 255, 101, 166, 190, 252, 206, 34, 60, 120, 157, 132, 60, 38, 62, 3, 61, 76, 77, 149, 190, 164, 3, 26, 62, 24, 99, 255, 189, 108, 241, 254, 189, 138, 228, 249, 189, 241, 240, 51, 190, 10, 40, 49, 61, 182, 96, 251, 189, 167, 241, 25, 61, 61, 4, 153, 61, 255, 81, 114, 62, 32, 125, 127, 62, 103, 100, 9, 62, 157, 63, 129, 62, 52, 129, 206, 189, 230, 139, 201, 61, 155, 142, 230, 189, 8, 143, 57, 190, 34, 49, 24, 190, 97, 188, 161, 190, 34, 89, 48, 61, 84, 203, 64, 62, 226, 68, 55, 62, 79, 178, 182, 62, 12, 13, 125, 190, 58, 91, 172, 62, 11, 167, 151, 60, 245, 71, 161, 189, 137, 228, 29, 190, 86, 128, 231, 62, 151, 97, 74, 61, 221, 230, 3, 191, 80, 203, 109, 189, 240, 186, 160, 188, 80, 131, 77, 190, 75, 40, 12, 190, 176, 87, 134, 190, 14, 130, 173, 62, 99, 128, 174, 61, 82, 227, 159, 61, 91, 222, 124, 61, 201, 218, 160, 62, 1, 74, 8, 63, 109, 217, 104, 62, 129, 135, 14, 63, 44, 248, 252, 61, 98, 58, 41, 62, 188, 98, 217, 190, 112, 128, 228, 189, 253, 18, 209, 190, 12, 85, 41, 190, 205, 168, 231, 189, 189, 199, 225, 190, 184, 197, 58, 188, 10, 119, 223, 189, 157, 214, 15, 61, 59, 185, 130, 189, 58, 244, 235, 190, 123, 29, 190, 189, 39, 160, 224, 61, 155, 28, 230, 61, 218, 163, 30, 191, 135, 204, 19, 188, 54, 102, 171, 62, 95, 183, 194, 61, 239, 135, 28, 61, 223, 232, 247, 188, 6, 131, 5, 62, 2, 65, 37, 62, 64, 178, 143, 190, 117, 125, 64, 62, 77, 43, 62, 190, 189, 75, 4, 189, 217, 69, 134, 190, 131, 127, 208, 190, 211, 87, 28, 190, 79, 46, 19, 191, 17, 210, 227, 188, 15, 44, 147, 190, 111, 220, 112, 62, 140, 52, 130, 189, 240, 208, 190, 62, 13, 68, 7, 189, 141, 248, 91, 62, 17, 2, 192, 62, 25, 120, 209, 189, 17, 163, 83, 188, 8, 103, 169, 190, 168, 20, 11, 61, 92, 224, 5, 190, 134, 198, 230, 190, 90, 189, 25, 190, 178, 69, 176, 62, 50, 250, 2, 62, 116, 31, 209, 61, 238, 167, 43, 189, 83, 135, 0, 61, 78, 26, 106, 62, 215, 159, 195, 189, 129, 236, 182, 62, 233, 13, 234, 62, 187, 222, 157, 189, 121, 117, 34, 190, 67, 252, 170, 188, 241, 153, 5, 62, 39, 164, 150, 61, 218, 69, 0, 190, 214, 138, 130, 190, 241, 150, 82, 189, 173, 133, 35, 190, 162, 27, 196, 189, 156, 155, 83, 189, 99, 182, 126, 189, 1, 169, 15, 190, 5, 23, 47, 62, 228, 205, 126, 189, 33, 2, 182, 61, 188, 248, 48, 189, 247, 204, 209, 189, 254, 223, 17, 61, 169, 152, 80, 190, 228, 141, 43, 62, 36, 214, 206, 62, 8, 164, 29, 62, 239, 51, 124, 190, 214, 239, 27, 60, 123, 8, 77, 190, 190, 249, 72, 189, 28, 244, 166, 190, 30, 206, 96, 190, 221, 67, 53, 189, 165, 54, 50, 190, 68, 233, 217, 190, 252, 2, 228, 189, 12, 119, 224, 187, 202, 242, 96, 189, 7, 226, 58, 190, 101, 4, 92, 189, 218, 215, 142, 62, 143, 89, 161, 62, 136, 147, 210, 60, 128, 208, 18, 62, 206, 216, 64, 189, 51, 57, 103, 189, 188, 178, 78, 62, 65, 223, 35, 190, 77, 136, 122, 60, 194, 205, 149, 190, 120, 63, 250, 60, 211, 131, 83, 62, 187, 251, 122, 189, 180, 39, 122, 62, 240, 169, 241, 61, 130, 15, 59, 62, 48, 153, 160, 188, 59, 1, 135, 62, 167, 201, 236, 189, 128, 169, 91, 62, 115, 125, 35, 62, 214, 224, 117, 60, 224, 163, 187, 189, 113, 80, 82, 62, 132, 192, 181, 190, 24, 192, 190, 187, 249, 98, 65, 190, 7, 36, 215, 189, 60, 159, 149, 60, 118, 56, 56, 189, 54, 222, 217, 61, 117, 189, 147, 190, 154, 195, 149, 61, 199, 180, 115, 61, 121, 212, 70, 62, 63, 158, 27, 63, 203, 237, 135, 189, 18, 101, 250, 189, 252, 138, 230, 62, 224, 229, 135, 61, 191, 159, 187, 190, 157, 51, 224, 190, 159, 17, 60, 62, 86, 211, 20, 188, 171, 171, 240, 60, 136, 135, 34, 63, 62, 245, 174, 61, 81, 41, 165, 61, 238, 142, 241, 189, 236, 169, 91, 190, 114, 53, 122, 62, 83, 112, 24, 190, 108, 48, 10, 62, 154, 165, 183, 189, 165, 60, 155, 62, 230, 136, 169, 61, 237, 5, 177, 59, 82, 66, 164, 62, 1, 161, 83, 62, 219, 105, 155, 61, 189, 10, 219, 189, 185, 55, 118, 60, 17, 122, 19, 62, 121, 178, 157, 189, 219, 141, 30, 190, 0, 7, 78, 190, 126, 120, 220, 61, 155, 204, 129, 190, 38, 63, 118, 189, 167, 77, 15, 62, 225, 131, 173, 60, 7, 2, 9, 62, 192, 87, 237, 61, 176, 142, 143, 62, 161, 46, 56, 187, 183, 141, 174, 189, 90, 192, 2, 61, 201, 149, 168, 189, 139, 240, 27, 189, 15, 2, 13, 62, 213, 106, 204, 62, 118, 64, 197, 188, 72, 189, 41, 190, 63, 80, 5, 62, 147, 194, 68, 61, 65, 44, 126, 190, 104, 131, 141, 190, 152, 77, 132, 59, 223, 100, 28, 190, 102, 184, 146, 190, 212, 245, 45, 190, 243, 95, 145, 189, 76, 6, 222, 188, 155, 75, 39, 190, 86, 130, 225, 187, 52, 180, 135, 189, 221, 221, 32, 62, 135, 86, 70, 62, 9, 12, 12, 189, 244, 39, 1, 62, 52, 227, 228, 61, 159, 234, 215, 60, 99, 109, 174, 61, 25, 137, 203, 61, 57, 239, 156, 190, 73, 248, 110, 189, 88, 73, 201, 187, 97, 220, 45, 62, 227, 144, 29, 62, 148, 63, 180, 62, 153, 225, 186, 189, 58, 73, 217, 61, 188, 31, 198, 62, 251, 13, 121, 61, 160, 196, 178, 190, 250, 230, 115, 189, 102, 128, 148, 59, 129, 132, 20, 190, 31, 152, 91, 190, 160, 117, 79, 61, 28, 55, 37, 188, 19, 47, 193, 190, 162, 193, 12, 190, 153, 209, 45, 189, 100, 54, 10, 62, 14, 178, 187, 61, 213, 79, 168, 61, 99, 252, 77, 190, 234, 2, 82, 61, 79, 80, 15, 62, 234, 119, 244, 187, 82, 139, 90, 62, 225, 77, 233, 60, 61, 151, 11, 190, 88, 144, 222, 189, 183, 125, 56, 190, 161, 186, 24, 189, 245, 27, 135, 190, 249, 84, 148, 188, 164, 156, 182, 61, 244, 14, 209, 188, 134, 0, 191, 60, 78, 93, 34, 190, 34, 235, 202, 62, 124, 244, 23, 62, 144, 205, 133, 61, 44, 241, 157, 190, 227, 84, 152, 62, 65, 61, 10, 61, 30, 150, 134, 190, 147, 252, 57, 190, 78, 101, 39, 62, 133, 19, 210, 189, 213, 76, 114, 190, 30, 245, 135, 190, 248, 141, 77, 62, 45, 193, 87, 61, 99, 65, 11, 187, 138, 55, 3, 190, 238, 57, 27, 62, 11, 210, 178, 62, 1, 135, 184, 62, 104, 182, 137, 62, 192, 106, 252, 60, 199, 201, 15, 61, 7, 16, 74, 190, 128, 17, 18, 190, 108, 216, 83, 190, 34, 225, 37, 190, 47, 204, 195, 190, 99, 212, 68, 190, 177, 113, 27, 61, 6, 78, 115, 62, 253, 169, 184, 62, 114, 95, 132, 60, 158, 10, 27, 60, 218, 202, 161, 190, 200, 23, 41, 190, 21, 113, 178, 62, 116, 251, 216, 189, 94, 230, 173, 61, 125, 27, 131, 60, 82, 222, 90, 62, 121, 183, 15, 62, 227, 111, 228, 61, 201, 254, 178, 62, 231, 82, 166, 62, 251, 196, 216, 189, 40, 61, 245, 189, 85, 29, 103, 189, 139, 172, 194, 189, 147, 207, 152, 186, 238, 132, 252, 189, 222, 226, 191, 189, 116, 142, 144, 61, 129, 63, 14, 189, 158, 2, 47, 62, 100, 158, 137, 60, 20, 199, 54, 190, 85, 185, 23, 62, 13, 220, 104, 62, 43, 0, 162, 61, 11, 7, 96, 60, 160, 4, 146, 190, 110, 249, 229, 61, 92, 2, 253, 189, 225, 151, 188, 189, 154, 115, 57, 60, 187, 99, 160, 62, 47, 124, 205, 189, 114, 49, 207, 190, 120, 141, 121, 62, 141, 111, 175, 189, 109, 215, 46, 190, 112, 197, 123, 190, 41, 129, 56, 189, 17, 250, 98, 189, 87, 218, 155, 190, 14, 210, 150, 190, 158, 154, 227, 61, 187, 188, 18, 62, 179, 189, 63, 190, 17, 222, 54, 190, 5, 140, 159, 189, 241, 165, 214, 61, 220, 25, 149, 62, 95, 123, 86, 62, 107, 45, 151, 61, 92, 112, 48, 190, 71, 66, 93, 188, 186, 93, 136, 189, 187, 30, 248, 188, 3, 168, 105, 190, 206, 187, 193, 190, 243, 49, 3, 62, 250, 92, 49, 62, 119, 26, 144, 61, 64, 107, 43, 62, 187, 211, 50, 190, 197, 84, 69, 188, 192, 65, 201, 62, 14, 4, 38, 188, 107, 40, 241, 189, 243, 227, 82, 188, 202, 238, 174, 189, 58, 2, 223, 61, 240, 208, 134, 190, 50, 1, 230, 60, 218, 57, 104, 190, 106, 16, 53, 189, 197, 147, 50, 190, 194, 222, 71, 190, 177, 41, 3, 189, 93, 49, 130, 61, 222, 46, 34, 189, 208, 224, 228, 61, 31, 33, 8, 62, 113, 142, 74, 62, 60, 242, 8, 62, 1, 27, 159, 62, 13, 41, 17, 190, 69, 195, 37, 190, 168, 102, 100, 189, 150, 68, 17, 190, 215, 243, 190, 189, 68, 40, 182, 190, 183, 188, 49, 190, 1, 64, 94, 62, 106, 43, 69, 61, 209, 170, 137, 62, 64, 204, 214, 61, 73, 181, 143, 190, 127, 227, 255, 60, 142, 62, 131, 190, 86, 7, 80, 61, 198, 127, 115, 188, 124, 208, 55, 190, 170, 102, 7, 62, 116, 170, 215, 188, 215, 195, 45, 190, 206, 7, 85, 62, 50, 244, 22, 62, 75, 50, 160, 62, 67, 66, 167, 61, 76, 26, 164, 188, 32, 10, 245, 189, 98, 21, 232, 189, 139, 98, 141, 61, 228, 122, 70, 60, 199, 10, 157, 188, 188, 176, 109, 61, 169, 53, 3, 191, 62, 57, 246, 189, 179, 193, 110, 189, 94, 205, 185, 190, 62, 35, 191, 188, 196, 156, 248, 62, 204, 187, 143, 62, 138, 110, 3, 186, 172, 105, 108, 58, 172, 138, 218, 61, 206, 2, 246, 190, 76, 243, 129, 189, 109, 54, 218, 61, 147, 88, 118, 62, 164, 49, 29, 62, 147, 55, 12, 190, 117, 166, 247, 61, 208, 102, 15, 188, 103, 77, 140, 60, 153, 14, 138, 190, 209, 242, 87, 190, 92, 148, 18, 190, 39, 115, 213, 190, 93, 229, 141, 190, 152, 238, 1, 190, 30, 34, 3, 190, 215, 52, 80, 189, 35, 204, 88, 190, 104, 68, 245, 60, 158, 156, 83, 62, 35, 98, 110, 62, 39, 120, 88, 60, 162, 200, 163, 61, 216, 120, 184, 61, 228, 191, 150, 189, 12, 199, 7, 62, 16, 117, 179, 187, 175, 174, 12, 190, 12, 133, 238, 189, 90, 154, 46, 61, 165, 217, 12, 62, 144, 54, 55, 62, 102, 248, 164, 62, 127, 77, 138, 189, 228, 109, 66, 190, 146, 146, 30, 190, 78, 17, 210, 61, 65, 30, 129, 62, 175, 248, 26, 190, 200, 72, 132, 62, 133, 217, 175, 188, 200, 144, 195, 62, 210, 60, 118, 189, 251, 97, 123, 61, 159, 240, 135, 62, 131, 57, 194, 62, 180, 191, 22, 62, 130, 32, 41, 61, 135, 37, 63, 62, 127, 228, 120, 189, 123, 138, 210, 60, 84, 67, 135, 190, 57, 168, 10, 190, 13, 80, 193, 61, 226, 206, 50, 190, 77, 146, 142, 188, 179, 156, 148, 189, 200, 220, 102, 189, 196, 19, 29, 60, 197, 214, 131, 62, 70, 161, 137, 62, 41, 52, 249, 61, 123, 74, 148, 189, 239, 4, 189, 189, 65, 109, 27, 190, 229, 64, 159, 190, 178, 119, 114, 190, 209, 227, 16, 62, 182, 55, 157, 61, 85, 189, 172, 60, 42, 87, 38, 190, 54, 145, 148, 190, 65, 23, 94, 61, 241, 192, 142, 190, 180, 55, 88, 62, 68, 101, 154, 189, 230, 195, 1, 191, 131, 238, 149, 189, 104, 106, 230, 61, 227, 186, 18, 62, 50, 138, 114, 190, 113, 239, 176, 60, 121, 128, 251, 189, 113, 205, 181, 186, 229, 146, 251, 62, 110, 214, 34, 190, 36, 169, 52, 189, 39, 64, 22, 189, 53, 86, 32, 189, 215, 182, 165, 189, 97, 42, 64, 61, 220, 183, 56, 189, 233, 117, 169, 61, 109, 170, 113, 61, 181, 163, 171, 62, 129, 2, 226, 59, 152, 166, 10, 189, 96, 212, 159, 58, 167, 221, 182, 62, 158, 227, 1, 62, 115, 248, 49, 190, 63, 198, 144, 190, 129, 36, 84, 62, 121, 150, 135, 190, 234, 7, 117, 190, 29, 115, 14, 190, 52, 5, 48, 189, 68, 91, 22, 190, 108, 103, 170, 190, 233, 200, 133, 190, 149, 172, 59, 62, 241, 149, 158, 61, 232, 128, 7, 188, 79, 114, 50, 189, 35, 204, 22, 62, 63, 191, 162, 62, 95, 113, 4, 62, 232, 188, 199, 62, 251, 19, 70, 62, 252, 50, 96, 62, 100, 0, 158, 190, 42, 111, 210, 61, 223, 169, 143, 190, 249, 216, 99, 190, 92, 157, 137, 190, 84, 204, 137, 189, 56, 196, 59, 62, 225, 178, 37, 62, 52, 40, 145, 62, 233, 210, 130, 61, 152, 103, 234, 60, 233, 157, 210, 190, 68, 26, 228, 61, 207, 8, 97, 62, 182, 97, 17, 61, 160, 36, 29, 62, 220, 155, 80, 62, 163, 241, 177, 62, 97, 160, 83, 189, 43, 115, 95, 62, 120, 237, 170, 61, 216, 65, 145, 62, 109, 112, 173, 61, 50, 224, 205, 61, 213, 163, 182, 61, 161, 35, 9, 189, 190, 205, 27, 187, 74, 236, 88, 189, 8, 120, 181, 190, 220, 28, 49, 61, 152, 24, 172, 190, 189, 13, 34, 190, 74, 196, 135, 61, 193, 74, 109, 190, 37, 138, 51, 62, 235, 232, 14, 62, 253, 220, 56, 62, 156, 218, 170, 189, 81, 111, 132, 190, 246, 198, 106, 190, 111, 213, 143, 190, 182, 84, 80, 190, 5, 135, 3, 62, 67, 106, 44, 62, 52, 189, 45, 186, 9, 191, 189, 190, 246, 41, 82, 62, 174, 123, 192, 189, 214, 200, 26, 190, 208, 253, 186, 189, 158, 36, 19, 189, 80, 140, 177, 61, 24, 104, 202, 190, 84, 101, 142, 190, 47, 19, 164, 189, 117, 97, 15, 190, 20, 255, 105, 189, 32, 183, 60, 61, 242, 236, 4, 62, 37, 57, 174, 61, 105, 114, 134, 62, 158, 160, 166, 189, 38, 3, 141, 62, 163, 55, 184, 189, 248, 58, 154, 61, 115, 142, 129, 61, 148, 13, 132, 61, 32, 111, 136, 190, 226, 90, 13, 189, 106, 132, 92, 61, 178, 223, 143, 60, 205, 144, 139, 62, 7, 33, 111, 62, 49, 155, 225, 189, 131, 165, 188, 60, 162, 86, 13, 62, 142, 28, 195, 188, 154, 177, 208, 189, 251, 25, 135, 61, 66, 10, 93, 190, 253, 4, 230, 61, 113, 237, 236, 61, 87, 138, 28, 62, 85, 133, 183, 189, 145, 122, 128, 61, 128, 192, 136, 61, 16, 123, 23, 62, 191, 143, 49, 61, 171, 4, 26, 190, 109, 141, 35, 62, 151, 179, 179, 188, 243, 186, 203, 61, 137, 94, 177, 189, 211, 185, 201, 60, 226, 176, 3, 190, 227, 253, 201, 61, 121, 107, 228, 61, 244, 247, 22, 189, 97, 174, 213, 59, 80, 36, 182, 61, 182, 151, 228, 189, 185, 21, 22, 62, 107, 228, 217, 60, 254, 72, 92, 189, 226, 87, 128, 189};
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
                    alignas(float) const unsigned char memory[] = {138, 104, 161, 62, 199, 64, 71, 190, 91, 61, 46, 190, 97, 11, 151, 61, 132, 183, 59, 190, 156, 151, 14, 189, 88, 13, 26, 61, 195, 150, 31, 190, 149, 255, 132, 61, 119, 249, 174, 188, 131, 239, 162, 60, 98, 105, 42, 190, 149, 119, 133, 190, 230, 100, 7, 62, 51, 135, 247, 61, 111, 72, 123, 188, 55, 86, 123, 62, 23, 112, 93, 61, 129, 9, 119, 188, 20, 109, 180, 61, 210, 246, 62, 189, 6, 174, 221, 61, 233, 123, 165, 189, 137, 211, 158, 61, 168, 2, 124, 190, 50, 255, 149, 61, 205, 246, 49, 62, 10, 36, 155, 62, 185, 168, 40, 190, 22, 116, 63, 62, 228, 209, 26, 188, 245, 62, 15, 190};
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
                    alignas(float) const unsigned char memory[] = {124, 223, 221, 62, 116, 26, 73, 190, 87, 43, 38, 190, 164, 93, 58, 190, 136, 135, 145, 190, 30, 122, 95, 190, 233, 165, 157, 62, 252, 39, 128, 189, 41, 31, 51, 62, 194, 142, 129, 190, 92, 223, 166, 62, 56, 116, 151, 190, 224, 58, 136, 190, 221, 25, 107, 62, 172, 103, 34, 62, 231, 222, 178, 190, 10, 85, 156, 190, 72, 156, 57, 62, 201, 175, 78, 190, 194, 201, 255, 189, 90, 83, 108, 190, 222, 122, 172, 62, 198, 32, 162, 190, 83, 52, 71, 190, 83, 52, 136, 62, 20, 114, 40, 190, 116, 233, 154, 62, 2, 63, 70, 190, 70, 54, 138, 190, 69, 150, 183, 62, 162, 146, 147, 190, 22, 174, 88, 60};
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
                    alignas(float) const unsigned char memory[] = {86, 28, 233, 189};
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
    alignas(float) const unsigned char memory[] = {191, 240, 246, 190, 113, 4, 140, 60, 182, 57, 104, 62, 39, 159, 137, 62, 39, 144, 62, 63, 201, 189, 152, 190, 96, 220, 116, 191, 0, 133, 63, 190, 193, 184, 209, 191, 80, 102, 178, 63, 140, 100, 123, 191, 150, 164, 155, 191, 103, 84, 97, 191, 210, 76, 41, 192, 236, 99, 220, 62, 53, 240, 59, 191, 20, 242, 38, 189, 181, 166, 177, 62, 119, 102, 147, 63, 77, 242, 152, 191, 247, 205, 76, 62, 241, 68, 192, 191, 20, 48, 218, 190, 16, 106, 9, 63, 69, 96, 64, 63, 232, 75, 45, 191, 204, 46, 143, 191, 51, 206, 7, 63, 64, 230, 220, 190, 248, 161, 144, 191, 50, 191, 51, 63, 132, 50, 123, 191, 236, 240, 41, 191, 52, 101, 183, 62, 171, 152, 129, 63, 201, 216, 181, 63, 206, 227, 143, 191, 238, 66, 142, 63, 126, 17, 0, 192};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {3, 132, 193, 191, 61, 153, 143, 192, 229, 80, 22, 192, 187, 108, 169, 64, 18, 200, 200, 64, 45, 141, 149, 191, 79, 83, 155, 64, 122, 166, 132, 62, 31, 110, 145, 64, 162, 185, 98, 64, 193, 102, 152, 64, 213, 82, 191, 192, 239, 141, 154, 192};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-24_19-40-35/0e04368_zoo_environment_algorithm/pendulum-v1_ppo/0004/steps/000000000000679";
   char commit_hash[] = "0e043683b3575f82f54646d96eb628e8865dc3ba";
}