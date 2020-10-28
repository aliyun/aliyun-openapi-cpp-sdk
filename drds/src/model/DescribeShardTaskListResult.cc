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

#include <alibabacloud/drds/model/DescribeShardTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeShardTaskListResult::DescribeShardTaskListResult() :
	ServiceResult()
{}

DescribeShardTaskListResult::DescribeShardTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeShardTaskListResult::~DescribeShardTaskListResult()
{}

void DescribeShardTaskListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["SourceTableName"].isNull())
			listObject.sourceTableName = valueListListItem["SourceTableName"].asString();
		if(!valueListListItem["TargetTableName"].isNull())
			listObject.targetTableName = valueListListItem["TargetTableName"].asString();
		if(!valueListListItem["Expired"].isNull())
			listObject.expired = valueListListItem["Expired"].asString();
		if(!valueListListItem["Expired"].isNull())
			listObject.expired1 = std::stol(valueListListItem["Expired"].asString());
		if(!valueListListItem["Stage"].isNull())
			listObject.stage = std::stoi(valueListListItem["Stage"].asString());
		if(!valueListListItem["Progress"].isNull())
			listObject.progress = std::stoi(valueListListItem["Progress"].asString());
		if(!valueListListItem["Delay"].isNull())
			listObject.delay = std::stoi(valueListListItem["Delay"].asString());
		list_.push_back(listObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeShardTaskListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeShardTaskListResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeShardTaskListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeShardTaskListResult::ListItem> DescribeShardTaskListResult::getList()const
{
	return list_;
}

bool DescribeShardTaskListResult::getSuccess()const
{
	return success_;
}

