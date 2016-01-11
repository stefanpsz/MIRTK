/*
 * Medical Image Registration ToolKit (MIRTK)
 *
 * Copyright 2013-2015 Imperial College London
 * Copyright 2013-2015 Andreas Schuh
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MIRTK_LinearImageGradientFunction2D_H
#define MIRTK_LinearImageGradientFunction2D_H

#include <mirtkLinearImageGradientFunction.h>


namespace mirtk {


/**
 * Linear interpolation of generic 2D image gradient
 */
template <class TImage>
class GenericLinearImageGradientFunction2D
: public GenericLinearImageGradientFunction<TImage>
{
  mirtkObjectMacro(GenericLinearImageGradientFunction2D);
  mirtkGenericGradientInterpolatorTypes(GenericLinearImageGradientFunction);

public:

  /// Default constructor
  GenericLinearImageGradientFunction2D();

  /// Evaluate image gradient without handling boundary conditions
  ///
  /// This version is faster than EvaluateOutside, but is only defined inside
  /// the domain for which all image values required for interpolation are
  /// defined and thus require no extrapolation of the finite image.
  virtual GradientType GetInside(double, double, double = 0, double = 0) const;


  /// Evaluate image gradient without handling boundary conditions
  ///
  /// If the location is partially inside the foreground region of the image,
  /// only the foreground values are interpolated. Otherwise, the _DefaultValue
  /// is returned.
  ///
  /// This version is faster than GetWithPaddingOutside, but is only defined
  /// inside the domain for which all image values required for interpolation
  /// are defined and thus require no extrapolation of the finite image.
  virtual GradientType GetWithPaddingInside(double, double, double = 0, double = 0) const;

};


/**
 * Linear interpolation of any 2D image gradient
 */
class LinearImageGradientFunction2D
: public GenericLinearImageGradientFunction2D<BaseImage>
{
  mirtkObjectMacro(LinearImageGradientFunction2D);

public:

  /// Constructor
  LinearImageGradientFunction2D() {}

};


} // namespace mirtk

#endif // MIRTK_LinearImageGradientFunction2D_H
