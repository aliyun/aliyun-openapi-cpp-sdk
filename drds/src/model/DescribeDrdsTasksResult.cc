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

#include <alibabacloud/drds/model/DescribeDrdsTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsTasksResult::DescribeDrdsTasksResult() :
	ServiceResult()
{}

DescribeDrdsTasksResult::DescribeDrdsTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsTasksResult::~DescribeDrdsTasksResult()
{}

void DescribeDrdsTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["Task"];
	for (auto valueTasksTask : allTasksNode)
	{
		Task tasksObject;
		if(!valueTasksTask["State"].isNull())
			tasksObject.state = valueTasksTask["State"].asString();
		if(!valueTasksTask["Content"].isNull())
			tasksObject.content = valueTasksTask["Content"].asString();
		if(!valueTasksTask["Id"].isNull())
			tasksObject.id = std::stol(valueTasksTask["Id"].asString());
		tasks_.push_back(tasksObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsTasksResult::Task> DescribeDrdsTasksResult::getTasks()const
{
	return tasks_;
}

bool DescribeDrdsTasksResult::getSuccess()const
{
	return success_;
}

