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

#include <alibabacloud/dataworks-public/model/ListCheckProcessesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListCheckProcessesResult::ListCheckProcessesResult() :
	ServiceResult()
{}

ListCheckProcessesResult::ListCheckProcessesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCheckProcessesResult::~ListCheckProcessesResult()
{}

void ListCheckProcessesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pagingInfoNode = value["PagingInfo"];
	if(!pagingInfoNode["PageNumber"].isNull())
		pagingInfo_.pageNumber = std::stoi(pagingInfoNode["PageNumber"].asString());
	if(!pagingInfoNode["PageSize"].isNull())
		pagingInfo_.pageSize = std::stoi(pagingInfoNode["PageSize"].asString());
	if(!pagingInfoNode["TotalCount"].isNull())
		pagingInfo_.totalCount = std::stoi(pagingInfoNode["TotalCount"].asString());
	auto allCheckProcessesNode = pagingInfoNode["CheckProcesses"]["CheckProcessesItem"];
	for (auto pagingInfoNodeCheckProcessesCheckProcessesItem : allCheckProcessesNode)
	{
		PagingInfo::CheckProcessesItem checkProcessesItemObject;
		if(!pagingInfoNodeCheckProcessesCheckProcessesItem["ProjectId"].isNull())
			checkProcessesItemObject.projectId = std::stol(pagingInfoNodeCheckProcessesCheckProcessesItem["ProjectId"].asString());
		if(!pagingInfoNodeCheckProcessesCheckProcessesItem["Status"].isNull())
			checkProcessesItemObject.status = pagingInfoNodeCheckProcessesCheckProcessesItem["Status"].asString();
		if(!pagingInfoNodeCheckProcessesCheckProcessesItem["EventCode"].isNull())
			checkProcessesItemObject.eventCode = pagingInfoNodeCheckProcessesCheckProcessesItem["EventCode"].asString();
		if(!pagingInfoNodeCheckProcessesCheckProcessesItem["EventName"].isNull())
			checkProcessesItemObject.eventName = pagingInfoNodeCheckProcessesCheckProcessesItem["EventName"].asString();
		if(!pagingInfoNodeCheckProcessesCheckProcessesItem["EventNameEn"].isNull())
			checkProcessesItemObject.eventNameEn = pagingInfoNodeCheckProcessesCheckProcessesItem["EventNameEn"].asString();
		if(!pagingInfoNodeCheckProcessesCheckProcessesItem["ProcessName"].isNull())
			checkProcessesItemObject.processName = pagingInfoNodeCheckProcessesCheckProcessesItem["ProcessName"].asString();
		if(!pagingInfoNodeCheckProcessesCheckProcessesItem["MessageId"].isNull())
			checkProcessesItemObject.messageId = pagingInfoNodeCheckProcessesCheckProcessesItem["MessageId"].asString();
		if(!pagingInfoNodeCheckProcessesCheckProcessesItem["ProcessId"].isNull())
			checkProcessesItemObject.processId = pagingInfoNodeCheckProcessesCheckProcessesItem["ProcessId"].asString();
		if(!pagingInfoNodeCheckProcessesCheckProcessesItem["Operator"].isNull())
			checkProcessesItemObject._operator = pagingInfoNodeCheckProcessesCheckProcessesItem["Operator"].asString();
		pagingInfo_.checkProcesses.push_back(checkProcessesItemObject);
	}

}

ListCheckProcessesResult::PagingInfo ListCheckProcessesResult::getPagingInfo()const
{
	return pagingInfo_;
}

