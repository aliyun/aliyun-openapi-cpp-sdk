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

#include <alibabacloud/live/model/DescribeLiveDelayedStreamingUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDelayedStreamingUsageResult::DescribeLiveDelayedStreamingUsageResult() :
	ServiceResult()
{}

DescribeLiveDelayedStreamingUsageResult::DescribeLiveDelayedStreamingUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDelayedStreamingUsageResult::~DescribeLiveDelayedStreamingUsageResult()
{}

void DescribeLiveDelayedStreamingUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDelayDataNode = value["DelayData"]["DelayDataItem"];
	for (auto valueDelayDataDelayDataItem : allDelayDataNode)
	{
		DelayDataItem delayDataObject;
		if(!valueDelayDataDelayDataItem["DomainName"].isNull())
			delayDataObject.domainName = valueDelayDataDelayDataItem["DomainName"].asString();
		if(!valueDelayDataDelayDataItem["Duration"].isNull())
			delayDataObject.duration = std::stol(valueDelayDataDelayDataItem["Duration"].asString());
		if(!valueDelayDataDelayDataItem["Region"].isNull())
			delayDataObject.region = valueDelayDataDelayDataItem["Region"].asString();
		if(!valueDelayDataDelayDataItem["StreamName"].isNull())
			delayDataObject.streamName = valueDelayDataDelayDataItem["StreamName"].asString();
		if(!valueDelayDataDelayDataItem["TimeStamp"].isNull())
			delayDataObject.timeStamp = valueDelayDataDelayDataItem["TimeStamp"].asString();
		delayData_.push_back(delayDataObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeLiveDelayedStreamingUsageResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLiveDelayedStreamingUsageResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeLiveDelayedStreamingUsageResult::DelayDataItem> DescribeLiveDelayedStreamingUsageResult::getDelayData()const
{
	return delayData_;
}

