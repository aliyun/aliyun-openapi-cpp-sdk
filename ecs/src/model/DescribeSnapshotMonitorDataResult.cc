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

#include <alibabacloud/ecs/model/DescribeSnapshotMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSnapshotMonitorDataResult::DescribeSnapshotMonitorDataResult() :
	ServiceResult()
{}

DescribeSnapshotMonitorDataResult::DescribeSnapshotMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnapshotMonitorDataResult::~DescribeSnapshotMonitorDataResult()
{}

void DescribeSnapshotMonitorDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMonitorDataNode = value["MonitorData"]["DataPoint"];
	for (auto valueMonitorDataDataPoint : allMonitorDataNode)
	{
		DataPoint monitorDataObject;
		if(!valueMonitorDataDataPoint["Size"].isNull())
			monitorDataObject.size = std::stol(valueMonitorDataDataPoint["Size"].asString());
		if(!valueMonitorDataDataPoint["TimeStamp"].isNull())
			monitorDataObject.timeStamp = valueMonitorDataDataPoint["TimeStamp"].asString();
		monitorData_.push_back(monitorDataObject);
	}

}

std::vector<DescribeSnapshotMonitorDataResult::DataPoint> DescribeSnapshotMonitorDataResult::getMonitorData()const
{
	return monitorData_;
}

