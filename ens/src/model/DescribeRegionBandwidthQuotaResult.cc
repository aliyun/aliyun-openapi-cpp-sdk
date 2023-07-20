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

#include <alibabacloud/ens/model/DescribeRegionBandwidthQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeRegionBandwidthQuotaResult::DescribeRegionBandwidthQuotaResult() :
	ServiceResult()
{}

DescribeRegionBandwidthQuotaResult::DescribeRegionBandwidthQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRegionBandwidthQuotaResult::~DescribeRegionBandwidthQuotaResult()
{}

void DescribeRegionBandwidthQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBandwidthQuotaNode = value["BandwidthQuota"]["带宽配额"];
	for (auto valueBandwidthQuota带宽配额 : allBandwidthQuotaNode)
	{
		带宽配额 bandwidthQuotaObject;
		if(!valueBandwidthQuota带宽配额["RegionId"].isNull())
			bandwidthQuotaObject.regionId = valueBandwidthQuota带宽配额["RegionId"].asString();
		if(!valueBandwidthQuota带宽配额["Date"].isNull())
			bandwidthQuotaObject.date = valueBandwidthQuota带宽配额["Date"].asString();
		auto allInstanceInfoNode = valueBandwidthQuota带宽配额["InstanceInfo"]["实例信息"];
		for (auto valueBandwidthQuota带宽配额InstanceInfo实例信息 : allInstanceInfoNode)
		{
			带宽配额::实例信息 instanceInfoObject;
			if(!valueBandwidthQuota带宽配额InstanceInfo实例信息["InstanceSpec"].isNull())
				instanceInfoObject.instanceSpec = valueBandwidthQuota带宽配额InstanceInfo实例信息["InstanceSpec"].asString();
			if(!valueBandwidthQuota带宽配额InstanceInfo实例信息["InstanceNumber"].isNull())
				instanceInfoObject.instanceNumber = std::stol(valueBandwidthQuota带宽配额InstanceInfo实例信息["InstanceNumber"].asString());
			bandwidthQuotaObject.instanceInfo.push_back(instanceInfoObject);
		}
		auto allBandwidthInfoNode = valueBandwidthQuota带宽配额["BandwidthInfo"]["带宽信息"];
		for (auto valueBandwidthQuota带宽配额BandwidthInfo带宽信息 : allBandwidthInfoNode)
		{
			带宽配额::带宽信息 bandwidthInfoObject;
			if(!valueBandwidthQuota带宽配额BandwidthInfo带宽信息["MonthMax"].isNull())
				bandwidthInfoObject.monthMax = std::stol(valueBandwidthQuota带宽配额BandwidthInfo带宽信息["MonthMax"].asString());
			if(!valueBandwidthQuota带宽配额BandwidthInfo带宽信息["WeekMax"].isNull())
				bandwidthInfoObject.weekMax = std::stol(valueBandwidthQuota带宽配额BandwidthInfo带宽信息["WeekMax"].asString());
			if(!valueBandwidthQuota带宽配额BandwidthInfo带宽信息["MonthAverageQuota"].isNull())
				bandwidthInfoObject.monthAverageQuota = std::stol(valueBandwidthQuota带宽配额BandwidthInfo带宽信息["MonthAverageQuota"].asString());
			if(!valueBandwidthQuota带宽配额BandwidthInfo带宽信息["WeekAverageQuota"].isNull())
				bandwidthInfoObject.weekAverageQuota = std::stol(valueBandwidthQuota带宽配额BandwidthInfo带宽信息["WeekAverageQuota"].asString());
			if(!valueBandwidthQuota带宽配额BandwidthInfo带宽信息["Isp"].isNull())
				bandwidthInfoObject.isp = valueBandwidthQuota带宽配额BandwidthInfo带宽信息["Isp"].asString();
			bandwidthQuotaObject.bandwidthInfo.push_back(bandwidthInfoObject);
		}
		bandwidthQuota_.push_back(bandwidthQuotaObject);
	}

}

std::vector<DescribeRegionBandwidthQuotaResult::带宽配额> DescribeRegionBandwidthQuotaResult::getBandwidthQuota()const
{
	return bandwidthQuota_;
}

