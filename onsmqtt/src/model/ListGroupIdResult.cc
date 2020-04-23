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

#include <alibabacloud/onsmqtt/model/ListGroupIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OnsMqtt;
using namespace AlibabaCloud::OnsMqtt::Model;

ListGroupIdResult::ListGroupIdResult() :
	ServiceResult()
{}

ListGroupIdResult::ListGroupIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGroupIdResult::~ListGroupIdResult()
{}

void ListGroupIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["MqttGroupIdDo"];
	for (auto valueDataMqttGroupIdDo : allDataNode)
	{
		MqttGroupIdDo dataObject;
		if(!valueDataMqttGroupIdDo["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataMqttGroupIdDo["CreateTime"].asString());
		if(!valueDataMqttGroupIdDo["GroupId"].isNull())
			dataObject.groupId = valueDataMqttGroupIdDo["GroupId"].asString();
		if(!valueDataMqttGroupIdDo["IndependentNaming"].isNull())
			dataObject.independentNaming = valueDataMqttGroupIdDo["IndependentNaming"].asString() == "true";
		if(!valueDataMqttGroupIdDo["InstanceId"].isNull())
			dataObject.instanceId = valueDataMqttGroupIdDo["InstanceId"].asString();
		if(!valueDataMqttGroupIdDo["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataMqttGroupIdDo["UpdateTime"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<ListGroupIdResult::MqttGroupIdDo> ListGroupIdResult::getData()const
{
	return data_;
}

