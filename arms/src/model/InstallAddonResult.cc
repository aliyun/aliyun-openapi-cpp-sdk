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

#include <alibabacloud/arms/model/InstallAddonResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

InstallAddonResult::InstallAddonResult() :
	ServiceResult()
{}

InstallAddonResult::InstallAddonResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InstallAddonResult::~InstallAddonResult()
{}

void InstallAddonResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AddonName"].isNull())
		data_.addonName = dataNode["AddonName"].asString();
	if(!dataNode["AlertRuleCount"].isNull())
		data_.alertRuleCount = std::stol(dataNode["AlertRuleCount"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["DashboardCount"].isNull())
		data_.dashboardCount = std::stol(dataNode["DashboardCount"].asString());
	if(!dataNode["ExporterCount"].isNull())
		data_.exporterCount = std::stol(dataNode["ExporterCount"].asString());
	if(!dataNode["HaveConfig"].isNull())
		data_.haveConfig = dataNode["HaveConfig"].asString() == "true";
	if(!dataNode["InstallUserId"].isNull())
		data_.installUserId = dataNode["InstallUserId"].asString();
	if(!dataNode["Language"].isNull())
		data_.language = dataNode["Language"].asString();
	if(!dataNode["ReleaseId"].isNull())
		data_.releaseId = dataNode["ReleaseId"].asString();
	if(!dataNode["ReleaseName"].isNull())
		data_.releaseName = dataNode["ReleaseName"].asString();
	if(!dataNode["Scene"].isNull())
		data_.scene = dataNode["Scene"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = dataNode["UpdateTime"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["Version"].isNull())
		data_.version = dataNode["Version"].asString();
	if(!dataNode["EnvironmentId"].isNull())
		data_.environmentId = dataNode["EnvironmentId"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["Managed"].isNull())
		data_.managed = dataNode["Managed"].asString() == "true";
	auto allConditionsNode = dataNode["Conditions"]["conditionsItem"];
	for (auto dataNodeConditionsconditionsItem : allConditionsNode)
	{
		Data::ConditionsItem conditionsItemObject;
		if(!dataNodeConditionsconditionsItem["FirstTransitionTime"].isNull())
			conditionsItemObject.firstTransitionTime = dataNodeConditionsconditionsItem["FirstTransitionTime"].asString();
		if(!dataNodeConditionsconditionsItem["LastTransitionTime"].isNull())
			conditionsItemObject.lastTransitionTime = dataNodeConditionsconditionsItem["LastTransitionTime"].asString();
		if(!dataNodeConditionsconditionsItem["Message"].isNull())
			conditionsItemObject.message = dataNodeConditionsconditionsItem["Message"].asString();
		if(!dataNodeConditionsconditionsItem["Reason"].isNull())
			conditionsItemObject.reason = dataNodeConditionsconditionsItem["Reason"].asString();
		if(!dataNodeConditionsconditionsItem["Status"].isNull())
			conditionsItemObject.status = dataNodeConditionsconditionsItem["Status"].asString();
		if(!dataNodeConditionsconditionsItem["Type"].isNull())
			conditionsItemObject.type = dataNodeConditionsconditionsItem["Type"].asString();
		data_.conditions.push_back(conditionsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string InstallAddonResult::getMessage()const
{
	return message_;
}

InstallAddonResult::Data InstallAddonResult::getData()const
{
	return data_;
}

int InstallAddonResult::getCode()const
{
	return code_;
}

bool InstallAddonResult::getSuccess()const
{
	return success_;
}

