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

#include <alibabacloud/sddp/model/DescribeDataLimitsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeDataLimitsRequest;

DescribeDataLimitsRequest::DescribeDataLimitsRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeDataLimits")
{}

DescribeDataLimitsRequest::~DescribeDataLimitsRequest()
{}

std::string DescribeDataLimitsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataLimitsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeDataLimitsRequest::getLang()const
{
	return lang_;
}

void DescribeDataLimitsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int DescribeDataLimitsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeDataLimitsRequest::setResourceType(int resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string DescribeDataLimitsRequest::getParentId()const
{
	return parentId_;
}

void DescribeDataLimitsRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setCoreParameter("ParentId", parentId);
}

