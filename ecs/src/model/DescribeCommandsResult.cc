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
	auto allCommandsNode = value["Commands"]["Command"];
	for (auto valueCommandsCommand : allCommandsNode)
	{
		Command commandsObject;
		if(!valueCommandsCommand["CommandId"].isNull())
			commandsObject.commandId = valueCommandsCommand["CommandId"].asString();
		if(!valueCommandsCommand["Name"].isNull())
			commandsObject.name = valueCommandsCommand["Name"].asString();
		if(!valueCommandsCommand["Type"].isNull())
			commandsObject.type = valueCommandsCommand["Type"].asString();
		if(!valueCommandsCommand["Description"].isNull())
			commandsObject.description = valueCommandsCommand["Description"].asString();
		if(!valueCommandsCommand["CommandContent"].isNull())
			commandsObject.commandContent = valueCommandsCommand["CommandContent"].asString();
		if(!valueCommandsCommand["WorkingDir"].isNull())
			commandsObject.workingDir = valueCommandsCommand["WorkingDir"].asString();
		if(!valueCommandsCommand["Timeout"].isNull())
			commandsObject.timeout = std::stol(valueCommandsCommand["Timeout"].asString());
		if(!valueCommandsCommand["InvokeTimes"].isNull())
			commandsObject.invokeTimes = std::stoi(valueCommandsCommand["InvokeTimes"].asString());
		if(!valueCommandsCommand["CreationTime"].isNull())
			commandsObject.creationTime = valueCommandsCommand["CreationTime"].asString();
		if(!valueCommandsCommand["EnableParameter"].isNull())
			commandsObject.enableParameter = valueCommandsCommand["EnableParameter"].asString() == "true";
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

