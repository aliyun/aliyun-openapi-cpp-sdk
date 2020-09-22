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

#include <alibabacloud/vs/model/DescribeRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeRecordsResult::DescribeRecordsResult() :
	ServiceResult()
{}

DescribeRecordsResult::DescribeRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRecordsResult::~DescribeRecordsResult()
{}

void DescribeRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsNode = value["Records"]["Record"];
	for (auto valueRecordsRecord : allRecordsNode)
	{
		Record recordsObject;
		if(!valueRecordsRecord["Id"].isNull())
			recordsObject.id = valueRecordsRecord["Id"].asString();
		if(!valueRecordsRecord["StreamId"].isNull())
			recordsObject.streamId = valueRecordsRecord["StreamId"].asString();
		if(!valueRecordsRecord["TemplateId"].isNull())
			recordsObject.templateId = valueRecordsRecord["TemplateId"].asString();
		if(!valueRecordsRecord["Type"].isNull())
			recordsObject.type = valueRecordsRecord["Type"].asString();
		if(!valueRecordsRecord["Url"].isNull())
			recordsObject.url = valueRecordsRecord["Url"].asString();
		if(!valueRecordsRecord["FileFormat"].isNull())
			recordsObject.fileFormat = valueRecordsRecord["FileFormat"].asString();
		if(!valueRecordsRecord["OssBucket"].isNull())
			recordsObject.ossBucket = valueRecordsRecord["OssBucket"].asString();
		if(!valueRecordsRecord["OssObject"].isNull())
			recordsObject.ossObject = valueRecordsRecord["OssObject"].asString();
		if(!valueRecordsRecord["OssEndpoint"].isNull())
			recordsObject.ossEndpoint = valueRecordsRecord["OssEndpoint"].asString();
		if(!valueRecordsRecord["StartTime"].isNull())
			recordsObject.startTime = valueRecordsRecord["StartTime"].asString();
		if(!valueRecordsRecord["EndTime"].isNull())
			recordsObject.endTime = valueRecordsRecord["EndTime"].asString();
		if(!valueRecordsRecord["Height"].isNull())
			recordsObject.height = std::stol(valueRecordsRecord["Height"].asString());
		if(!valueRecordsRecord["Width"].isNull())
			recordsObject.width = std::stol(valueRecordsRecord["Width"].asString());
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
	if(!value["NextStartTime"].isNull())
		nextStartTime_ = value["NextStartTime"].asString();

}

long DescribeRecordsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeRecordsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeRecordsResult::getPageNum()const
{
	return pageNum_;
}

long DescribeRecordsResult::getPageCount()const
{
	return pageCount_;
}

std::string DescribeRecordsResult::getNextStartTime()const
{
	return nextStartTime_;
}

std::vector<DescribeRecordsResult::Record> DescribeRecordsResult::getRecords()const
{
	return records_;
}

