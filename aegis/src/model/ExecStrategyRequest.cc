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

#include <alibabacloud/aegis/model/ExecStrategyRequest.h>

using AlibabaCloud::Aegis::Model::ExecStrategyRequest;

ExecStrategyRequest::ExecStrategyRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ExecStrategy")
{}

ExecStrategyRequest::~ExecStrategyRequest()
{}

std::string ExecStrategyRequest::getSourceIp()const
{
	return sourceIp_;
}

void ExecStrategyRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int ExecStrategyRequest::getStrategyId()const
{
	return strategyId_;
}

void ExecStrategyRequest::setStrategyId(int strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", strategyId);
}

