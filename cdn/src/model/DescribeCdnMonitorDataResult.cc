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
		CDNMonitorData monitorDatasObject;
		if(!value["TimeStamp"].isNull())
			monitorDatasObject.timeStamp = value["TimeStamp"].asString();
		if(!value["QueryPerSecond"].isNull())
			monitorDatasObject.queryPerSecond = value["QueryPerSecond"].asString();
		if(!value["BytesPerSecond"].isNull())
			monitorDatasObject.bytesPerSecond = value["BytesPerSecond"].asString();
		if(!value["BytesHitRate"].isNull())
			monitorDatasObject.bytesHitRate = value["BytesHitRate"].asString();
		if(!value["RequestHitRate"].isNull())
			monitorDatasObject.requestHitRate = value["RequestHitRate"].asString();
		if(!value["AverageObjectSize"].isNull())
			monitorDatasObject.averageObjectSize = value["AverageObjectSize"].asString();
		monitorDatas_.push_back(monitorDatasObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["MonitorInterval"].isNull())
		monitorInterval_ = std::stol(value["MonitorInterval"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

long DescribeCdnMonitorDataResult::getMonitorInterval()const
{
	return monitorInterval_;
}

std::string DescribeCdnMonitorDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeCdnMonitorDataResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeCdnMonitorDataResult::CDNMonitorData> DescribeCdnMonitorDataResult::getMonitorDatas()const
{
	return monitorDatas_;
}

std::string DescribeCdnMonitorDataResult::getStartTime()const
{
	return startTime_;
}

