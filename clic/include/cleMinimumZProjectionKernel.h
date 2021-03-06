/*  CLIc - version 0.1 - Copyright 2020 Stéphane Rigaud, Robert Haase,
*   Institut Pasteur Paris, Max Planck Institute for Molecular Cell Biology and Genetics Dresden
*
*   CLIc is part of the clEsperanto project http://clesperanto.net 
*
*   This file is subject to the terms and conditions defined in
*   file 'LICENSE.txt', which is part of this source code package.
*/


#ifndef __cleMinimumZProjectionKernel_h
#define __cleMinimumZProjectionKernel_h

#include "cleKernel.h"

namespace cle
{
    
class MinimumZProjectionKernel : public Kernel
{
private:

public:
    MinimumZProjectionKernel(GPU& gpu) : Kernel(gpu) 
    {
        kernelName = "minimum_z_projection";
        tagList = {"dst_min", "src"};
    }

    void SetInput(Object&);
    void SetOutput(Object&);
    void Execute();

    ~MinimumZProjectionKernel() = default;


};

} // namespace cle

#endif // __cleMinimumZProjectionKernel_h
