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

#include <alibabacloud/arms/model/DescribeAddonReleaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DescribeAddonReleaseResult::DescribeAddonReleaseResult() :
	ServiceResult()
{}

DescribeAddonReleaseResult::DescribeAddonReleaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAddonReleaseResult::~DescribeAddonReleaseResult()
{}

void DescribeAddonReleaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Config"].isNull())
		data_.config = dataNode["Config"].asString();
	auto releaseNode = dataNode["Release"];
	if(!releaseNode["AddonName"].isNull())
		data_.release.addonName = releaseNode["AddonName"].asString();
	if(!releaseNode["AlertRuleCount"].isNull())
		data_.release.alertRuleCount = std::stol(releaseNode["AlertRuleCount"].asString());
	if(!releaseNode["CreateTime"].isNull())
		data_.release.createTime = releaseNode["CreateTime"].asString();
	if(!releaseNode["DashboardCount"].isNull())
		data_.release.dashboardCount = std::stol(releaseNode["DashboardCount"].asString());
	if(!releaseNode["ExporterCount"].isNull())
		data_.release.exporterCount = std::stol(releaseNode["ExporterCount"].asString());
	if(!releaseNode["HaveConfig"].isNull())
		data_.release.haveConfig = releaseNode["HaveConfig"].asString() == "true";
	if(!releaseNode["InstallUserId"].isNull())
		data_.release.installUserId = releaseNode["InstallUserId"].asString();
	if(!releaseNode["Language"].isNull())
		data_.release.language = releaseNode["Language"].asString();
	if(!releaseNode["ReleaseId"].isNull())
		data_.release.releaseId = releaseNode["ReleaseId"].asString();
	if(!releaseNode["ReleaseName"].isNull())
		data_.release.releaseName = releaseNode["ReleaseName"].asString();
	if(!releaseNode["Scene"].isNull())
		data_.release.scene = releaseNode["Scene"].asString();
	if(!releaseNode["Status"].isNull())
		data_.release.status = releaseNode["Status"].asString();
	if(!releaseNode["UpdateTime"].isNull())
		data_.release.updateTime = releaseNode["UpdateTime"].asString();
	if(!releaseNode["UserID"].isNull())
		data_.release.userID = releaseNode["UserID"].asString();
	if(!releaseNode["Version"].isNull())
		data_.release.version = releaseNode["Version"].asString();
	if(!releaseNode["EnvironmentId"].isNull())
		data_.release.environmentId = releaseNode["EnvironmentId"].asString();
	if(!releaseNode["RegionId"].isNull())
		data_.release.regionId = releaseNode["RegionId"].asString();
	if(!releaseNode["Managed"].isNull())
		data_.release.managed = releaseNode["Managed"].asString() == "true";
	auto allConditionsNode = releaseNode["Conditions"]["conditionsItem"];
	for (auto releaseNodeConditionsconditionsItem : allConditionsNode)
	{
		Data::Release::ConditionsItem conditionsItemObject;
		if(!releaseNodeConditionsconditionsItem["FirstTransitionTime"].isNull())
			conditionsItemObject.firstTransitionTime = releaseNodeConditionsconditionsItem["FirstTransitionTime"].asString();
		if(!releaseNodeConditionsconditionsItem["LastTransitionTime"].isNull())
			conditionsItemObject.lastTransitionTime = releaseNodeConditionsconditionsItem["LastTransitionTime"].asString();
		if(!releaseNodeConditionsconditionsItem["Message"].isNull())
			conditionsItemObject.message = releaseNodeConditionsconditionsItem["Message"].asString();
		if(!releaseNodeConditionsconditionsItem["Reason"].isNull())
			conditionsItemObject.reason = releaseNodeConditionsconditionsItem["Reason"].asString();
		if(!releaseNodeConditionsconditionsItem["Status"].isNull())
			conditionsItemObject.status = releaseNodeConditionsconditionsItem["Status"].asString();
		if(!releaseNodeConditionsconditionsItem["Type"].isNull())
			conditionsItemObject.type = releaseNodeConditionsconditionsItem["Type"].asString();
		data_.release.conditions.push_back(conditionsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeAddonReleaseResult::getMessage()const
{
	return message_;
}

DescribeAddonReleaseResult::Data DescribeAddonReleaseResult::getData()const
{
	return data_;
}

std::string DescribeAddonReleaseResult::getCode()const
{
	return code_;
}

std::string DescribeAddonReleaseResult::getSuccess()const
{
	return success_;
}

