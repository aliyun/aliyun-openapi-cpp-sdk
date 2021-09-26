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

#include <alibabacloud/vs/model/ListDeviceRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

ListDeviceRecordsResult::ListDeviceRecordsResult() :
	ServiceResult()
{}

ListDeviceRecordsResult::ListDeviceRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeviceRecordsResult::~ListDeviceRecordsResult()
{}

void ListDeviceRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsNode = value["Records"]["Record"];
	for (auto valueRecordsRecord : allRecordsNode)
	{
		Record recordsObject;
		if(!valueRecordsRecord["Filename"].isNull())
			recordsObject.filename = valueRecordsRecord["Filename"].asString();
		if(!valueRecordsRecord["StartTime"].isNull())
			recordsObject.startTime = valueRecordsRecord["StartTime"].asString();
		if(!valueRecordsRecord["EndTime"].isNull())
			recordsObject.endTime = valueRecordsRecord["EndTime"].asString();
		if(!valueRecordsRecord["RecordType"].isNull())
			recordsObject.recordType = valueRecordsRecord["RecordType"].asString();
		if(!valueRecordsRecord["FileSize"].isNull())
			recordsObject.fileSize = std::stol(valueRecordsRecord["FileSize"].asString());
		records_.push_back(recordsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stol(value["PageCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListDeviceRecordsResult::getTotalCount()const
{
	return totalCount_;
}

long ListDeviceRecordsResult::getPageSize()const
{
	return pageSize_;
}

long ListDeviceRecordsResult::getPageNum()const
{
	return pageNum_;
}

long ListDeviceRecordsResult::getPageCount()const
{
	return pageCount_;
}

std::vector<ListDeviceRecordsResult::Record> ListDeviceRecordsResult::getRecords()const
{
	return records_;
}

