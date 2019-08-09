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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["TaskProgressInfo"];
	for (auto value : allItems)
	{
		TaskProgressInfo itemsObject;
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["BeginTime"].isNull())
			itemsObject.beginTime = value["BeginTime"].asString();
		if(!value["ProgressInfo"].isNull())
			itemsObject.progressInfo = value["ProgressInfo"].asString();
		if(!value["FinishTime"].isNull())
			itemsObject.finishTime = value["FinishTime"].asString();
		if(!value["TaskAction"].isNull())
			itemsObject.taskAction = value["TaskAction"].asString();
		if(!value["TaskId"].isNull())
			itemsObject.taskId = value["TaskId"].asString();
		if(!value["Progress"].isNull())
			itemsObject.progress = value["Progress"].asString();
		if(!value["ExpectedFinishTime"].isNull())
			itemsObject.expectedFinishTime = value["ExpectedFinishTime"].asString();
		if(!value["Status"].isNull())
			itemsObject.status = value["Status"].asString();
		if(!value["TaskErrorCode"].isNull())
			itemsObject.taskErrorCode = value["TaskErrorCode"].asString();
		if(!value["TaskErrorMessage"].isNull())
			itemsObject.taskErrorMessage = value["TaskErrorMessage"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeTasksResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeTasksResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeTasksResult::TaskProgressInfo> DescribeTasksResult::getItems()const
{
	return items_;
}

