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

#include <alibabacloud/ecs/model/DescribeEniMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeEniMonitorDataResult::DescribeEniMonitorDataResult() :
	ServiceResult()
{}

DescribeEniMonitorDataResult::DescribeEniMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEniMonitorDataResult::~DescribeEniMonitorDataResult()
{}

void DescribeEniMonitorDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMonitorDataNode = value["MonitorData"]["EniMonitorData"];
	for (auto valueMonitorDataEniMonitorData : allMonitorDataNode)
	{
		EniMonitorData monitorDataObject;
		if(!valueMonitorDataEniMonitorData["PacketRx"].isNull())
			monitorDataObject.packetRx = valueMonitorDataEniMonitorData["PacketRx"].asString();
		if(!valueMonitorDataEniMonitorData["TimeStamp"].isNull())
			monitorDataObject.timeStamp = valueMonitorDataEniMonitorData["TimeStamp"].asString();
		if(!valueMonitorDataEniMonitorData["DropPacketRx"].isNull())
			monitorDataObject.dropPacketRx = valueMonitorDataEniMonitorData["DropPacketRx"].asString();
		if(!valueMonitorDataEniMonitorData["EniId"].isNull())
			monitorDataObject.eniId = valueMonitorDataEniMonitorData["EniId"].asString();
		if(!valueMonitorDataEniMonitorData["DropPacketTx"].isNull())
			monitorDataObject.dropPacketTx = valueMonitorDataEniMonitorData["DropPacketTx"].asString();
		if(!valueMonitorDataEniMonitorData["PacketTx"].isNull())
			monitorDataObject.packetTx = valueMonitorDataEniMonitorData["PacketTx"].asString();
		if(!valueMonitorDataEniMonitorData["IntranetTx"].isNull())
			monitorDataObject.intranetTx = valueMonitorDataEniMonitorData["IntranetTx"].asString();
		if(!valueMonitorDataEniMonitorData["IntranetRx"].isNull())
			monitorDataObject.intranetRx = valueMonitorDataEniMonitorData["IntranetRx"].asString();
		monitorData_.push_back(monitorDataObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEniMonitorDataResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeEniMonitorDataResult::EniMonitorData> DescribeEniMonitorDataResult::getMonitorData()const
{
	return monitorData_;
}

