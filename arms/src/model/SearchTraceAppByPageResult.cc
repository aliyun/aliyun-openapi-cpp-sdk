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

#include <alibabacloud/arms/model/SearchTraceAppByPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchTraceAppByPageResult::SearchTraceAppByPageResult() :
	ServiceResult()
{}

SearchTraceAppByPageResult::SearchTraceAppByPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTraceAppByPageResult::~SearchTraceAppByPageResult()
{}

void SearchTraceAppByPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stoi(pageBeanNode["TotalCount"].asString());
	auto allTraceAppsNode = pageBeanNode["TraceApps"]["TraceApp"];
	for (auto pageBeanNodeTraceAppsTraceApp : allTraceAppsNode)
	{
		PageBean::TraceApp traceAppObject;
		if(!pageBeanNodeTraceAppsTraceApp["Type"].isNull())
			traceAppObject.type = pageBeanNodeTraceAppsTraceApp["Type"].asString();
		if(!pageBeanNodeTraceAppsTraceApp["AppName"].isNull())
			traceAppObject.appName = pageBeanNodeTraceAppsTraceApp["AppName"].asString();
		if(!pageBeanNodeTraceAppsTraceApp["UpdateTime"].isNull())
			traceAppObject.updateTime = std::stol(pageBeanNodeTraceAppsTraceApp["UpdateTime"].asString());
		if(!pageBeanNodeTraceAppsTraceApp["Show"].isNull())
			traceAppObject.show = pageBeanNodeTraceAppsTraceApp["Show"].asString() == "true";
		if(!pageBeanNodeTraceAppsTraceApp["CreateTime"].isNull())
			traceAppObject.createTime = std::stol(pageBeanNodeTraceAppsTraceApp["CreateTime"].asString());
		if(!pageBeanNodeTraceAppsTraceApp["Pid"].isNull())
			traceAppObject.pid = pageBeanNodeTraceAppsTraceApp["Pid"].asString();
		if(!pageBeanNodeTraceAppsTraceApp["AppId"].isNull())
			traceAppObject.appId = std::stol(pageBeanNodeTraceAppsTraceApp["AppId"].asString());
		if(!pageBeanNodeTraceAppsTraceApp["UserId"].isNull())
			traceAppObject.userId = pageBeanNodeTraceAppsTraceApp["UserId"].asString();
		if(!pageBeanNodeTraceAppsTraceApp["RegionId"].isNull())
			traceAppObject.regionId = pageBeanNodeTraceAppsTraceApp["RegionId"].asString();
		if(!pageBeanNodeTraceAppsTraceApp["ResourceGroupId"].isNull())
			traceAppObject.resourceGroupId = pageBeanNodeTraceAppsTraceApp["ResourceGroupId"].asString();
		auto allTagsNode = pageBeanNodeTraceAppsTraceApp["Tags"]["TagsItem"];
		for (auto pageBeanNodeTraceAppsTraceAppTagsTagsItem : allTagsNode)
		{
			PageBean::TraceApp::TagsItem tagsObject;
			if(!pageBeanNodeTraceAppsTraceAppTagsTagsItem["Key"].isNull())
				tagsObject.key = pageBeanNodeTraceAppsTraceAppTagsTagsItem["Key"].asString();
			if(!pageBeanNodeTraceAppsTraceAppTagsTagsItem["Value"].isNull())
				tagsObject.value = pageBeanNodeTraceAppsTraceAppTagsTagsItem["Value"].asString();
			traceAppObject.tags.push_back(tagsObject);
		}
		auto allLabels = value["Labels"]["Labels"];
		for (auto value : allLabels)
			traceAppObject.labels.push_back(value.asString());
		pageBean_.traceApps.push_back(traceAppObject);
	}

}

SearchTraceAppByPageResult::PageBean SearchTraceAppByPageResult::getPageBean()const
{
	return pageBean_;
}

