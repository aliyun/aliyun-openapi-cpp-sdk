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

#include <alibabacloud/ons/model/OnsMqttGroupIdListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsMqttGroupIdListResult::OnsMqttGroupIdListResult() :
	ServiceResult()
{}

OnsMqttGroupIdListResult::OnsMqttGroupIdListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsMqttGroupIdListResult::~OnsMqttGroupIdListResult()
{}

void OnsMqttGroupIdListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["MqttGroupIdDo"];
	for (auto valueDataMqttGroupIdDo : allDataNode)
	{
		MqttGroupIdDo dataObject;
		if(!valueDataMqttGroupIdDo["Id"].isNull())
			dataObject.id = std::stol(valueDataMqttGroupIdDo["Id"].asString());
		if(!valueDataMqttGroupIdDo["ChannelId"].isNull())
			dataObject.channelId = std::stoi(valueDataMqttGroupIdDo["ChannelId"].asString());
		if(!valueDataMqttGroupIdDo["Owner"].isNull())
			dataObject.owner = valueDataMqttGroupIdDo["Owner"].asString();
		if(!valueDataMqttGroupIdDo["GroupId"].isNull())
			dataObject.groupId = valueDataMqttGroupIdDo["GroupId"].asString();
		if(!valueDataMqttGroupIdDo["Topic"].isNull())
			dataObject.topic = valueDataMqttGroupIdDo["Topic"].asString();
		if(!valueDataMqttGroupIdDo["Status"].isNull())
			dataObject.status = std::stoi(valueDataMqttGroupIdDo["Status"].asString());
		if(!valueDataMqttGroupIdDo["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataMqttGroupIdDo["CreateTime"].asString());
		if(!valueDataMqttGroupIdDo["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataMqttGroupIdDo["UpdateTime"].asString());
		if(!valueDataMqttGroupIdDo["InstanceId"].isNull())
			dataObject.instanceId = valueDataMqttGroupIdDo["InstanceId"].asString();
		if(!valueDataMqttGroupIdDo["IndependentNaming"].isNull())
			dataObject.independentNaming = valueDataMqttGroupIdDo["IndependentNaming"].asString() == "true";
		data_.push_back(dataObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

std::vector<OnsMqttGroupIdListResult::MqttGroupIdDo> OnsMqttGroupIdListResult::getData()const
{
	return data_;
}

std::string OnsMqttGroupIdListResult::getHelpUrl()const
{
	return helpUrl_;
}

