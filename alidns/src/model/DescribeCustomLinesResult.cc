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

#include <alibabacloud/alidns/model/DescribeCustomLinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeCustomLinesResult::DescribeCustomLinesResult() :
	ServiceResult()
{}

DescribeCustomLinesResult::DescribeCustomLinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomLinesResult::~DescribeCustomLinesResult()
{}

void DescribeCustomLinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomLinesNode = value["CustomLines"]["CustomLine"];
	for (auto valueCustomLinesCustomLine : allCustomLinesNode)
	{
		CustomLine customLinesObject;
		if(!valueCustomLinesCustomLine["CreateTime"].isNull())
			customLinesObject.createTime = valueCustomLinesCustomLine["CreateTime"].asString();
		if(!valueCustomLinesCustomLine["Code"].isNull())
			customLinesObject.code = valueCustomLinesCustomLine["Code"].asString();
		if(!valueCustomLinesCustomLine["Name"].isNull())
			customLinesObject.name = valueCustomLinesCustomLine["Name"].asString();
		if(!valueCustomLinesCustomLine["IpSegments"].isNull())
			customLinesObject.ipSegments = valueCustomLinesCustomLine["IpSegments"].asString();
		if(!valueCustomLinesCustomLine["Id"].isNull())
			customLinesObject.id = std::stol(valueCustomLinesCustomLine["Id"].asString());
		if(!valueCustomLinesCustomLine["CreateTimestamp"].isNull())
			customLinesObject.createTimestamp = std::stol(valueCustomLinesCustomLine["CreateTimestamp"].asString());
		auto allIpSegmentListNode = valueCustomLinesCustomLine["IpSegmentList"]["IpSegment"];
		for (auto valueCustomLinesCustomLineIpSegmentListIpSegment : allIpSegmentListNode)
		{
			CustomLine::IpSegment ipSegmentListObject;
			if(!valueCustomLinesCustomLineIpSegmentListIpSegment["EndIp"].isNull())
				ipSegmentListObject.endIp = valueCustomLinesCustomLineIpSegmentListIpSegment["EndIp"].asString();
			if(!valueCustomLinesCustomLineIpSegmentListIpSegment["StartIp"].isNull())
				ipSegmentListObject.startIp = valueCustomLinesCustomLineIpSegmentListIpSegment["StartIp"].asString();
			if(!valueCustomLinesCustomLineIpSegmentListIpSegment["Name"].isNull())
				ipSegmentListObject.name = valueCustomLinesCustomLineIpSegmentListIpSegment["Name"].asString();
			customLinesObject.ipSegmentList.push_back(ipSegmentListObject);
		}
		customLines_.push_back(customLinesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());

}

int DescribeCustomLinesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCustomLinesResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeCustomLinesResult::getTotalPages()const
{
	return totalPages_;
}

std::vector<DescribeCustomLinesResult::CustomLine> DescribeCustomLinesResult::getCustomLines()const
{
	return customLines_;
}

int DescribeCustomLinesResult::getTotalItems()const
{
	return totalItems_;
}

