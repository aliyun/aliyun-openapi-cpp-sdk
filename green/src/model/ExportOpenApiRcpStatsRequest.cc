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

#include <alibabacloud/green/model/ExportOpenApiRcpStatsRequest.h>

using AlibabaCloud::Green::Model::ExportOpenApiRcpStatsRequest;

ExportOpenApiRcpStatsRequest::ExportOpenApiRcpStatsRequest() :
	RpcServiceRequest("green", "2017-08-23", "ExportOpenApiRcpStats")
{
	setMethod(HttpRequest::Method::Post);
}

ExportOpenApiRcpStatsRequest::~ExportOpenApiRcpStatsRequest()
{}

std::string ExportOpenApiRcpStatsRequest::getStartDate()const
{
	return startDate_;
}

void ExportOpenApiRcpStatsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string ExportOpenApiRcpStatsRequest::getResourceType()const
{
	return resourceType_;
}

void ExportOpenApiRcpStatsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string ExportOpenApiRcpStatsRequest::getBizType()const
{
	return bizType_;
}

void ExportOpenApiRcpStatsRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string ExportOpenApiRcpStatsRequest::getEndDate()const
{
	return endDate_;
}

void ExportOpenApiRcpStatsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string ExportOpenApiRcpStatsRequest::getSourceIp()const
{
	return sourceIp_;
}

void ExportOpenApiRcpStatsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

