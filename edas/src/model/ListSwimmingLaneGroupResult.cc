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

#include <alibabacloud/edas/model/ListSwimmingLaneGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListSwimmingLaneGroupResult::ListSwimmingLaneGroupResult() :
	ServiceResult()
{}

ListSwimmingLaneGroupResult::ListSwimmingLaneGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSwimmingLaneGroupResult::~ListSwimmingLaneGroupResult()
{}

void ListSwimmingLaneGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SwimmingLaneGroup"];
	for (auto valueDataSwimmingLaneGroup : allDataNode)
	{
		SwimmingLaneGroup dataObject;
		if(!valueDataSwimmingLaneGroup["Id"].isNull())
			dataObject.id = std::stol(valueDataSwimmingLaneGroup["Id"].asString());
		if(!valueDataSwimmingLaneGroup["Name"].isNull())
			dataObject.name = valueDataSwimmingLaneGroup["Name"].asString();
		if(!valueDataSwimmingLaneGroup["NamespaceId"].isNull())
			dataObject.namespaceId = valueDataSwimmingLaneGroup["NamespaceId"].asString();
		auto allApplicationListNode = valueDataSwimmingLaneGroup["ApplicationList"]["Application"];
		for (auto valueDataSwimmingLaneGroupApplicationListApplication : allApplicationListNode)
		{
			SwimmingLaneGroup::Application applicationListObject;
			if(!valueDataSwimmingLaneGroupApplicationListApplication["AppName"].isNull())
				applicationListObject.appName = valueDataSwimmingLaneGroupApplicationListApplication["AppName"].asString();
			if(!valueDataSwimmingLaneGroupApplicationListApplication["AppId"].isNull())
				applicationListObject.appId = valueDataSwimmingLaneGroupApplicationListApplication["AppId"].asString();
			dataObject.applicationList.push_back(applicationListObject);
		}
		auto entryApplicationNode = value["EntryApplication"];
		if(!entryApplicationNode["AppName"].isNull())
			dataObject.entryApplication.appName = entryApplicationNode["AppName"].asString();
		if(!entryApplicationNode["AppId"].isNull())
			dataObject.entryApplication.appId = entryApplicationNode["AppId"].asString();
		if(!entryApplicationNode["Source"].isNull())
			dataObject.entryApplication.source = entryApplicationNode["Source"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSwimmingLaneGroupResult::getMessage()const
{
	return message_;
}

std::vector<ListSwimmingLaneGroupResult::SwimmingLaneGroup> ListSwimmingLaneGroupResult::getData()const
{
	return data_;
}

int ListSwimmingLaneGroupResult::getCode()const
{
	return code_;
}

