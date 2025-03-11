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

#include <alibabacloud/drds/model/DescribeDrdsInstanceLevelTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsInstanceLevelTasksResult::DescribeDrdsInstanceLevelTasksResult() :
	ServiceResult()
{}

DescribeDrdsInstanceLevelTasksResult::DescribeDrdsInstanceLevelTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsInstanceLevelTasksResult::~DescribeDrdsInstanceLevelTasksResult()
{}

void DescribeDrdsInstanceLevelTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["Task"];
	for (auto valueTasksTask : allTasksNode)
	{
		Task tasksObject;
		if(!valueTasksTask["TaskType"].isNull())
			tasksObject.taskType = std::stoi(valueTasksTask["TaskType"].asString());
		if(!valueTasksTask["TaskPhase"].isNull())
			tasksObject.taskPhase = valueTasksTask["TaskPhase"].asString();
		if(!valueTasksTask["Progress"].isNull())
			tasksObject.progress = std::stoi(valueTasksTask["Progress"].asString());
		if(!valueTasksTask["AllowCancel"].isNull())
			tasksObject.allowCancel = valueTasksTask["AllowCancel"].asString() == "true";
		if(!valueTasksTask["TaskStatus"].isNull())
			tasksObject.taskStatus = std::stoi(valueTasksTask["TaskStatus"].asString());
		if(!valueTasksTask["ShowProgress"].isNull())
			tasksObject.showProgress = valueTasksTask["ShowProgress"].asString() == "true";
		if(!valueTasksTask["TaskName"].isNull())
			tasksObject.taskName = valueTasksTask["TaskName"].asString();
		if(!valueTasksTask["ProgressDescription"].isNull())
			tasksObject.progressDescription = valueTasksTask["ProgressDescription"].asString();
		if(!valueTasksTask["GmtCreate"].isNull())
			tasksObject.gmtCreate = std::stol(valueTasksTask["GmtCreate"].asString());
		if(!valueTasksTask["TargetId"].isNull())
			tasksObject.targetId = std::stol(valueTasksTask["TargetId"].asString());
		if(!valueTasksTask["ErrMsg"].isNull())
			tasksObject.errMsg = valueTasksTask["ErrMsg"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsInstanceLevelTasksResult::Task> DescribeDrdsInstanceLevelTasksResult::getTasks()const
{
	return tasks_;
}

bool DescribeDrdsInstanceLevelTasksResult::getSuccess()const
{
	return success_;
}

