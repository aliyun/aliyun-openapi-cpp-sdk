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

#include <alibabacloud/arms/model/GetRumAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetRumAppsResult::GetRumAppsResult() :
	ServiceResult()
{}

GetRumAppsResult::GetRumAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRumAppsResult::~GetRumAppsResult()
{}

void GetRumAppsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppListNode = value["AppList"]["AppListItem"];
	for (auto valueAppListAppListItem : allAppListNode)
	{
		AppListItem appListObject;
		if(!valueAppListAppListItem["CreateTime"].isNull())
			appListObject.createTime = valueAppListAppListItem["CreateTime"].asString();
		if(!valueAppListAppListItem["Name"].isNull())
			appListObject.name = valueAppListAppListItem["Name"].asString();
		if(!valueAppListAppListItem["Pid"].isNull())
			appListObject.pid = valueAppListAppListItem["Pid"].asString();
		if(!valueAppListAppListItem["Type"].isNull())
			appListObject.type = valueAppListAppListItem["Type"].asString();
		if(!valueAppListAppListItem["NickName"].isNull())
			appListObject.nickName = valueAppListAppListItem["NickName"].asString();
		if(!valueAppListAppListItem["RegionId"].isNull())
			appListObject.regionId = valueAppListAppListItem["RegionId"].asString();
		if(!valueAppListAppListItem["AppType"].isNull())
			appListObject.appType = valueAppListAppListItem["AppType"].asString();
		if(!valueAppListAppListItem["Status"].isNull())
			appListObject.status = valueAppListAppListItem["Status"].asString();
		if(!valueAppListAppListItem["ResourceGroupId"].isNull())
			appListObject.resourceGroupId = valueAppListAppListItem["ResourceGroupId"].asString();
		if(!valueAppListAppListItem["IsSubscription"].isNull())
			appListObject.isSubscription = valueAppListAppListItem["IsSubscription"].asString() == "true";
		if(!valueAppListAppListItem["Description"].isNull())
			appListObject.description = valueAppListAppListItem["Description"].asString();
		if(!valueAppListAppListItem["PackageName"].isNull())
			appListObject.packageName = valueAppListAppListItem["PackageName"].asString();
		if(!valueAppListAppListItem["Endpoint"].isNull())
			appListObject.endpoint = valueAppListAppListItem["Endpoint"].asString();
		if(!valueAppListAppListItem["SlsProject"].isNull())
			appListObject.slsProject = valueAppListAppListItem["SlsProject"].asString();
		if(!valueAppListAppListItem["SlsLogstore"].isNull())
			appListObject.slsLogstore = valueAppListAppListItem["SlsLogstore"].asString();
		auto allTagsNode = valueAppListAppListItem["Tags"]["tagsItem"];
		for (auto valueAppListAppListItemTagstagsItem : allTagsNode)
		{
			AppListItem::TagsItem tagsObject;
			if(!valueAppListAppListItemTagstagsItem["Key"].isNull())
				tagsObject.key = valueAppListAppListItemTagstagsItem["Key"].asString();
			if(!valueAppListAppListItemTagstagsItem["Value"].isNull())
				tagsObject.value = valueAppListAppListItemTagstagsItem["Value"].asString();
			appListObject.tags.push_back(tagsObject);
		}
		auto allServiceDomainConfigsNode = valueAppListAppListItem["ServiceDomainConfigs"]["serviceDomainConfigsItem"];
		for (auto valueAppListAppListItemServiceDomainConfigsserviceDomainConfigsItem : allServiceDomainConfigsNode)
		{
			AppListItem::ServiceDomainConfigsItem serviceDomainConfigsObject;
			if(!valueAppListAppListItemServiceDomainConfigsserviceDomainConfigsItem["Domain"].isNull())
				serviceDomainConfigsObject.domain = valueAppListAppListItemServiceDomainConfigsserviceDomainConfigsItem["Domain"].asString();
			if(!valueAppListAppListItemServiceDomainConfigsserviceDomainConfigsItem["Description"].isNull())
				serviceDomainConfigsObject.description = valueAppListAppListItemServiceDomainConfigsserviceDomainConfigsItem["Description"].asString();
			if(!valueAppListAppListItemServiceDomainConfigsserviceDomainConfigsItem["Tracing"].isNull())
				serviceDomainConfigsObject.tracing = valueAppListAppListItemServiceDomainConfigsserviceDomainConfigsItem["Tracing"].asString();
			auto allPropagatorTypes = value["PropagatorTypes"]["propagatorTypes"];
			for (auto value : allPropagatorTypes)
				serviceDomainConfigsObject.propagatorTypes.push_back(value.asString());
			appListObject.serviceDomainConfigs.push_back(serviceDomainConfigsObject);
		}
		appList_.push_back(appListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetRumAppsResult::getMessage()const
{
	return message_;
}

int GetRumAppsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetRumAppsResult::AppListItem> GetRumAppsResult::getAppList()const
{
	return appList_;
}

int GetRumAppsResult::getCode()const
{
	return code_;
}

bool GetRumAppsResult::getSuccess()const
{
	return success_;
}

