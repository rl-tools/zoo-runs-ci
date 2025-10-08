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
                alignas(float) const unsigned char memory[] = {35, 229, 207, 190, 233, 103, 168, 60, 215, 232, 167, 62};
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
                alignas(float) const unsigned char memory[] = {195, 84, 235, 63, 233, 60, 174, 63, 87, 123, 141, 62};
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
                    alignas(float) const unsigned char memory[] = {24, 121, 27, 191, 63, 117, 255, 189, 162, 8, 57, 191, 167, 72, 32, 63, 183, 186, 151, 62, 179, 157, 7, 190, 227, 152, 119, 190, 29, 237, 90, 61, 156, 209, 214, 190, 165, 41, 135, 190, 149, 185, 70, 191, 236, 27, 169, 189, 131, 0, 30, 191, 111, 138, 26, 190, 127, 252, 30, 191, 76, 199, 25, 63, 210, 254, 73, 62, 4, 83, 35, 191, 91, 239, 117, 190, 193, 212, 212, 190, 201, 154, 110, 62, 94, 197, 62, 62, 79, 77, 40, 63, 251, 230, 50, 63, 146, 76, 38, 191, 66, 138, 161, 61, 194, 45, 118, 63, 58, 24, 22, 190, 217, 254, 118, 191, 138, 225, 77, 61, 251, 204, 74, 190, 176, 168, 13, 63, 182, 182, 56, 63, 174, 99, 50, 191, 137, 114, 201, 62, 225, 85, 119, 63, 119, 187, 37, 63, 147, 175, 38, 190, 108, 41, 33, 63, 93, 124, 106, 190, 96, 157, 192, 62, 11, 85, 39, 190, 21, 212, 32, 191, 240, 44, 91, 190, 131, 154, 70, 191, 70, 202, 207, 61, 87, 60, 30, 62, 34, 16, 174, 62, 195, 239, 228, 62, 179, 203, 110, 61, 7, 253, 159, 189, 133, 102, 177, 190, 161, 128, 204, 62, 107, 144, 149, 190, 224, 78, 248, 62, 186, 79, 193, 190, 114, 137, 236, 189, 77, 138, 113, 190, 109, 168, 33, 191, 128, 219, 124, 191, 154, 78, 139, 61, 106, 215, 140, 190, 250, 168, 238, 190, 246, 222, 249, 190, 237, 20, 39, 188, 150, 116, 31, 63, 122, 215, 246, 189, 84, 127, 102, 62, 166, 170, 134, 58, 7, 246, 130, 62, 211, 193, 22, 63, 70, 232, 59, 63, 226, 132, 251, 190, 64, 178, 26, 62, 226, 7, 20, 191, 132, 107, 218, 60, 139, 245, 189, 190, 242, 164, 184, 61, 186, 14, 234, 62, 94, 214, 113, 189, 28, 3, 12, 191, 136, 42, 230, 189, 229, 69, 59, 191, 188, 33, 140, 62, 222, 117, 73, 62, 234, 252, 149, 62, 8, 194, 14, 63, 114, 217, 138, 61, 102, 127, 225, 62, 217, 106, 19, 63, 172, 233, 147, 190, 219, 21, 205, 62, 246, 43, 105, 63, 85, 156, 49, 191, 145, 75, 130, 62, 221, 41, 90, 63};
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
                    alignas(float) const unsigned char memory[] = {119, 100, 31, 191, 185, 241, 9, 62, 67, 205, 12, 63, 76, 41, 28, 61, 191, 184, 228, 190, 51, 222, 250, 62, 244, 190, 107, 190, 2, 150, 217, 190, 217, 238, 25, 191, 43, 153, 180, 62, 9, 129, 222, 62, 242, 148, 22, 191, 190, 109, 14, 63, 123, 2, 4, 189, 131, 79, 173, 190, 248, 207, 187, 190, 247, 234, 41, 190, 183, 235, 100, 190, 52, 202, 193, 62, 172, 26, 2, 63, 8, 83, 247, 189, 198, 3, 143, 190, 63, 42, 81, 189, 12, 159, 5, 191, 222, 25, 0, 191, 46, 167, 227, 189, 54, 152, 185, 62, 197, 71, 207, 189, 8, 168, 11, 191, 132, 123, 0, 190, 74, 231, 62, 63, 101, 152, 30, 191};
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
                    alignas(float) const unsigned char memory[] = {173, 255, 127, 62, 89, 162, 125, 189, 239, 116, 38, 60, 199, 42, 67, 62, 194, 52, 59, 60, 105, 177, 167, 62, 88, 247, 36, 189, 41, 247, 181, 62, 47, 231, 81, 190, 255, 127, 145, 60, 32, 7, 140, 62, 107, 191, 25, 190, 71, 215, 38, 189, 141, 59, 228, 189, 100, 29, 17, 62, 20, 45, 8, 188, 17, 226, 54, 190, 202, 102, 130, 61, 78, 130, 199, 189, 196, 25, 48, 190, 17, 12, 149, 189, 72, 110, 118, 189, 135, 180, 251, 188, 119, 123, 44, 188, 66, 113, 105, 62, 15, 63, 167, 60, 243, 20, 164, 61, 169, 142, 104, 189, 119, 218, 212, 61, 5, 71, 135, 61, 121, 162, 246, 62, 98, 190, 182, 190, 38, 183, 119, 62, 3, 171, 150, 189, 13, 77, 255, 189, 231, 111, 92, 61, 218, 237, 132, 62, 23, 216, 158, 62, 96, 125, 149, 61, 117, 40, 122, 62, 152, 235, 143, 190, 177, 22, 200, 189, 82, 222, 85, 62, 113, 104, 51, 190, 176, 81, 178, 189, 7, 37, 96, 61, 191, 10, 159, 62, 139, 148, 17, 189, 214, 136, 218, 60, 161, 124, 112, 62, 45, 47, 21, 62, 245, 215, 183, 190, 49, 98, 230, 188, 141, 214, 20, 190, 183, 222, 0, 190, 225, 196, 185, 61, 160, 105, 177, 62, 39, 127, 254, 60, 30, 172, 22, 60, 27, 174, 184, 189, 230, 11, 20, 62, 99, 2, 32, 61, 26, 159, 250, 62, 120, 239, 143, 190, 55, 197, 182, 62, 10, 120, 177, 189, 24, 175, 102, 189, 202, 105, 172, 61, 104, 10, 60, 62, 205, 249, 71, 60, 177, 199, 217, 187, 251, 189, 73, 62, 223, 66, 136, 190, 101, 18, 4, 62, 156, 236, 48, 62, 120, 122, 152, 190, 219, 36, 217, 58, 154, 17, 14, 61, 188, 107, 79, 62, 217, 92, 44, 62, 123, 179, 29, 190, 165, 209, 50, 62, 253, 0, 21, 62, 111, 181, 54, 190, 40, 128, 22, 190, 93, 65, 113, 190, 198, 63, 0, 190, 158, 50, 222, 61, 223, 86, 2, 62, 115, 64, 190, 61, 16, 117, 109, 62, 76, 232, 7, 190, 214, 219, 134, 61, 127, 241, 23, 62, 89, 246, 229, 62, 227, 147, 74, 190, 14, 203, 239, 189, 232, 151, 234, 188, 235, 140, 128, 62, 41, 236, 173, 189, 96, 85, 138, 190, 42, 194, 206, 189, 254, 220, 164, 188, 196, 120, 138, 190, 125, 234, 176, 62, 222, 73, 166, 187, 108, 42, 197, 190, 227, 252, 198, 62, 128, 219, 161, 61, 167, 71, 37, 189, 50, 54, 231, 189, 195, 248, 181, 189, 16, 23, 208, 189, 38, 244, 140, 190, 136, 101, 114, 61, 196, 13, 190, 62, 162, 193, 184, 62, 83, 218, 144, 61, 230, 11, 81, 190, 52, 71, 129, 190, 62, 224, 39, 190, 95, 104, 241, 59, 85, 72, 12, 186, 9, 61, 139, 61, 197, 49, 167, 60, 164, 25, 84, 190, 237, 168, 246, 190, 29, 152, 54, 62, 211, 238, 148, 190, 243, 77, 30, 62, 161, 209, 73, 62, 148, 54, 189, 61, 105, 128, 38, 190, 231, 192, 150, 190, 123, 221, 243, 61, 205, 219, 133, 190, 188, 196, 233, 62, 36, 85, 24, 61, 144, 131, 178, 189, 204, 227, 203, 62, 209, 222, 130, 62, 118, 145, 108, 190, 17, 184, 180, 190, 52, 218, 239, 60, 46, 219, 87, 61, 12, 42, 45, 189, 208, 251, 30, 62, 120, 157, 130, 62, 218, 126, 21, 62, 154, 103, 160, 189, 254, 87, 109, 188, 141, 29, 133, 190, 116, 74, 134, 190, 35, 166, 171, 189, 242, 175, 10, 190, 65, 36, 34, 62, 5, 69, 204, 189, 107, 249, 154, 190, 102, 39, 154, 190, 24, 152, 143, 61, 148, 64, 66, 191, 184, 4, 136, 62, 2, 145, 140, 189, 187, 26, 251, 189, 49, 173, 10, 191, 140, 40, 53, 62, 25, 230, 133, 190, 189, 65, 49, 61, 109, 227, 21, 62, 34, 123, 217, 189, 101, 226, 91, 62, 74, 252, 245, 188, 70, 12, 175, 62, 185, 9, 20, 188, 3, 141, 223, 190, 228, 134, 24, 190, 108, 253, 206, 188, 43, 49, 148, 190, 34, 92, 225, 61, 194, 176, 40, 190, 144, 135, 151, 188, 168, 68, 218, 189, 68, 204, 29, 62, 220, 40, 108, 62, 99, 247, 12, 191, 255, 227, 202, 189, 206, 177, 37, 190, 44, 38, 105, 190, 107, 2, 135, 61, 119, 137, 5, 62, 60, 150, 159, 62, 162, 126, 105, 189, 189, 72, 240, 61, 15, 145, 9, 62, 227, 181, 69, 189, 85, 104, 21, 62, 47, 124, 199, 61, 223, 218, 100, 62, 28, 160, 9, 190, 155, 191, 224, 62, 23, 149, 6, 190, 73, 129, 19, 190, 214, 135, 188, 62, 232, 187, 181, 190, 187, 129, 101, 190, 62, 5, 78, 189, 75, 215, 40, 62, 236, 158, 214, 188, 181, 120, 253, 188, 95, 77, 119, 62, 90, 58, 208, 61, 191, 255, 252, 190, 154, 84, 164, 190, 112, 190, 70, 60, 106, 128, 70, 189, 37, 194, 162, 60, 23, 195, 141, 62, 59, 223, 22, 61, 35, 98, 248, 188, 199, 159, 204, 188, 19, 152, 132, 62, 109, 64, 194, 61, 32, 86, 208, 62, 231, 24, 115, 190, 3, 161, 131, 62, 43, 142, 176, 61, 165, 60, 62, 190, 156, 165, 221, 59, 32, 142, 108, 62, 246, 208, 103, 62, 139, 236, 24, 190, 39, 254, 173, 62, 128, 115, 177, 190, 155, 253, 192, 61, 166, 176, 77, 62, 145, 208, 138, 190, 137, 184, 103, 190, 239, 239, 90, 62, 5, 210, 43, 61, 236, 218, 144, 62, 236, 26, 255, 61, 182, 159, 215, 59, 65, 247, 10, 62, 86, 210, 167, 190, 134, 253, 186, 190, 74, 46, 148, 61, 222, 151, 221, 187, 155, 107, 217, 60, 117, 52, 189, 61, 220, 244, 28, 62, 85, 248, 50, 61, 42, 174, 225, 189, 180, 252, 238, 61, 51, 76, 188, 62, 118, 209, 194, 62, 192, 240, 203, 189, 161, 214, 60, 61, 10, 217, 63, 189, 66, 247, 114, 190, 41, 177, 129, 61, 57, 16, 120, 60, 21, 175, 32, 62, 13, 36, 21, 189, 15, 194, 154, 62, 30, 183, 35, 190, 55, 190, 14, 190, 204, 144, 100, 62, 70, 169, 101, 189, 96, 132, 129, 190, 174, 246, 113, 62, 151, 97, 73, 189, 57, 73, 202, 61, 214, 45, 253, 60, 65, 8, 79, 61, 32, 140, 175, 188, 57, 75, 29, 190, 249, 242, 126, 189, 73, 32, 97, 61, 127, 178, 76, 59, 47, 140, 237, 61, 20, 14, 24, 188, 106, 85, 187, 189, 126, 72, 185, 189, 218, 203, 237, 61, 8, 191, 44, 189, 113, 16, 161, 62, 121, 24, 107, 62, 240, 250, 39, 190, 47, 21, 133, 62, 142, 56, 158, 61, 131, 179, 139, 190, 185, 75, 189, 189, 14, 60, 154, 62, 236, 88, 179, 61, 50, 167, 187, 61, 233, 20, 173, 62, 126, 50, 126, 190, 41, 67, 191, 188, 68, 233, 167, 62, 28, 91, 213, 190, 39, 71, 136, 190, 125, 64, 236, 61, 130, 233, 151, 61, 158, 208, 180, 189, 42, 154, 213, 189, 119, 57, 128, 189, 149, 20, 203, 61, 102, 189, 107, 190, 202, 13, 177, 190, 178, 73, 145, 189, 2, 134, 0, 62, 197, 99, 215, 61, 188, 34, 22, 62, 165, 214, 25, 62, 36, 30, 165, 61, 38, 111, 28, 190, 163, 130, 46, 58, 60, 29, 177, 61, 145, 220, 242, 62, 130, 6, 60, 190, 179, 30, 163, 62, 185, 212, 144, 61, 108, 106, 132, 189, 71, 199, 255, 188, 65, 224, 201, 61, 118, 179, 111, 62, 231, 136, 206, 61, 228, 156, 155, 188, 139, 242, 76, 190, 37, 178, 52, 62, 139, 177, 239, 187, 71, 46, 107, 190, 106, 86, 208, 189, 164, 206, 250, 189, 145, 184, 25, 61, 205, 31, 88, 60, 110, 28, 238, 189, 11, 56, 39, 61, 124, 80, 222, 61, 87, 72, 106, 190, 196, 25, 26, 62, 159, 55, 138, 61, 8, 122, 218, 189, 251, 146, 232, 60, 178, 116, 23, 62, 117, 233, 119, 62, 28, 192, 76, 189, 34, 46, 28, 62, 170, 112, 135, 189, 54, 101, 15, 190, 46, 150, 133, 62, 133, 93, 50, 190, 118, 85, 171, 62, 238, 180, 44, 190, 219, 2, 143, 61, 71, 227, 146, 62, 33, 170, 158, 62, 247, 27, 204, 188, 167, 200, 174, 59, 4, 180, 248, 189, 20, 56, 118, 189, 22, 42, 204, 61, 82, 186, 89, 190, 207, 97, 11, 190, 66, 199, 117, 190, 36, 170, 105, 61, 61, 7, 103, 62, 221, 149, 34, 61, 169, 246, 104, 190, 176, 64, 82, 189, 39, 148, 162, 61, 6, 12, 225, 61, 102, 77, 10, 62, 60, 246, 23, 189, 185, 76, 34, 62, 240, 94, 32, 189, 181, 53, 164, 62, 171, 24, 16, 62, 229, 9, 30, 60, 42, 74, 89, 189, 58, 192, 32, 62, 199, 29, 194, 189, 66, 38, 7, 190, 182, 39, 141, 59, 33, 201, 130, 190, 146, 230, 119, 61, 44, 176, 230, 60, 48, 57, 228, 189, 29, 107, 58, 190, 173, 41, 73, 190, 128, 146, 167, 60, 133, 58, 26, 189, 251, 39, 139, 62, 144, 130, 3, 190, 123, 160, 184, 189, 45, 58, 209, 62, 174, 212, 81, 62, 70, 208, 175, 61, 188, 188, 27, 190, 183, 234, 224, 189, 152, 211, 5, 190, 247, 46, 62, 190, 184, 83, 199, 188, 197, 227, 231, 61, 118, 123, 124, 61, 89, 0, 96, 62, 39, 213, 198, 61, 76, 155, 225, 189, 208, 185, 47, 60, 119, 177, 122, 190, 241, 73, 47, 189, 26, 138, 254, 189, 143, 87, 100, 190, 41, 102, 167, 61, 18, 189, 202, 190, 10, 223, 237, 61, 221, 255, 197, 62, 83, 112, 42, 62, 188, 176, 149, 190, 204, 86, 83, 188, 97, 106, 170, 62, 111, 135, 185, 62, 136, 5, 229, 188, 178, 228, 99, 62, 242, 38, 239, 190, 30, 73, 183, 61, 103, 13, 213, 62, 45, 173, 108, 190, 196, 86, 133, 190, 106, 243, 166, 61, 83, 152, 104, 62, 50, 36, 136, 60, 149, 52, 20, 188, 247, 169, 113, 62, 252, 8, 206, 189, 149, 74, 205, 190, 153, 43, 186, 190, 108, 29, 29, 190, 212, 157, 9, 190, 224, 19, 138, 62, 89, 219, 180, 61, 156, 83, 152, 62, 229, 156, 136, 189, 59, 76, 134, 61, 116, 48, 4, 61, 229, 102, 151, 61, 151, 231, 28, 63, 196, 178, 217, 190, 175, 167, 102, 62, 122, 238, 253, 61, 205, 65, 170, 59, 144, 129, 132, 190, 209, 123, 107, 62, 137, 174, 235, 61, 211, 120, 17, 190, 202, 137, 10, 63, 189, 41, 211, 189, 191, 142, 230, 60, 200, 169, 19, 62, 29, 72, 135, 190, 150, 252, 87, 189, 228, 128, 19, 190, 202, 124, 217, 188, 8, 149, 166, 62, 253, 25, 227, 189, 54, 249, 158, 189, 223, 109, 167, 189, 251, 15, 237, 190, 107, 103, 166, 189, 103, 108, 134, 189, 152, 92, 68, 61, 91, 56, 221, 62, 136, 192, 153, 62, 41, 30, 5, 62, 85, 161, 225, 61, 245, 63, 162, 189, 211, 75, 97, 62, 33, 121, 140, 62, 202, 210, 241, 62, 234, 92, 5, 190, 170, 219, 234, 188, 230, 91, 122, 190, 136, 14, 173, 62, 125, 43, 139, 62, 144, 227, 12, 61, 231, 197, 23, 187, 202, 12, 96, 189, 172, 110, 136, 191, 97, 130, 77, 61, 97, 94, 139, 62, 196, 217, 117, 190, 23, 159, 116, 61, 163, 123, 235, 61, 199, 252, 217, 189, 166, 8, 6, 62, 113, 200, 236, 190, 162, 159, 65, 190, 117, 193, 28, 190, 11, 21, 40, 61, 14, 57, 32, 63, 69, 2, 125, 62, 15, 170, 250, 189, 163, 75, 125, 188, 87, 103, 26, 191, 91, 110, 111, 190, 164, 199, 49, 62, 110, 250, 168, 188, 253, 206, 17, 62, 176, 252, 25, 191, 238, 144, 30, 191, 14, 123, 194, 190, 222, 91, 13, 62, 25, 78, 22, 190, 188, 26, 129, 189, 238, 119, 192, 189, 146, 99, 192, 61, 203, 240, 178, 189, 220, 32, 7, 190, 14, 238, 170, 189, 152, 5, 185, 190, 255, 154, 196, 62, 7, 183, 110, 61, 198, 176, 9, 190, 103, 238, 164, 61, 65, 158, 255, 61, 186, 60, 98, 61, 123, 253, 8, 190, 153, 13, 76, 190, 141, 153, 215, 61, 93, 240, 10, 189, 6, 127, 143, 61, 70, 246, 171, 61, 78, 14, 47, 62, 221, 2, 219, 188, 236, 115, 106, 189, 102, 146, 170, 61, 103, 192, 15, 190, 16, 61, 212, 188, 198, 243, 109, 190, 142, 128, 130, 61, 164, 71, 3, 188, 5, 88, 255, 188, 150, 181, 147, 190, 229, 44, 149, 61, 186, 239, 199, 62, 146, 40, 227, 61, 76, 9, 1, 62, 134, 231, 49, 62, 188, 117, 146, 61, 156, 34, 145, 62, 85, 44, 204, 188, 67, 56, 174, 62, 238, 236, 190, 190, 135, 236, 171, 61, 164, 180, 162, 62, 191, 84, 147, 190, 138, 99, 187, 190, 44, 254, 116, 62, 110, 177, 109, 62, 205, 152, 117, 189, 7, 175, 99, 60, 3, 33, 39, 62, 128, 186, 200, 61, 234, 210, 117, 190, 230, 120, 165, 190, 107, 208, 46, 190, 39, 8, 62, 62, 42, 214, 115, 62, 167, 185, 1, 62, 247, 46, 166, 187, 190, 129, 69, 62, 233, 133, 114, 60, 146, 248, 187, 61, 144, 1, 113, 61, 167, 228, 148, 62, 183, 49, 12, 190, 123, 73, 83, 190, 137, 46, 183, 62, 123, 211, 21, 62, 227, 143, 27, 61, 224, 85, 255, 189, 57, 178, 39, 63, 133, 48, 116, 190, 102, 0, 147, 189, 43, 17, 46, 191, 99, 71, 131, 189, 21, 132, 214, 61, 18, 177, 45, 191, 180, 82, 150, 61, 143, 125, 171, 188, 93, 174, 49, 62, 147, 133, 43, 190, 215, 23, 154, 61, 195, 242, 16, 190, 198, 188, 213, 62, 234, 160, 105, 60, 171, 203, 7, 62, 212, 127, 204, 190, 182, 79, 129, 190, 218, 110, 58, 190, 89, 230, 14, 190, 91, 169, 129, 188, 50, 208, 36, 63, 231, 181, 54, 190, 94, 154, 183, 61, 17, 240, 181, 189, 126, 138, 216, 189, 163, 155, 238, 190, 214, 87, 32, 62, 136, 196, 0, 190, 10, 33, 145, 189, 215, 4, 34, 60, 179, 11, 73, 62, 4, 188, 14, 62, 25, 151, 251, 189, 129, 33, 235, 62, 29, 232, 172, 190, 50, 143, 252, 189, 8, 10, 217, 62, 130, 244, 148, 190, 116, 193, 118, 190, 99, 33, 56, 62, 78, 253, 123, 62, 231, 211, 106, 62, 203, 34, 208, 61, 247, 25, 68, 189, 230, 212, 113, 60, 239, 93, 9, 190, 58, 34, 172, 188, 205, 207, 194, 61, 251, 186, 114, 60, 165, 201, 24, 62, 207, 132, 83, 62, 130, 174, 86, 62, 191, 97, 67, 62, 217, 248, 150, 61, 163, 230, 6, 62, 112, 133, 143, 62, 227, 155, 250, 62, 64, 117, 176, 190, 0, 7, 141, 190, 182, 126, 207, 61, 216, 9, 156, 61, 27, 19, 209, 187, 110, 96, 146, 189, 37, 171, 164, 190, 101, 196, 0, 190, 130, 21, 155, 190, 81, 107, 175, 62, 151, 70, 206, 61, 13, 142, 210, 190, 128, 210, 223, 62, 209, 25, 12, 62, 232, 209, 26, 189, 244, 214, 169, 190, 81, 246, 0, 190, 185, 123, 64, 62, 56, 109, 24, 190, 38, 152, 73, 190, 216, 248, 243, 62, 164, 73, 126, 62, 252, 9, 101, 189, 132, 126, 29, 190, 108, 191, 121, 188, 194, 255, 129, 190, 251, 226, 178, 60, 182, 247, 232, 189, 89, 178, 183, 189, 243, 220, 166, 190, 43, 53, 106, 190, 245, 106, 206, 190, 201, 65, 163, 62, 243, 234, 90, 63, 92, 220, 249, 189, 139, 0, 41, 61, 237, 65, 182, 62, 46, 129, 31, 63, 1, 35, 55, 61, 201, 196, 214, 61, 196, 216, 49, 61, 115, 255, 86, 190, 114, 177, 79, 62, 44, 14, 9, 190, 185, 90, 89, 61, 20, 168, 196, 190, 113, 112, 45, 62, 120, 214, 201, 62, 97, 152, 137, 188, 50, 137, 72, 190, 145, 212, 104, 61, 153, 50, 125, 189, 50, 41, 68, 61, 240, 53, 166, 62, 167, 198, 218, 61, 247, 168, 215, 61, 108, 17, 151, 61, 138, 201, 45, 63, 235, 174, 178, 62, 188, 142, 156, 61, 249, 11, 67, 61, 52, 238, 130, 62, 251, 42, 167, 190, 2, 1, 149, 190, 209, 109, 176, 61, 144, 135, 91, 62, 101, 194, 131, 189, 231, 226, 96, 60, 61, 231, 44, 188, 74, 226, 22, 62, 198, 118, 36, 62, 214, 174, 237, 188, 147, 151, 218, 62, 41, 11, 195, 190, 62, 159, 213, 61, 8, 9, 172, 62, 34, 112, 171, 190, 177, 197, 147, 190, 117, 29, 142, 188, 130, 37, 238, 61, 103, 72, 101, 62, 169, 189, 118, 61, 252, 50, 84, 62, 100, 235, 106, 189, 211, 227, 217, 190, 233, 111, 141, 190, 111, 25, 3, 190, 34, 166, 19, 190, 163, 142, 183, 61, 171, 83, 159, 62, 228, 62, 61, 59, 157, 168, 159, 61, 77, 180, 82, 61, 244, 132, 82, 62, 228, 37, 155, 61, 40, 245, 171, 62, 20, 178, 99, 190, 199, 191, 6, 188, 174, 71, 15, 190, 205, 79, 57, 62, 242, 105, 60, 190, 19, 158, 131, 190, 112, 70, 177, 189, 86, 49, 9, 190, 119, 17, 215, 61, 184, 191, 19, 62, 134, 225, 182, 189, 190, 35, 228, 188, 22, 151, 30, 62, 53, 10, 128, 61, 90, 61, 55, 62, 220, 136, 87, 190, 241, 237, 111, 187, 27, 49, 87, 189, 253, 29, 1, 62, 242, 196, 30, 190, 145, 244, 152, 189, 9, 253, 39, 62, 163, 117, 38, 62, 133, 253, 236, 61, 155, 111, 133, 61, 48, 173, 243, 189, 122, 67, 40, 190, 183, 173, 202, 60, 13, 201, 186, 61, 113, 64, 175, 188, 175, 225, 190, 189, 186, 152, 77, 190, 92, 227, 241, 61, 228, 60, 243, 60, 61, 221, 80, 189, 149, 239, 55, 61, 15, 245, 190, 62, 243, 143, 134, 62, 36, 110, 13, 62, 196, 52, 20, 61, 8, 252, 97, 61, 176, 63, 234, 189, 192, 148, 201, 60, 46, 18, 30, 190, 182, 39, 140, 190, 203, 232, 13, 190, 69, 141, 70, 190, 89, 201, 75, 62, 150, 214, 40, 190, 64, 158, 186, 61, 238, 71, 16, 190, 174, 48, 69, 61, 118, 66, 94, 190, 226, 12, 107, 60, 5, 199, 7, 190, 240, 162, 59, 190, 157, 29, 192, 61, 226, 207, 35, 187, 119, 37, 91, 62, 40, 1, 192, 61, 169, 44, 145, 62, 89, 231, 198, 61, 7, 96, 150, 190, 115, 104, 129, 62, 175, 113, 163, 190, 21, 210, 13, 60, 164, 48, 69, 62, 122, 221, 165, 190, 166, 141, 138, 190, 16, 245, 151, 189, 216, 185, 93, 62, 38, 159, 113, 61, 237, 104, 28, 63, 245, 61, 138, 187, 107, 76, 121, 190, 161, 6, 45, 62, 254, 1, 8, 61, 212, 197, 102, 190, 194, 125, 55, 188, 185, 224, 65, 62, 170, 22, 203, 62, 68, 29, 168, 61, 46, 207, 5, 61, 11, 57, 59, 189, 64, 230, 61, 191, 193, 87, 171, 190, 32, 72, 131, 61, 50, 141, 125, 61, 220, 182, 17, 63, 145, 142, 63, 62, 13, 186, 120, 189, 215, 109, 219, 61, 52, 170, 148, 190, 80, 123, 202, 62, 36, 86, 39, 63, 154, 89, 215, 62, 248, 220, 49, 59, 24, 175, 99, 63, 73, 55, 20, 190, 240, 118, 244, 188, 40, 103, 191, 62, 165, 192, 29, 63, 218, 34, 63, 190, 97, 42, 209, 61, 104, 93, 16, 60, 133, 101, 120, 190, 213, 0, 198, 61, 131, 33, 255, 189, 53, 184, 14, 190, 181, 43, 156, 190, 20, 28, 127, 62, 156, 42, 5, 63, 173, 121, 157, 61, 137, 74, 109, 190, 90, 46, 62, 62, 73, 3, 141, 190, 24, 172, 78, 62, 171, 108, 14, 62, 105, 25, 60, 190, 130, 13, 134, 188, 32, 97, 142, 61, 230, 138, 79, 63, 166, 105, 216, 59, 180, 135, 10, 189, 122, 220, 143, 61, 161, 123, 6, 62, 38, 221, 30, 190, 33, 60, 253, 189, 179, 86, 165, 56, 127, 68, 213, 61, 120, 91, 237, 189, 135, 123, 25, 190, 126, 54, 184, 189, 10, 68, 249, 61, 48, 83, 101, 62, 150, 15, 9, 62, 173, 216, 183, 62, 127, 187, 184, 189, 215, 225, 130, 61, 148, 5, 133, 62, 248, 228, 200, 190, 217, 184, 77, 189, 74, 91, 33, 62, 57, 79, 153, 62, 177, 86, 69, 61, 248, 171, 181, 189, 238, 122, 107, 61, 162, 63, 6, 190, 107, 107, 221, 190, 73, 107, 32, 190, 237, 70, 45, 190, 25, 171, 169, 187, 147, 187, 88, 189, 133, 123, 10, 61, 203, 159, 105, 61, 232, 201, 108, 62, 203, 240, 73, 189, 5, 65, 162, 62, 76, 48, 192, 61, 189, 37, 188, 62, 75, 210, 72, 190, 246, 104, 221, 189, 139, 92, 253, 189, 234, 175, 237, 60, 249, 215, 228, 61, 204, 57, 130, 188, 147, 199, 189, 190, 216, 34, 4, 62, 150, 156, 40, 189, 49, 156, 4, 63, 8, 243, 72, 190, 81, 111, 248, 61, 223, 204, 219, 62, 145, 29, 105, 189, 20, 41, 158, 61, 47, 239, 75, 189, 206, 18, 194, 188, 66, 2, 171, 60, 83, 242, 177, 189, 243, 49, 208, 190, 112, 9, 14, 61, 145, 65, 97, 189, 190, 19, 167, 62, 114, 49, 164, 61, 121, 212, 192, 189, 12, 80, 96, 189, 152, 144, 39, 61, 191, 157, 189, 190, 26, 114, 130, 61, 220, 118, 54, 62, 37, 25, 149, 61, 61, 202, 82, 190, 227, 2, 41, 63, 96, 68, 167, 190, 1, 77, 13, 62, 199, 0, 9, 185, 177, 147, 22, 189, 171, 99, 50, 187, 132, 19, 223, 189, 89, 147, 137, 61, 3, 158, 43, 62, 236, 165, 97, 60, 22, 92, 92, 190, 97, 78, 211, 61, 23, 178, 176, 62, 232, 114, 42, 189, 28, 10, 78, 62, 246, 174, 137, 190, 99, 53, 98, 61, 220, 124, 30, 190, 123, 254, 36, 62, 193, 174, 191, 189, 19, 128, 93, 61, 29, 186, 246, 189, 66, 203, 36, 189, 238, 156, 134, 62, 218, 252, 140, 60, 224, 45, 198, 189, 20, 102, 142, 60, 222, 90, 67, 190, 134, 176, 251, 188, 74, 241, 26, 190, 92, 90, 141, 189, 65, 122, 141, 190, 75, 187, 255, 61, 72, 146, 229, 61, 154, 215, 69, 188, 110, 137, 216, 187, 184, 132, 98, 61, 103, 150, 84, 62, 129, 65, 194, 61, 131, 193, 151, 61, 52, 124, 101, 62, 254, 172, 233, 190, 121, 52, 143, 189, 158, 138, 168, 62, 216, 226, 114, 190, 46, 65, 146, 190, 113, 87, 224, 59, 190, 137, 105, 62, 218, 66, 133, 189, 194, 24, 243, 61, 5, 139, 194, 61, 230, 220, 186, 189, 175, 254, 200, 190, 241, 123, 83, 190, 73, 213, 226, 189, 166, 35, 66, 62, 172, 209, 61, 187, 157, 40, 19, 62, 58, 16, 46, 62, 139, 192, 38, 62, 183, 225, 141, 189, 96, 32, 164, 61, 226, 158, 174, 62, 0, 202, 217, 62, 27, 49, 151, 190, 13, 106, 48, 62, 254, 64, 6, 190, 225, 188, 131, 189, 161, 125, 168, 60, 211, 204, 135, 62, 222, 231, 67, 60, 180, 179, 219, 61, 90, 178, 147, 62, 131, 245, 208, 190, 155, 125, 234, 61, 17, 12, 179, 62, 148, 237, 39, 190, 41, 214, 185, 189, 208, 107, 14, 188, 8, 174, 202, 61, 32, 173, 48, 62, 11, 152, 91, 189, 193, 135, 111, 62, 248, 139, 125, 61, 132, 83, 29, 190, 210, 217, 156, 190, 196, 25, 6, 190, 150, 211, 35, 62, 174, 61, 125, 62, 168, 73, 151, 62, 69, 64, 10, 61, 146, 42, 78, 62, 43, 115, 36, 190, 202, 60, 38, 62, 110, 118, 142, 62, 12, 11, 217, 62, 160, 106, 192, 190};
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
                    alignas(float) const unsigned char memory[] = {1, 166, 227, 60, 240, 133, 33, 62, 14, 43, 47, 61, 228, 212, 32, 189, 33, 246, 21, 190, 205, 62, 119, 62, 193, 157, 29, 189, 171, 252, 5, 190, 126, 114, 15, 62, 131, 129, 117, 189, 73, 154, 201, 61, 73, 6, 28, 190, 198, 76, 10, 190, 89, 183, 2, 62, 200, 167, 56, 190, 127, 225, 118, 62, 114, 41, 2, 62, 69, 173, 29, 189, 159, 188, 106, 62, 76, 202, 181, 188, 85, 243, 150, 189, 203, 205, 175, 189, 2, 159, 24, 62, 2, 139, 106, 61, 237, 58, 163, 189, 140, 117, 36, 189, 108, 238, 173, 190, 88, 226, 188, 185, 77, 131, 174, 189, 184, 176, 227, 60, 201, 254, 4, 190, 23, 195, 1, 62};
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
                    alignas(float) const unsigned char memory[] = {253, 103, 102, 190, 253, 57, 133, 190, 145, 251, 156, 190, 108, 75, 152, 62, 190, 19, 79, 62, 154, 124, 187, 62, 178, 187, 184, 190, 133, 161, 154, 190, 145, 50, 28, 188, 166, 101, 199, 190, 38, 144, 58, 190, 9, 92, 209, 189, 30, 46, 92, 62, 57, 148, 186, 190, 207, 186, 22, 190, 189, 226, 187, 62, 32, 147, 7, 62, 75, 198, 145, 190, 222, 91, 197, 190, 215, 190, 103, 190, 46, 215, 172, 62, 238, 85, 126, 190, 252, 90, 203, 190, 104, 253, 194, 61, 82, 1, 150, 190, 18, 4, 144, 190, 27, 132, 171, 190, 102, 23, 157, 190, 123, 226, 160, 62, 73, 240, 10, 62, 199, 19, 138, 190, 220, 106, 100, 190};
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
                    alignas(float) const unsigned char memory[] = {11, 186, 3, 190};
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
    alignas(float) const unsigned char memory[] = {56, 199, 163, 62, 12, 230, 163, 61, 202, 108, 176, 191, 58, 30, 133, 62, 172, 107, 187, 190, 184, 20, 111, 63, 196, 207, 155, 191, 194, 141, 169, 63, 251, 247, 132, 62, 33, 78, 179, 190, 106, 94, 26, 63, 95, 79, 66, 63, 38, 189, 190, 60, 121, 132, 193, 63, 219, 126, 248, 63, 72, 184, 89, 63, 50, 1, 28, 190, 220, 106, 200, 61, 252, 41, 13, 61, 224, 167, 82, 191, 254, 241, 49, 63, 217, 104, 62, 63, 221, 33, 139, 63, 75, 42, 159, 191, 241, 75, 223, 59, 0, 235, 79, 191, 181, 68, 17, 192, 156, 254, 217, 63, 249, 99, 166, 63, 115, 93, 246, 63, 236, 121, 107, 190, 28, 89, 74, 191, 53, 127, 10, 190, 138, 161, 15, 190, 179, 237, 164, 191, 105, 79, 145, 58, 64, 109, 80, 63, 13, 250, 242, 189, 232, 138, 147, 191};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {35, 113, 244, 63, 252, 156, 158, 63, 71, 40, 36, 192, 131, 64, 56, 192, 11, 223, 134, 192, 32, 87, 155, 63, 23, 61, 78, 64, 82, 79, 135, 192, 240, 194, 75, 64, 214, 1, 172, 192, 107, 46, 52, 64, 98, 224, 104, 64, 22, 196, 80, 64};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-22_02-16-11/f20dfa9_zoo_environment_algorithm/pendulum-v1_ppo/0006/steps/000000000000970";
   char commit_hash[] = "f20dfa9e876d28301ef2e27976a432039a33cad5";
}