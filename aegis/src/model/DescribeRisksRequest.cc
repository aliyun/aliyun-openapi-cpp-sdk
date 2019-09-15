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

#include <alibabacloud/aegis/model/DescribeRisksRequest.h>

using AlibabaCloud::Aegis::Model::DescribeRisksRequest;

DescribeRisksRequest::DescribeRisksRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeRisks")
{}

DescribeRisksRequest::~DescribeRisksRequest()
{}

long DescribeRisksRequest::getRiskId()const
{
	return riskId_;
}

void DescribeRisksRequest::setRiskId(long riskId)
{
	riskId_ = riskId;
	setCoreParameter("RiskId", std::to_string(riskId));
}

std::string DescribeRisksRequest::getRiskName()const
{
	return riskName_;
}

void DescribeRisksRequest::setRiskName(const std::string& riskName)
{
	riskName_ = riskName;
	setCoreParameter("RiskName", riskName);
}

std::string DescribeRisksRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRisksRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeRisksRequest::getLimit()const
{
	return limit_;
}

void DescribeRisksRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", std::to_string(limit));
}

std::string DescribeRisksRequest::getLang()const
{
	return lang_;
}

void DescribeRisksRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

