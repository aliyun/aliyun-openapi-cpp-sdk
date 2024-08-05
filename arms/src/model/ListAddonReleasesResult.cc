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

#include <alibabacloud/arms/model/ListAddonReleasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListAddonReleasesResult::ListAddonReleasesResult() :
	ServiceResult()
{}

ListAddonReleasesResult::ListAddonReleasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAddonReleasesResult::~ListAddonReleasesResult()
{}

void ListAddonReleasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allReleasesNode = dataNode["Releases"]["releasesItem"];
	for (auto dataNodeReleasesreleasesItem : allReleasesNode)
	{
		Data::ReleasesItem releasesItemObject;
		if(!dataNodeReleasesreleasesItem["AddonName"].isNull())
			releasesItemObject.addonName = dataNodeReleasesreleasesItem["AddonName"].asString();
		if(!dataNodeReleasesreleasesItem["AlertRuleCount"].isNull())
			releasesItemObject.alertRuleCount = std::stol(dataNodeReleasesreleasesItem["AlertRuleCount"].asString());
		if(!dataNodeReleasesreleasesItem["CreateTime"].isNull())
			releasesItemObject.createTime = dataNodeReleasesreleasesItem["CreateTime"].asString();
		if(!dataNodeReleasesreleasesItem["DashboardCount"].isNull())
			releasesItemObject.dashboardCount = std::stol(dataNodeReleasesreleasesItem["DashboardCount"].asString());
		if(!dataNodeReleasesreleasesItem["ExporterCount"].isNull())
			releasesItemObject.exporterCount = std::stol(dataNodeReleasesreleasesItem["ExporterCount"].asString());
		if(!dataNodeReleasesreleasesItem["HaveConfig"].isNull())
			releasesItemObject.haveConfig = dataNodeReleasesreleasesItem["HaveConfig"].asString() == "true";
		if(!dataNodeReleasesreleasesItem["InstallUserId"].isNull())
			releasesItemObject.installUserId = dataNodeReleasesreleasesItem["InstallUserId"].asString();
		if(!dataNodeReleasesreleasesItem["Language"].isNull())
			releasesItemObject.language = dataNodeReleasesreleasesItem["Language"].asString();
		if(!dataNodeReleasesreleasesItem["ReleaseId"].isNull())
			releasesItemObject.releaseId = dataNodeReleasesreleasesItem["ReleaseId"].asString();
		if(!dataNodeReleasesreleasesItem["ReleaseName"].isNull())
			releasesItemObject.releaseName = dataNodeReleasesreleasesItem["ReleaseName"].asString();
		if(!dataNodeReleasesreleasesItem["Scene"].isNull())
			releasesItemObject.scene = dataNodeReleasesreleasesItem["Scene"].asString();
		if(!dataNodeReleasesreleasesItem["Status"].isNull())
			releasesItemObject.status = dataNodeReleasesreleasesItem["Status"].asString();
		if(!dataNodeReleasesreleasesItem["UpdateTime"].isNull())
			releasesItemObject.updateTime = dataNodeReleasesreleasesItem["UpdateTime"].asString();
		if(!dataNodeReleasesreleasesItem["UserId"].isNull())
			releasesItemObject.userId = dataNodeReleasesreleasesItem["UserId"].asString();
		if(!dataNodeReleasesreleasesItem["Version"].isNull())
			releasesItemObject.version = dataNodeReleasesreleasesItem["Version"].asString();
		if(!dataNodeReleasesreleasesItem["EnvironmentId"].isNull())
			releasesItemObject.environmentId = dataNodeReleasesreleasesItem["EnvironmentId"].asString();
		if(!dataNodeReleasesreleasesItem["RegionId"].isNull())
			releasesItemObject.regionId = dataNodeReleasesreleasesItem["RegionId"].asString();
		if(!dataNodeReleasesreleasesItem["Managed"].isNull())
			releasesItemObject.managed = dataNodeReleasesreleasesItem["Managed"].asString() == "true";
		auto allConditionsNode = dataNodeReleasesreleasesItem["Conditions"]["conditionsItem"];
		for (auto dataNodeReleasesreleasesItemConditionsconditionsItem : allConditionsNode)
		{
			Data::ReleasesItem::ConditionsItem conditionsObject;
			if(!dataNodeReleasesreleasesItemConditionsconditionsItem["FirstTransitionTime"].isNull())
				conditionsObject.firstTransitionTime = dataNodeReleasesreleasesItemConditionsconditionsItem["FirstTransitionTime"].asString();
			if(!dataNodeReleasesreleasesItemConditionsconditionsItem["LastTransitionTime"].isNull())
				conditionsObject.lastTransitionTime = dataNodeReleasesreleasesItemConditionsconditionsItem["LastTransitionTime"].asString();
			if(!dataNodeReleasesreleasesItemConditionsconditionsItem["Message"].isNull())
				conditionsObject.message = dataNodeReleasesreleasesItemConditionsconditionsItem["Message"].asString();
			if(!dataNodeReleasesreleasesItemConditionsconditionsItem["Reason"].isNull())
				conditionsObject.reason = dataNodeReleasesreleasesItemConditionsconditionsItem["Reason"].asString();
			if(!dataNodeReleasesreleasesItemConditionsconditionsItem["Status"].isNull())
				conditionsObject.status = dataNodeReleasesreleasesItemConditionsconditionsItem["Status"].asString();
			if(!dataNodeReleasesreleasesItemConditionsconditionsItem["Type"].isNull())
				conditionsObject.type = dataNodeReleasesreleasesItemConditionsconditionsItem["Type"].asString();
			releasesItemObject.conditions.push_back(conditionsObject);
		}
		data_.releases.push_back(releasesItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListAddonReleasesResult::getMessage()const
{
	return message_;
}

ListAddonReleasesResult::Data ListAddonReleasesResult::getData()const
{
	return data_;
}

int ListAddonReleasesResult::getCode()const
{
	return code_;
}

bool ListAddonReleasesResult::getSuccess()const
{
	return success_;
}

