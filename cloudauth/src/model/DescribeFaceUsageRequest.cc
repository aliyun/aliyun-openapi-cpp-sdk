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

#include <alibabacloud/cloudauth/model/DescribeFaceUsageRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeFaceUsageRequest;

DescribeFaceUsageRequest::DescribeFaceUsageRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "DescribeFaceUsage")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFaceUsageRequest::~DescribeFaceUsageRequest()
{}

std::string DescribeFaceUsageRequest::getStartDate()const
{
	return startDate_;
}

void DescribeFaceUsageRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

std::string DescribeFaceUsageRequest::getEndDate()const
{
	return endDate_;
}

void DescribeFaceUsageRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

std::string DescribeFaceUsageRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeFaceUsageRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

