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

#include <alibabacloud/iot/model/QueryMessageInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryMessageInfoResult::QueryMessageInfoResult() :
	ServiceResult()
{}

QueryMessageInfoResult::QueryMessageInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMessageInfoResult::~QueryMessageInfoResult()
{}

void QueryMessageInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto messageNode = value["Message"];
	if(!messageNode["UniMsgId"].isNull())
		message_.uniMsgId = messageNode["UniMsgId"].asString();
	if(!messageNode["TopicFullName"].isNull())
		message_.topicFullName = messageNode["TopicFullName"].asString();
	if(!messageNode["MessageContent"].isNull())
		message_.messageContent = messageNode["MessageContent"].asString();
	if(!messageNode["GenerateTime"].isNull())
		message_.generateTime = std::stol(messageNode["GenerateTime"].asString());
	if(!messageNode["TransformedMessageContent"].isNull())
		message_.transformedMessageContent = messageNode["TransformedMessageContent"].asString();
	if(!messageNode["TransformedTopicFullName"].isNull())
		message_.transformedTopicFullName = messageNode["TransformedTopicFullName"].asString();
	auto allUserPropertiesNode = messageNode["UserProperties"]["UserProperty"];
	for (auto messageNodeUserPropertiesUserProperty : allUserPropertiesNode)
	{
		Message::UserProperty userPropertyObject;
		if(!messageNodeUserPropertiesUserProperty["Key"].isNull())
			userPropertyObject.key = messageNodeUserPropertiesUserProperty["Key"].asString();
		if(!messageNodeUserPropertiesUserProperty["Value"].isNull())
			userPropertyObject.value = messageNodeUserPropertiesUserProperty["Value"].asString();
		message_.userProperties.push_back(userPropertyObject);
	}
	auto allMqttPropertiesNode = messageNode["MqttProperties"]["MqttProperty"];
	for (auto messageNodeMqttPropertiesMqttProperty : allMqttPropertiesNode)
	{
		Message::MqttProperty mqttPropertyObject;
		if(!messageNodeMqttPropertiesMqttProperty["Key"].isNull())
			mqttPropertyObject.key = messageNodeMqttPropertiesMqttProperty["Key"].asString();
		if(!messageNodeMqttPropertiesMqttProperty["Value"].isNull())
			mqttPropertyObject.value = messageNodeMqttPropertiesMqttProperty["Value"].asString();
		message_.mqttProperties.push_back(mqttPropertyObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

QueryMessageInfoResult::Message QueryMessageInfoResult::getMessage()const
{
	return message_;
}

std::string QueryMessageInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryMessageInfoResult::getCode()const
{
	return code_;
}

bool QueryMessageInfoResult::getSuccess()const
{
	return success_;
}

