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

#include <alibabacloud/drds/model/ListUnCompleteTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

ListUnCompleteTasksResult::ListUnCompleteTasksResult() :
	ServiceResult()
{}

ListUnCompleteTasksResult::ListUnCompleteTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUnCompleteTasksResult::~ListUnCompleteTasksResult()
{}

void ListUnCompleteTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["task"];
	for (auto valueDatatask : allDataNode)
	{
		Task dataObject;
		if(!valueDatatask["RequestId"].isNull())
			dataObject.requestId = valueDatatask["RequestId"].asString();
		if(!valueDatatask["TargetId"].isNull())
			dataObject.targetId = valueDatatask["TargetId"].asString();
		if(!valueDatatask["TaskDetail"].isNull())
			dataObject.taskDetail = valueDatatask["TaskDetail"].asString();
		if(!valueDatatask["taskStatus"].isNull())
			dataObject.taskStatus = std::stoi(valueDatatask["taskStatus"].asString());
		if(!valueDatatask["TaskPhase"].isNull())
			dataObject.taskPhase = valueDatatask["TaskPhase"].asString();
		if(!valueDatatask["TaskType"].isNull())
			dataObject.taskType = std::stoi(valueDatatask["TaskType"].asString());
		if(!valueDatatask["TaskName"].isNull())
			dataObject.taskName = valueDatatask["TaskName"].asString();
		if(!valueDatatask["gmtCreate"].isNull())
			dataObject.gmtCreate = std::stol(valueDatatask["gmtCreate"].asString());
		if(!valueDatatask["AllowCancel"].isNull())
			dataObject.allowCancel = valueDatatask["AllowCancel"].asString();
		if(!valueDatatask["ErrMsg"].isNull())
			dataObject.errMsg = valueDatatask["ErrMsg"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<ListUnCompleteTasksResult::Task> ListUnCompleteTasksResult::getData()const
{
	return data_;
}

