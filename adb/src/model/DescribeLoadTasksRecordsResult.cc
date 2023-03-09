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

#include <alibabacloud/adb/model/DescribeLoadTasksRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeLoadTasksRecordsResult::DescribeLoadTasksRecordsResult() :
	ServiceResult()
{}

DescribeLoadTasksRecordsResult::DescribeLoadTasksRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadTasksRecordsResult::~DescribeLoadTasksRecordsResult()
{}

void DescribeLoadTasksRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLoadTasksRecordsNode = value["LoadTasksRecords"]["LoadTaskRecord"];
	for (auto valueLoadTasksRecordsLoadTaskRecord : allLoadTasksRecordsNode)
	{
		LoadTaskRecord loadTasksRecordsObject;
		if(!valueLoadTasksRecordsLoadTaskRecord["Sql"].isNull())
			loadTasksRecordsObject.sql = valueLoadTasksRecordsLoadTaskRecord["Sql"].asString();
		if(!valueLoadTasksRecordsLoadTaskRecord["State"].isNull())
			loadTasksRecordsObject.state = valueLoadTasksRecordsLoadTaskRecord["State"].asString();
		if(!valueLoadTasksRecordsLoadTaskRecord["CreateTime"].isNull())
			loadTasksRecordsObject.createTime = valueLoadTasksRecordsLoadTaskRecord["CreateTime"].asString();
		if(!valueLoadTasksRecordsLoadTaskRecord["DBName"].isNull())
			loadTasksRecordsObject.dBName = valueLoadTasksRecordsLoadTaskRecord["DBName"].asString();
		if(!valueLoadTasksRecordsLoadTaskRecord["ProcessID"].isNull())
			loadTasksRecordsObject.processID = valueLoadTasksRecordsLoadTaskRecord["ProcessID"].asString();
		if(!valueLoadTasksRecordsLoadTaskRecord["UpdateTime"].isNull())
			loadTasksRecordsObject.updateTime = valueLoadTasksRecordsLoadTaskRecord["UpdateTime"].asString();
		if(!valueLoadTasksRecordsLoadTaskRecord["JobName"].isNull())
			loadTasksRecordsObject.jobName = valueLoadTasksRecordsLoadTaskRecord["JobName"].asString();
		if(!valueLoadTasksRecordsLoadTaskRecord["ProcessRows"].isNull())
			loadTasksRecordsObject.processRows = std::stol(valueLoadTasksRecordsLoadTaskRecord["ProcessRows"].asString());
		loadTasksRecords_.push_back(loadTasksRecordsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeLoadTasksRecordsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeLoadTasksRecordsResult::LoadTaskRecord> DescribeLoadTasksRecordsResult::getLoadTasksRecords()const
{
	return loadTasksRecords_;
}

std::string DescribeLoadTasksRecordsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeLoadTasksRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeLoadTasksRecordsResult::getDBClusterId()const
{
	return dBClusterId_;
}

