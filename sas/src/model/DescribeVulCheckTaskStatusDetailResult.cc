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

#include <alibabacloud/sas/model/DescribeVulCheckTaskStatusDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeVulCheckTaskStatusDetailResult::DescribeVulCheckTaskStatusDetailResult() :
	ServiceResult()
{}

DescribeVulCheckTaskStatusDetailResult::DescribeVulCheckTaskStatusDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulCheckTaskStatusDetailResult::~DescribeVulCheckTaskStatusDetailResult()
{}

void DescribeVulCheckTaskStatusDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskStatusesNode = value["TaskStatuses"]["TaskStatus"];
	for (auto valueTaskStatusesTaskStatus : allTaskStatusesNode)
	{
		TaskStatus taskStatusesObject;
		if(!valueTaskStatusesTaskStatus["TaskId"].isNull())
			taskStatusesObject.taskId = valueTaskStatusesTaskStatus["TaskId"].asString();
		auto allTaskStatusListNode = valueTaskStatusesTaskStatus["TaskStatusList"]["StatusItem"];
		for (auto valueTaskStatusesTaskStatusTaskStatusListStatusItem : allTaskStatusListNode)
		{
			TaskStatus::StatusItem taskStatusListObject;
			if(!valueTaskStatusesTaskStatusTaskStatusListStatusItem["Type"].isNull())
				taskStatusListObject.type = valueTaskStatusesTaskStatusTaskStatusListStatusItem["Type"].asString();
			if(!valueTaskStatusesTaskStatusTaskStatusListStatusItem["Status"].isNull())
				taskStatusListObject.status = valueTaskStatusesTaskStatusTaskStatusListStatusItem["Status"].asString();
			if(!valueTaskStatusesTaskStatusTaskStatusListStatusItem["Code"].isNull())
				taskStatusListObject.code = valueTaskStatusesTaskStatusTaskStatusListStatusItem["Code"].asString();
			taskStatusesObject.taskStatusList.push_back(taskStatusListObject);
		}
		taskStatuses_.push_back(taskStatusesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVulCheckTaskStatusDetailResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVulCheckTaskStatusDetailResult::TaskStatus> DescribeVulCheckTaskStatusDetailResult::getTaskStatuses()const
{
	return taskStatuses_;
}

