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

#include <alibabacloud/vs/model/DescribeNodeDevicesInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeNodeDevicesInfoResult::DescribeNodeDevicesInfoResult() :
	ServiceResult()
{}

DescribeNodeDevicesInfoResult::DescribeNodeDevicesInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNodeDevicesInfoResult::~DescribeNodeDevicesInfoResult()
{}

void DescribeNodeDevicesInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeDevicesNode = value["NodeDevices"]["NodeDevice"];
	for (auto valueNodeDevicesNodeDevice : allNodeDevicesNode)
	{
		NodeDevice nodeDevicesObject;
		if(!valueNodeDevicesNodeDevice["NodeName"].isNull())
			nodeDevicesObject.nodeName = valueNodeDevicesNodeDevice["NodeName"].asString();
		auto allDeviceInfosNode = valueNodeDevicesNodeDevice["DeviceInfos"]["DeviceInfo"];
		for (auto valueNodeDevicesNodeDeviceDeviceInfosDeviceInfo : allDeviceInfosNode)
		{
			NodeDevice::DeviceInfo deviceInfosObject;
			if(!valueNodeDevicesNodeDeviceDeviceInfosDeviceInfo["InstanceId"].isNull())
				deviceInfosObject.instanceId = valueNodeDevicesNodeDeviceDeviceInfosDeviceInfo["InstanceId"].asString();
			if(!valueNodeDevicesNodeDeviceDeviceInfosDeviceInfo["Name"].isNull())
				deviceInfosObject.name = valueNodeDevicesNodeDeviceDeviceInfosDeviceInfo["Name"].asString();
			if(!valueNodeDevicesNodeDeviceDeviceInfosDeviceInfo["IP"].isNull())
				deviceInfosObject.iP = valueNodeDevicesNodeDeviceDeviceInfosDeviceInfo["IP"].asString();
			if(!valueNodeDevicesNodeDeviceDeviceInfosDeviceInfo["Server"].isNull())
				deviceInfosObject.server = valueNodeDevicesNodeDeviceDeviceInfosDeviceInfo["Server"].asString();
			nodeDevicesObject.deviceInfos.push_back(deviceInfosObject);
		}
		nodeDevices_.push_back(nodeDevicesObject);
	}

}

std::vector<DescribeNodeDevicesInfoResult::NodeDevice> DescribeNodeDevicesInfoResult::getNodeDevices()const
{
	return nodeDevices_;
}

