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

#include <alibabacloud/aegis/model/CreateUserWhiteListRequest.h>

using AlibabaCloud::Aegis::Model::CreateUserWhiteListRequest;

CreateUserWhiteListRequest::CreateUserWhiteListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateUserWhiteList")
{}

CreateUserWhiteListRequest::~CreateUserWhiteListRequest()
{}

std::string CreateUserWhiteListRequest::getRiskIdList()const
{
	return riskIdList_;
}

void CreateUserWhiteListRequest::setRiskIdList(const std::string& riskIdList)
{
	riskIdList_ = riskIdList;
	setCoreParameter("RiskIdList", riskIdList);
}

std::string CreateUserWhiteListRequest::getReason()const
{
	return reason_;
}

void CreateUserWhiteListRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setCoreParameter("Reason", reason);
}

std::string CreateUserWhiteListRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateUserWhiteListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

