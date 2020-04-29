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

#include <alibabacloud/arms/model/ListDashboardsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListDashboardsResult::ListDashboardsResult() :
	ServiceResult()
{}

ListDashboardsResult::ListDashboardsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDashboardsResult::~ListDashboardsResult()
{}

void ListDashboardsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDashboardVosNode = value["DashboardVos"]["DashboardVosItem"];
	for (auto valueDashboardVosDashboardVosItem : allDashboardVosNode)
	{
		DashboardVosItem dashboardVosObject;
		if(!valueDashboardVosDashboardVosItem["Id"].isNull())
			dashboardVosObject.id = valueDashboardVosDashboardVosItem["Id"].asString();
		if(!valueDashboardVosDashboardVosItem["Uid"].isNull())
			dashboardVosObject.uid = valueDashboardVosDashboardVosItem["Uid"].asString();
		if(!valueDashboardVosDashboardVosItem["Title"].isNull())
			dashboardVosObject.title = valueDashboardVosDashboardVosItem["Title"].asString();
		if(!valueDashboardVosDashboardVosItem["Time"].isNull())
			dashboardVosObject.time = valueDashboardVosDashboardVosItem["Time"].asString();
		if(!valueDashboardVosDashboardVosItem["Url"].isNull())
			dashboardVosObject.url = valueDashboardVosDashboardVosItem["Url"].asString();
		if(!valueDashboardVosDashboardVosItem["Type"].isNull())
			dashboardVosObject.type = valueDashboardVosDashboardVosItem["Type"].asString();
		if(!valueDashboardVosDashboardVosItem["Exporter"].isNull())
			dashboardVosObject.exporter = valueDashboardVosDashboardVosItem["Exporter"].asString();
		if(!valueDashboardVosDashboardVosItem["IsArmsExporter"].isNull())
			dashboardVosObject.isArmsExporter = valueDashboardVosDashboardVosItem["IsArmsExporter"].asString() == "true";
		auto allTags = value["Tags"]["Tags"];
		for (auto value : allTags)
			dashboardVosObject.tags.push_back(value.asString());
		dashboardVos_.push_back(dashboardVosObject);
	}

}

std::vector<ListDashboardsResult::DashboardVosItem> ListDashboardsResult::getDashboardVos()const
{
	return dashboardVos_;
}

