﻿#include "pch.h"
#include "Scenario2_ShortName.xaml.h"
#if __has_include("Scenario2_ShortName.g.cpp")
#include "Scenario2_ShortName.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::WinUI3TemplateCpp::implementation
{
    Scenario2_ShortName::Scenario2_ShortName()
    {
        InitializeComponent();
    }

    int32_t Scenario2_ShortName::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Scenario2_ShortName::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void Scenario2_ShortName::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
