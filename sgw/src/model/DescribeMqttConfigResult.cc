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

#include <alibabacloud/sgw/model/DescribeMqttConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeMqttConfigResult::DescribeMqttConfigResult() :
	ServiceResult()
{}

DescribeMqttConfigResult::DescribeMqttConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMqttConfigResult::~DescribeMqttConfigResult()
{}

void DescribeMqttConfigResult::parse(const std::string &payload)
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
	if(!value["IsEnabled"].isNull())
		isEnabled_ = value["IsEnabled"].asString() == "true";
	if(!value["BrokerUrl"].isNull())
		brokerUrl_ = value["BrokerUrl"].asString();
	if(!value["InternalBrokerUrl"].isNull())
		internalBrokerUrl_ = value["InternalBrokerUrl"].asString();
	if(!value["PublishTopic"].isNull())
		publishTopic_ = value["PublishTopic"].asString();
	if(!value["SubscribeTopic"].isNull())
		subscribeTopic_ = value["SubscribeTopic"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["MqttInstanceId"].isNull())
		mqttInstanceId_ = value["MqttInstanceId"].asString();
	if(!value["AuthType"].isNull())
		authType_ = value["AuthType"].asString();
	if(!value["Username"].isNull())
		username_ = value["Username"].asString();
	if(!value["Password"].isNull())
		password_ = value["Password"].asString();

}

std::string DescribeMqttConfigResult::getMessage()const
{
	return message_;
}

bool DescribeMqttConfigResult::getIsEnabled()const
{
	return isEnabled_;
}

std::string DescribeMqttConfigResult::getCode()const
{
	return code_;
}

std::string DescribeMqttConfigResult::getInternalBrokerUrl()const
{
	return internalBrokerUrl_;
}

bool DescribeMqttConfigResult::getSuccess()const
{
	return success_;
}

std::string DescribeMqttConfigResult::getBrokerUrl()const
{
	return brokerUrl_;
}

std::string DescribeMqttConfigResult::getGroupId()const
{
	return groupId_;
}

std::string DescribeMqttConfigResult::getMqttInstanceId()const
{
	return mqttInstanceId_;
}

std::string DescribeMqttConfigResult::getUsername()const
{
	return username_;
}

std::string DescribeMqttConfigResult::getSubscribeTopic()const
{
	return subscribeTopic_;
}

std::string DescribeMqttConfigResult::getPublishTopic()const
{
	return publishTopic_;
}

std::string DescribeMqttConfigResult::getAuthType()const
{
	return authType_;
}

std::string DescribeMqttConfigResult::getPassword()const
{
	return password_;
}

