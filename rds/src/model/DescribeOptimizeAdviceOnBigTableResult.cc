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

#include <alibabacloud/rds/model/DescribeOptimizeAdviceOnBigTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeOptimizeAdviceOnBigTableResult::DescribeOptimizeAdviceOnBigTableResult() :
	ServiceResult()
{}

DescribeOptimizeAdviceOnBigTableResult::DescribeOptimizeAdviceOnBigTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOptimizeAdviceOnBigTableResult::~DescribeOptimizeAdviceOnBigTableResult()
{}

void DescribeOptimizeAdviceOnBigTableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["AdviceOnBigTable"];
	for (auto value : allItems)
	{
		AdviceOnBigTable adviceOnBigTableObject;
		adviceOnBigTableObject.dBName = value["DBName"].asString();
		adviceOnBigTableObject.tableName = value["TableName"].asString();
		adviceOnBigTableObject.tableSize = std::stol(value["TableSize"].asString());
		adviceOnBigTableObject.dataSize = std::stol(value["DataSize"].asString());
		adviceOnBigTableObject.indexSize = std::stol(value["IndexSize"].asString());
		items_.push_back(adviceOnBigTableObject);
	}
	totalRecordsCount_ = std::stoi(value["TotalRecordsCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeOptimizeAdviceOnBigTableResult::getTotalRecordsCount()const
{
	return totalRecordsCount_;
}

void DescribeOptimizeAdviceOnBigTableResult::setTotalRecordsCount(int totalRecordsCount)
{
	totalRecordsCount_ = totalRecordsCount;
}

int DescribeOptimizeAdviceOnBigTableResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeOptimizeAdviceOnBigTableResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeOptimizeAdviceOnBigTableResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeOptimizeAdviceOnBigTableResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

