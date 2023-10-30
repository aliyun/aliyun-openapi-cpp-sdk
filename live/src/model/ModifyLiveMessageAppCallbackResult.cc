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

#include <alibabacloud/live/model/ModifyLiveMessageAppCallbackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ModifyLiveMessageAppCallbackResult::ModifyLiveMessageAppCallbackResult() :
	ServiceResult()
{}

ModifyLiveMessageAppCallbackResult::ModifyLiveMessageAppCallbackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyLiveMessageAppCallbackResult::~ModifyLiveMessageAppCallbackResult()
{}

void ModifyLiveMessageAppCallbackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AppId"].isNull())
		appId_ = value["AppId"].asString();
	if(!value["AppSign"].isNull())
		appSign_ = value["AppSign"].asString();
	if(!value["EventCallbackUrl"].isNull())
		eventCallbackUrl_ = value["EventCallbackUrl"].asString();
	if(!value["EventCallbackNeedAuthentication"].isNull())
		eventCallbackNeedAuthentication_ = value["EventCallbackNeedAuthentication"].asString() == "true";

}

std::string ModifyLiveMessageAppCallbackResult::getAppId()const
{
	return appId_;
}

bool ModifyLiveMessageAppCallbackResult::getEventCallbackNeedAuthentication()const
{
	return eventCallbackNeedAuthentication_;
}

std::string ModifyLiveMessageAppCallbackResult::getEventCallbackUrl()const
{
	return eventCallbackUrl_;
}

std::string ModifyLiveMessageAppCallbackResult::getAppSign()const
{
	return appSign_;
}

