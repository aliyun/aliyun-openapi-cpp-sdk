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

#include <alibabacloud/nlb/model/UpdateSecurityPolicyAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

UpdateSecurityPolicyAttributeResult::UpdateSecurityPolicyAttributeResult() :
	ServiceResult()
{}

UpdateSecurityPolicyAttributeResult::UpdateSecurityPolicyAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateSecurityPolicyAttributeResult::~UpdateSecurityPolicyAttributeResult()
{}

void UpdateSecurityPolicyAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["SecurityPolicyId"].isNull())
		securityPolicyId_ = value["SecurityPolicyId"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();

}

std::string UpdateSecurityPolicyAttributeResult::getSecurityPolicyId()const
{
	return securityPolicyId_;
}

std::string UpdateSecurityPolicyAttributeResult::getMessage()const
{
	return message_;
}

int UpdateSecurityPolicyAttributeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string UpdateSecurityPolicyAttributeResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string UpdateSecurityPolicyAttributeResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string UpdateSecurityPolicyAttributeResult::getCode()const
{
	return code_;
}

bool UpdateSecurityPolicyAttributeResult::getSuccess()const
{
	return success_;
}

std::string UpdateSecurityPolicyAttributeResult::getJobId()const
{
	return jobId_;
}

