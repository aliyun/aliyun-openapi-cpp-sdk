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

#include <alibabacloud/vs/model/DescribeStreamsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeStreamsResult::DescribeStreamsResult() :
	ServiceResult()
{}

DescribeStreamsResult::DescribeStreamsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStreamsResult::~DescribeStreamsResult()
{}

void DescribeStreamsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStreamsNode = value["Streams"]["Stream"];
	for (auto valueStreamsStream : allStreamsNode)
	{
		Stream streamsObject;
		if(!valueStreamsStream["Id"].isNull())
			streamsObject.id = valueStreamsStream["Id"].asString();
		if(!valueStreamsStream["Name"].isNull())
			streamsObject.name = valueStreamsStream["Name"].asString();
		if(!valueStreamsStream["PushDomain"].isNull())
			streamsObject.pushDomain = valueStreamsStream["PushDomain"].asString();
		if(!valueStreamsStream["PlayDomain"].isNull())
			streamsObject.playDomain = valueStreamsStream["PlayDomain"].asString();
		if(!valueStreamsStream["App"].isNull())
			streamsObject.app = valueStreamsStream["App"].asString();
		if(!valueStreamsStream["Protocol"].isNull())
			streamsObject.protocol = valueStreamsStream["Protocol"].asString();
		if(!valueStreamsStream["GroupId"].isNull())
			streamsObject.groupId = valueStreamsStream["GroupId"].asString();
		if(!valueStreamsStream["DeviceId"].isNull())
			streamsObject.deviceId = valueStreamsStream["DeviceId"].asString();
		if(!valueStreamsStream["Enabled"].isNull())
			streamsObject.enabled = valueStreamsStream["Enabled"].asString() == "true";
		if(!valueStreamsStream["Status"].isNull())
			streamsObject.status = valueStreamsStream["Status"].asString();
		if(!valueStreamsStream["Height"].isNull())
			streamsObject.height = std::stoi(valueStreamsStream["Height"].asString());
		if(!valueStreamsStream["Width"].isNull())
			streamsObject.width = std::stoi(valueStreamsStream["Width"].asString());
		if(!valueStreamsStream["CreatedTime"].isNull())
			streamsObject.createdTime = valueStreamsStream["CreatedTime"].asString();
		streams_.push_back(streamsObject);
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

long DescribeStreamsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeStreamsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeStreamsResult::getPageNum()const
{
	return pageNum_;
}

long DescribeStreamsResult::getPageCount()const
{
	return pageCount_;
}

std::vector<DescribeStreamsResult::Stream> DescribeStreamsResult::getStreams()const
{
	return streams_;
}

