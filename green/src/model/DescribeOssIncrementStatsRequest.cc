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

#include <alibabacloud/green/model/DescribeOssIncrementStatsRequest.h>

using AlibabaCloud::Green::Model::DescribeOssIncrementStatsRequest;

DescribeOssIncrementStatsRequest::DescribeOssIncrementStatsRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeOssIncrementStats")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOssIncrementStatsRequest::~DescribeOssIncrementStatsRequest()
{}

std::string DescribeOssIncrementStatsRequest::getStartDate()const
{
	return startDate_;
}

void DescribeOssIncrementStatsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string DescribeOssIncrementStatsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeOssIncrementStatsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string DescribeOssIncrementStatsRequest::getScene()const
{
	return scene_;
}

void DescribeOssIncrementStatsRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string DescribeOssIncrementStatsRequest::getEndDate()const
{
	return endDate_;
}

void DescribeOssIncrementStatsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string DescribeOssIncrementStatsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOssIncrementStatsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeOssIncrementStatsRequest::getLang()const
{
	return lang_;
}

void DescribeOssIncrementStatsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

