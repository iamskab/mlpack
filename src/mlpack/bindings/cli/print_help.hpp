/**
 * @file bindings/cli/print_help.hpp
 * @author Ryan Curtin
 *
 * Print help for a command-line program.
 *
 * mlpack is free software; you may redistribute it and/or modify it under the
 * terms of the 3-clause BSD license.  You should have received a copy of the
 * 3-clause BSD license along with mlpack.  If not, see
 * http://www.opensource.org/licenses/BSD-3-Clause for more information.
 */
#ifndef MLPACK_BINDINGS_IO_PRINT_HELP_HPP
#define MLPACK_BINDINGS_IO_PRINT_HELP_HPP

#include <mlpack/core.hpp>

namespace mlpack {
namespace bindings {
namespace cmd {

/**
 * Print the help for the given parameter.  If no parameter is specified, then
 * help will be printed for all parameters.
 *
 * @param param Parameter name to print help for.
 */
void PrintHelp(const std::string& param = "");

} // namespace cmd
} // namespace bindings
} // namespace mlpack

#endif
