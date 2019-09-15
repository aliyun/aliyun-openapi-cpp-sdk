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

#include <alibabacloud/aegis/model/DescribeCheckWarningCountRequest.h>

using AlibabaCloud::Aegis::Model::DescribeCheckWarningCountRequest;

DescribeCheckWarningCountRequest::DescribeCheckWarningCountRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeCheckWarningCount")
{}

DescribeCheckWarningCountRequest::~DescribeCheckWarningCountRequest()
{}

long DescribeCheckWarningCountRequest::getRiskId()const
{
	return riskId_;
}

void DescribeCheckWarningCountRequest::setRiskId(long riskId)
{
	riskId_ = riskId;
	setCoreParameter("RiskId", std::to_string(riskId));
}

std::string DescribeCheckWarningCountRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCheckWarningCountRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeCheckWarningCountRequest::getLang()const
{
	return lang_;
}

void DescribeCheckWarningCountRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeCheckWarningCountRequest::getCheckId()const
{
	return checkId_;
}

void DescribeCheckWarningCountRequest::setCheckId(long checkId)
{
	checkId_ = checkId;
	setCoreParameter("CheckId", std::to_string(checkId));
}

int DescribeCheckWarningCountRequest::getStatus()const
{
	return status_;
}

void DescribeCheckWarningCountRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

