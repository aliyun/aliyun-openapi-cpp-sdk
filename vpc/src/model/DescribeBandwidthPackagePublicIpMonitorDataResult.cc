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

#include <alibabacloud/vpc/model/DescribeBandwidthPackagePublicIpMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeBandwidthPackagePublicIpMonitorDataResult::DescribeBandwidthPackagePublicIpMonitorDataResult() :
	ServiceResult()
{}

DescribeBandwidthPackagePublicIpMonitorDataResult::DescribeBandwidthPackagePublicIpMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBandwidthPackagePublicIpMonitorDataResult::~DescribeBandwidthPackagePublicIpMonitorDataResult()
{}

void DescribeBandwidthPackagePublicIpMonitorDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMonitorDatas = value["MonitorDatas"]["MonitorData"];
	for (auto value : allMonitorDatas)
	{
		MonitorData monitorDatasObject;
		if(!value["RX"].isNull())
			monitorDatasObject.rX = std::stol(value["RX"].asString());
		if(!value["TX"].isNull())
			monitorDatasObject.tX = std::stol(value["TX"].asString());
		if(!value["ReceivedBandwidth"].isNull())
			monitorDatasObject.receivedBandwidth = std::stol(value["ReceivedBandwidth"].asString());
		if(!value["TransportedBandwidth"].isNull())
			monitorDatasObject.transportedBandwidth = std::stol(value["TransportedBandwidth"].asString());
		if(!value["Flow"].isNull())
			monitorDatasObject.flow = std::stol(value["Flow"].asString());
		if(!value["Bandwidth"].isNull())
			monitorDatasObject.bandwidth = std::stol(value["Bandwidth"].asString());
		if(!value["Packets"].isNull())
			monitorDatasObject.packets = std::stol(value["Packets"].asString());
		if(!value["TimeStamp"].isNull())
			monitorDatasObject.timeStamp = value["TimeStamp"].asString();
		monitorDatas_.push_back(monitorDatasObject);
	}

}

std::vector<DescribeBandwidthPackagePublicIpMonitorDataResult::MonitorData> DescribeBandwidthPackagePublicIpMonitorDataResult::getMonitorDatas()const
{
	return monitorDatas_;
}

