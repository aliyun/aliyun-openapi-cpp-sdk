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

#include <alibabacloud/live/model/DescribeRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

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
	auto allRecords = value["Records"]["Record"];
	for (auto value : allRecords)
	{
		Record recordsObject;
		if(!value["RecordId"].isNull())
			recordsObject.recordId = value["RecordId"].asString();
		if(!value["AppId"].isNull())
			recordsObject.appId = value["AppId"].asString();
		if(!value["BoardId"].isNull())
			recordsObject.boardId = std::stoi(value["BoardId"].asString());
		if(!value["RecordStartTime"].isNull())
			recordsObject.recordStartTime = std::stol(value["RecordStartTime"].asString());
		if(!value["StartTime"].isNull())
			recordsObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			recordsObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["State"].isNull())
			recordsObject.state = std::stoi(value["State"].asString());
		if(!value["OssPath"].isNull())
			recordsObject.ossPath = value["OssPath"].asString();
		if(!value["OssBucket"].isNull())
			recordsObject.ossBucket = value["OssBucket"].asString();
		if(!value["OssEndpoint"].isNull())
			recordsObject.ossEndpoint = value["OssEndpoint"].asString();
		records_.push_back(recordsObject);
	}

}

std::vector<DescribeRecordsResult::Record> DescribeRecordsResult::getRecords()const
{
	return records_;
}

