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

#include <alibabacloud/arms/model/ListGrafanaWorkspaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListGrafanaWorkspaceResult::ListGrafanaWorkspaceResult() :
	ServiceResult()
{}

ListGrafanaWorkspaceResult::ListGrafanaWorkspaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGrafanaWorkspaceResult::~ListGrafanaWorkspaceResult()
{}

void ListGrafanaWorkspaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["GrafanaWorkspace"];
	for (auto valueDataGrafanaWorkspace : allDataNode)
	{
		GrafanaWorkspace dataObject;
		if(!valueDataGrafanaWorkspace["status"].isNull())
			dataObject.status = valueDataGrafanaWorkspace["status"].asString();
		if(!valueDataGrafanaWorkspace["description"].isNull())
			dataObject.description = valueDataGrafanaWorkspace["description"].asString();
		if(!valueDataGrafanaWorkspace["grafanaWorkspaceEdition"].isNull())
			dataObject.grafanaWorkspaceEdition = valueDataGrafanaWorkspace["grafanaWorkspaceEdition"].asString();
		if(!valueDataGrafanaWorkspace["endTime"].isNull())
			dataObject.endTime = std::stof(valueDataGrafanaWorkspace["endTime"].asString());
		if(!valueDataGrafanaWorkspace["grafanaWorkspaceId"].isNull())
			dataObject.grafanaWorkspaceId = valueDataGrafanaWorkspace["grafanaWorkspaceId"].asString();
		if(!valueDataGrafanaWorkspace["grafanaWorkspaceIp"].isNull())
			dataObject.grafanaWorkspaceIp = valueDataGrafanaWorkspace["grafanaWorkspaceIp"].asString();
		if(!valueDataGrafanaWorkspace["snatIp"].isNull())
			dataObject.snatIp = valueDataGrafanaWorkspace["snatIp"].asString();
		if(!valueDataGrafanaWorkspace["grafanaWorkspaceDomain"].isNull())
			dataObject.grafanaWorkspaceDomain = valueDataGrafanaWorkspace["grafanaWorkspaceDomain"].asString();
		if(!valueDataGrafanaWorkspace["grafanaWorkspaceDomainStatus"].isNull())
			dataObject.grafanaWorkspaceDomainStatus = valueDataGrafanaWorkspace["grafanaWorkspaceDomainStatus"].asString();
		if(!valueDataGrafanaWorkspace["commercial"].isNull())
			dataObject.commercial = valueDataGrafanaWorkspace["commercial"].asString() == "true";
		if(!valueDataGrafanaWorkspace["grafanaWorkspaceName"].isNull())
			dataObject.grafanaWorkspaceName = valueDataGrafanaWorkspace["grafanaWorkspaceName"].asString();
		if(!valueDataGrafanaWorkspace["grafanaVersion"].isNull())
			dataObject.grafanaVersion = valueDataGrafanaWorkspace["grafanaVersion"].asString();
		if(!valueDataGrafanaWorkspace["gmtCreate"].isNull())
			dataObject.gmtCreate = std::stof(valueDataGrafanaWorkspace["gmtCreate"].asString());
		if(!valueDataGrafanaWorkspace["userId"].isNull())
			dataObject.userId = valueDataGrafanaWorkspace["userId"].asString();
		if(!valueDataGrafanaWorkspace["maxAccount"].isNull())
			dataObject.maxAccount = valueDataGrafanaWorkspace["maxAccount"].asString();
		if(!valueDataGrafanaWorkspace["regionId"].isNull())
			dataObject.regionId = valueDataGrafanaWorkspace["regionId"].asString();
		if(!valueDataGrafanaWorkspace["protocol"].isNull())
			dataObject.protocol = valueDataGrafanaWorkspace["protocol"].asString();
		if(!valueDataGrafanaWorkspace["shareSynced"].isNull())
			dataObject.shareSynced = valueDataGrafanaWorkspace["shareSynced"].asString() == "true";
		if(!valueDataGrafanaWorkspace["ntmId"].isNull())
			dataObject.ntmId = valueDataGrafanaWorkspace["ntmId"].asString();
		if(!valueDataGrafanaWorkspace["personalDomain"].isNull())
			dataObject.personalDomain = valueDataGrafanaWorkspace["personalDomain"].asString();
		if(!valueDataGrafanaWorkspace["personalDomainPrefix"].isNull())
			dataObject.personalDomainPrefix = valueDataGrafanaWorkspace["personalDomainPrefix"].asString();
		if(!valueDataGrafanaWorkspace["resourceGroupId"].isNull())
			dataObject.resourceGroupId = valueDataGrafanaWorkspace["resourceGroupId"].asString();
		if(!valueDataGrafanaWorkspace["deployType"].isNull())
			dataObject.deployType = valueDataGrafanaWorkspace["deployType"].asString();
		if(!valueDataGrafanaWorkspace["privateIp"].isNull())
			dataObject.privateIp = valueDataGrafanaWorkspace["privateIp"].asString();
		if(!valueDataGrafanaWorkspace["privateDomain"].isNull())
			dataObject.privateDomain = valueDataGrafanaWorkspace["privateDomain"].asString();
		auto alltagsNode = valueDataGrafanaWorkspace["tags"]["tagsItem"];
		for (auto valueDataGrafanaWorkspacetagstagsItem : alltagsNode)
		{
			GrafanaWorkspace::TagsItem tagsObject;
			if(!valueDataGrafanaWorkspacetagstagsItem["key"].isNull())
				tagsObject.key = valueDataGrafanaWorkspacetagstagsItem["key"].asString();
			if(!valueDataGrafanaWorkspacetagstagsItem["value"].isNull())
				tagsObject.value = valueDataGrafanaWorkspacetagstagsItem["value"].asString();
			dataObject.tags.push_back(tagsObject);
		}
		auto allUpgradeVersion = value["upgradeVersion"]["null"];
		for (auto value : allUpgradeVersion)
			dataObject.upgradeVersion.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();

}

std::string ListGrafanaWorkspaceResult::getMessage()const
{
	return message_;
}

std::string ListGrafanaWorkspaceResult::getTraceId()const
{
	return traceId_;
}

std::vector<ListGrafanaWorkspaceResult::GrafanaWorkspace> ListGrafanaWorkspaceResult::getData()const
{
	return data_;
}

int ListGrafanaWorkspaceResult::getCode()const
{
	return code_;
}

bool ListGrafanaWorkspaceResult::getSuccess()const
{
	return success_;
}

