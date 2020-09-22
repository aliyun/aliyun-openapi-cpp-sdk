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

#include <alibabacloud/vs/model/DescribeDeviceChannelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeDeviceChannelsResult::DescribeDeviceChannelsResult() :
	ServiceResult()
{}

DescribeDeviceChannelsResult::DescribeDeviceChannelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeviceChannelsResult::~DescribeDeviceChannelsResult()
{}

void DescribeDeviceChannelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allChannelsNode = value["Channels"]["Channel"];
	for (auto valueChannelsChannel : allChannelsNode)
	{
		Channel channelsObject;
		if(!valueChannelsChannel["Name"].isNull())
			channelsObject.name = valueChannelsChannel["Name"].asString();
		if(!valueChannelsChannel["GbId"].isNull())
			channelsObject.gbId = valueChannelsChannel["GbId"].asString();
		if(!valueChannelsChannel["StreamId"].isNull())
			channelsObject.streamId = valueChannelsChannel["StreamId"].asString();
		if(!valueChannelsChannel["StreamStatus"].isNull())
			channelsObject.streamStatus = valueChannelsChannel["StreamStatus"].asString();
		if(!valueChannelsChannel["DeviceId"].isNull())
			channelsObject.deviceId = valueChannelsChannel["DeviceId"].asString();
		if(!valueChannelsChannel["DeviceStatus"].isNull())
			channelsObject.deviceStatus = valueChannelsChannel["DeviceStatus"].asString();
		if(!valueChannelsChannel["ChannelId"].isNull())
			channelsObject.channelId = std::stol(valueChannelsChannel["ChannelId"].asString());
		if(!valueChannelsChannel["Params"].isNull())
			channelsObject.params = valueChannelsChannel["Params"].asString();
		channels_.push_back(channelsObject);
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

long DescribeDeviceChannelsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDeviceChannelsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDeviceChannelsResult::getPageNum()const
{
	return pageNum_;
}

long DescribeDeviceChannelsResult::getPageCount()const
{
	return pageCount_;
}

std::vector<DescribeDeviceChannelsResult::Channel> DescribeDeviceChannelsResult::getChannels()const
{
	return channels_;
}

