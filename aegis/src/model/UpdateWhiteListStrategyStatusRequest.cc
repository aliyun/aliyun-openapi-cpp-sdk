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

#include <alibabacloud/aegis/model/UpdateWhiteListStrategyStatusRequest.h>

using AlibabaCloud::Aegis::Model::UpdateWhiteListStrategyStatusRequest;

UpdateWhiteListStrategyStatusRequest::UpdateWhiteListStrategyStatusRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "UpdateWhiteListStrategyStatus")
{}

UpdateWhiteListStrategyStatusRequest::~UpdateWhiteListStrategyStatusRequest()
{}

std::string UpdateWhiteListStrategyStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateWhiteListStrategyStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string UpdateWhiteListStrategyStatusRequest::getStrategyIds()const
{
	return strategyIds_;
}

void UpdateWhiteListStrategyStatusRequest::setStrategyIds(const std::string& strategyIds)
{
	strategyIds_ = strategyIds;
	setCoreParameter("StrategyIds", strategyIds);
}

std::string UpdateWhiteListStrategyStatusRequest::getLang()const
{
	return lang_;
}

void UpdateWhiteListStrategyStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int UpdateWhiteListStrategyStatusRequest::getStatus()const
{
	return status_;
}

void UpdateWhiteListStrategyStatusRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

