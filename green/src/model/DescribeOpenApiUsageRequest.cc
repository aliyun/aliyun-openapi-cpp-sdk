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

#include <alibabacloud/green/model/DescribeOpenApiUsageRequest.h>

using AlibabaCloud::Green::Model::DescribeOpenApiUsageRequest;

DescribeOpenApiUsageRequest::DescribeOpenApiUsageRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeOpenApiUsage")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOpenApiUsageRequest::~DescribeOpenApiUsageRequest()
{}

std::string DescribeOpenApiUsageRequest::getStartDate()const
{
	return startDate_;
}

void DescribeOpenApiUsageRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string DescribeOpenApiUsageRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeOpenApiUsageRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string DescribeOpenApiUsageRequest::getEndDate()const
{
	return endDate_;
}

void DescribeOpenApiUsageRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string DescribeOpenApiUsageRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOpenApiUsageRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

