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

#include <alibabacloud/arms/model/ListEnvironmentDashboardsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListEnvironmentDashboardsResult::ListEnvironmentDashboardsResult() :
	ServiceResult()
{}

ListEnvironmentDashboardsResult::ListEnvironmentDashboardsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEnvironmentDashboardsResult::~ListEnvironmentDashboardsResult()
{}

void ListEnvironmentDashboardsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allDashboardsNode = dataNode["Dashboards"]["dashboardsItem"];
	for (auto dataNodeDashboardsdashboardsItem : allDashboardsNode)
	{
		Data::DashboardsItem dashboardsItemObject;
		if(!dataNodeDashboardsdashboardsItem["FolderUid"].isNull())
			dashboardsItemObject.folderUid = dataNodeDashboardsdashboardsItem["FolderUid"].asString();
		if(!dataNodeDashboardsdashboardsItem["Region"].isNull())
			dashboardsItemObject.region = dataNodeDashboardsdashboardsItem["Region"].asString();
		if(!dataNodeDashboardsdashboardsItem["Title"].isNull())
			dashboardsItemObject.title = dataNodeDashboardsdashboardsItem["Title"].asString();
		if(!dataNodeDashboardsdashboardsItem["Uid"].isNull())
			dashboardsItemObject.uid = dataNodeDashboardsdashboardsItem["Uid"].asString();
		if(!dataNodeDashboardsdashboardsItem["Url"].isNull())
			dashboardsItemObject.url = dataNodeDashboardsdashboardsItem["Url"].asString();
		auto allTags = value["Tags"]["tags"];
		for (auto value : allTags)
			dashboardsItemObject.tags.push_back(value.asString());
		data_.dashboards.push_back(dashboardsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListEnvironmentDashboardsResult::getMessage()const
{
	return message_;
}

ListEnvironmentDashboardsResult::Data ListEnvironmentDashboardsResult::getData()const
{
	return data_;
}

int ListEnvironmentDashboardsResult::getCode()const
{
	return code_;
}

bool ListEnvironmentDashboardsResult::getSuccess()const
{
	return success_;
}

