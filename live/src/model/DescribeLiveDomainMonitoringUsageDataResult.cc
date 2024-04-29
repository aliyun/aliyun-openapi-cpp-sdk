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

#include <alibabacloud/live/model/DescribeLiveDomainMonitoringUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainMonitoringUsageDataResult::DescribeLiveDomainMonitoringUsageDataResult() :
	ServiceResult()
{}

DescribeLiveDomainMonitoringUsageDataResult::DescribeLiveDomainMonitoringUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainMonitoringUsageDataResult::~DescribeLiveDomainMonitoringUsageDataResult()
{}

void DescribeLiveDomainMonitoringUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMonitoringDataNode = value["MonitoringData"]["MonitoringDataItem"];
	for (auto valueMonitoringDataMonitoringDataItem : allMonitoringDataNode)
	{
		MonitoringDataItem monitoringDataObject;
		if(!valueMonitoringDataMonitoringDataItem["DomainName"].isNull())
			monitoringDataObject.domainName = valueMonitoringDataMonitoringDataItem["DomainName"].asString();
		if(!valueMonitoringDataMonitoringDataItem["Duration"].isNull())
			monitoringDataObject.duration = std::stoi(valueMonitoringDataMonitoringDataItem["Duration"].asString());
		if(!valueMonitoringDataMonitoringDataItem["InstanceId"].isNull())
			monitoringDataObject.instanceId = valueMonitoringDataMonitoringDataItem["InstanceId"].asString();
		if(!valueMonitoringDataMonitoringDataItem["Region"].isNull())
			monitoringDataObject.region = valueMonitoringDataMonitoringDataItem["Region"].asString();
		if(!valueMonitoringDataMonitoringDataItem["Resolution"].isNull())
			monitoringDataObject.resolution = valueMonitoringDataMonitoringDataItem["Resolution"].asString();
		if(!valueMonitoringDataMonitoringDataItem["TimeStamp"].isNull())
			monitoringDataObject.timeStamp = valueMonitoringDataMonitoringDataItem["TimeStamp"].asString();
		monitoringData_.push_back(monitoringDataObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::vector<DescribeLiveDomainMonitoringUsageDataResult::MonitoringDataItem> DescribeLiveDomainMonitoringUsageDataResult::getMonitoringData()const
{
	return monitoringData_;
}

std::string DescribeLiveDomainMonitoringUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLiveDomainMonitoringUsageDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeLiveDomainMonitoringUsageDataResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeLiveDomainMonitoringUsageDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeLiveDomainMonitoringUsageDataResult::getRegion()const
{
	return region_;
}

