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
                    alignas(float) const unsigned char memory[] = {89, 209, 254, 190, 124, 154, 3, 63, 103, 24, 97, 62, 185, 67, 219, 189, 112, 48, 34, 63, 20, 38, 252, 62, 235, 170, 249, 190, 234, 203, 26, 62, 166, 239, 119, 190, 211, 90, 27, 190, 132, 250, 7, 190, 72, 29, 200, 188, 137, 244, 8, 63, 150, 97, 8, 191, 56, 165, 212, 62, 80, 159, 25, 62, 92, 8, 184, 62, 77, 249, 203, 62, 202, 232, 137, 190, 146, 246, 9, 191, 246, 24, 171, 62, 15, 204, 195, 190, 78, 62, 208, 190, 177, 247, 164, 190, 225, 144, 205, 190, 183, 34, 173, 190, 165, 18, 1, 63, 94, 130, 152, 187, 181, 12, 126, 62, 105, 152, 137, 188, 151, 175, 136, 62, 193, 85, 182, 190, 183, 103, 246, 190, 100, 122, 229, 190, 28, 228, 216, 190, 121, 146, 235, 62, 95, 145, 203, 62, 32, 45, 23, 191, 108, 202, 250, 62, 148, 24, 241, 62, 55, 34, 47, 63, 60, 17, 31, 61, 207, 188, 241, 190, 126, 215, 11, 191, 210, 252, 3, 63, 216, 149, 17, 189, 198, 58, 5, 191, 18, 65, 120, 62, 52, 239, 181, 62, 159, 223, 252, 62, 130, 94, 69, 61, 141, 107, 84, 61, 234, 154, 124, 62, 243, 113, 249, 189, 156, 14, 89, 62, 83, 108, 24, 62, 204, 81, 197, 62, 246, 211, 234, 62, 31, 43, 47, 63, 106, 172, 29, 191, 75, 183, 70, 62, 87, 67, 222, 62, 29, 129, 92, 62, 217, 244, 174, 190, 235, 19, 28, 63, 179, 32, 129, 62, 36, 190, 153, 61, 227, 15, 175, 58, 88, 226, 18, 62, 121, 145, 203, 190, 71, 169, 207, 189, 73, 128, 214, 190, 201, 133, 56, 190, 227, 92, 168, 187, 198, 174, 168, 61, 146, 7, 147, 190, 182, 231, 52, 190, 139, 227, 209, 190, 226, 89, 242, 62, 134, 96, 30, 191, 77, 15, 132, 190, 37, 41, 195, 61, 88, 43, 208, 190, 3, 155, 2, 191, 23, 236, 74, 190, 184, 171, 175, 61, 171, 224, 190, 190, 20, 95, 204, 62, 165, 222, 174, 61, 110, 208, 56, 190, 159, 174, 23, 190, 0, 207, 14, 63, 233, 33, 129, 190, 228, 215, 177, 190, 187, 94, 26, 63, 249, 67, 149, 62};
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
                    alignas(float) const unsigned char memory[] = {184, 7, 139, 190, 188, 240, 149, 190, 130, 107, 41, 189, 97, 190, 160, 62, 79, 154, 16, 190, 58, 185, 4, 191, 152, 17, 128, 189, 172, 77, 249, 62, 194, 217, 10, 190, 57, 148, 240, 61, 69, 16, 74, 60, 53, 117, 115, 190, 18, 100, 219, 189, 249, 235, 189, 190, 237, 84, 223, 62, 236, 169, 235, 190, 33, 204, 64, 62, 34, 156, 8, 191, 54, 238, 26, 191, 243, 41, 64, 62, 106, 105, 155, 190, 164, 37, 210, 62, 118, 35, 215, 190, 26, 45, 16, 63, 199, 200, 166, 62, 86, 26, 191, 62, 100, 47, 7, 191, 177, 247, 209, 190, 78, 1, 255, 62, 132, 177, 180, 62, 111, 234, 202, 61, 105, 6, 238, 62};
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
                    alignas(float) const unsigned char memory[] = {25, 175, 13, 62, 159, 62, 110, 190, 237, 229, 130, 61, 189, 173, 152, 188, 42, 184, 218, 59, 43, 187, 151, 190, 194, 193, 160, 61, 134, 1, 174, 61, 157, 191, 133, 189, 231, 193, 113, 61, 201, 191, 154, 189, 238, 82, 236, 189, 23, 188, 40, 62, 0, 172, 57, 190, 117, 13, 35, 62, 64, 235, 94, 188, 81, 4, 239, 59, 175, 170, 225, 189, 79, 222, 93, 190, 236, 124, 41, 61, 197, 153, 91, 190, 96, 215, 10, 190, 18, 224, 151, 189, 187, 191, 200, 61, 236, 190, 18, 62, 174, 85, 56, 61, 63, 107, 248, 188, 165, 55, 224, 61, 155, 232, 41, 62, 200, 201, 9, 62, 46, 186, 183, 61, 193, 93, 142, 61, 199, 206, 13, 190, 190, 219, 249, 61, 5, 141, 223, 61, 26, 27, 41, 62, 65, 74, 56, 189, 176, 24, 245, 188, 159, 169, 41, 190, 171, 69, 20, 189, 83, 164, 125, 189, 122, 242, 179, 61, 103, 233, 148, 58, 206, 122, 137, 189, 32, 199, 41, 62, 234, 221, 4, 190, 187, 184, 141, 189, 164, 81, 0, 190, 198, 211, 22, 190, 159, 23, 93, 189, 85, 178, 20, 62, 183, 54, 221, 189, 175, 228, 224, 189, 69, 186, 57, 189, 111, 37, 117, 58, 201, 240, 34, 61, 102, 82, 238, 61, 128, 45, 169, 61, 105, 80, 243, 59, 71, 197, 10, 189, 238, 200, 11, 189, 143, 23, 57, 62, 222, 119, 226, 61, 154, 100, 1, 60, 170, 50, 237, 60, 226, 229, 224, 61, 23, 143, 0, 190, 94, 201, 80, 189, 96, 172, 49, 190, 178, 195, 124, 62, 233, 239, 24, 188, 234, 254, 87, 61, 203, 114, 176, 188, 187, 238, 145, 189, 106, 219, 68, 61, 92, 197, 63, 190, 67, 134, 125, 61, 91, 202, 119, 61, 89, 31, 162, 188, 236, 135, 134, 187, 86, 135, 136, 61, 51, 206, 193, 188, 161, 144, 137, 189, 109, 5, 119, 61, 85, 232, 236, 61, 63, 32, 130, 62, 177, 124, 193, 61, 127, 225, 13, 62, 42, 113, 2, 62, 122, 172, 73, 189, 238, 100, 55, 190, 220, 86, 142, 61, 43, 171, 13, 62, 167, 135, 19, 189, 57, 236, 166, 59, 97, 215, 52, 189, 232, 41, 69, 61, 235, 58, 118, 62, 2, 70, 191, 61, 75, 95, 126, 61, 80, 102, 95, 61, 41, 254, 90, 189, 187, 107, 160, 61, 96, 62, 59, 190, 254, 218, 44, 61, 127, 41, 231, 61, 239, 195, 63, 61, 204, 80, 218, 61, 47, 157, 13, 189, 108, 116, 89, 62, 96, 76, 247, 60, 140, 1, 27, 190, 16, 75, 24, 62, 169, 173, 138, 61, 160, 107, 77, 62, 95, 166, 26, 61, 212, 62, 41, 61, 202, 187, 172, 61, 145, 172, 26, 190, 12, 218, 6, 61, 11, 40, 156, 189, 246, 152, 143, 189, 207, 227, 60, 190, 180, 221, 77, 61, 185, 55, 17, 189, 10, 53, 121, 61, 179, 25, 111, 62, 138, 60, 131, 187, 167, 35, 45, 60, 142, 101, 95, 61, 202, 237, 140, 61, 70, 119, 215, 61, 27, 229, 20, 189, 46, 58, 164, 188, 13, 73, 49, 190, 93, 252, 67, 190, 62, 114, 49, 61, 114, 87, 88, 188, 98, 49, 204, 60, 202, 4, 84, 190, 198, 188, 134, 190, 151, 66, 48, 62, 147, 17, 45, 190, 104, 87, 64, 190, 8, 249, 49, 188, 228, 243, 146, 189, 173, 192, 12, 62, 11, 159, 90, 62, 27, 28, 104, 62, 193, 151, 87, 62, 23, 112, 182, 61, 57, 201, 213, 60, 245, 183, 28, 62, 137, 206, 23, 62, 215, 25, 27, 61, 180, 212, 94, 190, 83, 0, 198, 189, 57, 219, 35, 62, 123, 231, 39, 62, 22, 59, 254, 61, 40, 76, 42, 189, 13, 142, 42, 62, 169, 17, 18, 62, 194, 193, 60, 190, 133, 88, 231, 188, 13, 96, 40, 189, 146, 186, 136, 61, 126, 140, 60, 190, 44, 240, 94, 190, 171, 227, 119, 62, 122, 117, 10, 57, 58, 150, 118, 61, 25, 66, 255, 189, 136, 106, 26, 62, 140, 152, 36, 59, 229, 201, 151, 61, 76, 78, 192, 188, 123, 24, 235, 61, 242, 35, 9, 190, 63, 0, 171, 61, 97, 170, 208, 61, 158, 254, 118, 62, 19, 77, 104, 189, 108, 197, 209, 57, 246, 119, 22, 62, 125, 13, 203, 61, 37, 123, 201, 189, 15, 19, 82, 190, 32, 225, 130, 188, 111, 47, 201, 189, 6, 223, 54, 62, 30, 178, 55, 62, 50, 39, 15, 190, 246, 241, 138, 61, 153, 240, 151, 189, 194, 32, 31, 62, 120, 245, 106, 62, 145, 190, 239, 189, 204, 77, 53, 62, 44, 236, 200, 188, 174, 207, 14, 61, 154, 24, 181, 188, 75, 153, 170, 189, 152, 77, 31, 62, 31, 211, 241, 61, 74, 75, 49, 186, 25, 29, 153, 189, 196, 149, 101, 62, 127, 155, 162, 60, 43, 200, 45, 190, 27, 85, 212, 60, 230, 179, 2, 190, 15, 173, 142, 60, 202, 11, 229, 189, 125, 92, 35, 61, 251, 119, 66, 188, 44, 45, 41, 62, 73, 4, 214, 187, 128, 80, 35, 62, 94, 44, 9, 61, 69, 86, 227, 61, 137, 233, 178, 59, 96, 48, 145, 190, 143, 194, 39, 190, 96, 10, 176, 189, 44, 180, 142, 60, 55, 184, 223, 188, 55, 172, 255, 189, 244, 92, 97, 190, 56, 162, 112, 189, 232, 130, 24, 190, 23, 103, 102, 189, 16, 249, 79, 60, 31, 10, 187, 188, 49, 192, 177, 188, 177, 195, 30, 60, 237, 57, 135, 61, 67, 252, 47, 61, 92, 199, 175, 188, 15, 26, 74, 61, 216, 77, 144, 61, 247, 71, 153, 60, 192, 27, 168, 61, 3, 80, 98, 62, 158, 115, 45, 62, 239, 135, 211, 188, 42, 204, 252, 60, 234, 32, 14, 190, 164, 239, 105, 61, 70, 130, 36, 61, 95, 57, 151, 189, 146, 18, 13, 190, 212, 231, 3, 189, 170, 197, 225, 186, 105, 193, 96, 62, 172, 0, 8, 188, 99, 99, 31, 190, 57, 170, 45, 190, 62, 170, 118, 188, 89, 18, 169, 189, 133, 205, 236, 61, 123, 15, 118, 190, 249, 25, 188, 61, 22, 55, 189, 58, 126, 192, 65, 62, 100, 143, 119, 190, 212, 14, 193, 188, 153, 165, 20, 189, 48, 8, 46, 62, 24, 252, 112, 190, 160, 195, 56, 60, 134, 146, 179, 59, 159, 142, 144, 189, 194, 47, 172, 189, 180, 171, 196, 61, 167, 117, 177, 189, 195, 68, 17, 190, 170, 168, 197, 188, 26, 225, 190, 59, 41, 247, 129, 61, 165, 108, 27, 190, 144, 151, 217, 189, 174, 60, 70, 189, 168, 85, 99, 62, 230, 75, 63, 61, 92, 54, 113, 61, 121, 194, 204, 188, 203, 223, 246, 189, 82, 206, 146, 61, 171, 99, 97, 62, 60, 151, 214, 60, 135, 19, 50, 61, 7, 41, 68, 190, 112, 152, 56, 62, 144, 8, 32, 189, 148, 193, 198, 189, 225, 164, 223, 61, 60, 138, 178, 189, 26, 89, 115, 61, 158, 170, 155, 61, 107, 102, 86, 190, 0, 249, 190, 61, 182, 70, 50, 190, 205, 90, 70, 61, 88, 211, 90, 62, 110, 48, 101, 188, 161, 226, 43, 62, 41, 132, 53, 62, 35, 13, 50, 62, 68, 70, 111, 62, 67, 91, 138, 61, 131, 224, 42, 189, 76, 20, 196, 189, 138, 141, 30, 62, 147, 40, 180, 60, 252, 125, 218, 188, 168, 40, 174, 189, 189, 51, 132, 189, 21, 214, 215, 187, 143, 12, 131, 189, 172, 125, 146, 60, 116, 235, 120, 190, 212, 222, 25, 190, 24, 151, 14, 62, 146, 254, 116, 59, 112, 65, 63, 190, 45, 162, 63, 62, 0, 84, 251, 61, 184, 141, 213, 189, 72, 178, 187, 188, 20, 7, 229, 188, 89, 251, 31, 62, 42, 38, 8, 62, 251, 180, 200, 188, 87, 194, 189, 61, 212, 147, 91, 62, 97, 66, 23, 189, 40, 222, 180, 189, 112, 4, 8, 188, 145, 117, 200, 189, 121, 9, 201, 61, 134, 214, 11, 190, 53, 28, 162, 61, 107, 84, 205, 61, 9, 64, 52, 62, 110, 156, 140, 189, 84, 246, 87, 62, 108, 141, 17, 62, 49, 249, 21, 62, 193, 66, 22, 190, 177, 115, 132, 190, 95, 173, 45, 190, 8, 217, 183, 59, 106, 30, 125, 188, 130, 137, 212, 189, 74, 180, 57, 190, 9, 214, 58, 190, 58, 34, 59, 189, 86, 125, 237, 60, 100, 89, 137, 61, 71, 72, 227, 189, 152, 208, 99, 62, 92, 3, 3, 190, 186, 137, 111, 61, 183, 231, 143, 60, 226, 38, 207, 189, 171, 200, 162, 188, 56, 14, 17, 190, 186, 220, 212, 61, 215, 156, 4, 62, 167, 123, 43, 62, 252, 162, 209, 61, 251, 159, 30, 62, 19, 43, 69, 62, 161, 116, 181, 189, 30, 151, 28, 62, 75, 60, 41, 190, 197, 141, 35, 190, 216, 11, 113, 189, 162, 223, 53, 190, 9, 255, 174, 61, 112, 1, 56, 60, 179, 202, 105, 62, 218, 113, 131, 62, 56, 200, 19, 190, 175, 15, 17, 62, 91, 91, 162, 189, 242, 229, 20, 62, 244, 193, 219, 189, 123, 122, 225, 59, 220, 53, 93, 61, 193, 252, 1, 190, 138, 156, 42, 61, 113, 102, 68, 61, 204, 21, 17, 190, 180, 143, 45, 189, 95, 9, 89, 190, 169, 227, 124, 62, 185, 174, 248, 61, 169, 162, 27, 189, 239, 76, 208, 61, 101, 20, 37, 62, 255, 204, 1, 62, 0, 21, 28, 62, 105, 235, 131, 62, 68, 190, 204, 61, 52, 28, 150, 189, 34, 76, 180, 189, 139, 10, 45, 60, 106, 114, 144, 189, 229, 19, 16, 190, 199, 165, 128, 60, 76, 87, 15, 190, 0, 83, 184, 189, 96, 169, 72, 189, 26, 246, 147, 188, 248, 80, 13, 190, 180, 32, 128, 190, 41, 193, 197, 60, 41, 215, 219, 189, 144, 103, 39, 61, 17, 1, 95, 190, 251, 130, 159, 188, 40, 103, 127, 186, 120, 50, 200, 187, 248, 20, 164, 188, 156, 184, 202, 189, 34, 11, 3, 61, 225, 198, 173, 61, 28, 129, 64, 190, 241, 65, 26, 62, 139, 122, 159, 189, 223, 220, 149, 189, 0, 93, 206, 189, 170, 156, 107, 189, 46, 236, 139, 189, 39, 124, 135, 190, 191, 134, 195, 59, 176, 234, 143, 189, 174, 153, 73, 189, 242, 87, 50, 190, 164, 105, 181, 61, 166, 29, 139, 189, 137, 139, 171, 61, 141, 185, 230, 61, 216, 104, 6, 189, 221, 8, 47, 189, 228, 31, 138, 190, 165, 131, 146, 189, 9, 106, 72, 190, 228, 187, 93, 190, 1, 218, 68, 189, 215, 195, 41, 62, 3, 52, 236, 61, 29, 3, 33, 62, 143, 255, 143, 187, 114, 41, 171, 189, 12, 199, 237, 61, 75, 120, 86, 189, 80, 188, 119, 62, 151, 149, 146, 62, 1, 221, 99, 190, 205, 132, 106, 189, 38, 193, 63, 61, 73, 250, 128, 188, 56, 127, 185, 59, 179, 190, 212, 189, 79, 169, 39, 190, 106, 163, 23, 190, 177, 117, 24, 190, 235, 251, 250, 189, 33, 86, 126, 189, 61, 252, 174, 187, 194, 116, 224, 189, 90, 164, 9, 62, 43, 86, 231, 189, 132, 193, 146, 61, 206, 49, 131, 61, 6, 128, 95, 190, 45, 153, 148, 61, 39, 253, 215, 189, 169, 187, 47, 62, 115, 226, 59, 62, 160, 193, 153, 61, 228, 144, 162, 189, 72, 126, 4, 189, 153, 33, 138, 190, 122, 139, 70, 189, 71, 139, 79, 190, 5, 140, 206, 189, 84, 2, 16, 189, 176, 72, 80, 189, 79, 207, 134, 190, 19, 132, 197, 60, 155, 141, 246, 189, 145, 96, 27, 190, 87, 235, 4, 189, 197, 145, 106, 188, 175, 249, 91, 62, 233, 242, 105, 62, 57, 252, 165, 61, 107, 141, 199, 61, 233, 42, 79, 189, 196, 46, 180, 188, 141, 114, 19, 62, 73, 42, 39, 190, 49, 243, 189, 61, 10, 236, 62, 190, 71, 81, 153, 61, 24, 38, 190, 61, 202, 236, 59, 60, 4, 86, 40, 62, 117, 128, 85, 62, 143, 12, 136, 61, 25, 122, 246, 189, 146, 120, 173, 61, 131, 181, 17, 189, 31, 22, 35, 62, 237, 112, 132, 61, 105, 159, 209, 59, 87, 62, 17, 189, 253, 236, 32, 62, 3, 142, 240, 189, 21, 205, 96, 61, 25, 6, 8, 190, 170, 230, 75, 61, 200, 137, 54, 190, 84, 137, 119, 189, 136, 189, 79, 62, 80, 43, 218, 189, 115, 56, 50, 61, 146, 27, 44, 61, 175, 107, 104, 62, 6, 31, 117, 62, 68, 10, 241, 58, 248, 74, 250, 189, 6, 6, 25, 62, 211, 92, 145, 61, 18, 111, 30, 60, 51, 31, 41, 61, 0, 187, 51, 62, 162, 199, 204, 189, 154, 139, 241, 61, 137, 167, 71, 62, 123, 109, 218, 186, 88, 230, 78, 61, 41, 172, 227, 61, 114, 108, 10, 190, 172, 251, 138, 61, 81, 152, 0, 190, 47, 6, 61, 62, 52, 166, 149, 189, 218, 137, 51, 62, 244, 33, 116, 188, 98, 166, 25, 60, 148, 195, 70, 62, 5, 6, 15, 61, 203, 6, 123, 189, 63, 242, 35, 186, 21, 95, 172, 61, 52, 26, 244, 186, 109, 245, 221, 189, 78, 241, 227, 189, 124, 28, 217, 189, 177, 79, 38, 61, 159, 231, 85, 190, 224, 175, 141, 189, 20, 161, 4, 62, 193, 96, 163, 61, 91, 1, 36, 62, 36, 220, 25, 61, 153, 9, 65, 62, 14, 224, 179, 188, 246, 137, 242, 60, 62, 52, 27, 188, 245, 130, 147, 187, 105, 184, 181, 61, 82, 6, 13, 62, 78, 29, 83, 62, 213, 180, 157, 189, 226, 23, 150, 187, 62, 114, 143, 61, 103, 135, 87, 61, 71, 166, 89, 190, 121, 196, 199, 189, 10, 43, 177, 61, 201, 248, 30, 190, 116, 87, 215, 189, 163, 67, 59, 188, 107, 112, 26, 60, 84, 43, 195, 189, 182, 196, 70, 190, 49, 0, 150, 61, 79, 56, 142, 188, 251, 246, 170, 61, 45, 73, 67, 61, 57, 47, 79, 188, 226, 221, 127, 61, 24, 159, 245, 61, 90, 24, 169, 61, 216, 150, 9, 61, 122, 182, 247, 61, 227, 201, 88, 190, 142, 12, 166, 61, 127, 236, 32, 61, 161, 242, 201, 186, 4, 127, 79, 62, 99, 13, 126, 62, 198, 209, 135, 61, 103, 106, 4, 62, 128, 15, 88, 62, 227, 40, 138, 58, 86, 42, 95, 190, 25, 239, 232, 189, 128, 28, 175, 58, 99, 64, 242, 189, 3, 107, 248, 188, 157, 88, 46, 62, 94, 94, 247, 188, 93, 76, 70, 190, 227, 117, 109, 188, 25, 201, 80, 61, 183, 153, 133, 61, 24, 225, 53, 61, 80, 69, 46, 62, 30, 42, 15, 190, 162, 146, 228, 188, 39, 195, 140, 187, 238, 96, 242, 60, 11, 97, 58, 62, 8, 208, 6, 61, 134, 160, 156, 189, 32, 204, 29, 190, 153, 192, 35, 190, 116, 214, 209, 60, 39, 2, 14, 190, 23, 65, 30, 61, 35, 12, 188, 189, 194, 187, 162, 61, 173, 20, 86, 189, 126, 212, 223, 189, 85, 109, 125, 62, 57, 38, 38, 189, 126, 48, 241, 61, 31, 236, 29, 190, 226, 162, 240, 61, 148, 19, 29, 61, 196, 152, 7, 190, 242, 112, 90, 189, 98, 147, 92, 62, 253, 57, 203, 188, 1, 66, 211, 189, 91, 234, 225, 189, 248, 164, 79, 62, 87, 158, 206, 60, 69, 12, 136, 189, 192, 207, 132, 189, 82, 24, 201, 61, 203, 242, 52, 62, 93, 191, 117, 62, 255, 139, 38, 62, 69, 98, 63, 189, 97, 71, 109, 189, 156, 215, 132, 189, 64, 106, 16, 190, 215, 32, 193, 189, 155, 131, 151, 189, 143, 8, 99, 190, 248, 134, 134, 189, 29, 169, 99, 189, 86, 169, 128, 62, 230, 171, 129, 62, 136, 10, 252, 189, 168, 85, 118, 59, 102, 52, 44, 190, 252, 187, 175, 189, 222, 159, 117, 62, 141, 231, 140, 189, 117, 182, 201, 61, 84, 6, 142, 59, 233, 207, 107, 61, 157, 163, 139, 61, 186, 113, 218, 61, 140, 77, 69, 62, 97, 30, 101, 62, 156, 80, 81, 190, 110, 138, 54, 189, 10, 58, 135, 188, 142, 118, 46, 190, 18, 252, 170, 189, 175, 20, 135, 189, 218, 183, 226, 60, 148, 169, 226, 60, 117, 38, 110, 60, 147, 114, 27, 62, 243, 59, 240, 188, 161, 90, 239, 189, 124, 233, 10, 62, 26, 250, 29, 62, 248, 75, 46, 189, 61, 197, 227, 188, 77, 90, 3, 190, 230, 111, 167, 57, 186, 38, 35, 189, 37, 137, 38, 59, 132, 105, 229, 187, 236, 174, 208, 61, 81, 220, 56, 190, 85, 129, 111, 190, 245, 75, 74, 62, 210, 128, 224, 189, 27, 28, 37, 190, 32, 23, 211, 189, 152, 92, 133, 59, 206, 114, 190, 188, 240, 240, 32, 190, 32, 80, 2, 190, 143, 123, 95, 62, 20, 30, 79, 61, 38, 101, 98, 190, 175, 156, 152, 189, 199, 97, 161, 188, 111, 177, 70, 61, 171, 111, 46, 62, 95, 224, 126, 62, 113, 210, 149, 188, 42, 106, 27, 190, 128, 153, 132, 60, 195, 163, 14, 190, 137, 16, 251, 188, 149, 237, 222, 189, 51, 55, 111, 190, 116, 70, 30, 62, 252, 58, 44, 61, 221, 199, 221, 61, 217, 19, 50, 61, 66, 214, 130, 189, 115, 66, 148, 58, 37, 182, 85, 62, 23, 194, 157, 189, 60, 18, 246, 60, 52, 125, 105, 189, 216, 70, 212, 189, 70, 59, 250, 61, 236, 167, 239, 189, 233, 43, 206, 61, 156, 224, 92, 190, 134, 110, 211, 61, 166, 91, 10, 189, 243, 11, 195, 189, 77, 79, 251, 189, 239, 233, 0, 61, 216, 247, 95, 61, 46, 149, 42, 62, 212, 128, 156, 61, 171, 137, 174, 61, 107, 95, 47, 62, 48, 178, 118, 62, 232, 178, 255, 189, 93, 147, 4, 190, 226, 85, 2, 190, 191, 140, 15, 190, 82, 133, 14, 60, 211, 67, 85, 190, 98, 228, 20, 190, 38, 135, 143, 61, 220, 202, 189, 61, 115, 22, 34, 62, 83, 52, 155, 60, 172, 76, 67, 190, 127, 180, 10, 62, 10, 160, 187, 189, 200, 233, 226, 188, 79, 109, 22, 61, 177, 75, 170, 189, 232, 70, 14, 62, 13, 57, 167, 189, 162, 74, 38, 190, 51, 18, 176, 60, 109, 66, 182, 61, 121, 61, 130, 62, 77, 172, 145, 189, 117, 59, 42, 62, 234, 247, 170, 189, 83, 1, 99, 190, 141, 122, 173, 189, 6, 85, 66, 61, 46, 3, 223, 186, 137, 232, 195, 60, 236, 222, 113, 190, 51, 236, 46, 190, 205, 225, 134, 189, 179, 39, 206, 189, 194, 246, 240, 188, 175, 146, 62, 62, 25, 55, 208, 189, 127, 222, 121, 187, 24, 198, 172, 61, 171, 117, 165, 60, 43, 139, 16, 190, 229, 113, 158, 61, 248, 145, 1, 62, 109, 189, 86, 61, 183, 123, 197, 61, 136, 162, 78, 60, 209, 214, 148, 61, 40, 33, 141, 187, 115, 123, 38, 61, 212, 250, 162, 189, 97, 11, 230, 189, 228, 224, 37, 190, 24, 152, 101, 190, 39, 122, 5, 190, 91, 158, 20, 189, 40, 92, 71, 190, 17, 102, 183, 189, 128, 184, 255, 189, 237, 103, 170, 61, 186, 150, 14, 62, 28, 143, 158, 61, 144, 111, 73, 61, 58, 148, 29, 61, 0, 197, 209, 61, 228, 216, 195, 188, 8, 121, 182, 61, 222, 187, 175, 59, 25, 189, 131, 189, 156, 247, 41, 186, 126, 108, 175, 61, 138, 127, 57, 189, 156, 239, 125, 62, 117, 45, 119, 62, 13, 185, 37, 190, 161, 33, 43, 190, 140, 254, 70, 61, 51, 144, 33, 62, 28, 9, 166, 61, 16, 156, 170, 189, 173, 243, 128, 62, 175, 127, 103, 189, 164, 54, 100, 62, 163, 114, 211, 189, 62, 199, 41, 61, 255, 56, 209, 61, 176, 173, 84, 62, 32, 210, 140, 61, 1, 96, 217, 61, 38, 155, 87, 62, 148, 99, 15, 190, 11, 37, 80, 188, 106, 241, 63, 190, 35, 160, 123, 59, 196, 213, 161, 61, 5, 250, 185, 189, 114, 39, 206, 188, 137, 182, 255, 189, 250, 154, 56, 187, 86, 123, 67, 188, 198, 37, 24, 62, 152, 58, 6, 62, 30, 227, 161, 61, 17, 156, 146, 61, 200, 79, 224, 189, 136, 50, 19, 189, 19, 192, 243, 189, 109, 46, 183, 189, 95, 219, 232, 61, 63, 200, 151, 189, 169, 58, 128, 61, 97, 182, 227, 187, 203, 211, 81, 190, 238, 248, 192, 189, 119, 3, 53, 60, 203, 225, 125, 62, 41, 149, 32, 190, 176, 37, 72, 190, 125, 189, 14, 189, 90, 21, 123, 62, 85, 201, 201, 61, 190, 37, 30, 190, 19, 107, 250, 188, 194, 34, 31, 61, 164, 50, 2, 62, 149, 113, 132, 62, 190, 46, 86, 60, 87, 244, 28, 189, 149, 51, 236, 61, 187, 68, 33, 190, 122, 186, 22, 190, 33, 48, 222, 189, 191, 133, 192, 188, 146, 151, 181, 61, 203, 46, 126, 189, 4, 130, 199, 58, 227, 148, 191, 61, 98, 11, 76, 189, 125, 111, 146, 61, 106, 138, 50, 62, 101, 91, 59, 188, 85, 249, 195, 189, 134, 219, 46, 190, 78, 71, 168, 58, 64, 154, 109, 190, 200, 46, 157, 189, 53, 253, 147, 59, 53, 228, 150, 188, 110, 209, 116, 189, 207, 252, 58, 190, 226, 215, 23, 190, 50, 164, 21, 62, 239, 252, 164, 61, 18, 136, 81, 189, 30, 190, 213, 188, 67, 198, 214, 61, 64, 40, 2, 62, 165, 22, 252, 187, 199, 27, 119, 62, 167, 186, 225, 61, 26, 145, 250, 61, 140, 182, 23, 190, 84, 47, 232, 61, 128, 147, 8, 190, 142, 86, 11, 190, 122, 44, 176, 189, 96, 150, 159, 61, 155, 168, 140, 61, 158, 88, 70, 62, 83, 68, 46, 62, 195, 129, 105, 188, 131, 18, 106, 61, 2, 16, 71, 190, 183, 93, 58, 62, 95, 214, 38, 61, 187, 3, 195, 61, 186, 223, 49, 62, 239, 148, 60, 62, 146, 243, 87, 62, 78, 203, 179, 189, 131, 13, 56, 62, 203, 109, 110, 189, 141, 7, 216, 61, 62, 212, 115, 188, 174, 93, 65, 62, 249, 124, 252, 61, 115, 66, 8, 190, 21, 50, 60, 189, 245, 95, 105, 60, 122, 177, 114, 190, 152, 159, 132, 60, 19, 32, 116, 190, 164, 222, 47, 190, 237, 232, 243, 60, 75, 83, 38, 190, 181, 112, 43, 62, 90, 174, 129, 60, 180, 70, 14, 61, 5, 97, 238, 189, 226, 182, 10, 190, 125, 54, 120, 190, 169, 162, 28, 190, 69, 207, 148, 189, 163, 207, 11, 62, 248, 21, 89, 188, 254, 204, 65, 189, 74, 220, 97, 190, 183, 200, 43, 62, 167, 187, 105, 189, 162, 43, 6, 190, 208, 95, 205, 61, 137, 192, 21, 60, 41, 195, 135, 61, 45, 245, 76, 190, 153, 31, 1, 190, 10, 70, 149, 188, 195, 222, 51, 190, 71, 78, 103, 189, 42, 39, 214, 61, 135, 200, 53, 62, 72, 253, 17, 61, 176, 90, 192, 61, 232, 160, 80, 189, 169, 114, 98, 62, 160, 26, 117, 189, 181, 83, 225, 61, 137, 115, 15, 61, 180, 246, 129, 61, 39, 130, 61, 190, 138, 166, 124, 61, 81, 41, 152, 61, 37, 68, 36, 190, 58, 56, 159, 62, 62, 98, 24, 62, 168, 139, 15, 190, 140, 175, 34, 61, 201, 248, 220, 61, 29, 154, 141, 188, 201, 21, 155, 189, 107, 251, 28, 61, 71, 128, 88, 190, 171, 235, 252, 61, 5, 166, 231, 61, 2, 73, 64, 62, 54, 209, 13, 190, 67, 15, 133, 61, 165, 235, 192, 61, 132, 225, 16, 62, 139, 208, 125, 61, 71, 19, 50, 190, 134, 176, 68, 62, 205, 105, 130, 189, 58, 14, 149, 61, 243, 42, 220, 189, 204, 25, 111, 60, 205, 102, 150, 189, 91, 71, 151, 61, 22, 41, 244, 61, 180, 195, 95, 188, 17, 134, 94, 60, 166, 117, 247, 60, 95, 124, 54, 190, 96, 131, 39, 62, 237, 220, 134, 61, 60, 144, 141, 189, 204, 67, 237, 186};
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
                    alignas(float) const unsigned char memory[] = {81, 243, 249, 61, 57, 250, 34, 190, 136, 35, 53, 190, 165, 240, 170, 61, 238, 214, 48, 190, 191, 165, 102, 189, 35, 232, 88, 61, 217, 21, 20, 190, 234, 103, 38, 61, 68, 186, 95, 61, 220, 109, 71, 187, 77, 252, 52, 190, 42, 151, 222, 189, 119, 91, 199, 188, 77, 7, 230, 61, 171, 88, 45, 60, 2, 62, 248, 61, 111, 213, 218, 60, 76, 43, 129, 188, 130, 198, 176, 61, 180, 187, 7, 61, 214, 245, 6, 62, 164, 243, 180, 189, 159, 120, 146, 61, 128, 168, 27, 190, 47, 72, 147, 61, 202, 208, 44, 62, 179, 206, 39, 62, 11, 157, 218, 189, 174, 136, 60, 62, 199, 214, 162, 188, 150, 13, 196, 189};
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
                    alignas(float) const unsigned char memory[] = {167, 254, 16, 62, 124, 222, 46, 188, 166, 41, 8, 190, 54, 39, 89, 190, 114, 153, 59, 190, 9, 187, 15, 190, 85, 150, 115, 62, 138, 221, 18, 189, 221, 219, 5, 62, 57, 68, 59, 190, 23, 253, 113, 62, 167, 97, 132, 190, 192, 238, 227, 189, 141, 16, 224, 61, 40, 181, 160, 61, 196, 168, 58, 190, 57, 225, 104, 190, 11, 175, 187, 61, 168, 228, 12, 190, 45, 215, 236, 188, 150, 236, 230, 189, 31, 16, 103, 62, 187, 222, 86, 190, 98, 207, 222, 189, 218, 222, 74, 62, 24, 126, 158, 189, 61, 78, 131, 62, 178, 189, 152, 189, 112, 217, 32, 190, 23, 23, 144, 62, 101, 51, 124, 190, 201, 117, 150, 187};
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
                    alignas(float) const unsigned char memory[] = {179, 128, 226, 189};
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
    alignas(float) const unsigned char memory[] = {32, 128, 3, 63, 110, 181, 161, 63, 46, 131, 253, 62, 151, 245, 103, 190, 147, 53, 163, 63, 206, 163, 57, 191, 28, 213, 224, 191, 45, 1, 138, 191, 145, 173, 180, 191, 117, 175, 174, 191, 165, 229, 196, 62, 47, 185, 192, 63, 79, 41, 180, 191, 120, 74, 175, 191, 90, 102, 159, 191, 152, 222, 118, 60, 253, 50, 222, 190, 64, 236, 171, 63, 39, 78, 6, 191, 203, 74, 16, 191, 70, 56, 249, 190, 14, 210, 136, 189, 177, 48, 139, 191, 91, 67, 167, 63, 8, 197, 145, 191, 156, 35, 115, 62, 11, 161, 162, 190, 249, 175, 178, 188, 52, 236, 108, 190, 181, 229, 86, 191, 244, 73, 57, 63, 127, 104, 179, 61, 194, 229, 44, 191, 167, 61, 206, 62, 87, 219, 64, 63, 234, 14, 104, 191, 58, 90, 194, 190, 208, 29, 177, 191, 152, 75, 128, 190};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {101, 20, 130, 192, 52, 203, 134, 192, 32, 96, 68, 64, 21, 153, 188, 191, 8, 24, 123, 64, 4, 120, 30, 64, 248, 103, 58, 64, 6, 87, 129, 64, 1, 109, 156, 191, 120, 34, 184, 63, 2, 122, 151, 189, 39, 25, 71, 192, 26, 131, 137, 64};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-22_02-16-11/f20dfa9_zoo_environment_algorithm/pendulum-v1_ppo/0004/steps/000000000000097";
   char commit_hash[] = "f20dfa9e876d28301ef2e27976a432039a33cad5";
}