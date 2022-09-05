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

#include <alibabacloud/arms/model/GetSyntheticTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetSyntheticTaskListResult::GetSyntheticTaskListResult() :
	ServiceResult()
{}

GetSyntheticTaskListResult::GetSyntheticTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSyntheticTaskListResult::~GetSyntheticTaskListResult()
{}

void GetSyntheticTaskListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["Total"].isNull())
		pageInfo_.total = std::stol(pageInfoNode["Total"].asString());
	if(!pageInfoNode["Size"].isNull())
		pageInfo_.size = std::stol(pageInfoNode["Size"].asString());
	if(!pageInfoNode["Pages"].isNull())
		pageInfo_.pages = pageInfoNode["Pages"].asString();
	if(!pageInfoNode["Prepage"].isNull())
		pageInfo_.prepage = pageInfoNode["Prepage"].asString();
	if(!pageInfoNode["NextPage"].isNull())
		pageInfo_.nextPage = pageInfoNode["NextPage"].asString();
	if(!pageInfoNode["IsFirstPage"].isNull())
		pageInfo_.isFirstPage = pageInfoNode["IsFirstPage"].asString() == "true";
	if(!pageInfoNode["IsLastPage"].isNull())
		pageInfo_.isLastPage = pageInfoNode["IsLastPage"].asString() == "true";
	if(!pageInfoNode["HasPreviousPage"].isNull())
		pageInfo_.hasPreviousPage = pageInfoNode["HasPreviousPage"].asString() == "true";
	if(!pageInfoNode["HasNextPage"].isNull())
		pageInfo_.hasNextPage = pageInfoNode["HasNextPage"].asString();
	if(!pageInfoNode["NavigatePageNums"].isNull())
		pageInfo_.navigatePageNums = pageInfoNode["NavigatePageNums"].asString();
	if(!pageInfoNode["NavigateFirstPage"].isNull())
		pageInfo_.navigateFirstPage = pageInfoNode["NavigateFirstPage"].asString();
	if(!pageInfoNode["NavigateLastPage"].isNull())
		pageInfo_.navigateLastPage = pageInfoNode["NavigateLastPage"].asString();
	auto allListNode = pageInfoNode["List"]["listItem"];
	for (auto pageInfoNodeListlistItem : allListNode)
	{
		PageInfo::ListItem listItemObject;
		if(!pageInfoNodeListlistItem["TaskId"].isNull())
			listItemObject.taskId = pageInfoNodeListlistItem["TaskId"].asString();
		if(!pageInfoNodeListlistItem["TaskName"].isNull())
			listItemObject.taskName = pageInfoNodeListlistItem["TaskName"].asString();
		if(!pageInfoNodeListlistItem["Url"].isNull())
			listItemObject.url = pageInfoNodeListlistItem["Url"].asString();
		if(!pageInfoNodeListlistItem["TaskType"].isNull())
			listItemObject.taskType = std::stol(pageInfoNodeListlistItem["TaskType"].asString());
		if(!pageInfoNodeListlistItem["TaskTypeName"].isNull())
			listItemObject.taskTypeName = pageInfoNodeListlistItem["TaskTypeName"].asString();
		if(!pageInfoNodeListlistItem["MonitorNumber"].isNull())
			listItemObject.monitorNumber = std::stol(pageInfoNodeListlistItem["MonitorNumber"].asString());
		if(!pageInfoNodeListlistItem["TaskStatus"].isNull())
			listItemObject.taskStatus = pageInfoNodeListlistItem["TaskStatus"].asString();
		if(!pageInfoNodeListlistItem["Usable"].isNull())
			listItemObject.usable = std::stof(pageInfoNodeListlistItem["Usable"].asString());
		if(!pageInfoNodeListlistItem["CreateTime"].isNull())
			listItemObject.createTime = pageInfoNodeListlistItem["CreateTime"].asString();
		pageInfo_.list.push_back(listItemObject);
	}

}

GetSyntheticTaskListResult::PageInfo GetSyntheticTaskListResult::getPageInfo()const
{
	return pageInfo_;
}

