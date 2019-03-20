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

#include <alibabacloud/alidns/model/DescribeRecordLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeRecordLogsResult::DescribeRecordLogsResult() :
	ServiceResult()
{}

DescribeRecordLogsResult::DescribeRecordLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRecordLogsResult::~DescribeRecordLogsResult()
{}

void DescribeRecordLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRecordLogs = value["RecordLogs"]["RecordLog"];
	for (auto value : allRecordLogs)
	{
		RecordLog recordLogsObject;
		if(!value["ActionTime"].isNull())
			recordLogsObject.actionTime = value["ActionTime"].asString();
		if(!value["ActionTimestamp"].isNull())
			recordLogsObject.actionTimestamp = std::stol(value["ActionTimestamp"].asString());
		if(!value["Action"].isNull())
			recordLogsObject.action = value["Action"].asString();
		if(!value["Message"].isNull())
			recordLogsObject.message = value["Message"].asString();
		if(!value["ClientIp"].isNull())
			recordLogsObject.clientIp = value["ClientIp"].asString();
		recordLogs_.push_back(recordLogsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribeRecordLogsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeRecordLogsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeRecordLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRecordLogsResult::RecordLog> DescribeRecordLogsResult::getRecordLogs()const
{
	return recordLogs_;
}

