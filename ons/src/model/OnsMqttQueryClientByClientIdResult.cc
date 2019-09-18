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

#include <alibabacloud/ons/model/OnsMqttQueryClientByClientIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsMqttQueryClientByClientIdResult::OnsMqttQueryClientByClientIdResult() :
	ServiceResult()
{}

OnsMqttQueryClientByClientIdResult::OnsMqttQueryClientByClientIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsMqttQueryClientByClientIdResult::~OnsMqttQueryClientByClientIdResult()
{}

void OnsMqttQueryClientByClientIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mqttClientInfoDoNode = value["MqttClientInfoDo"];
	if(!mqttClientInfoDoNode["Online"].isNull())
		mqttClientInfoDo_.online = mqttClientInfoDoNode["Online"].asString() == "true";
	if(!mqttClientInfoDoNode["ClientId"].isNull())
		mqttClientInfoDo_.clientId = mqttClientInfoDoNode["ClientId"].asString();
	if(!mqttClientInfoDoNode["SocketChannel"].isNull())
		mqttClientInfoDo_.socketChannel = mqttClientInfoDoNode["SocketChannel"].asString();
	if(!mqttClientInfoDoNode["LastTouch"].isNull())
		mqttClientInfoDo_.lastTouch = std::stol(mqttClientInfoDoNode["LastTouch"].asString());
	auto allSubScriptonData = value["SubScriptonData"]["SubscriptionDo"];
	for (auto value : allSubScriptonData)
	{
		MqttClientInfoDo::SubscriptionDo subscriptionDoObject;
		if(!value["ParentTopic"].isNull())
			subscriptionDoObject.parentTopic = value["ParentTopic"].asString();
		if(!value["SubTopic"].isNull())
			subscriptionDoObject.subTopic = value["SubTopic"].asString();
		if(!value["Qos"].isNull())
			subscriptionDoObject.qos = std::stoi(value["Qos"].asString());
		mqttClientInfoDo_.subScriptonData.push_back(subscriptionDoObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsMqttQueryClientByClientIdResult::MqttClientInfoDo OnsMqttQueryClientByClientIdResult::getMqttClientInfoDo()const
{
	return mqttClientInfoDo_;
}

std::string OnsMqttQueryClientByClientIdResult::getHelpUrl()const
{
	return helpUrl_;
}

