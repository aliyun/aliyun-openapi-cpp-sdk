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

#include <alibabacloud/waf-openapi/model/DescribeProtectBlockSummaryRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeProtectBlockSummaryRequest;

DescribeProtectBlockSummaryRequest::DescribeProtectBlockSummaryRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeProtectBlockSummary")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeProtectBlockSummaryRequest::~DescribeProtectBlockSummaryRequest()
{}

std::string DescribeProtectBlockSummaryRequest::getStartTimestamp()const
{
	return startTimestamp_;
}

void DescribeProtectBlockSummaryRequest::setStartTimestamp(const std::string& startTimestamp)
{
	startTimestamp_ = startTimestamp;
	setParameter("StartTimestamp", startTimestamp);
}

std::string DescribeProtectBlockSummaryRequest::getEndTimestamp()const
{
	return endTimestamp_;
}

void DescribeProtectBlockSummaryRequest::setEndTimestamp(const std::string& endTimestamp)
{
	endTimestamp_ = endTimestamp;
	setParameter("EndTimestamp", endTimestamp);
}

std::string DescribeProtectBlockSummaryRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeProtectBlockSummaryRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeProtectBlockSummaryRequest::getLang()const
{
	return lang_;
}

void DescribeProtectBlockSummaryRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeProtectBlockSummaryRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeProtectBlockSummaryRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeProtectBlockSummaryRequest::getDomain()const
{
	return domain_;
}

void DescribeProtectBlockSummaryRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DescribeProtectBlockSummaryRequest::getStep()const
{
	return step_;
}

void DescribeProtectBlockSummaryRequest::setStep(const std::string& step)
{
	step_ = step;
	setParameter("Step", step);
}

std::string DescribeProtectBlockSummaryRequest::getRegion()const
{
	return region_;
}

void DescribeProtectBlockSummaryRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

