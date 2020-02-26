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

#include <alibabacloud/cloudauth/model/DescribeVerifyUsageRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeVerifyUsageRequest;

DescribeVerifyUsageRequest::DescribeVerifyUsageRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "DescribeVerifyUsage")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVerifyUsageRequest::~DescribeVerifyUsageRequest()
{}

std::string DescribeVerifyUsageRequest::getStartDate()const
{
	return startDate_;
}

void DescribeVerifyUsageRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string DescribeVerifyUsageRequest::getBizType()const
{
	return bizType_;
}

void DescribeVerifyUsageRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string DescribeVerifyUsageRequest::getEndDate()const
{
	return endDate_;
}

void DescribeVerifyUsageRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string DescribeVerifyUsageRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVerifyUsageRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

