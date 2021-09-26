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

#include <alibabacloud/vs/model/DescribeRenderingDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeRenderingDevicesResult::DescribeRenderingDevicesResult() :
	ServiceResult()
{}

DescribeRenderingDevicesResult::DescribeRenderingDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRenderingDevicesResult::~DescribeRenderingDevicesResult()
{}

void DescribeRenderingDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDevicesNode = value["Devices"]["Device"];
	for (auto valueDevicesDevice : allDevicesNode)
	{
		Device devicesObject;
		if(!valueDevicesDevice["InstanceId"].isNull())
			devicesObject.instanceId = valueDevicesDevice["InstanceId"].asString();
		if(!valueDevicesDevice["ClusterId"].isNull())
			devicesObject.clusterId = valueDevicesDevice["ClusterId"].asString();
		if(!valueDevicesDevice["EdgeNodeName"].isNull())
			devicesObject.edgeNodeName = valueDevicesDevice["EdgeNodeName"].asString();
		if(!valueDevicesDevice["PlatformType"].isNull())
			devicesObject.platformType = valueDevicesDevice["PlatformType"].asString();
		if(!valueDevicesDevice["Specification"].isNull())
			devicesObject.specification = valueDevicesDevice["Specification"].asString();
		if(!valueDevicesDevice["Status"].isNull())
			devicesObject.status = valueDevicesDevice["Status"].asString();
		if(!valueDevicesDevice["MacAddress"].isNull())
			devicesObject.macAddress = valueDevicesDevice["MacAddress"].asString();
		if(!valueDevicesDevice["ServerName"].isNull())
			devicesObject.serverName = valueDevicesDevice["ServerName"].asString();
		if(!valueDevicesDevice["InstanceChargeType"].isNull())
			devicesObject.instanceChargeType = valueDevicesDevice["InstanceChargeType"].asString();
		if(!valueDevicesDevice["AutoRenew"].isNull())
			devicesObject.autoRenew = valueDevicesDevice["AutoRenew"].asString() == "true";
		if(!valueDevicesDevice["AutoRenewPeriod"].isNull())
			devicesObject.autoRenewPeriod = std::stoi(valueDevicesDevice["AutoRenewPeriod"].asString());
		if(!valueDevicesDevice["Period"].isNull())
			devicesObject.period = std::stoi(valueDevicesDevice["Period"].asString());
		if(!valueDevicesDevice["PeriodUnit"].isNull())
			devicesObject.periodUnit = valueDevicesDevice["PeriodUnit"].asString();
		auto allIpInfosNode = valueDevicesDevice["IpInfos"]["IpInfo"];
		for (auto valueDevicesDeviceIpInfosIpInfo : allIpInfosNode)
		{
			Device::IpInfo ipInfosObject;
			if(!valueDevicesDeviceIpInfosIpInfo["NatType"].isNull())
				ipInfosObject.natType = valueDevicesDeviceIpInfosIpInfo["NatType"].asString();
			if(!valueDevicesDeviceIpInfosIpInfo["ExternalIp"].isNull())
				ipInfosObject.externalIp = valueDevicesDeviceIpInfosIpInfo["ExternalIp"].asString();
			if(!valueDevicesDeviceIpInfosIpInfo["ExternalPort"].isNull())
				ipInfosObject.externalPort = valueDevicesDeviceIpInfosIpInfo["ExternalPort"].asString();
			if(!valueDevicesDeviceIpInfosIpInfo["InternalIp"].isNull())
				ipInfosObject.internalIp = valueDevicesDeviceIpInfosIpInfo["InternalIp"].asString();
			if(!valueDevicesDeviceIpInfosIpInfo["InternalPort"].isNull())
				ipInfosObject.internalPort = valueDevicesDeviceIpInfosIpInfo["InternalPort"].asString();
			if(!valueDevicesDeviceIpInfosIpInfo["IpProtocol"].isNull())
				ipInfosObject.ipProtocol = valueDevicesDeviceIpInfosIpInfo["IpProtocol"].asString();
			if(!valueDevicesDeviceIpInfosIpInfo["ISP"].isNull())
				ipInfosObject.iSP = valueDevicesDeviceIpInfosIpInfo["ISP"].asString();
			devicesObject.ipInfos.push_back(ipInfosObject);
		}
		devices_.push_back(devicesObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeRenderingDevicesResult::getTotal()const
{
	return total_;
}

std::vector<DescribeRenderingDevicesResult::Device> DescribeRenderingDevicesResult::getDevices()const
{
	return devices_;
}

