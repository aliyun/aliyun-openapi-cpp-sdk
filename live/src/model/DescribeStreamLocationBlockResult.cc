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

#include <alibabacloud/live/model/DescribeStreamLocationBlockResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeStreamLocationBlockResult::DescribeStreamLocationBlockResult() :
	ServiceResult()
{}

DescribeStreamLocationBlockResult::DescribeStreamLocationBlockResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStreamLocationBlockResult::~DescribeStreamLocationBlockResult()
{}

void DescribeStreamLocationBlockResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStreamBlockListNode = value["StreamBlockList"]["StreamBlock"];
	for (auto valueStreamBlockListStreamBlock : allStreamBlockListNode)
	{
		StreamBlock streamBlockListObject;
		if(!valueStreamBlockListStreamBlock["AppName"].isNull())
			streamBlockListObject.appName = valueStreamBlockListStreamBlock["AppName"].asString();
		if(!valueStreamBlockListStreamBlock["BlockType"].isNull())
			streamBlockListObject.blockType = valueStreamBlockListStreamBlock["BlockType"].asString();
		if(!valueStreamBlockListStreamBlock["DomainName"].isNull())
			streamBlockListObject.domainName = valueStreamBlockListStreamBlock["DomainName"].asString();
		if(!valueStreamBlockListStreamBlock["LocationList"].isNull())
			streamBlockListObject.locationList = valueStreamBlockListStreamBlock["LocationList"].asString();
		if(!valueStreamBlockListStreamBlock["ReleaseTime"].isNull())
			streamBlockListObject.releaseTime = valueStreamBlockListStreamBlock["ReleaseTime"].asString();
		if(!valueStreamBlockListStreamBlock["Status"].isNull())
			streamBlockListObject.status = std::stoi(valueStreamBlockListStreamBlock["Status"].asString());
		if(!valueStreamBlockListStreamBlock["StreamName"].isNull())
			streamBlockListObject.streamName = valueStreamBlockListStreamBlock["StreamName"].asString();
		if(!valueStreamBlockListStreamBlock["UpdateTime"].isNull())
			streamBlockListObject.updateTime = valueStreamBlockListStreamBlock["UpdateTime"].asString();
		streamBlockList_.push_back(streamBlockListObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

int DescribeStreamLocationBlockResult::getPageNum()const
{
	return pageNum_;
}

int DescribeStreamLocationBlockResult::getPageSize()const
{
	return pageSize_;
}

int DescribeStreamLocationBlockResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeStreamLocationBlockResult::StreamBlock> DescribeStreamLocationBlockResult::getStreamBlockList()const
{
	return streamBlockList_;
}

int DescribeStreamLocationBlockResult::getCount()const
{
	return count_;
}

