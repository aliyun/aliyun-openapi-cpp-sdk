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

#include <alibabacloud/oos/model/ValidateTemplateContentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ValidateTemplateContentResult::ValidateTemplateContentResult() :
	ServiceResult()
{}

ValidateTemplateContentResult::ValidateTemplateContentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ValidateTemplateContentResult::~ValidateTemplateContentResult()
{}

void ValidateTemplateContentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["Task"];
	for (auto valueTasksTask : allTasksNode)
	{
		Task tasksObject;
		if(!valueTasksTask["Outputs"].isNull())
			tasksObject.outputs = valueTasksTask["Outputs"].asString();
		if(!valueTasksTask["Type"].isNull())
			tasksObject.type = valueTasksTask["Type"].asString();
		if(!valueTasksTask["Description"].isNull())
			tasksObject.description = valueTasksTask["Description"].asString();
		if(!valueTasksTask["Name"].isNull())
			tasksObject.name = valueTasksTask["Name"].asString();
		if(!valueTasksTask["Properties"].isNull())
			tasksObject.properties = valueTasksTask["Properties"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["Outputs"].isNull())
		outputs_ = value["Outputs"].asString();
	if(!value["Parameters"].isNull())
		parameters_ = value["Parameters"].asString();
	if(!value["RamRole"].isNull())
		ramRole_ = value["RamRole"].asString();

}

std::vector<ValidateTemplateContentResult::Task> ValidateTemplateContentResult::getTasks()const
{
	return tasks_;
}

std::string ValidateTemplateContentResult::getParameters()const
{
	return parameters_;
}

std::string ValidateTemplateContentResult::getOutputs()const
{
	return outputs_;
}

std::string ValidateTemplateContentResult::getRamRole()const
{
	return ramRole_;
}

