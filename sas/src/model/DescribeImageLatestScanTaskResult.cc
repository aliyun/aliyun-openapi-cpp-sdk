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

#include <alibabacloud/sas/model/DescribeImageLatestScanTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageLatestScanTaskResult::DescribeImageLatestScanTaskResult() :
	ServiceResult()
{}

DescribeImageLatestScanTaskResult::DescribeImageLatestScanTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageLatestScanTaskResult::~DescribeImageLatestScanTaskResult()
{}

void DescribeImageLatestScanTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskNode = value["Task"]["ImageScanTask"];
	for (auto valueTaskImageScanTask : allTaskNode)
	{
		ImageScanTask taskObject;
		if(!valueTaskImageScanTask["Status"].isNull())
			taskObject.status = valueTaskImageScanTask["Status"].asString();
		if(!valueTaskImageScanTask["Modified"].isNull())
			taskObject.modified = valueTaskImageScanTask["Modified"].asString();
		if(!valueTaskImageScanTask["FinishTime"].isNull())
			taskObject.finishTime = std::stol(valueTaskImageScanTask["FinishTime"].asString());
		if(!valueTaskImageScanTask["Create"].isNull())
			taskObject.create = valueTaskImageScanTask["Create"].asString();
		if(!valueTaskImageScanTask["Finish"].isNull())
			taskObject.finish = std::stoi(valueTaskImageScanTask["Finish"].asString());
		if(!valueTaskImageScanTask["AliUid"].isNull())
			taskObject.aliUid = std::stol(valueTaskImageScanTask["AliUid"].asString());
		if(!valueTaskImageScanTask["Source"].isNull())
			taskObject.source = valueTaskImageScanTask["Source"].asString();
		if(!valueTaskImageScanTask["StartTime"].isNull())
			taskObject.startTime = std::stol(valueTaskImageScanTask["StartTime"].asString());
		if(!valueTaskImageScanTask["TaskType"].isNull())
			taskObject.taskType = valueTaskImageScanTask["TaskType"].asString();
		if(!valueTaskImageScanTask["Name"].isNull())
			taskObject.name = valueTaskImageScanTask["Name"].asString();
		if(!valueTaskImageScanTask["TaskId"].isNull())
			taskObject.taskId = valueTaskImageScanTask["TaskId"].asString();
		if(!valueTaskImageScanTask["Target"].isNull())
			taskObject.target = valueTaskImageScanTask["Target"].asString();
		if(!valueTaskImageScanTask["Id"].isNull())
			taskObject.id = std::stol(valueTaskImageScanTask["Id"].asString());
		if(!valueTaskImageScanTask["TargetType"].isNull())
			taskObject.targetType = valueTaskImageScanTask["TargetType"].asString();
		task_.push_back(taskObject);
	}

}

std::vector<DescribeImageLatestScanTaskResult::ImageScanTask> DescribeImageLatestScanTaskResult::getTask()const
{
	return task_;
}

