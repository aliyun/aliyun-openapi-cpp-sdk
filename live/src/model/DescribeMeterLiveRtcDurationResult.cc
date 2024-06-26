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

#include <alibabacloud/live/model/DescribeMeterLiveRtcDurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeMeterLiveRtcDurationResult::DescribeMeterLiveRtcDurationResult() :
	ServiceResult()
{}

DescribeMeterLiveRtcDurationResult::DescribeMeterLiveRtcDurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMeterLiveRtcDurationResult::~DescribeMeterLiveRtcDurationResult()
{}

void DescribeMeterLiveRtcDurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["AudioDuration"].isNull())
			dataObject.audioDuration = std::stol(valueDataDataItem["AudioDuration"].asString());
		if(!valueDataDataItem["Timestamp"].isNull())
			dataObject.timestamp = valueDataDataItem["Timestamp"].asString();
		if(!valueDataDataItem["TotalDuration"].isNull())
			dataObject.totalDuration = std::stol(valueDataDataItem["TotalDuration"].asString());
		if(!valueDataDataItem["V480Duration"].isNull())
			dataObject.v480Duration = std::stol(valueDataDataItem["V480Duration"].asString());
		if(!valueDataDataItem["V720Duration"].isNull())
			dataObject.v720Duration = std::stol(valueDataDataItem["V720Duration"].asString());
		if(!valueDataDataItem["V1080Duration"].isNull())
			dataObject.v1080Duration = std::stol(valueDataDataItem["V1080Duration"].asString());
		data_.push_back(dataObject);
	}
	if(!value["AudioSummaryDuration"].isNull())
		audioSummaryDuration_ = std::stol(value["AudioSummaryDuration"].asString());
	if(!value["TotalSummaryDuration"].isNull())
		totalSummaryDuration_ = std::stol(value["TotalSummaryDuration"].asString());
	if(!value["V480SummaryDuration"].isNull())
		v480SummaryDuration_ = std::stol(value["V480SummaryDuration"].asString());
	if(!value["V720SummaryDuration"].isNull())
		v720SummaryDuration_ = std::stol(value["V720SummaryDuration"].asString());
	if(!value["V1080SummaryDuration"].isNull())
		v1080SummaryDuration_ = std::stol(value["V1080SummaryDuration"].asString());

}

long DescribeMeterLiveRtcDurationResult::getV480SummaryDuration()const
{
	return v480SummaryDuration_;
}

long DescribeMeterLiveRtcDurationResult::getV1080SummaryDuration()const
{
	return v1080SummaryDuration_;
}

long DescribeMeterLiveRtcDurationResult::getV720SummaryDuration()const
{
	return v720SummaryDuration_;
}

std::vector<DescribeMeterLiveRtcDurationResult::DataItem> DescribeMeterLiveRtcDurationResult::getData()const
{
	return data_;
}

long DescribeMeterLiveRtcDurationResult::getAudioSummaryDuration()const
{
	return audioSummaryDuration_;
}

long DescribeMeterLiveRtcDurationResult::getTotalSummaryDuration()const
{
	return totalSummaryDuration_;
}

