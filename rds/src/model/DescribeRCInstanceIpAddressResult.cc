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

#include <alibabacloud/rds/model/DescribeRCInstanceIpAddressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCInstanceIpAddressResult::DescribeRCInstanceIpAddressResult() :
	ServiceResult()
{}

DescribeRCInstanceIpAddressResult::DescribeRCInstanceIpAddressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCInstanceIpAddressResult::~DescribeRCInstanceIpAddressResult()
{}

void DescribeRCInstanceIpAddressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRCInstanceListNode = value["RCInstanceList"]["RCInstanceListItem"];
	for (auto valueRCInstanceListRCInstanceListItem : allRCInstanceListNode)
	{
		RCInstanceListItem rCInstanceListObject;
		if(!valueRCInstanceListRCInstanceListItem["InstanceId"].isNull())
			rCInstanceListObject.instanceId = valueRCInstanceListRCInstanceListItem["InstanceId"].asString();
		if(!valueRCInstanceListRCInstanceListItem["InstanceType"].isNull())
			rCInstanceListObject.instanceType = valueRCInstanceListRCInstanceListItem["InstanceType"].asString();
		if(!valueRCInstanceListRCInstanceListItem["InstanceName"].isNull())
			rCInstanceListObject.instanceName = valueRCInstanceListRCInstanceListItem["InstanceName"].asString();
		if(!valueRCInstanceListRCInstanceListItem["InstanceStatus"].isNull())
			rCInstanceListObject.instanceStatus = valueRCInstanceListRCInstanceListItem["InstanceStatus"].asString();
		auto allIpAddressConfigNode = valueRCInstanceListRCInstanceListItem["IpAddressConfig"]["IpAddressConfigItem"];
		for (auto valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem : allIpAddressConfigNode)
		{
			RCInstanceListItem::IpAddressConfigItem ipAddressConfigObject;
			if(!valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["InstanceIp"].isNull())
				ipAddressConfigObject.instanceIp = valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["InstanceIp"].asString();
			if(!valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["IsBgppack"].isNull())
				ipAddressConfigObject.isBgppack = valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["IsBgppack"].asString() == "true";
			if(!valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["IpVersion"].isNull())
				ipAddressConfigObject.ipVersion = valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["IpVersion"].asString();
			if(!valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["IpStatus"].isNull())
				ipAddressConfigObject.ipStatus = valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["IpStatus"].asString();
			if(!valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["RegionId"].isNull())
				ipAddressConfigObject.regionId = valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["RegionId"].asString();
			if(!valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["ElasticThreshold"].isNull())
				ipAddressConfigObject.elasticThreshold = std::stoi(valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["ElasticThreshold"].asString());
			if(!valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["BlackholeThreshold"].isNull())
				ipAddressConfigObject.blackholeThreshold = std::stoi(valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["BlackholeThreshold"].asString());
			if(!valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["DefenseBpsThreshold"].isNull())
				ipAddressConfigObject.defenseBpsThreshold = std::stoi(valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["DefenseBpsThreshold"].asString());
			if(!valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["DefensePpsThreshold"].isNull())
				ipAddressConfigObject.defensePpsThreshold = std::stoi(valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["DefensePpsThreshold"].asString());
			if(!valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["IsFullProtection"].isNull())
				ipAddressConfigObject.isFullProtection = std::stoi(valueRCInstanceListRCInstanceListItemIpAddressConfigIpAddressConfigItem["IsFullProtection"].asString());
			rCInstanceListObject.ipAddressConfig.push_back(ipAddressConfigObject);
		}
		rCInstanceList_.push_back(rCInstanceListObject);
	}
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::vector<DescribeRCInstanceIpAddressResult::RCInstanceListItem> DescribeRCInstanceIpAddressResult::getRCInstanceList()const
{
	return rCInstanceList_;
}

std::string DescribeRCInstanceIpAddressResult::getTotal()const
{
	return total_;
}

