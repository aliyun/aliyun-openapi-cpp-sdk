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

#include <alibabacloud/aegis/model/DescribeStratetyRequest.h>

using AlibabaCloud::Aegis::Model::DescribeStratetyRequest;

DescribeStratetyRequest::DescribeStratetyRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeStratety")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeStratetyRequest::~DescribeStratetyRequest()
{}

std::string DescribeStratetyRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeStratetyRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeStratetyRequest::getStrategyIds()const
{
	return strategyIds_;
}

void DescribeStratetyRequest::setStrategyIds(const std::string& strategyIds)
{
	strategyIds_ = strategyIds;
	setParameter("StrategyIds", strategyIds);
}

std::string DescribeStratetyRequest::getLang()const
{
	return lang_;
}

void DescribeStratetyRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

