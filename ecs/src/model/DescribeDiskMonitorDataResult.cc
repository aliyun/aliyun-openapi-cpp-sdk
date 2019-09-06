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

#include <alibabacloud/ecs/model/DescribeDiskMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDiskMonitorDataResult::DescribeDiskMonitorDataResult() :
	ServiceResult()
{}

DescribeDiskMonitorDataResult::DescribeDiskMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiskMonitorDataResult::~DescribeDiskMonitorDataResult()
{}

void DescribeDiskMonitorDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMonitorData = value["MonitorData"]["DiskMonitorData"];
	for (auto value : allMonitorData)
	{
		DiskMonitorData monitorDataObject;
		if(!value["DiskId"].isNull())
			monitorDataObject.diskId = value["DiskId"].asString();
		if(!value["IOPSRead"].isNull())
			monitorDataObject.iOPSRead = std::stoi(value["IOPSRead"].asString());
		if(!value["IOPSWrite"].isNull())
			monitorDataObject.iOPSWrite = std::stoi(value["IOPSWrite"].asString());
		if(!value["IOPSTotal"].isNull())
			monitorDataObject.iOPSTotal = std::stoi(value["IOPSTotal"].asString());
		if(!value["BPSRead"].isNull())
			monitorDataObject.bPSRead = std::stoi(value["BPSRead"].asString());
		if(!value["BPSWrite"].isNull())
			monitorDataObject.bPSWrite = std::stoi(value["BPSWrite"].asString());
		if(!value["BPSTotal"].isNull())
			monitorDataObject.bPSTotal = std::stoi(value["BPSTotal"].asString());
		if(!value["LatencyRead"].isNull())
			monitorDataObject.latencyRead = std::stoi(value["LatencyRead"].asString());
		if(!value["LatencyWrite"].isNull())
			monitorDataObject.latencyWrite = std::stoi(value["LatencyWrite"].asString());
		if(!value["TimeStamp"].isNull())
			monitorDataObject.timeStamp = value["TimeStamp"].asString();
		monitorData_.push_back(monitorDataObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDiskMonitorDataResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDiskMonitorDataResult::DiskMonitorData> DescribeDiskMonitorDataResult::getMonitorData()const
{
	return monitorData_;
}

