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

#include <alibabacloud/ice/model/GetEventCallbackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetEventCallbackResult::GetEventCallbackResult() :
	ServiceResult()
{}

GetEventCallbackResult::GetEventCallbackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEventCallbackResult::~GetEventCallbackResult()
{}

void GetEventCallbackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CallbackType"].isNull())
		callbackType_ = value["CallbackType"].asString();
	if(!value["CallbackQueueName"].isNull())
		callbackQueueName_ = value["CallbackQueueName"].asString();
	if(!value["CallbackURL"].isNull())
		callbackURL_ = value["CallbackURL"].asString();
	if(!value["EventTypeList"].isNull())
		eventTypeList_ = value["EventTypeList"].asString();
	if(!value["AuthSwitch"].isNull())
		authSwitch_ = value["AuthSwitch"].asString();
	if(!value["AuthKey"].isNull())
		authKey_ = value["AuthKey"].asString();

}

std::string GetEventCallbackResult::getCallbackURL()const
{
	return callbackURL_;
}

std::string GetEventCallbackResult::getAuthSwitch()const
{
	return authSwitch_;
}

std::string GetEventCallbackResult::getCallbackType()const
{
	return callbackType_;
}

std::string GetEventCallbackResult::getEventTypeList()const
{
	return eventTypeList_;
}

std::string GetEventCallbackResult::getAuthKey()const
{
	return authKey_;
}

std::string GetEventCallbackResult::getCallbackQueueName()const
{
	return callbackQueueName_;
}

