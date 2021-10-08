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

#include <alibabacloud/ecs/model/DescribeInstanceMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceMonitorDataResult::DescribeInstanceMonitorDataResult() :
	ServiceResult()
{}

DescribeInstanceMonitorDataResult::DescribeInstanceMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceMonitorDataResult::~DescribeInstanceMonitorDataResult()
{}

void DescribeInstanceMonitorDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMonitorDataNode = value["MonitorData"]["InstanceMonitorData"];
	for (auto valueMonitorDataInstanceMonitorData : allMonitorDataNode)
	{
		InstanceMonitorData monitorDataObject;
		if(!valueMonitorDataInstanceMonitorData["CPUCreditBalance"].isNull())
			monitorDataObject.cPUCreditBalance = std::stof(valueMonitorDataInstanceMonitorData["CPUCreditBalance"].asString());
		if(!valueMonitorDataInstanceMonitorData["BPSRead"].isNull())
			monitorDataObject.bPSRead = std::stoi(valueMonitorDataInstanceMonitorData["BPSRead"].asString());
		if(!valueMonitorDataInstanceMonitorData["InternetTX"].isNull())
			monitorDataObject.internetTX = std::stoi(valueMonitorDataInstanceMonitorData["InternetTX"].asString());
		if(!valueMonitorDataInstanceMonitorData["CPU"].isNull())
			monitorDataObject.cPU = std::stoi(valueMonitorDataInstanceMonitorData["CPU"].asString());
		if(!valueMonitorDataInstanceMonitorData["CPUCreditUsage"].isNull())
			monitorDataObject.cPUCreditUsage = std::stof(valueMonitorDataInstanceMonitorData["CPUCreditUsage"].asString());
		if(!valueMonitorDataInstanceMonitorData["IOPSWrite"].isNull())
			monitorDataObject.iOPSWrite = std::stoi(valueMonitorDataInstanceMonitorData["IOPSWrite"].asString());
		if(!valueMonitorDataInstanceMonitorData["IntranetTX"].isNull())
			monitorDataObject.intranetTX = std::stoi(valueMonitorDataInstanceMonitorData["IntranetTX"].asString());
		if(!valueMonitorDataInstanceMonitorData["InstanceId"].isNull())
			monitorDataObject.instanceId = valueMonitorDataInstanceMonitorData["InstanceId"].asString();
		if(!valueMonitorDataInstanceMonitorData["BPSWrite"].isNull())
			monitorDataObject.bPSWrite = std::stoi(valueMonitorDataInstanceMonitorData["BPSWrite"].asString());
		if(!valueMonitorDataInstanceMonitorData["CPUNotpaidSurplusCreditUsage"].isNull())
			monitorDataObject.cPUNotpaidSurplusCreditUsage = std::stof(valueMonitorDataInstanceMonitorData["CPUNotpaidSurplusCreditUsage"].asString());
		if(!valueMonitorDataInstanceMonitorData["CPUAdvanceCreditBalance"].isNull())
			monitorDataObject.cPUAdvanceCreditBalance = std::stof(valueMonitorDataInstanceMonitorData["CPUAdvanceCreditBalance"].asString());
		if(!valueMonitorDataInstanceMonitorData["IOPSRead"].isNull())
			monitorDataObject.iOPSRead = std::stoi(valueMonitorDataInstanceMonitorData["IOPSRead"].asString());
		if(!valueMonitorDataInstanceMonitorData["InternetBandwidth"].isNull())
			monitorDataObject.internetBandwidth = std::stoi(valueMonitorDataInstanceMonitorData["InternetBandwidth"].asString());
		if(!valueMonitorDataInstanceMonitorData["InternetRX"].isNull())
			monitorDataObject.internetRX = std::stoi(valueMonitorDataInstanceMonitorData["InternetRX"].asString());
		if(!valueMonitorDataInstanceMonitorData["TimeStamp"].isNull())
			monitorDataObject.timeStamp = valueMonitorDataInstanceMonitorData["TimeStamp"].asString();
		if(!valueMonitorDataInstanceMonitorData["IntranetRX"].isNull())
			monitorDataObject.intranetRX = std::stoi(valueMonitorDataInstanceMonitorData["IntranetRX"].asString());
		if(!valueMonitorDataInstanceMonitorData["IntranetBandwidth"].isNull())
			monitorDataObject.intranetBandwidth = std::stoi(valueMonitorDataInstanceMonitorData["IntranetBandwidth"].asString());
		monitorData_.push_back(monitorDataObject);
	}

}

std::vector<DescribeInstanceMonitorDataResult::InstanceMonitorData> DescribeInstanceMonitorDataResult::getMonitorData()const
{
	return monitorData_;
}

