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

#include <alibabacloud/polardb/model/DescribeNetworkChannelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeNetworkChannelResult::DescribeNetworkChannelResult() :
	ServiceResult()
{}

DescribeNetworkChannelResult::DescribeNetworkChannelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkChannelResult::~DescribeNetworkChannelResult()
{}

void DescribeNetworkChannelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allChannelInfosNode = value["ChannelInfos"]["ChannelInfosItem"];
	for (auto valueChannelInfosChannelInfosItem : allChannelInfosNode)
	{
		ChannelInfosItem channelInfosObject;
		if(!valueChannelInfosChannelInfosItem["ChannelName"].isNull())
			channelInfosObject.channelName = valueChannelInfosChannelInfosItem["ChannelName"].asString();
		if(!valueChannelInfosChannelInfosItem["DBClusterId"].isNull())
			channelInfosObject.dBClusterId = valueChannelInfosChannelInfosItem["DBClusterId"].asString();
		if(!valueChannelInfosChannelInfosItem["Notes"].isNull())
			channelInfosObject.notes = valueChannelInfosChannelInfosItem["Notes"].asString();
		if(!valueChannelInfosChannelInfosItem["RegionId"].isNull())
			channelInfosObject.regionId = valueChannelInfosChannelInfosItem["RegionId"].asString();
		if(!valueChannelInfosChannelInfosItem["TargetDBClusterId"].isNull())
			channelInfosObject.targetDBClusterId = valueChannelInfosChannelInfosItem["TargetDBClusterId"].asString();
		if(!valueChannelInfosChannelInfosItem["TargetIp"].isNull())
			channelInfosObject.targetIp = valueChannelInfosChannelInfosItem["TargetIp"].asString();
		if(!valueChannelInfosChannelInfosItem["TargetPort"].isNull())
			channelInfosObject.targetPort = valueChannelInfosChannelInfosItem["TargetPort"].asString();
		if(!valueChannelInfosChannelInfosItem["TargetType"].isNull())
			channelInfosObject.targetType = valueChannelInfosChannelInfosItem["TargetType"].asString();
		if(!valueChannelInfosChannelInfosItem["VpcId"].isNull())
			channelInfosObject.vpcId = valueChannelInfosChannelInfosItem["VpcId"].asString();
		channelInfos_.push_back(channelInfosObject);
	}

}

std::vector<DescribeNetworkChannelResult::ChannelInfosItem> DescribeNetworkChannelResult::getChannelInfos()const
{
	return channelInfos_;
}

