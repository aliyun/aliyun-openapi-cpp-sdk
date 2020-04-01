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

#include <alibabacloud/oos/model/ListExecutionRiskyTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListExecutionRiskyTasksResult::ListExecutionRiskyTasksResult() :
	ServiceResult()
{}

ListExecutionRiskyTasksResult::ListExecutionRiskyTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExecutionRiskyTasksResult::~ListExecutionRiskyTasksResult()
{}

void ListExecutionRiskyTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRiskyTasksNode = value["RiskyTasks"]["RiskyTask"];
	for (auto valueRiskyTasksRiskyTask : allRiskyTasksNode)
	{
		RiskyTask riskyTasksObject;
		if(!valueRiskyTasksRiskyTask["Service"].isNull())
			riskyTasksObject.service = valueRiskyTasksRiskyTask["Service"].asString();
		if(!valueRiskyTasksRiskyTask["API"].isNull())
			riskyTasksObject.aPI = valueRiskyTasksRiskyTask["API"].asString();
		auto allTask = value["Task"]["Task"];
		for (auto value : allTask)
			riskyTasksObject.task.push_back(value.asString());
		auto all_Template = value["Template"]["Template"];
		for (auto value : all_Template)
			riskyTasksObject._template.push_back(value.asString());
		riskyTasks_.push_back(riskyTasksObject);
	}

}

std::vector<ListExecutionRiskyTasksResult::RiskyTask> ListExecutionRiskyTasksResult::getRiskyTasks()const
{
	return riskyTasks_;
}

