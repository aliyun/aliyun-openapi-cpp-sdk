<<<<<<< HEAD
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

#include <alibabacloud/ecs/model/DescribeTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeTasksResult::DescribeTasksResult() :
	ServiceResult()
{}

DescribeTasksResult::DescribeTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTasksResult::~DescribeTasksResult()
{}

void DescribeTasksResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
=======
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

#include <alibabacloud/ecs/model/DescribeTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeTasksResult::DescribeTasksResult() :
	ServiceResult()
{}

DescribeTasksResult::DescribeTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTasksResult::~DescribeTasksResult()
{}

void DescribeTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
>>>>>>> master
	auto allTaskSet = value["TaskSet"]["Task"];
	for (auto value : allTaskSet)
	{
		Task taskSetObject;
		if(!value["TaskId"].isNull())
			taskSetObject.taskId = value["TaskId"].asString();
		if(!value["TaskAction"].isNull())
			taskSetObject.taskAction = value["TaskAction"].asString();
		if(!value["TaskStatus"].isNull())
			taskSetObject.taskStatus = value["TaskStatus"].asString();
		if(!value["SupportCancel"].isNull())
			taskSetObject.supportCancel = value["SupportCancel"].asString();
		if(!value["CreationTime"].isNull())
			taskSetObject.creationTime = value["CreationTime"].asString();
		if(!value["FinishedTime"].isNull())
			taskSetObject.finishedTime = value["FinishedTime"].asString();
		taskSet_.push_back(taskSetObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeTasksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeTasksResult::Task> DescribeTasksResult::getTaskSet()const
{
	return taskSet_;
}

std::string DescribeTasksResult::getRegionId()const
{
	return regionId_;
}

