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

#include <alibabacloud/arms/model/GetGrafanaWorkspaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetGrafanaWorkspaceResult::GetGrafanaWorkspaceResult() :
	ServiceResult()
{}

GetGrafanaWorkspaceResult::GetGrafanaWorkspaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGrafanaWorkspaceResult::~GetGrafanaWorkspaceResult()
{}

void GetGrafanaWorkspaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["status"].isNull())
		data_.status = dataNode["status"].asString();
	if(!dataNode["description"].isNull())
		data_.description = dataNode["description"].asString();
	if(!dataNode["grafanaWorkspaceEdition"].isNull())
		data_.grafanaWorkspaceEdition = dataNode["grafanaWorkspaceEdition"].asString();
	if(!dataNode["endTime"].isNull())
		data_.endTime = std::stof(dataNode["endTime"].asString());
	if(!dataNode["grafanaWorkspaceId"].isNull())
		data_.grafanaWorkspaceId = dataNode["grafanaWorkspaceId"].asString();
	if(!dataNode["grafanaWorkspaceIp"].isNull())
		data_.grafanaWorkspaceIp = dataNode["grafanaWorkspaceIp"].asString();
	if(!dataNode["snatIp"].isNull())
		data_.snatIp = dataNode["snatIp"].asString();
	if(!dataNode["grafanaWorkspaceDomain"].isNull())
		data_.grafanaWorkspaceDomain = dataNode["grafanaWorkspaceDomain"].asString();
	if(!dataNode["grafanaWorkspaceDomainStatus"].isNull())
		data_.grafanaWorkspaceDomainStatus = dataNode["grafanaWorkspaceDomainStatus"].asString();
	if(!dataNode["commercial"].isNull())
		data_.commercial = dataNode["commercial"].asString() == "true";
	if(!dataNode["grafanaWorkspaceName"].isNull())
		data_.grafanaWorkspaceName = dataNode["grafanaWorkspaceName"].asString();
	if(!dataNode["grafanaVersion"].isNull())
		data_.grafanaVersion = dataNode["grafanaVersion"].asString();
	if(!dataNode["gmtCreate"].isNull())
		data_.gmtCreate = std::stof(dataNode["gmtCreate"].asString());
	if(!dataNode["userId"].isNull())
		data_.userId = dataNode["userId"].asString();
	if(!dataNode["maxAccount"].isNull())
		data_.maxAccount = dataNode["maxAccount"].asString();
	if(!dataNode["regionId"].isNull())
		data_.regionId = dataNode["regionId"].asString();
	if(!dataNode["protocol"].isNull())
		data_.protocol = dataNode["protocol"].asString();
	if(!dataNode["shareSynced"].isNull())
		data_.shareSynced = dataNode["shareSynced"].asString() == "true";
	if(!dataNode["ntmId"].isNull())
		data_.ntmId = dataNode["ntmId"].asString();
	if(!dataNode["personalDomain"].isNull())
		data_.personalDomain = dataNode["personalDomain"].asString();
	if(!dataNode["personalDomainPrefix"].isNull())
		data_.personalDomainPrefix = dataNode["personalDomainPrefix"].asString();
	if(!dataNode["resourceGroupId"].isNull())
		data_.resourceGroupId = dataNode["resourceGroupId"].asString();
	if(!dataNode["deployType"].isNull())
		data_.deployType = dataNode["deployType"].asString();
	if(!dataNode["privateIp"].isNull())
		data_.privateIp = dataNode["privateIp"].asString();
	if(!dataNode["privateDomain"].isNull())
		data_.privateDomain = dataNode["privateDomain"].asString();
	auto alltagsNode = dataNode["tags"]["tagsItem"];
	for (auto dataNodetagstagsItem : alltagsNode)
	{
		Data::TagsItem tagsItemObject;
		if(!dataNodetagstagsItem["key"].isNull())
			tagsItemObject.key = dataNodetagstagsItem["key"].asString();
		if(!dataNodetagstagsItem["value"].isNull())
			tagsItemObject.value = dataNodetagstagsItem["value"].asString();
		data_.tags.push_back(tagsItemObject);
	}
		auto allUpgradeVersion = dataNode["upgradeVersion"]["null"];
		for (auto value : allUpgradeVersion)
			data_.upgradeVersion.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();

}

std::string GetGrafanaWorkspaceResult::getMessage()const
{
	return message_;
}

std::string GetGrafanaWorkspaceResult::getTraceId()const
{
	return traceId_;
}

GetGrafanaWorkspaceResult::Data GetGrafanaWorkspaceResult::getData()const
{
	return data_;
}

int GetGrafanaWorkspaceResult::getCode()const
{
	return code_;
}

bool GetGrafanaWorkspaceResult::getSuccess()const
{
	return success_;
}

