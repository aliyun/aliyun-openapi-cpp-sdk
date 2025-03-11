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

#include <alibabacloud/drds/model/DescribeTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeTablesResult::DescribeTablesResult() :
	ServiceResult()
{}

DescribeTablesResult::DescribeTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTablesResult::~DescribeTablesResult()
{}

void DescribeTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["Status"].isNull())
			listObject.status = std::stoi(valueListListItem["Status"].asString());
		if(!valueListListItem["IsLocked"].isNull())
			listObject.isLocked = valueListListItem["IsLocked"].asString() == "true";
		if(!valueListListItem["ShardKey"].isNull())
			listObject.shardKey = valueListListItem["ShardKey"].asString();
		if(!valueListListItem["IsShard"].isNull())
			listObject.isShard = valueListListItem["IsShard"].asString() == "true";
		if(!valueListListItem["Broadcast"].isNull())
			listObject.broadcast = valueListListItem["Broadcast"].asString() == "true";
		if(!valueListListItem["AllowFullTableScan"].isNull())
			listObject.allowFullTableScan = valueListListItem["AllowFullTableScan"].asString() == "true";
		if(!valueListListItem["Table"].isNull())
			listObject.table = valueListListItem["Table"].asString();
		if(!valueListListItem["DbInstType"].isNull())
			listObject.dbInstType = std::stoi(valueListListItem["DbInstType"].asString());
		list_.push_back(listObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int DescribeTablesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTablesResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeTablesResult::getTotal()const
{
	return total_;
}

std::vector<DescribeTablesResult::ListItem> DescribeTablesResult::getList()const
{
	return list_;
}

bool DescribeTablesResult::getSuccess()const
{
	return success_;
}

