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
                    alignas(float) const unsigned char memory[] = {152, 176, 239, 190, 61, 124, 8, 63, 171, 253, 222, 61, 50, 201, 58, 189, 74, 60, 43, 63, 65, 153, 9, 63, 52, 223, 9, 191, 218, 67, 5, 62, 34, 44, 197, 190, 224, 38, 18, 190, 30, 100, 5, 190, 160, 121, 138, 189, 60, 159, 24, 63, 131, 24, 2, 191, 73, 198, 255, 62, 209, 101, 24, 62, 154, 119, 200, 62, 145, 246, 244, 62, 188, 77, 153, 190, 146, 197, 6, 191, 239, 193, 189, 62, 101, 21, 154, 190, 228, 63, 222, 190, 242, 210, 193, 190, 250, 173, 241, 190, 65, 176, 159, 190, 174, 65, 21, 63, 6, 41, 199, 188, 124, 60, 131, 62, 112, 249, 106, 59, 157, 235, 71, 62, 85, 177, 195, 190, 227, 68, 249, 190, 140, 13, 253, 190, 12, 129, 198, 190, 142, 234, 16, 63, 110, 37, 253, 62, 157, 168, 14, 191, 78, 55, 12, 63, 180, 164, 223, 62, 246, 59, 53, 63, 247, 251, 32, 61, 242, 211, 3, 191, 40, 42, 14, 191, 227, 174, 248, 62, 81, 48, 90, 189, 240, 245, 3, 191, 150, 1, 130, 62, 86, 13, 166, 62, 49, 0, 251, 62, 77, 250, 245, 188, 105, 93, 251, 60, 209, 100, 140, 62, 160, 241, 141, 189, 178, 124, 74, 62, 250, 53, 62, 62, 202, 194, 240, 62, 23, 211, 2, 63, 195, 89, 36, 63, 170, 187, 49, 191, 177, 160, 33, 62, 4, 205, 235, 62, 29, 56, 137, 62, 64, 242, 164, 190, 17, 85, 27, 63, 247, 240, 162, 62, 31, 231, 141, 61, 215, 11, 94, 60, 250, 57, 58, 62, 152, 192, 155, 190, 132, 98, 218, 189, 61, 218, 231, 190, 13, 137, 74, 190, 185, 17, 133, 60, 107, 190, 2, 62, 113, 227, 93, 190, 154, 12, 78, 190, 6, 191, 221, 190, 186, 15, 218, 62, 30, 46, 29, 191, 216, 140, 165, 190, 58, 57, 51, 62, 30, 71, 214, 190, 17, 250, 15, 191, 66, 2, 44, 190, 199, 155, 123, 61, 134, 13, 214, 190, 85, 69, 201, 62, 170, 81, 189, 60, 179, 233, 152, 190, 94, 239, 65, 190, 96, 67, 14, 63, 247, 166, 126, 190, 239, 82, 168, 190, 182, 132, 23, 63, 57, 21, 189, 62};
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
                    alignas(float) const unsigned char memory[] = {209, 31, 105, 190, 12, 11, 132, 190, 132, 87, 76, 189, 150, 239, 149, 62, 81, 55, 211, 189, 148, 41, 12, 191, 85, 145, 239, 189, 250, 169, 15, 63, 209, 149, 115, 190, 1, 1, 9, 62, 95, 198, 176, 189, 0, 234, 160, 190, 34, 107, 105, 189, 56, 32, 197, 190, 152, 217, 170, 62, 239, 119, 244, 190, 216, 156, 76, 62, 250, 230, 3, 191, 102, 181, 36, 191, 250, 50, 143, 62, 70, 28, 168, 190, 184, 239, 251, 62, 172, 84, 186, 190, 11, 29, 26, 63, 218, 104, 187, 62, 94, 132, 218, 62, 69, 196, 36, 191, 163, 221, 225, 190, 59, 92, 1, 63, 214, 99, 199, 62, 225, 15, 198, 61, 215, 101, 14, 63};
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
                    alignas(float) const unsigned char memory[] = {41, 131, 0, 62, 65, 201, 164, 190, 71, 65, 113, 61, 200, 250, 28, 61, 204, 118, 117, 60, 99, 11, 239, 190, 101, 74, 148, 61, 81, 63, 36, 62, 60, 108, 143, 189, 150, 152, 77, 61, 65, 90, 145, 188, 125, 220, 235, 189, 115, 97, 45, 62, 202, 176, 87, 190, 124, 52, 33, 62, 72, 128, 20, 189, 102, 163, 101, 59, 70, 215, 9, 190, 144, 81, 190, 190, 49, 54, 31, 61, 5, 136, 154, 190, 151, 97, 53, 190, 125, 145, 17, 190, 68, 207, 50, 62, 175, 118, 13, 62, 122, 87, 8, 62, 238, 196, 130, 59, 233, 197, 57, 62, 45, 0, 131, 62, 170, 119, 18, 62, 189, 58, 191, 61, 224, 81, 186, 60, 38, 99, 21, 190, 31, 209, 33, 62, 51, 231, 40, 62, 117, 17, 74, 62, 75, 159, 236, 189, 120, 146, 19, 186, 159, 170, 62, 190, 65, 183, 50, 189, 24, 189, 228, 189, 118, 129, 182, 61, 24, 4, 173, 188, 250, 247, 253, 189, 159, 239, 200, 61, 76, 44, 3, 190, 242, 95, 132, 189, 26, 208, 24, 190, 76, 30, 26, 190, 31, 227, 148, 189, 247, 90, 37, 62, 130, 245, 62, 189, 128, 62, 205, 189, 116, 182, 135, 60, 13, 31, 189, 188, 41, 122, 57, 61, 149, 112, 26, 62, 214, 228, 178, 61, 141, 57, 112, 189, 181, 205, 183, 189, 196, 103, 197, 188, 160, 164, 92, 62, 74, 19, 11, 62, 223, 124, 157, 61, 199, 162, 88, 60, 65, 216, 3, 62, 148, 186, 170, 189, 161, 227, 217, 188, 105, 52, 103, 190, 101, 186, 136, 62, 153, 218, 235, 188, 233, 207, 89, 61, 204, 43, 138, 189, 62, 226, 67, 189, 53, 3, 18, 61, 216, 139, 116, 190, 184, 214, 30, 60, 249, 60, 80, 61, 136, 249, 11, 188, 26, 21, 254, 188, 247, 225, 131, 61, 93, 37, 74, 189, 22, 138, 104, 189, 67, 34, 233, 61, 108, 160, 247, 61, 237, 199, 154, 62, 108, 161, 152, 61, 166, 126, 19, 62, 53, 106, 38, 62, 226, 97, 55, 189, 81, 104, 104, 190, 35, 213, 150, 60, 91, 6, 23, 62, 190, 133, 96, 187, 172, 110, 231, 60, 247, 104, 34, 60, 75, 17, 60, 61, 72, 18, 136, 62, 61, 82, 17, 62, 90, 117, 170, 61, 88, 237, 141, 186, 231, 196, 233, 188, 6, 176, 139, 61, 226, 81, 58, 190, 32, 4, 33, 60, 205, 242, 9, 62, 253, 34, 202, 60, 3, 51, 141, 61, 243, 228, 181, 189, 98, 23, 76, 62, 238, 174, 62, 61, 238, 239, 44, 190, 198, 84, 15, 62, 133, 54, 82, 61, 47, 238, 93, 62, 10, 133, 160, 61, 8, 104, 66, 61, 156, 4, 11, 62, 6, 63, 37, 190, 106, 69, 24, 61, 128, 181, 38, 189, 106, 72, 138, 189, 194, 35, 112, 190, 237, 154, 241, 187, 145, 170, 7, 189, 39, 203, 160, 61, 206, 200, 131, 62, 108, 82, 90, 61, 151, 235, 48, 60, 22, 140, 143, 61, 39, 111, 12, 62, 245, 49, 11, 62, 136, 211, 208, 189, 1, 63, 69, 59, 169, 78, 25, 190, 11, 191, 56, 190, 234, 75, 223, 60, 242, 9, 157, 188, 172, 71, 182, 59, 242, 20, 107, 190, 141, 88, 167, 190, 254, 186, 8, 62, 127, 218, 255, 189, 130, 43, 54, 190, 114, 60, 93, 189, 75, 97, 180, 189, 85, 16, 33, 62, 153, 247, 114, 62, 99, 234, 94, 62, 222, 53, 129, 62, 19, 190, 176, 61, 233, 69, 2, 61, 99, 141, 65, 62, 169, 219, 31, 62, 88, 64, 205, 187, 179, 5, 135, 190, 4, 210, 208, 189, 104, 30, 37, 62, 176, 123, 54, 62, 2, 209, 47, 62, 247, 1, 156, 189, 28, 174, 55, 62, 71, 115, 46, 62, 66, 21, 38, 190, 76, 45, 132, 189, 103, 79, 153, 188, 168, 197, 61, 61, 106, 49, 66, 190, 219, 177, 139, 190, 228, 191, 131, 62, 88, 85, 198, 187, 11, 35, 31, 187, 166, 144, 33, 190, 125, 138, 17, 62, 198, 45, 122, 60, 5, 97, 66, 61, 178, 86, 162, 188, 172, 244, 152, 61, 63, 212, 237, 189, 196, 26, 20, 62, 245, 129, 218, 61, 123, 41, 145, 62, 235, 146, 150, 189, 3, 133, 250, 187, 127, 44, 56, 62, 13, 123, 188, 61, 101, 214, 13, 190, 125, 24, 135, 190, 20, 113, 171, 188, 255, 88, 83, 189, 239, 176, 52, 62, 65, 32, 107, 62, 115, 214, 236, 189, 251, 147, 80, 61, 16, 31, 231, 189, 252, 178, 11, 62, 62, 100, 139, 62, 155, 225, 19, 190, 93, 1, 61, 62, 140, 228, 167, 188, 77, 92, 156, 61, 113, 160, 202, 188, 99, 95, 158, 189, 235, 64, 79, 62, 177, 155, 36, 62, 2, 198, 83, 60, 173, 243, 185, 189, 200, 21, 111, 62, 81, 83, 15, 61, 212, 43, 23, 190, 67, 159, 102, 59, 90, 170, 50, 190, 172, 145, 85, 60, 174, 105, 19, 190, 102, 13, 63, 61, 71, 57, 177, 187, 156, 76, 16, 62, 183, 143, 29, 187, 118, 0, 69, 62, 120, 194, 143, 61, 233, 176, 241, 61, 219, 215, 186, 188, 72, 193, 146, 190, 111, 141, 78, 190, 151, 103, 169, 189, 146, 11, 95, 61, 248, 187, 223, 60, 131, 108, 210, 189, 85, 241, 144, 190, 133, 41, 172, 188, 179, 173, 34, 190, 163, 166, 123, 189, 126, 108, 148, 188, 170, 48, 125, 59, 232, 125, 93, 189, 130, 156, 226, 188, 105, 68, 167, 59, 88, 222, 9, 61, 111, 185, 61, 187, 239, 147, 1, 61, 140, 221, 125, 61, 28, 45, 144, 59, 51, 14, 219, 61, 148, 83, 134, 62, 131, 131, 62, 62, 190, 55, 18, 61, 100, 143, 173, 60, 28, 154, 11, 190, 130, 124, 204, 61, 89, 213, 28, 61, 34, 49, 10, 190, 120, 100, 81, 190, 87, 54, 0, 189, 248, 31, 111, 60, 242, 66, 127, 62, 23, 149, 115, 61, 53, 57, 20, 190, 49, 74, 73, 190, 38, 39, 116, 189, 13, 179, 209, 189, 208, 225, 42, 62, 181, 123, 140, 190, 55, 158, 208, 61, 117, 25, 232, 59, 112, 105, 105, 62, 162, 0, 132, 190, 132, 30, 55, 187, 108, 158, 23, 60, 181, 191, 96, 62, 55, 2, 100, 190, 244, 8, 240, 187, 117, 94, 156, 60, 52, 86, 128, 189, 26, 1, 122, 189, 9, 90, 141, 61, 185, 202, 9, 190, 82, 134, 27, 190, 217, 187, 150, 189, 196, 201, 63, 60, 50, 43, 144, 61, 200, 232, 61, 190, 191, 162, 202, 189, 109, 22, 108, 186, 210, 144, 145, 62, 89, 212, 103, 61, 146, 47, 15, 61, 6, 26, 31, 189, 126, 239, 52, 190, 96, 220, 137, 61, 83, 110, 134, 62, 116, 246, 113, 61, 252, 36, 80, 61, 239, 208, 112, 190, 249, 82, 108, 62, 249, 104, 110, 189, 135, 149, 239, 189, 240, 221, 147, 61, 127, 114, 116, 189, 61, 151, 254, 60, 173, 219, 5, 61, 98, 50, 129, 190, 19, 252, 203, 61, 151, 73, 46, 190, 120, 23, 2, 61, 96, 33, 99, 62, 44, 200, 231, 188, 171, 27, 82, 62, 198, 240, 100, 62, 116, 112, 81, 62, 48, 162, 146, 62, 38, 53, 136, 61, 112, 203, 106, 189, 186, 231, 135, 189, 228, 101, 10, 62, 87, 27, 222, 188, 86, 233, 190, 189, 0, 236, 204, 189, 215, 197, 37, 189, 91, 143, 106, 60, 13, 55, 178, 187, 253, 176, 172, 60, 185, 30, 134, 190, 88, 204, 84, 190, 1, 5, 236, 61, 164, 83, 125, 61, 116, 171, 90, 190, 222, 35, 53, 62, 103, 249, 241, 61, 248, 174, 164, 189, 76, 193, 152, 188, 25, 14, 29, 188, 226, 194, 62, 62, 52, 28, 65, 62, 236, 60, 59, 59, 9, 132, 119, 61, 97, 61, 86, 62, 147, 167, 2, 188, 24, 130, 145, 189, 229, 32, 3, 189, 27, 91, 4, 190, 17, 53, 207, 61, 128, 143, 53, 190, 175, 187, 162, 61, 217, 26, 207, 61, 94, 152, 19, 62, 234, 165, 142, 189, 48, 27, 129, 62, 105, 11, 67, 62, 82, 210, 32, 62, 97, 28, 31, 190, 112, 250, 136, 190, 119, 119, 93, 190, 68, 26, 132, 188, 62, 246, 92, 59, 172, 198, 145, 189, 161, 129, 37, 190, 183, 191, 100, 190, 235, 40, 173, 188, 178, 25, 71, 60, 183, 152, 126, 61, 26, 250, 31, 190, 165, 104, 118, 62, 204, 242, 15, 190, 139, 38, 216, 59, 169, 173, 174, 188, 234, 55, 224, 189, 132, 57, 237, 187, 27, 14, 40, 190, 34, 46, 214, 61, 83, 237, 202, 61, 4, 113, 62, 62, 136, 25, 30, 62, 104, 207, 37, 62, 58, 77, 115, 62, 168, 102, 207, 189, 130, 180, 22, 62, 112, 135, 8, 190, 138, 121, 41, 190, 25, 38, 208, 189, 128, 172, 111, 190, 85, 39, 166, 61, 239, 4, 61, 61, 124, 45, 114, 62, 77, 246, 157, 62, 110, 178, 14, 190, 226, 94, 72, 62, 46, 137, 51, 189, 3, 159, 12, 62, 203, 154, 29, 190, 56, 191, 150, 61, 48, 69, 2, 61, 96, 168, 33, 190, 100, 170, 219, 59, 64, 59, 157, 61, 116, 89, 50, 190, 131, 84, 168, 189, 157, 98, 132, 190, 223, 95, 136, 62, 52, 1, 233, 61, 102, 67, 75, 189, 149, 201, 230, 61, 188, 44, 42, 62, 253, 142, 52, 62, 100, 130, 73, 62, 5, 38, 156, 62, 93, 229, 26, 62, 187, 237, 128, 189, 90, 242, 221, 189, 175, 3, 249, 60, 110, 56, 198, 189, 98, 87, 64, 190, 195, 176, 68, 189, 97, 118, 36, 190, 19, 163, 147, 189, 41, 140, 186, 188, 134, 202, 28, 61, 206, 208, 24, 190, 154, 217, 156, 190, 2, 119, 152, 188, 61, 7, 205, 189, 177, 234, 188, 61, 74, 147, 146, 190, 230, 83, 173, 187, 98, 147, 216, 60, 226, 155, 178, 60, 149, 220, 45, 189, 164, 97, 131, 189, 226, 121, 132, 61, 169, 58, 11, 62, 62, 201, 76, 190, 162, 134, 27, 62, 187, 54, 154, 189, 118, 138, 152, 189, 200, 30, 227, 189, 17, 249, 225, 189, 133, 111, 217, 189, 2, 216, 157, 190, 195, 77, 51, 189, 210, 160, 178, 189, 47, 172, 239, 188, 252, 121, 69, 190, 31, 153, 232, 61, 163, 52, 178, 188, 224, 77, 19, 62, 240, 247, 12, 62, 16, 225, 42, 189, 80, 129, 140, 189, 45, 249, 165, 190, 207, 94, 44, 189, 155, 65, 80, 190, 40, 228, 135, 190, 12, 76, 165, 189, 247, 214, 99, 62, 195, 215, 208, 61, 23, 22, 46, 62, 147, 153, 61, 188, 231, 180, 255, 188, 15, 247, 222, 61, 208, 70, 79, 189, 140, 7, 154, 62, 168, 77, 176, 62, 104, 89, 77, 190, 214, 10, 157, 189, 31, 245, 135, 61, 34, 129, 196, 58, 248, 41, 36, 61, 30, 115, 227, 189, 193, 92, 100, 190, 20, 164, 16, 190, 191, 87, 65, 190, 167, 173, 204, 189, 96, 167, 138, 189, 66, 179, 34, 189, 36, 152, 242, 189, 244, 241, 53, 62, 155, 208, 153, 189, 33, 78, 126, 61, 0, 80, 205, 60, 52, 227, 108, 190, 154, 218, 219, 60, 241, 127, 222, 189, 196, 99, 56, 62, 130, 239, 131, 62, 81, 255, 222, 61, 75, 5, 26, 190, 120, 31, 144, 188, 108, 144, 122, 190, 152, 163, 255, 188, 125, 222, 97, 190, 227, 34, 233, 189, 6, 1, 60, 189, 98, 82, 151, 189, 152, 79, 170, 190, 172, 73, 145, 188, 68, 145, 155, 189, 229, 136, 16, 190, 115, 244, 173, 189, 76, 48, 238, 188, 107, 143, 103, 62, 50, 80, 129, 62, 182, 109, 134, 61, 181, 79, 6, 62, 232, 11, 111, 189, 51, 151, 238, 187, 41, 148, 54, 62, 203, 49, 21, 190, 238, 174, 94, 61, 139, 149, 94, 190, 6, 243, 162, 61, 15, 188, 193, 61, 92, 223, 218, 60, 96, 75, 80, 62, 106, 228, 74, 62, 88, 222, 187, 61, 218, 31, 160, 189, 38, 55, 234, 61, 214, 169, 171, 189, 179, 171, 57, 62, 236, 140, 135, 61, 225, 127, 52, 60, 196, 186, 122, 189, 185, 20, 49, 62, 166, 118, 21, 190, 207, 159, 183, 60, 104, 116, 51, 190, 249, 148, 223, 60, 5, 199, 22, 190, 18, 167, 155, 189, 206, 169, 67, 62, 197, 246, 15, 190, 243, 12, 112, 61, 146, 163, 150, 61, 81, 195, 103, 62, 28, 36, 153, 62, 94, 229, 70, 188, 51, 52, 244, 189, 153, 190, 74, 62, 70, 55, 145, 61, 157, 209, 62, 189, 71, 4, 24, 189, 185, 194, 49, 62, 83, 183, 161, 189, 23, 38, 0, 62, 186, 194, 134, 62, 247, 201, 117, 188, 14, 25, 246, 60, 104, 29, 252, 60, 220, 239, 42, 190, 232, 150, 24, 62, 178, 254, 17, 190, 146, 29, 56, 62, 193, 201, 185, 189, 80, 137, 72, 62, 166, 151, 233, 188, 62, 215, 4, 61, 150, 130, 96, 62, 11, 82, 234, 61, 237, 194, 237, 188, 50, 245, 254, 188, 207, 249, 188, 61, 70, 36, 25, 61, 155, 56, 210, 189, 69, 107, 243, 189, 203, 39, 13, 190, 74, 56, 69, 61, 29, 111, 133, 190, 187, 177, 106, 189, 235, 190, 217, 61, 110, 25, 36, 61, 232, 10, 12, 62, 36, 5, 191, 61, 78, 120, 105, 62, 219, 8, 27, 189, 71, 121, 254, 60, 20, 55, 60, 189, 229, 18, 121, 189, 37, 225, 127, 61, 71, 78, 31, 62, 41, 61, 122, 62, 68, 179, 89, 189, 167, 188, 77, 189, 226, 157, 192, 61, 37, 172, 41, 61, 128, 144, 91, 190, 149, 234, 18, 190, 202, 147, 198, 61, 42, 172, 41, 190, 154, 114, 33, 190, 122, 225, 94, 189, 56, 51, 171, 187, 108, 112, 157, 189, 91, 44, 89, 190, 218, 194, 135, 61, 224, 130, 82, 189, 86, 106, 208, 61, 51, 53, 203, 61, 6, 0, 33, 188, 79, 8, 219, 61, 124, 231, 217, 61, 232, 218, 160, 61, 112, 243, 138, 61, 146, 171, 240, 61, 13, 113, 130, 190, 86, 146, 204, 60, 173, 53, 16, 61, 125, 174, 11, 61, 171, 115, 82, 62, 32, 129, 153, 62, 226, 202, 80, 61, 200, 32, 35, 62, 135, 245, 133, 62, 54, 234, 224, 60, 135, 25, 142, 190, 107, 248, 166, 189, 143, 254, 35, 188, 84, 9, 248, 189, 114, 51, 150, 189, 253, 57, 64, 62, 68, 229, 92, 189, 82, 4, 121, 190, 65, 13, 145, 189, 101, 43, 20, 61, 53, 106, 176, 61, 160, 76, 169, 60, 180, 123, 35, 62, 241, 68, 44, 190, 237, 234, 206, 187, 20, 232, 63, 61, 8, 205, 28, 61, 107, 227, 118, 62, 181, 147, 137, 60, 129, 194, 151, 189, 99, 51, 223, 189, 69, 123, 36, 190, 252, 131, 5, 189, 171, 138, 86, 190, 153, 71, 40, 61, 216, 36, 126, 189, 46, 92, 197, 61, 164, 179, 122, 60, 18, 76, 204, 189, 249, 235, 139, 62, 26, 7, 222, 60, 164, 117, 16, 62, 187, 226, 100, 190, 40, 240, 23, 62, 30, 145, 53, 61, 205, 63, 1, 190, 165, 172, 158, 189, 135, 50, 96, 62, 126, 118, 77, 189, 42, 142, 8, 190, 242, 136, 53, 190, 33, 45, 52, 62, 19, 105, 91, 61, 213, 218, 124, 189, 137, 226, 190, 189, 40, 209, 183, 61, 153, 154, 79, 62, 207, 127, 140, 62, 127, 120, 37, 62, 243, 242, 131, 58, 13, 139, 100, 189, 33, 100, 128, 189, 112, 146, 220, 189, 89, 220, 184, 189, 232, 229, 250, 189, 197, 49, 140, 190, 58, 61, 153, 189, 197, 233, 84, 189, 130, 185, 139, 62, 63, 231, 156, 62, 111, 59, 200, 189, 211, 204, 73, 188, 154, 57, 80, 190, 242, 60, 223, 189, 23, 239, 144, 62, 35, 129, 188, 189, 229, 44, 234, 61, 7, 116, 252, 59, 112, 161, 214, 61, 91, 90, 90, 61, 163, 31, 235, 61, 210, 248, 123, 62, 249, 77, 136, 62, 81, 66, 70, 190, 198, 146, 113, 189, 157, 111, 182, 59, 227, 173, 41, 190, 34, 229, 88, 189, 80, 224, 167, 189, 73, 176, 214, 188, 12, 8, 185, 60, 86, 144, 211, 188, 136, 20, 44, 62, 135, 154, 219, 188, 189, 18, 24, 190, 110, 27, 13, 62, 79, 39, 71, 62, 235, 79, 193, 59, 112, 221, 234, 188, 214, 179, 39, 190, 96, 229, 23, 188, 193, 111, 177, 189, 87, 66, 201, 187, 151, 187, 37, 59, 160, 88, 40, 62, 231, 104, 22, 190, 187, 59, 151, 190, 254, 13, 91, 62, 255, 121, 194, 189, 179, 70, 24, 190, 239, 137, 3, 190, 128, 84, 5, 59, 100, 239, 20, 189, 41, 167, 65, 190, 103, 92, 63, 190, 105, 113, 58, 62, 224, 213, 185, 61, 248, 61, 98, 190, 10, 120, 225, 189, 14, 225, 49, 189, 7, 219, 123, 61, 136, 69, 79, 62, 254, 10, 115, 62, 123, 180, 176, 60, 245, 78, 38, 190, 203, 69, 201, 60, 122, 49, 209, 189, 115, 195, 164, 188, 239, 174, 26, 190, 6, 191, 142, 190, 223, 28, 31, 62, 126, 114, 94, 61, 91, 173, 246, 61, 167, 35, 183, 61, 76, 69, 136, 189, 27, 250, 225, 60, 63, 95, 133, 62, 53, 83, 87, 189, 62, 12, 252, 188, 63, 122, 250, 188, 232, 86, 233, 189, 168, 53, 253, 61, 186, 138, 26, 190, 123, 10, 253, 61, 104, 51, 118, 190, 252, 69, 129, 61, 208, 33, 189, 189, 17, 255, 223, 189, 142, 90, 212, 189, 23, 0, 66, 60, 216, 8, 58, 61, 244, 139, 22, 62, 174, 192, 190, 61, 9, 112, 3, 62, 9, 133, 53, 62, 227, 79, 152, 62, 242, 92, 13, 190, 113, 123, 253, 189, 155, 2, 178, 189, 33, 197, 11, 190, 52, 136, 65, 189, 52, 85, 138, 190, 59, 195, 16, 190, 81, 98, 185, 61, 123, 171, 240, 61, 91, 197, 98, 62, 12, 207, 245, 60, 143, 4, 91, 190, 204, 255, 191, 61, 160, 170, 245, 189, 8, 253, 166, 60, 100, 83, 122, 60, 243, 129, 164, 189, 93, 5, 10, 62, 20, 68, 88, 189, 74, 82, 56, 190, 254, 149, 60, 61, 145, 251, 253, 61, 51, 175, 152, 62, 194, 187, 81, 189, 65, 235, 14, 62, 173, 129, 132, 189, 140, 14, 87, 190, 152, 121, 96, 189, 173, 103, 11, 61, 171, 172, 23, 189, 204, 217, 189, 60, 131, 46, 149, 190, 255, 220, 30, 190, 168, 55, 145, 189, 1, 183, 21, 190, 131, 149, 1, 189, 77, 162, 117, 62, 221, 25, 12, 189, 238, 137, 202, 187, 173, 194, 126, 61, 210, 97, 3, 60, 243, 41, 81, 190, 250, 8, 85, 61, 177, 12, 21, 62, 96, 23, 200, 61, 184, 8, 249, 61, 248, 131, 37, 189, 132, 12, 203, 61, 198, 83, 137, 188, 226, 106, 31, 61, 169, 243, 3, 190, 56, 234, 207, 189, 66, 141, 48, 190, 65, 145, 143, 190, 154, 1, 58, 190, 47, 247, 83, 189, 182, 191, 51, 190, 127, 244, 221, 189, 2, 214, 10, 190, 86, 163, 84, 61, 167, 160, 34, 62, 51, 255, 8, 62, 125, 130, 88, 61, 225, 167, 170, 61, 77, 246, 179, 61, 215, 52, 212, 188, 58, 150, 253, 61, 166, 172, 138, 59, 137, 89, 223, 189, 33, 79, 92, 189, 58, 3, 172, 61, 20, 126, 14, 188, 65, 106, 131, 62, 238, 65, 150, 62, 135, 86, 23, 190, 156, 37, 68, 190, 46, 94, 0, 60, 93, 52, 13, 62, 224, 106, 2, 62, 61, 70, 234, 189, 213, 9, 133, 62, 13, 61, 84, 189, 132, 3, 133, 62, 147, 70, 237, 189, 32, 135, 114, 61, 10, 83, 21, 62, 45, 71, 129, 62, 200, 234, 167, 61, 85, 173, 178, 61, 62, 1, 100, 62, 75, 230, 5, 190, 65, 197, 64, 60, 248, 57, 89, 190, 180, 150, 40, 189, 60, 124, 145, 61, 158, 94, 11, 190, 58, 184, 155, 188, 119, 43, 241, 189, 152, 212, 11, 189, 131, 94, 169, 187, 164, 44, 69, 62, 131, 166, 61, 62, 82, 59, 181, 61, 54, 31, 65, 61, 214, 177, 244, 189, 65, 225, 178, 189, 237, 126, 14, 190, 234, 163, 247, 189, 248, 37, 56, 62, 255, 97, 207, 188, 201, 244, 85, 187, 162, 237, 42, 189, 121, 76, 107, 190, 61, 20, 75, 189, 64, 203, 73, 189, 182, 185, 132, 62, 184, 221, 8, 190, 12, 128, 132, 190, 134, 45, 211, 189, 242, 126, 85, 62, 96, 21, 234, 61, 54, 122, 72, 190, 68, 57, 107, 189, 66, 235, 71, 60, 41, 14, 176, 61, 27, 48, 166, 62, 240, 216, 218, 188, 203, 60, 134, 188, 37, 236, 134, 61, 38, 34, 213, 189, 76, 224, 236, 189, 38, 55, 72, 189, 28, 9, 91, 189, 127, 203, 184, 61, 195, 69, 155, 187, 252, 221, 28, 61, 226, 146, 0, 62, 221, 182, 198, 188, 25, 206, 107, 61, 37, 114, 76, 62, 188, 222, 198, 60, 103, 168, 169, 189, 242, 65, 90, 190, 36, 202, 28, 61, 55, 57, 127, 190, 199, 172, 180, 189, 125, 72, 36, 189, 43, 234, 89, 187, 179, 215, 156, 189, 216, 197, 111, 190, 240, 99, 65, 190, 254, 190, 17, 62, 21, 37, 182, 61, 18, 133, 130, 189, 2, 38, 191, 188, 93, 141, 168, 61, 95, 140, 34, 62, 173, 206, 60, 61, 36, 92, 131, 62, 6, 86, 28, 62, 228, 180, 246, 61, 199, 197, 38, 190, 67, 200, 14, 62, 85, 65, 23, 190, 57, 8, 52, 190, 203, 202, 21, 190, 142, 123, 119, 61, 87, 0, 201, 61, 126, 164, 77, 62, 210, 103, 96, 62, 230, 27, 27, 188, 177, 241, 21, 61, 125, 252, 126, 190, 94, 191, 33, 62, 163, 59, 194, 61, 129, 81, 136, 61, 108, 79, 37, 62, 224, 85, 58, 62, 133, 92, 109, 62, 168, 37, 183, 189, 235, 122, 76, 62, 114, 254, 250, 188, 57, 225, 33, 62, 109, 210, 62, 60, 98, 250, 29, 62, 172, 166, 246, 61, 114, 182, 213, 189, 130, 148, 232, 188, 247, 147, 34, 188, 162, 1, 136, 190, 75, 83, 125, 60, 236, 33, 143, 190, 14, 86, 46, 190, 99, 145, 0, 61, 228, 52, 71, 190, 98, 36, 44, 62, 168, 120, 107, 61, 218, 215, 170, 61, 23, 164, 218, 189, 179, 69, 19, 190, 0, 191, 129, 190, 147, 159, 76, 190, 240, 83, 204, 189, 160, 169, 23, 62, 248, 199, 204, 60, 195, 35, 213, 188, 220, 78, 134, 190, 81, 189, 65, 62, 254, 250, 135, 189, 67, 212, 6, 190, 137, 167, 98, 61, 212, 26, 55, 60, 195, 26, 129, 61, 157, 129, 128, 190, 150, 68, 43, 190, 202, 116, 11, 189, 84, 235, 34, 190, 219, 29, 141, 189, 124, 125, 185, 61, 207, 97, 26, 62, 84, 194, 90, 61, 32, 167, 19, 62, 18, 231, 80, 189, 32, 143, 129, 62, 254, 103, 142, 189, 45, 4, 216, 61, 79, 205, 119, 61, 123, 48, 126, 61, 145, 16, 95, 190, 172, 122, 208, 60, 199, 106, 142, 61, 199, 43, 3, 190, 168, 88, 159, 62, 201, 23, 63, 62, 55, 184, 32, 190, 238, 241, 36, 61, 84, 48, 14, 62, 186, 228, 0, 59, 253, 122, 219, 189, 122, 39, 44, 61, 104, 98, 91, 190, 9, 160, 8, 62, 15, 156, 179, 61, 205, 104, 60, 62, 3, 62, 9, 190, 100, 8, 32, 61, 38, 170, 128, 61, 201, 62, 3, 62, 187, 22, 141, 61, 229, 221, 53, 190, 199, 190, 52, 62, 238, 113, 151, 189, 222, 47, 149, 61, 180, 150, 171, 189, 98, 203, 237, 59, 241, 25, 102, 189, 211, 143, 119, 61, 251, 5, 7, 62, 81, 84, 205, 58, 72, 144, 227, 60, 176, 180, 46, 60, 238, 67, 70, 190, 83, 43, 50, 62, 187, 234, 172, 61, 56, 34, 121, 189, 23, 183, 159, 60};
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
                    alignas(float) const unsigned char memory[] = {133, 254, 21, 62, 230, 98, 15, 190, 186, 37, 26, 190, 66, 49, 203, 61, 137, 189, 44, 190, 186, 56, 169, 188, 158, 101, 27, 61, 77, 206, 4, 190, 176, 40, 185, 60, 106, 186, 144, 61, 216, 138, 24, 188, 108, 249, 24, 190, 14, 182, 217, 189, 241, 213, 148, 188, 108, 145, 175, 61, 183, 132, 88, 60, 207, 116, 24, 62, 125, 156, 202, 60, 32, 164, 65, 60, 43, 213, 230, 61, 8, 130, 8, 61, 30, 75, 215, 61, 135, 60, 154, 189, 24, 25, 185, 61, 47, 175, 54, 190, 183, 1, 200, 61, 32, 74, 26, 62, 227, 226, 70, 62, 14, 166, 181, 189, 177, 192, 52, 62, 161, 45, 37, 186, 198, 34, 176, 189};
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
                    alignas(float) const unsigned char memory[] = {144, 139, 51, 62, 214, 102, 65, 189, 245, 164, 50, 190, 229, 28, 120, 190, 244, 49, 111, 190, 43, 23, 66, 190, 124, 125, 147, 62, 99, 68, 131, 189, 109, 33, 52, 62, 138, 175, 94, 190, 34, 122, 147, 62, 232, 126, 154, 190, 182, 41, 21, 190, 22, 161, 18, 62, 9, 152, 0, 62, 135, 57, 126, 190, 186, 232, 136, 190, 157, 195, 7, 62, 80, 197, 62, 190, 237, 20, 179, 189, 249, 60, 39, 190, 249, 247, 143, 62, 19, 194, 134, 190, 47, 252, 38, 190, 119, 82, 118, 62, 37, 30, 9, 190, 182, 137, 154, 62, 155, 234, 207, 189, 28, 33, 80, 190, 207, 77, 166, 62, 56, 217, 148, 190, 143, 235, 135, 188};
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
                    alignas(float) const unsigned char memory[] = {26, 144, 15, 190};
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
    alignas(float) const unsigned char memory[] = {17, 198, 241, 63, 75, 156, 180, 192, 48, 44, 98, 192, 126, 250, 166, 192, 63, 178, 147, 64, 2, 32, 187, 192, 205, 56, 196, 192, 143, 25, 171, 64, 234, 31, 124, 190, 28, 63, 165, 63, 134, 116, 159, 64, 124, 2, 149, 192, 76, 33, 139, 192};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-26_00-51-32/662c3cc_zoo_environment_algorithm/pendulum-v1_ppo/0004/steps/000000000000194";
   char commit_hash[] = "662c3cc67bf0db05b5897bb7ba078a6b0d23ffab";
}