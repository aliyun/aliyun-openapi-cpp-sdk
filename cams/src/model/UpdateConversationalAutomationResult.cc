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

#include <alibabacloud/cams/model/UpdateConversationalAutomationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

UpdateConversationalAutomationResult::UpdateConversationalAutomationResult() :
	ServiceResult()
{}

UpdateConversationalAutomationResult::UpdateConversationalAutomationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateConversationalAutomationResult::~UpdateConversationalAutomationResult()
{}

void UpdateConversationalAutomationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateConversationalAutomationResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string UpdateConversationalAutomationResult::getMessage()const
{
	return message_;
}

std::string UpdateConversationalAutomationResult::getCode()const
{
	return code_;
}

bool UpdateConversationalAutomationResult::getSuccess()const
{
	return success_;
}

