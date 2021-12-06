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
	auto allMonitorDataNode = value["MonitorData"]["DiskMonitorData"];
	for (auto valueMonitorDataDiskMonitorData : allMonitorDataNode)
	{
		DiskMonitorData monitorDataObject;
		if(!valueMonitorDataDiskMonitorData["BPSRead"].isNull())
			monitorDataObject.bPSRead = std::stoi(valueMonitorDataDiskMonitorData["BPSRead"].asString());
		if(!valueMonitorDataDiskMonitorData["IOPSRead"].isNull())
			monitorDataObject.iOPSRead = std::stoi(valueMonitorDataDiskMonitorData["IOPSRead"].asString());
		if(!valueMonitorDataDiskMonitorData["LatencyRead"].isNull())
			monitorDataObject.latencyRead = std::stoi(valueMonitorDataDiskMonitorData["LatencyRead"].asString());
		if(!valueMonitorDataDiskMonitorData["BPSTotal"].isNull())
			monitorDataObject.bPSTotal = std::stoi(valueMonitorDataDiskMonitorData["BPSTotal"].asString());
		if(!valueMonitorDataDiskMonitorData["IOPSTotal"].isNull())
			monitorDataObject.iOPSTotal = std::stoi(valueMonitorDataDiskMonitorData["IOPSTotal"].asString());
		if(!valueMonitorDataDiskMonitorData["TimeStamp"].isNull())
			monitorDataObject.timeStamp = valueMonitorDataDiskMonitorData["TimeStamp"].asString();
		if(!valueMonitorDataDiskMonitorData["LatencyWrite"].isNull())
			monitorDataObject.latencyWrite = std::stoi(valueMonitorDataDiskMonitorData["LatencyWrite"].asString());
		if(!valueMonitorDataDiskMonitorData["IOPSWrite"].isNull())
			monitorDataObject.iOPSWrite = std::stoi(valueMonitorDataDiskMonitorData["IOPSWrite"].asString());
		if(!valueMonitorDataDiskMonitorData["DiskId"].isNull())
			monitorDataObject.diskId = valueMonitorDataDiskMonitorData["DiskId"].asString();
		if(!valueMonitorDataDiskMonitorData["BPSWrite"].isNull())
			monitorDataObject.bPSWrite = std::stoi(valueMonitorDataDiskMonitorData["BPSWrite"].asString());
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

