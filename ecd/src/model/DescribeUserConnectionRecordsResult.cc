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

#include <alibabacloud/ecd/model/DescribeUserConnectionRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeUserConnectionRecordsResult::DescribeUserConnectionRecordsResult() :
	ServiceResult()
{}

DescribeUserConnectionRecordsResult::DescribeUserConnectionRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserConnectionRecordsResult::~DescribeUserConnectionRecordsResult()
{}

void DescribeUserConnectionRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConnectionRecordsNode = value["ConnectionRecords"]["ConnectionRecord"];
	for (auto valueConnectionRecordsConnectionRecord : allConnectionRecordsNode)
	{
		ConnectionRecord connectionRecordsObject;
		if(!valueConnectionRecordsConnectionRecord["ConnectionRecordId"].isNull())
			connectionRecordsObject.connectionRecordId = valueConnectionRecordsConnectionRecord["ConnectionRecordId"].asString();
		if(!valueConnectionRecordsConnectionRecord["ConnectStartTime"].isNull())
			connectionRecordsObject.connectStartTime = valueConnectionRecordsConnectionRecord["ConnectStartTime"].asString();
		if(!valueConnectionRecordsConnectionRecord["DesktopName"].isNull())
			connectionRecordsObject.desktopName = valueConnectionRecordsConnectionRecord["DesktopName"].asString();
		if(!valueConnectionRecordsConnectionRecord["ConnectDuration"].isNull())
			connectionRecordsObject.connectDuration = valueConnectionRecordsConnectionRecord["ConnectDuration"].asString();
		if(!valueConnectionRecordsConnectionRecord["ConnectEndTime"].isNull())
			connectionRecordsObject.connectEndTime = valueConnectionRecordsConnectionRecord["ConnectEndTime"].asString();
		if(!valueConnectionRecordsConnectionRecord["DesktopId"].isNull())
			connectionRecordsObject.desktopId = valueConnectionRecordsConnectionRecord["DesktopId"].asString();
		connectionRecords_.push_back(connectionRecordsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeUserConnectionRecordsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeUserConnectionRecordsResult::ConnectionRecord> DescribeUserConnectionRecordsResult::getConnectionRecords()const
{
	return connectionRecords_;
}

