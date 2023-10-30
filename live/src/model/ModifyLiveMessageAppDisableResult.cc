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

#include <alibabacloud/live/model/ModifyLiveMessageAppDisableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ModifyLiveMessageAppDisableResult::ModifyLiveMessageAppDisableResult() :
	ServiceResult()
{}

ModifyLiveMessageAppDisableResult::ModifyLiveMessageAppDisableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyLiveMessageAppDisableResult::~ModifyLiveMessageAppDisableResult()
{}

void ModifyLiveMessageAppDisableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AppId"].isNull())
		appId_ = value["AppId"].asString();
	if(!value["AppSign"].isNull())
		appSign_ = value["AppSign"].asString();
	if(!value["Disable"].isNull())
		disable_ = value["Disable"].asString() == "true";

}

std::string ModifyLiveMessageAppDisableResult::getAppId()const
{
	return appId_;
}

std::string ModifyLiveMessageAppDisableResult::getAppSign()const
{
	return appSign_;
}

bool ModifyLiveMessageAppDisableResult::getDisable()const
{
	return disable_;
}

