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

#include <alibabacloud/vod/model/GetMessageCallbackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetMessageCallbackResult::GetMessageCallbackResult() :
	ServiceResult()
{}

GetMessageCallbackResult::GetMessageCallbackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMessageCallbackResult::~GetMessageCallbackResult()
{}

void GetMessageCallbackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto messageCallbackNode = value["MessageCallback"];
	if(!messageCallbackNode["CallbackType"].isNull())
		messageCallback_.callbackType = messageCallbackNode["CallbackType"].asString();
	if(!messageCallbackNode["CallbackURL"].isNull())
		messageCallback_.callbackURL = messageCallbackNode["CallbackURL"].asString();
	if(!messageCallbackNode["EventTypeList"].isNull())
		messageCallback_.eventTypeList = messageCallbackNode["EventTypeList"].asString();
	if(!messageCallbackNode["AppId"].isNull())
		messageCallback_.appId = messageCallbackNode["AppId"].asString();
	if(!messageCallbackNode["MnsQueueName"].isNull())
		messageCallback_.mnsQueueName = messageCallbackNode["MnsQueueName"].asString();
	if(!messageCallbackNode["AuthKey"].isNull())
		messageCallback_.authKey = messageCallbackNode["AuthKey"].asString();
	if(!messageCallbackNode["AuthSwitch"].isNull())
		messageCallback_.authSwitch = messageCallbackNode["AuthSwitch"].asString();
	if(!messageCallbackNode["MnsEndpoint"].isNull())
		messageCallback_.mnsEndpoint = messageCallbackNode["MnsEndpoint"].asString();

}

GetMessageCallbackResult::MessageCallback GetMessageCallbackResult::getMessageCallback()const
{
	return messageCallback_;
}

