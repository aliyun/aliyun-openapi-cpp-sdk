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

#include <alibabacloud/aegis/model/DescribeWhiteListStrategyListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWhiteListStrategyListRequest;

DescribeWhiteListStrategyListRequest::DescribeWhiteListStrategyListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWhiteListStrategyList")
{}

DescribeWhiteListStrategyListRequest::~DescribeWhiteListStrategyListRequest()
{}

std::string DescribeWhiteListStrategyListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWhiteListStrategyListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeWhiteListStrategyListRequest::getStrategyIds()const
{
	return strategyIds_;
}

void DescribeWhiteListStrategyListRequest::setStrategyIds(const std::string& strategyIds)
{
	strategyIds_ = strategyIds;
	setCoreParameter("StrategyIds", strategyIds);
}

std::string DescribeWhiteListStrategyListRequest::getLang()const
{
	return lang_;
}

void DescribeWhiteListStrategyListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

