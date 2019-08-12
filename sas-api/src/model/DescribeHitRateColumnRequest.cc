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

#include <alibabacloud/sas-api/model/DescribeHitRateColumnRequest.h>

using AlibabaCloud::Sas_api::Model::DescribeHitRateColumnRequest;

DescribeHitRateColumnRequest::DescribeHitRateColumnRequest() :
	RpcServiceRequest("sas-api", "2017-07-05", "DescribeHitRateColumn")
{}

DescribeHitRateColumnRequest::~DescribeHitRateColumnRequest()
{}

std::string DescribeHitRateColumnRequest::getEndDate()const
{
	return endDate_;
}

void DescribeHitRateColumnRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", std::to_string(endDate));
}

std::string DescribeHitRateColumnRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeHitRateColumnRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeHitRateColumnRequest::getHitDay()const
{
	return hitDay_;
}

void DescribeHitRateColumnRequest::setHitDay(int hitDay)
{
	hitDay_ = hitDay;
	setCoreParameter("HitDay", hitDay);
}

std::string DescribeHitRateColumnRequest::getStartDate()const
{
	return startDate_;
}

void DescribeHitRateColumnRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", std::to_string(startDate));
}

int DescribeHitRateColumnRequest::getApiType()const
{
	return apiType_;
}

void DescribeHitRateColumnRequest::setApiType(int apiType)
{
	apiType_ = apiType;
	setCoreParameter("ApiType", apiType);
}

