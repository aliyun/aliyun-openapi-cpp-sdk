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

#include <alibabacloud/sas/model/ListAgentlessTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListAgentlessTaskResult::ListAgentlessTaskResult() :
	ServiceResult()
{}

ListAgentlessTaskResult::ListAgentlessTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentlessTaskResult::~ListAgentlessTaskResult()
{}

void ListAgentlessTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["TaskId"].isNull())
			listObject.taskId = valueListListItem["TaskId"].asString();
		if(!valueListListItem["TaskName"].isNull())
			listObject.taskName = valueListListItem["TaskName"].asString();
		if(!valueListListItem["TargetType"].isNull())
			listObject.targetType = std::stoi(valueListListItem["TargetType"].asString());
		if(!valueListListItem["Status"].isNull())
			listObject.status = std::stoi(valueListListItem["Status"].asString());
		if(!valueListListItem["Progress"].isNull())
			listObject.progress = std::stoi(valueListListItem["Progress"].asString());
		if(!valueListListItem["StartTime"].isNull())
			listObject.startTime = std::stol(valueListListItem["StartTime"].asString());
		if(!valueListListItem["EndTime"].isNull())
			listObject.endTime = std::stol(valueListListItem["EndTime"].asString());
		if(!valueListListItem["Result"].isNull())
			listObject.result = valueListListItem["Result"].asString();
		if(!valueListListItem["Uuid"].isNull())
			listObject.uuid = valueListListItem["Uuid"].asString();
		if(!valueListListItem["InternetIp"].isNull())
			listObject.internetIp = valueListListItem["InternetIp"].asString();
		if(!valueListListItem["IntranetIp"].isNull())
			listObject.intranetIp = valueListListItem["IntranetIp"].asString();
		if(!valueListListItem["InstanceName"].isNull())
			listObject.instanceName = valueListListItem["InstanceName"].asString();
		if(!valueListListItem["TargetName"].isNull())
			listObject.targetName = valueListListItem["TargetName"].asString();
		list_.push_back(listObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());

}

ListAgentlessTaskResult::PageInfo ListAgentlessTaskResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListAgentlessTaskResult::ListItem> ListAgentlessTaskResult::getList()const
{
	return list_;
}

