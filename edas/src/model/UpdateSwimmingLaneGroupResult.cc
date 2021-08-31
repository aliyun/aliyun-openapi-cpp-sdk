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

#include <alibabacloud/edas/model/UpdateSwimmingLaneGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

UpdateSwimmingLaneGroupResult::UpdateSwimmingLaneGroupResult() :
	ServiceResult()
{}

UpdateSwimmingLaneGroupResult::UpdateSwimmingLaneGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateSwimmingLaneGroupResult::~UpdateSwimmingLaneGroupResult()
{}

void UpdateSwimmingLaneGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["NamespaceId"].isNull())
		data_.namespaceId = dataNode["NamespaceId"].asString();
	auto allApplicationListNode = dataNode["ApplicationList"]["Application"];
	for (auto dataNodeApplicationListApplication : allApplicationListNode)
	{
		Data::Application applicationObject;
		if(!dataNodeApplicationListApplication["AppName"].isNull())
			applicationObject.appName = dataNodeApplicationListApplication["AppName"].asString();
		if(!dataNodeApplicationListApplication["AppId"].isNull())
			applicationObject.appId = dataNodeApplicationListApplication["AppId"].asString();
		data_.applicationList.push_back(applicationObject);
	}
	auto entryApplicationNode = dataNode["EntryApplication"];
	if(!entryApplicationNode["AppName"].isNull())
		data_.entryApplication.appName = entryApplicationNode["AppName"].asString();
	if(!entryApplicationNode["AppId"].isNull())
		data_.entryApplication.appId = entryApplicationNode["AppId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UpdateSwimmingLaneGroupResult::getMessage()const
{
	return message_;
}

UpdateSwimmingLaneGroupResult::Data UpdateSwimmingLaneGroupResult::getData()const
{
	return data_;
}

int UpdateSwimmingLaneGroupResult::getCode()const
{
	return code_;
}

