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

#include <alibabacloud/cdn/model/DescribeCdnMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnMonitorDataResult::DescribeCdnMonitorDataResult() :
	ServiceResult()
{}

DescribeCdnMonitorDataResult::DescribeCdnMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnMonitorDataResult::~DescribeCdnMonitorDataResult()
{}

void DescribeCdnMonitorDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMonitorDatas = value["MonitorDatas"]["CDNMonitorData"];
	for (auto value : allMonitorDatas)
	{
		CDNMonitorData cDNMonitorDataObject;
		cDNMonitorDataObject.timeStamp = value["TimeStamp"].asString();
		cDNMonitorDataObject.queryPerSecond = value["QueryPerSecond"].asString();
		cDNMonitorDataObject.bytesPerSecond = value["BytesPerSecond"].asString();
		cDNMonitorDataObject.bytesHitRate = value["BytesHitRate"].asString();
		cDNMonitorDataObject.requestHitRate = value["RequestHitRate"].asString();
		cDNMonitorDataObject.averageObjectSize = value["AverageObjectSize"].asString();
		monitorDatas_.push_back(cDNMonitorDataObject);
	}
	domainName_ = value["DomainName"].asString();
	monitorInterval_ = std::stol(value["MonitorInterval"].asString());
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

long DescribeCdnMonitorDataResult::getMonitorInterval()const
{
	return monitorInterval_;
}

void DescribeCdnMonitorDataResult::setMonitorInterval(long monitorInterval)
{
	monitorInterval_ = monitorInterval;
}

std::string DescribeCdnMonitorDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeCdnMonitorDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeCdnMonitorDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeCdnMonitorDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeCdnMonitorDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeCdnMonitorDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

