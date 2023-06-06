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

#include <alibabacloud/sas/model/ListCheckItemWarningSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListCheckItemWarningSummaryResult::ListCheckItemWarningSummaryResult() :
	ServiceResult()
{}

ListCheckItemWarningSummaryResult::ListCheckItemWarningSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCheckItemWarningSummaryResult::~ListCheckItemWarningSummaryResult()
{}

void ListCheckItemWarningSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["RiskType"].isNull())
			listObject.riskType = valueListListItem["RiskType"].asString();
		if(!valueListListItem["Alias"].isNull())
			listObject.alias = valueListListItem["Alias"].asString();
		if(!valueListListItem["CheckId"].isNull())
			listObject.checkId = std::stol(valueListListItem["CheckId"].asString());
		if(!valueListListItem["CheckItem"].isNull())
			listObject.checkItem = valueListListItem["CheckItem"].asString();
		if(!valueListListItem["CheckLevel"].isNull())
			listObject.checkLevel = valueListListItem["CheckLevel"].asString();
		if(!valueListListItem["CheckType"].isNull())
			listObject.checkType = valueListListItem["CheckType"].asString();
		if(!valueListListItem["Advice"].isNull())
			listObject.advice = valueListListItem["Advice"].asString();
		if(!valueListListItem["Description"].isNull())
			listObject.description = valueListListItem["Description"].asString();
		if(!valueListListItem["Status"].isNull())
			listObject.status = std::stoi(valueListListItem["Status"].asString());
		if(!valueListListItem["WarningMachineCount"].isNull())
			listObject.warningMachineCount = std::stoi(valueListListItem["WarningMachineCount"].asString());
		if(!valueListListItem["ContainerCheckItem"].isNull())
			listObject.containerCheckItem = valueListListItem["ContainerCheckItem"].asString() == "true";
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

ListCheckItemWarningSummaryResult::PageInfo ListCheckItemWarningSummaryResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListCheckItemWarningSummaryResult::ListItem> ListCheckItemWarningSummaryResult::getList()const
{
	return list_;
}

