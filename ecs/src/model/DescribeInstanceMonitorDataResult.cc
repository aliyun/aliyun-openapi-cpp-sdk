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
		InstanceMonitorData instanceMonitorDataObject;
		instanceMonitorDataObject.instanceId = value["InstanceId"].asString();
		instanceMonitorDataObject.cPU = std::stoi(value["CPU"].asString());
		instanceMonitorDataObject.intranetRX = std::stoi(value["IntranetRX"].asString());
		instanceMonitorDataObject.intranetTX = std::stoi(value["IntranetTX"].asString());
		instanceMonitorDataObject.intranetBandwidth = std::stoi(value["IntranetBandwidth"].asString());
		instanceMonitorDataObject.internetRX = std::stoi(value["InternetRX"].asString());
		instanceMonitorDataObject.internetTX = std::stoi(value["InternetTX"].asString());
		instanceMonitorDataObject.internetBandwidth = std::stoi(value["InternetBandwidth"].asString());
		instanceMonitorDataObject.iOPSRead = std::stoi(value["IOPSRead"].asString());
		instanceMonitorDataObject.iOPSWrite = std::stoi(value["IOPSWrite"].asString());
		instanceMonitorDataObject.bPSRead = std::stoi(value["BPSRead"].asString());
		instanceMonitorDataObject.bPSWrite = std::stoi(value["BPSWrite"].asString());
		instanceMonitorDataObject.cPUCreditUsage = std::stof(value["CPUCreditUsage"].asString());
		instanceMonitorDataObject.cPUCreditBalance = std::stof(value["CPUCreditBalance"].asString());
		instanceMonitorDataObject.timeStamp = value["TimeStamp"].asString();
		monitorData_.push_back(instanceMonitorDataObject);
	}

}

