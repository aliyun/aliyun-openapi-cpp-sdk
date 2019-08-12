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

#include <alibabacloud/aegis/model/DescribeWhiteListStrategyUuidCountRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWhiteListStrategyUuidCountRequest;

DescribeWhiteListStrategyUuidCountRequest::DescribeWhiteListStrategyUuidCountRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWhiteListStrategyUuidCount")
{}

DescribeWhiteListStrategyUuidCountRequest::~DescribeWhiteListStrategyUuidCountRequest()
{}

std::string DescribeWhiteListStrategyUuidCountRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWhiteListStrategyUuidCountRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long DescribeWhiteListStrategyUuidCountRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeWhiteListStrategyUuidCountRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", std::to_string(strategyId));
}

std::string DescribeWhiteListStrategyUuidCountRequest::getLang()const
{
	return lang_;
}

void DescribeWhiteListStrategyUuidCountRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int DescribeWhiteListStrategyUuidCountRequest::getType()const
{
	return type_;
}

void DescribeWhiteListStrategyUuidCountRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

