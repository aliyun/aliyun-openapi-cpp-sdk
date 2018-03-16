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
	auto allMonitorData = value["MonitorData"]["InstanceMonitorData"];
	for (auto value : allMonitorData)
	{
		InstanceMonitorData monitorDataObject;
		if(!value["InstanceId"].isNull())
			monitorDataObject.instanceId = value["InstanceId"].asString();
		if(!value["CPU"].isNull())
			monitorDataObject.cPU = std::stoi(value["CPU"].asString());
		if(!value["IntranetRX"].isNull())
			monitorDataObject.intranetRX = std::stoi(value["IntranetRX"].asString());
		if(!value["IntranetTX"].isNull())
			monitorDataObject.intranetTX = std::stoi(value["IntranetTX"].asString());
		if(!value["IntranetBandwidth"].isNull())
			monitorDataObject.intranetBandwidth = std::stoi(value["IntranetBandwidth"].asString());
		if(!value["InternetRX"].isNull())
			monitorDataObject.internetRX = std::stoi(value["InternetRX"].asString());
		if(!value["InternetTX"].isNull())
			monitorDataObject.internetTX = std::stoi(value["InternetTX"].asString());
		if(!value["InternetBandwidth"].isNull())
			monitorDataObject.internetBandwidth = std::stoi(value["InternetBandwidth"].asString());
		if(!value["IOPSRead"].isNull())
			monitorDataObject.iOPSRead = std::stoi(value["IOPSRead"].asString());
		if(!value["IOPSWrite"].isNull())
			monitorDataObject.iOPSWrite = std::stoi(value["IOPSWrite"].asString());
		if(!value["BPSRead"].isNull())
			monitorDataObject.bPSRead = std::stoi(value["BPSRead"].asString());
		if(!value["BPSWrite"].isNull())
			monitorDataObject.bPSWrite = std::stoi(value["BPSWrite"].asString());
		if(!value["CPUCreditUsage"].isNull())
			monitorDataObject.cPUCreditUsage = std::stof(value["CPUCreditUsage"].asString());
		if(!value["CPUCreditBalance"].isNull())
			monitorDataObject.cPUCreditBalance = std::stof(value["CPUCreditBalance"].asString());
		if(!value["TimeStamp"].isNull())
			monitorDataObject.timeStamp = value["TimeStamp"].asString();
		monitorData_.push_back(monitorDataObject);
	}

}

std::vector<DescribeInstanceMonitorDataResult::InstanceMonitorData> DescribeInstanceMonitorDataResult::getMonitorData()const
{
	return monitorData_;
}

