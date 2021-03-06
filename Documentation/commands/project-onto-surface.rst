:orphan:

.. Auto-generated by help-rst from "mirtk project-onto-surface -h" output

project-onto-surface
====================

.. program:: project-onto-surface


Synopsis
--------

::

    project-onto-surface <input> <output> -image <file> [options]
    project-onto-surface <input> <output> -labels <file> [options]
    project-onto-surface <input> <output> -boundary [-nolabel-points] [-nolabel-cells] [-name <scalars>]


Description
-----------

.. include:: _descriptions/project-onto-surface.rst



Arguments
---------

.. option:: input

   Input surface mesh.

.. option:: output

   Output surface mesh.


Command options
---------------

.. option:: -white

   Input surface is cortical WM/GM boundary.

.. option:: -pial

   Input surface is cortical GM/CSF boundary.

.. option:: -image <file>

   Input real-valued scalar/vector image.

.. option:: -labels <file>

   Input segmentation image with positive integer labels.

.. option:: -name <name>

   Name of output scalar array. (default: Scalars or Labels)

.. option:: -celldata, -nocelldata

   Assign values to cells of input surface. (default: off)

.. option:: -pointdata, -nopointdata

   Assign values to points of input surface. (default: on)

.. option:: -fill, -nofill

   Fill holes in projected surface parcellation.

.. option:: -min-size <n>

   Surface patches with less than n points are removed. (default: 0)

.. option:: -boundary

   Output boundary lines between surface parcels. (default: off)
   When no :option:`-image` or :option:`-labels` input file is
   specified, the boundaries of the input parcellation given by
   the labels array with the specified :option:`-name` are extracted.

.. option:: -write-dilated-labels <file>

   Write image of dilated labels.


Standard options
----------------

.. option:: -v, -verbose [n]

   Increase/Set verbosity of output messages. (default: 0)

.. option:: -debug [level]

   Increase/Set debug level for output of intermediate results. (default: 0)

.. option:: -version [major.minor]

   Print version and exit or set version to emulate.

.. option:: -revision

   Print revision (or version) number only and exit.

.. option:: -h, -help

   Print help and exit.
