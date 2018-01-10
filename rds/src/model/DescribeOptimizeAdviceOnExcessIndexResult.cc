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

#include <alibabacloud/rds/model/DescribeOptimizeAdviceOnExcessIndexResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeOptimizeAdviceOnExcessIndexResult::DescribeOptimizeAdviceOnExcessIndexResult() :
	ServiceResult()
{}

DescribeOptimizeAdviceOnExcessIndexResult::DescribeOptimizeAdviceOnExcessIndexResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOptimizeAdviceOnExcessIndexResult::~DescribeOptimizeAdviceOnExcessIndexResult()
{}

void DescribeOptimizeAdviceOnExcessIndexResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["AdviceOnExcessIndex"];
	for (auto value : allItems)
	{
		AdviceOnExcessIndex adviceOnExcessIndexObject;
		adviceOnExcessIndexObject.dBName = value["DBName"].asString();
		adviceOnExcessIndexObject.tableName = value["TableName"].asString();
		adviceOnExcessIndexObject.indexCount = std::stol(value["IndexCount"].asString());
		items_.push_back(adviceOnExcessIndexObject);
	}
	totalRecordsCount_ = std::stoi(value["TotalRecordsCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeOptimizeAdviceOnExcessIndexResult::getTotalRecordsCount()const
{
	return totalRecordsCount_;
}

void DescribeOptimizeAdviceOnExcessIndexResult::setTotalRecordsCount(int totalRecordsCount)
{
	totalRecordsCount_ = totalRecordsCount;
}

int DescribeOptimizeAdviceOnExcessIndexResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeOptimizeAdviceOnExcessIndexResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeOptimizeAdviceOnExcessIndexResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeOptimizeAdviceOnExcessIndexResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

