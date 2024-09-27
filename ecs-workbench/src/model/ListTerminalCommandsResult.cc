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

#include <alibabacloud/ecs-workbench/model/ListTerminalCommandsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs_workbench;
using namespace AlibabaCloud::Ecs_workbench::Model;

ListTerminalCommandsResult::ListTerminalCommandsResult() :
	ServiceResult()
{}

ListTerminalCommandsResult::ListTerminalCommandsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTerminalCommandsResult::~ListTerminalCommandsResult()
{}

void ListTerminalCommandsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTerminalCommandListNode = value["TerminalCommandList"]["TerminalCommandListItem"];
	for (auto valueTerminalCommandListTerminalCommandListItem : allTerminalCommandListNode)
	{
		TerminalCommandListItem terminalCommandListObject;
		if(!valueTerminalCommandListTerminalCommandListItem["CreateTime"].isNull())
			terminalCommandListObject.createTime = valueTerminalCommandListTerminalCommandListItem["CreateTime"].asString();
		if(!valueTerminalCommandListTerminalCommandListItem["CommandLine"].isNull())
			terminalCommandListObject.commandLine = valueTerminalCommandListTerminalCommandListItem["CommandLine"].asString();
		if(!valueTerminalCommandListTerminalCommandListItem["LoginUser"].isNull())
			terminalCommandListObject.loginUser = valueTerminalCommandListTerminalCommandListItem["LoginUser"].asString();
		if(!valueTerminalCommandListTerminalCommandListItem["ExecutePath"].isNull())
			terminalCommandListObject.executePath = valueTerminalCommandListTerminalCommandListItem["ExecutePath"].asString();
		terminalCommandList_.push_back(terminalCommandListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListTerminalCommandsResult::getTotalCount()const
{
	return totalCount_;
}

int ListTerminalCommandsResult::getPageSize()const
{
	return pageSize_;
}

int ListTerminalCommandsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListTerminalCommandsResult::TerminalCommandListItem> ListTerminalCommandsResult::getTerminalCommandList()const
{
	return terminalCommandList_;
}

