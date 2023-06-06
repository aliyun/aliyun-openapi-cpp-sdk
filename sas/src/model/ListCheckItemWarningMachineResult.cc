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

#include <alibabacloud/sas/model/ListCheckItemWarningMachineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListCheckItemWarningMachineResult::ListCheckItemWarningMachineResult() :
	ServiceResult()
{}

ListCheckItemWarningMachineResult::ListCheckItemWarningMachineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCheckItemWarningMachineResult::~ListCheckItemWarningMachineResult()
{}

void ListCheckItemWarningMachineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["Status"].isNull())
			listObject.status = std::stoi(valueListListItem["Status"].asString());
		if(!valueListListItem["Bind"].isNull())
			listObject.bind = valueListListItem["Bind"].asString() == "true";
		if(!valueListListItem["AuthVersion"].isNull())
			listObject.authVersion = std::stoi(valueListListItem["AuthVersion"].asString());
		if(!valueListListItem["PortOpen"].isNull())
			listObject.portOpen = valueListListItem["PortOpen"].asString() == "true";
		if(!valueListListItem["InstanceId"].isNull())
			listObject.instanceId = valueListListItem["InstanceId"].asString();
		if(!valueListListItem["IntranetIp"].isNull())
			listObject.intranetIp = valueListListItem["IntranetIp"].asString();
		if(!valueListListItem["InternetIp"].isNull())
			listObject.internetIp = valueListListItem["InternetIp"].asString();
		if(!valueListListItem["InstanceName"].isNull())
			listObject.instanceName = valueListListItem["InstanceName"].asString();
		if(!valueListListItem["Uuid"].isNull())
			listObject.uuid = valueListListItem["Uuid"].asString();
		if(!valueListListItem["RegionId"].isNull())
			listObject.regionId = valueListListItem["RegionId"].asString();
		if(!valueListListItem["Prompt"].isNull())
			listObject.prompt = valueListListItem["Prompt"].asString();
		if(!valueListListItem["ContainerId"].isNull())
			listObject.containerId = valueListListItem["ContainerId"].asString();
		if(!valueListListItem["ContainerName"].isNull())
			listObject.containerName = valueListListItem["ContainerName"].asString();
		auto allWarningRiskListNode = valueListListItem["WarningRiskList"]["WarningRiskListItem"];
		for (auto valueListListItemWarningRiskListWarningRiskListItem : allWarningRiskListNode)
		{
			ListItem::WarningRiskListItem warningRiskListObject;
			if(!valueListListItemWarningRiskListWarningRiskListItem["RiskId"].isNull())
				warningRiskListObject.riskId = std::stol(valueListListItemWarningRiskListWarningRiskListItem["RiskId"].asString());
			if(!valueListListItemWarningRiskListWarningRiskListItem["RiskName"].isNull())
				warningRiskListObject.riskName = valueListListItemWarningRiskListWarningRiskListItem["RiskName"].asString();
			listObject.warningRiskList.push_back(warningRiskListObject);
		}
		auto allFixListNode = valueListListItem["FixList"]["FixListItem"];
		for (auto valueListListItemFixListFixListItem : allFixListNode)
		{
			ListItem::FixListItem fixListObject;
			if(!valueListListItemFixListFixListItem["RiskId"].isNull())
				fixListObject.riskId = std::stol(valueListListItemFixListFixListItem["RiskId"].asString());
			if(!valueListListItemFixListFixListItem["RiskName"].isNull())
				fixListObject.riskName = valueListListItemFixListFixListItem["RiskName"].asString();
			listObject.fixList.push_back(fixListObject);
		}
		list_.push_back(listObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["LastRowKey"].isNull())
		pageInfo_.lastRowKey = pageInfoNode["LastRowKey"].asString();
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

ListCheckItemWarningMachineResult::PageInfo ListCheckItemWarningMachineResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListCheckItemWarningMachineResult::ListItem> ListCheckItemWarningMachineResult::getList()const
{
	return list_;
}

