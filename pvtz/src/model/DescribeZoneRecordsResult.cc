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

#include <alibabacloud/pvtz/model/DescribeZoneRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Pvtz;
using namespace AlibabaCloud::Pvtz::Model;

DescribeZoneRecordsResult::DescribeZoneRecordsResult() :
	ServiceResult()
{}

DescribeZoneRecordsResult::DescribeZoneRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeZoneRecordsResult::~DescribeZoneRecordsResult()
{}

void DescribeZoneRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsNode = value["Records"]["Record"];
	for (auto valueRecordsRecord : allRecordsNode)
	{
		Record recordsObject;
		if(!valueRecordsRecord["RecordId"].isNull())
			recordsObject.recordId = std::stol(valueRecordsRecord["RecordId"].asString());
		if(!valueRecordsRecord["Rr"].isNull())
			recordsObject.rr = valueRecordsRecord["Rr"].asString();
		if(!valueRecordsRecord["Type"].isNull())
			recordsObject.type = valueRecordsRecord["Type"].asString();
		if(!valueRecordsRecord["Ttl"].isNull())
			recordsObject.ttl = std::stoi(valueRecordsRecord["Ttl"].asString());
		if(!valueRecordsRecord["Priority"].isNull())
			recordsObject.priority = std::stoi(valueRecordsRecord["Priority"].asString());
		if(!valueRecordsRecord["Value"].isNull())
			recordsObject.value = valueRecordsRecord["Value"].asString();
		if(!valueRecordsRecord["Status"].isNull())
			recordsObject.status = valueRecordsRecord["Status"].asString();
		if(!valueRecordsRecord["RegionId"].isNull())
			recordsObject.regionId = valueRecordsRecord["RegionId"].asString();
		if(!valueRecordsRecord["Remark"].isNull())
			recordsObject.remark = valueRecordsRecord["Remark"].asString();
		records_.push_back(recordsObject);
	}
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeZoneRecordsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeZoneRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeZoneRecordsResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeZoneRecordsResult::getTotalItems()const
{
	return totalItems_;
}

std::vector<DescribeZoneRecordsResult::Record> DescribeZoneRecordsResult::getRecords()const
{
	return records_;
}

