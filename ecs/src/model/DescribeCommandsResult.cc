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

#include <alibabacloud/ecs/model/DescribeCommandsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeCommandsResult::DescribeCommandsResult() :
	ServiceResult()
{}

DescribeCommandsResult::DescribeCommandsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCommandsResult::~DescribeCommandsResult()
{}

void DescribeCommandsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCommands = value["Commands"]["Command"];
	for (auto value : allCommands)
	{
		Command commandsObject;
		if(!value["CommandId"].isNull())
			commandsObject.commandId = value["CommandId"].asString();
		if(!value["Name"].isNull())
			commandsObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			commandsObject.type = value["Type"].asString();
		if(!value["Description"].isNull())
			commandsObject.description = value["Description"].asString();
		if(!value["CommandContent"].isNull())
			commandsObject.commandContent = value["CommandContent"].asString();
		if(!value["WorkingDir"].isNull())
			commandsObject.workingDir = value["WorkingDir"].asString();
		if(!value["Timeout"].isNull())
			commandsObject.timeout = std::stol(value["Timeout"].asString());
		if(!value["CreationTime"].isNull())
			commandsObject.creationTime = value["CreationTime"].asString();
		if(!value["EnableParameter"].isNull())
			commandsObject.enableParameter = value["EnableParameter"].asString() == "true";
		auto allParameterNames = value["ParameterNames"]["ParameterName"];
		for (auto value : allParameterNames)
			commandsObject.parameterNames.push_back(value.asString());
		commands_.push_back(commandsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribeCommandsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeCommandsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeCommandsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCommandsResult::Command> DescribeCommandsResult::getCommands()const
{
	return commands_;
}

