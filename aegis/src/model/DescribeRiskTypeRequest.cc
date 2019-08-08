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

#include <alibabacloud/aegis/model/DescribeRiskTypeRequest.h>

using AlibabaCloud::Aegis::Model::DescribeRiskTypeRequest;

DescribeRiskTypeRequest::DescribeRiskTypeRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeRiskType")
{}

DescribeRiskTypeRequest::~DescribeRiskTypeRequest()
{}

std::string DescribeRiskTypeRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRiskTypeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long DescribeRiskTypeRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeRiskTypeRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", std::to_string(strategyId));
}

std::string DescribeRiskTypeRequest::getLang()const
{
	return lang_;
}

void DescribeRiskTypeRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeRiskTypeRequest::getUuids()const
{
	return uuids_;
}

void DescribeRiskTypeRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

