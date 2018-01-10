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

#include <alibabacloud/rds/model/DescribeOptimizeAdviceOnStorageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeOptimizeAdviceOnStorageResult::DescribeOptimizeAdviceOnStorageResult() :
	ServiceResult()
{}

DescribeOptimizeAdviceOnStorageResult::DescribeOptimizeAdviceOnStorageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOptimizeAdviceOnStorageResult::~DescribeOptimizeAdviceOnStorageResult()
{}

void DescribeOptimizeAdviceOnStorageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["AdviceOnStorage"];
	for (auto value : allItems)
	{
		AdviceOnStorage adviceOnStorageObject;
		adviceOnStorageObject.dBName = value["DBName"].asString();
		adviceOnStorageObject.tableName = value["TableName"].asString();
		adviceOnStorageObject.currentEngine = value["CurrentEngine"].asString();
		adviceOnStorageObject.adviseEngine = value["AdviseEngine"].asString();
		items_.push_back(adviceOnStorageObject);
	}
	dBInstanceId_ = value["DBInstanceId"].asString();
	totalRecordsCount_ = std::stoi(value["TotalRecordsCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeOptimizeAdviceOnStorageResult::getTotalRecordsCount()const
{
	return totalRecordsCount_;
}

void DescribeOptimizeAdviceOnStorageResult::setTotalRecordsCount(int totalRecordsCount)
{
	totalRecordsCount_ = totalRecordsCount;
}

int DescribeOptimizeAdviceOnStorageResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeOptimizeAdviceOnStorageResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

std::string DescribeOptimizeAdviceOnStorageResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeOptimizeAdviceOnStorageResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

int DescribeOptimizeAdviceOnStorageResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeOptimizeAdviceOnStorageResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

