<!-- -*-mode: xml-*- -->
<configuration>
  <options>
    <set name='cc'>gcc -m32</set>
    <set name='cppflags'></set>
    <set name='cflags'>-g -O2</set>
    <set name='ldflags'></set>
    <set name='libs'>-L%libdir%</set>

    <set name='libtool'>no</set>
    <set name='libdir'>%libdir%</set>

    <set name='install'>%INSTALL%</set>
    <set name='installProgram'>%INSTALL_PROGRAM%</set>
    <set name='installData'>%INSTALL_DATA%</set>
    <set name='uninstall'>rm -f</set>
    <set name='bindir'>%bindir%</set>
    <set name='oocdir'>%oocdir%</set>

    <set name='xsltproc'>no</set>
  </options>

  <pragmas>
    <set name='Warnings'>TRUE</set>
    <set name='Assertions'>TRUE</set>
    
    <set name='IndexCheck'>TRUE</set>
    <set name='DerefCheck'>TRUE</set>
    <set name='OverflowCheck'>FALSE</set>  <!-- not supported -->
    <set name='CaseSelectCheck'>TRUE</set>
    <set name='FunctResult'>TRUE</set>
    <set name='TypeGuard'>TRUE</set>
    <set name='ConformantMode'>FALSE</set>  <!-- not supported -->
  </pragmas>

  <repositories>
    <file-system>%oocdir%</file-system>
    <file-system>.</file-system>
  </repositories>
</configuration>

