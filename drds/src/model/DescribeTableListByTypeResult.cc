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

#include <alibabacloud/drds/model/DescribeTableListByTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeTableListByTypeResult::DescribeTableListByTypeResult() :
	ServiceResult()
{}

DescribeTableListByTypeResult::DescribeTableListByTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTableListByTypeResult::~DescribeTableListByTypeResult()
{}

void DescribeTableListByTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["Property"].isNull())
			listObject.property = valueListListItem["Property"].asString();
		if(!valueListListItem["TableName"].isNull())
			listObject.tableName = valueListListItem["TableName"].asString();
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

int DescribeTableListByTypeResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTableListByTypeResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeTableListByTypeResult::getTotal()const
{
	return total_;
}

std::vector<DescribeTableListByTypeResult::ListItem> DescribeTableListByTypeResult::getList()const
{
	return list_;
}

bool DescribeTableListByTypeResult::getSuccess()const
{
	return success_;
}

