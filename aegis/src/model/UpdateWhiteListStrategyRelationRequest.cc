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

#include <alibabacloud/aegis/model/UpdateWhiteListStrategyRelationRequest.h>

using AlibabaCloud::Aegis::Model::UpdateWhiteListStrategyRelationRequest;

UpdateWhiteListStrategyRelationRequest::UpdateWhiteListStrategyRelationRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "UpdateWhiteListStrategyRelation")
{}

UpdateWhiteListStrategyRelationRequest::~UpdateWhiteListStrategyRelationRequest()
{}

int UpdateWhiteListStrategyRelationRequest::getProcessMethod()const
{
	return processMethod_;
}

void UpdateWhiteListStrategyRelationRequest::setProcessMethod(int processMethod)
{
	processMethod_ = processMethod;
	setCoreParameter("ProcessMethod", std::to_string(processMethod));
}

int UpdateWhiteListStrategyRelationRequest::getType()const
{
	return type_;
}

void UpdateWhiteListStrategyRelationRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string UpdateWhiteListStrategyRelationRequest::getUuid()const
{
	return uuid_;
}

void UpdateWhiteListStrategyRelationRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

std::string UpdateWhiteListStrategyRelationRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateWhiteListStrategyRelationRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string UpdateWhiteListStrategyRelationRequest::getLang()const
{
	return lang_;
}

void UpdateWhiteListStrategyRelationRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long UpdateWhiteListStrategyRelationRequest::getStrategyId()const
{
	return strategyId_;
}

void UpdateWhiteListStrategyRelationRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", std::to_string(strategyId));
}

int UpdateWhiteListStrategyRelationRequest::getStatus()const
{
	return status_;
}

void UpdateWhiteListStrategyRelationRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

