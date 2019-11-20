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

#include <alibabacloud/ivpd/model/ChangeImageSizeRequest.h>

using AlibabaCloud::Ivpd::Model::ChangeImageSizeRequest;

ChangeImageSizeRequest::ChangeImageSizeRequest() :
	RpcServiceRequest("ivpd", "2019-06-25", "ChangeImageSize")
{
	setMethod(HttpRequest::Method::Post);
}

ChangeImageSizeRequest::~ChangeImageSizeRequest()
{}

std::string ChangeImageSizeRequest::getUrl()const
{
	return url_;
}

void ChangeImageSizeRequest::setUrl(const std::string& url)
{
	url_ = url;
	setCoreParameter("Url", url);
}

int ChangeImageSizeRequest::getWidth()const
{
	return width_;
}

void ChangeImageSizeRequest::setWidth(int width)
{
	width_ = width;
	setCoreParameter("Width", std::to_string(width));
}

int ChangeImageSizeRequest::getHeight()const
{
	return height_;
}

void ChangeImageSizeRequest::setHeight(int height)
{
	height_ = height;
	setCoreParameter("Height", std::to_string(height));
}

