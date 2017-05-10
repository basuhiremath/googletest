# scons file for build
print 'Platform is:', Platform()

import os

gtest_lib = SConscript('googletest/build/SConscript')

env = Environment()
env.Replace(CC = 'g++')
env.Append(CCFLAGS = '-g')
env.Append(LIBS = ['gtest_lib', 'pthread'])
env.Append(LIBPATH = ['#googletest/build'])
env.Append(CPPPATH = ['#googletest/include', '#src/'])
env.VariantDir('$(BUILDPATH)/build', '..', duplicate = 0)

if(os.name != 'posix'):
	env.Append(LINKFLAGS = ['-static-libgcc', '-static-libstdc++'])

SConscript('test/build/SConscript', exports=['env'])