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

#include <alibabacloud/aegis/model/IgnoreHcCheckWarningsRequest.h>

using AlibabaCloud::Aegis::Model::IgnoreHcCheckWarningsRequest;

IgnoreHcCheckWarningsRequest::IgnoreHcCheckWarningsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "IgnoreHcCheckWarnings")
{}

IgnoreHcCheckWarningsRequest::~IgnoreHcCheckWarningsRequest()
{}

std::string IgnoreHcCheckWarningsRequest::getReason()const
{
	return reason_;
}

void IgnoreHcCheckWarningsRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setCoreParameter("Reason", reason);
}

std::string IgnoreHcCheckWarningsRequest::getSourceIp()const
{
	return sourceIp_;
}

void IgnoreHcCheckWarningsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string IgnoreHcCheckWarningsRequest::getCheckWarningIds()const
{
	return checkWarningIds_;
}

void IgnoreHcCheckWarningsRequest::setCheckWarningIds(const std::string& checkWarningIds)
{
	checkWarningIds_ = checkWarningIds;
	setCoreParameter("CheckWarningIds", checkWarningIds);
}

std::string IgnoreHcCheckWarningsRequest::getCheckIds()const
{
	return checkIds_;
}

void IgnoreHcCheckWarningsRequest::setCheckIds(const std::string& checkIds)
{
	checkIds_ = checkIds;
	setCoreParameter("CheckIds", checkIds);
}

std::string IgnoreHcCheckWarningsRequest::getRiskId()const
{
	return riskId_;
}

void IgnoreHcCheckWarningsRequest::setRiskId(const std::string& riskId)
{
	riskId_ = riskId;
	setCoreParameter("RiskId", riskId);
}

long IgnoreHcCheckWarningsRequest::getType()const
{
	return type_;
}

void IgnoreHcCheckWarningsRequest::setType(long type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

