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

#include <alibabacloud/sas/model/DescribeStrategyExecDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribeStrategyExecDetailRequest;

DescribeStrategyExecDetailRequest::DescribeStrategyExecDetailRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeStrategyExecDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeStrategyExecDetailRequest::~DescribeStrategyExecDetailRequest()
{}

std::string DescribeStrategyExecDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeStrategyExecDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeStrategyExecDetailRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeStrategyExecDetailRequest::setStrategyId(int strategyId)
{
	strategyId_ = strategyId;
	setParameter("StrategyId", std::to_string(strategyId));
}

