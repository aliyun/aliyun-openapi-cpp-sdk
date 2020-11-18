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

#include <alibabacloud/green/model/DescribeOpenApiRcpStatsRequest.h>

using AlibabaCloud::Green::Model::DescribeOpenApiRcpStatsRequest;

DescribeOpenApiRcpStatsRequest::DescribeOpenApiRcpStatsRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeOpenApiRcpStats")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOpenApiRcpStatsRequest::~DescribeOpenApiRcpStatsRequest()
{}

std::string DescribeOpenApiRcpStatsRequest::getStartDate()const
{
	return startDate_;
}

void DescribeOpenApiRcpStatsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string DescribeOpenApiRcpStatsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeOpenApiRcpStatsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string DescribeOpenApiRcpStatsRequest::getBizType()const
{
	return bizType_;
}

void DescribeOpenApiRcpStatsRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string DescribeOpenApiRcpStatsRequest::getEndDate()const
{
	return endDate_;
}

void DescribeOpenApiRcpStatsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string DescribeOpenApiRcpStatsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOpenApiRcpStatsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

