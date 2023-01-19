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

#include <alibabacloud/sas/model/DescribeWebLockFileChangeStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeWebLockFileChangeStatisticsResult::DescribeWebLockFileChangeStatisticsResult() :
	ServiceResult()
{}

DescribeWebLockFileChangeStatisticsResult::DescribeWebLockFileChangeStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebLockFileChangeStatisticsResult::~DescribeWebLockFileChangeStatisticsResult()
{}

void DescribeWebLockFileChangeStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["Info"];
	for (auto valueListInfo : allListNode)
	{
		Info listObject;
		if(!valueListInfo["Count"].isNull())
			listObject.count = std::stoi(valueListInfo["Count"].asString());
		if(!valueListInfo["File"].isNull())
			listObject.file = valueListInfo["File"].asString();
		list_.push_back(listObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeWebLockFileChangeStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWebLockFileChangeStatisticsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWebLockFileChangeStatisticsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWebLockFileChangeStatisticsResult::Info> DescribeWebLockFileChangeStatisticsResult::getList()const
{
	return list_;
}

