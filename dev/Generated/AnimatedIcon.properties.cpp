﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "AnimatedIcon.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(AnimatedIcon)
}

#include "AnimatedIcon.g.cpp"

GlobalDependencyProperty AnimatedIconProperties::s_SourceProperty{ nullptr };
GlobalDependencyProperty AnimatedIconProperties::s_StateProperty{ nullptr };

AnimatedIconProperties::AnimatedIconProperties()
{
    EnsureProperties();
}

void AnimatedIconProperties::EnsureProperties()
{
    if (!s_SourceProperty)
    {
        s_SourceProperty =
            InitializeDependencyProperty(
                L"Source",
                winrt::name_of<winrt::IRichAnimatedVisualSource>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                false /* isAttached */,
                ValueHelper<winrt::IRichAnimatedVisualSource>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSourcePropertyChanged));
    }
    if (!s_StateProperty)
    {
        s_StateProperty =
            InitializeDependencyProperty(
                L"State",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::AnimatedIcon>(),
                true /* isAttached */,
                ValueHelper<winrt::hstring>::BoxValueIfNecessary(L"Normal"),
                &AnimatedIcon::OnAnimatedIconStatePropertyChanged);
    }
}

void AnimatedIconProperties::ClearProperties()
{
    s_SourceProperty = nullptr;
    s_StateProperty = nullptr;
}

void AnimatedIconProperties::OnSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedIcon>();
    winrt::get_self<AnimatedIcon>(owner)->OnSourcePropertyChanged(args);
}

void AnimatedIconProperties::Source(winrt::IRichAnimatedVisualSource const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<AnimatedIcon*>(this)->SetValue(s_SourceProperty, ValueHelper<winrt::IRichAnimatedVisualSource>::BoxValueIfNecessary(value));
    }
}

winrt::IRichAnimatedVisualSource AnimatedIconProperties::Source()
{
    return ValueHelper<winrt::IRichAnimatedVisualSource>::CastOrUnbox(static_cast<AnimatedIcon*>(this)->GetValue(s_SourceProperty));
}


void AnimatedIconProperties::SetState(winrt::DependencyObject const& target, winrt::hstring const& value)
{
    target.SetValue(s_StateProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring AnimatedIconProperties::GetState(winrt::DependencyObject const& target)
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(target.GetValue(s_StateProperty));
}
