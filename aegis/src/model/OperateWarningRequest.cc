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

#include <alibabacloud/aegis/model/OperateWarningRequest.h>

using AlibabaCloud::Aegis::Model::OperateWarningRequest;

OperateWarningRequest::OperateWarningRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "OperateWarning")
{}

OperateWarningRequest::~OperateWarningRequest()
{}

std::string OperateWarningRequest::getReason()const
{
	return reason_;
}

void OperateWarningRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setCoreParameter("Reason", std::to_string(reason));
}

std::string OperateWarningRequest::getSourceIp()const
{
	return sourceIp_;
}

void OperateWarningRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string OperateWarningRequest::getOperateType()const
{
	return operateType_;
}

void OperateWarningRequest::setOperateType(const std::string& operateType)
{
	operateType_ = operateType;
	setCoreParameter("OperateType", std::to_string(operateType));
}

std::string OperateWarningRequest::getRiskWarningIds()const
{
	return riskWarningIds_;
}

void OperateWarningRequest::setRiskWarningIds(const std::string& riskWarningIds)
{
	riskWarningIds_ = riskWarningIds;
	setCoreParameter("RiskWarningIds", std::to_string(riskWarningIds));
}

