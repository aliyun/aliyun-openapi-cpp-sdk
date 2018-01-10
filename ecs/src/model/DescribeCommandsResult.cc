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
		Command commandObject;
		commandObject.commandId = value["CommandId"].asString();
		commandObject.name = value["Name"].asString();
		commandObject.type = value["Type"].asString();
		commandObject.description = value["Description"].asString();
		commandObject.commandContent = value["CommandContent"].asString();
		commandObject.workingDir = value["WorkingDir"].asString();
		commandObject.timeout = std::stol(value["Timeout"].asString());
		commands_.push_back(commandObject);
	}
	totalCount_ = std::stol(value["TotalCount"].asString());
	pageNumber_ = std::stol(value["PageNumber"].asString());
	pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribeCommandsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeCommandsResult::setTotalCount(long totalCount)
{
	totalCount_ = totalCount;
}

long DescribeCommandsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeCommandsResult::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
}

long DescribeCommandsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCommandsResult::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
}

