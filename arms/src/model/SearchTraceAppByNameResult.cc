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

#include <alibabacloud/arms/model/SearchTraceAppByNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchTraceAppByNameResult::SearchTraceAppByNameResult() :
	ServiceResult()
{}

SearchTraceAppByNameResult::SearchTraceAppByNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTraceAppByNameResult::~SearchTraceAppByNameResult()
{}

void SearchTraceAppByNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTraceAppsNode = value["TraceApps"]["TraceApp"];
	for (auto valueTraceAppsTraceApp : allTraceAppsNode)
	{
		TraceApp traceAppsObject;
		if(!valueTraceAppsTraceApp["Type"].isNull())
			traceAppsObject.type = valueTraceAppsTraceApp["Type"].asString();
		if(!valueTraceAppsTraceApp["AppName"].isNull())
			traceAppsObject.appName = valueTraceAppsTraceApp["AppName"].asString();
		if(!valueTraceAppsTraceApp["UpdateTime"].isNull())
			traceAppsObject.updateTime = std::stol(valueTraceAppsTraceApp["UpdateTime"].asString());
		if(!valueTraceAppsTraceApp["Show"].isNull())
			traceAppsObject.show = valueTraceAppsTraceApp["Show"].asString() == "true";
		if(!valueTraceAppsTraceApp["CreateTime"].isNull())
			traceAppsObject.createTime = std::stol(valueTraceAppsTraceApp["CreateTime"].asString());
		if(!valueTraceAppsTraceApp["Pid"].isNull())
			traceAppsObject.pid = valueTraceAppsTraceApp["Pid"].asString();
		if(!valueTraceAppsTraceApp["AppId"].isNull())
			traceAppsObject.appId = std::stol(valueTraceAppsTraceApp["AppId"].asString());
		if(!valueTraceAppsTraceApp["UserId"].isNull())
			traceAppsObject.userId = valueTraceAppsTraceApp["UserId"].asString();
		if(!valueTraceAppsTraceApp["RegionId"].isNull())
			traceAppsObject.regionId = valueTraceAppsTraceApp["RegionId"].asString();
		if(!valueTraceAppsTraceApp["ResourceGroupId"].isNull())
			traceAppsObject.resourceGroupId = valueTraceAppsTraceApp["ResourceGroupId"].asString();
		auto allTagsNode = valueTraceAppsTraceApp["Tags"]["TagsItem"];
		for (auto valueTraceAppsTraceAppTagsTagsItem : allTagsNode)
		{
			TraceApp::TagsItem tagsObject;
			if(!valueTraceAppsTraceAppTagsTagsItem["Key"].isNull())
				tagsObject.key = valueTraceAppsTraceAppTagsTagsItem["Key"].asString();
			if(!valueTraceAppsTraceAppTagsTagsItem["Value"].isNull())
				tagsObject.value = valueTraceAppsTraceAppTagsTagsItem["Value"].asString();
			traceAppsObject.tags.push_back(tagsObject);
		}
		auto allLabels = value["Labels"]["Labels"];
		for (auto value : allLabels)
			traceAppsObject.labels.push_back(value.asString());
		traceApps_.push_back(traceAppsObject);
	}

}

std::vector<SearchTraceAppByNameResult::TraceApp> SearchTraceAppByNameResult::getTraceApps()const
{
	return traceApps_;
}

