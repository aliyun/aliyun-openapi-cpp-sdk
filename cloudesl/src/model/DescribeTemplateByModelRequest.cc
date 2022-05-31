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

#include <alibabacloud/cloudesl/model/DescribeTemplateByModelRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeTemplateByModelRequest;

DescribeTemplateByModelRequest::DescribeTemplateByModelRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeTemplateByModel")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTemplateByModelRequest::~DescribeTemplateByModelRequest()
{}

std::string DescribeTemplateByModelRequest::getEslSize()const
{
	return eslSize_;
}

void DescribeTemplateByModelRequest::setEslSize(const std::string& eslSize)
{
	eslSize_ = eslSize;
	setBodyParameter("EslSize", eslSize);
}

std::string DescribeTemplateByModelRequest::getDeviceType()const
{
	return deviceType_;
}

void DescribeTemplateByModelRequest::setDeviceType(const std::string& deviceType)
{
	deviceType_ = deviceType;
	setBodyParameter("DeviceType", deviceType);
}

int DescribeTemplateByModelRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTemplateByModelRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeTemplateByModelRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void DescribeTemplateByModelRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

int DescribeTemplateByModelRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTemplateByModelRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

