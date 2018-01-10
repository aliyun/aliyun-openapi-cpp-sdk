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

#include <alibabacloud/rds/model/DescribeTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeTasksResult::DescribeTasksResult() :
	ServiceResult()
{}

DescribeTasksResult::DescribeTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTasksResult::~DescribeTasksResult()
{}

void DescribeTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["TaskProgressInfo"];
	for (auto value : allItems)
	{
		TaskProgressInfo taskProgressInfoObject;
		taskProgressInfoObject.dBName = value["DBName"].asString();
		taskProgressInfoObject.beginTime = value["BeginTime"].asString();
		taskProgressInfoObject.progressInfo = value["ProgressInfo"].asString();
		taskProgressInfoObject.finishTime = value["FinishTime"].asString();
		taskProgressInfoObject.taskAction = value["TaskAction"].asString();
		taskProgressInfoObject.taskId = value["TaskId"].asString();
		taskProgressInfoObject.progress = value["Progress"].asString();
		taskProgressInfoObject.expectedFinishTime = value["ExpectedFinishTime"].asString();
		taskProgressInfoObject.status = value["Status"].asString();
		taskProgressInfoObject.taskErrorCode = value["TaskErrorCode"].asString();
		taskProgressInfoObject.taskErrorMessage = value["TaskErrorMessage"].asString();
		items_.push_back(taskProgressInfoObject);
	}
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeTasksResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeTasksResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeTasksResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeTasksResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeTasksResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTasksResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

