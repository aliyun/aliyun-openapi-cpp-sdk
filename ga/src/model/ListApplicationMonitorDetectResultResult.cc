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

#include <alibabacloud/ga/model/ListApplicationMonitorDetectResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListApplicationMonitorDetectResultResult::ListApplicationMonitorDetectResultResult() :
	ServiceResult()
{}

ListApplicationMonitorDetectResultResult::ListApplicationMonitorDetectResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationMonitorDetectResultResult::~ListApplicationMonitorDetectResultResult()
{}

void ListApplicationMonitorDetectResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationMonitorDetectResultListNode = value["ApplicationMonitorDetectResultList"]["ApplicationMonitorDetectResult"];
	for (auto valueApplicationMonitorDetectResultListApplicationMonitorDetectResult : allApplicationMonitorDetectResultListNode)
	{
		ApplicationMonitorDetectResult applicationMonitorDetectResultListObject;
		if(!valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["AcceleratorId"].isNull())
			applicationMonitorDetectResultListObject.acceleratorId = valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["AcceleratorId"].asString();
		if(!valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["ListenerId"].isNull())
			applicationMonitorDetectResultListObject.listenerId = valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["ListenerId"].asString();
		if(!valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["TaskId"].isNull())
			applicationMonitorDetectResultListObject.taskId = valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["TaskId"].asString();
		if(!valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["Port"].isNull())
			applicationMonitorDetectResultListObject.port = valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["Port"].asString();
		if(!valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["Protocol"].isNull())
			applicationMonitorDetectResultListObject.protocol = valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["Protocol"].asString();
		if(!valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["DiagStatus"].isNull())
			applicationMonitorDetectResultListObject.diagStatus = valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["DiagStatus"].asString();
		if(!valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["StatusCode"].isNull())
			applicationMonitorDetectResultListObject.statusCode = valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["StatusCode"].asString();
		if(!valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["Content"].isNull())
			applicationMonitorDetectResultListObject.content = valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["Content"].asString();
		if(!valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["Detail"].isNull())
			applicationMonitorDetectResultListObject.detail = valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["Detail"].asString();
		if(!valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["DetectTime"].isNull())
			applicationMonitorDetectResultListObject.detectTime = valueApplicationMonitorDetectResultListApplicationMonitorDetectResult["DetectTime"].asString();
		applicationMonitorDetectResultList_.push_back(applicationMonitorDetectResultListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListApplicationMonitorDetectResultResult::getTotalCount()const
{
	return totalCount_;
}

int ListApplicationMonitorDetectResultResult::getPageSize()const
{
	return pageSize_;
}

int ListApplicationMonitorDetectResultResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListApplicationMonitorDetectResultResult::ApplicationMonitorDetectResult> ListApplicationMonitorDetectResultResult::getApplicationMonitorDetectResultList()const
{
	return applicationMonitorDetectResultList_;
}

