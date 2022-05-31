/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/cloudesl/model/ApplyImageDitheringRequest.h>

using AlibabaCloud::Cloudesl::Model::ApplyImageDitheringRequest;

ApplyImageDitheringRequest::ApplyImageDitheringRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "ApplyImageDithering")
{
	setMethod(HttpRequest::Method::Post);
}

ApplyImageDitheringRequest::~ApplyImageDitheringRequest()
{}

std::string ApplyImageDitheringRequest::getExtraParams()const
{
	return extraParams_;
}

void ApplyImageDitheringRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string ApplyImageDitheringRequest::getContent()const
{
	return content_;
}

void ApplyImageDitheringRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string ApplyImageDitheringRequest::getDeviceType()const
{
	return deviceType_;
}

void ApplyImageDitheringRequest::setDeviceType(const std::string& deviceType)
{
	deviceType_ = deviceType;
	setBodyParameter("DeviceType", deviceType);
}

int ApplyImageDitheringRequest::getHeight()const
{
	return height_;
}

void ApplyImageDitheringRequest::setHeight(int height)
{
	height_ = height;
	setBodyParameter("Height", std::to_string(height));
}

int ApplyImageDitheringRequest::getWidth()const
{
	return width_;
}

void ApplyImageDitheringRequest::setWidth(int width)
{
	width_ = width;
	setBodyParameter("Width", std::to_string(width));
}

