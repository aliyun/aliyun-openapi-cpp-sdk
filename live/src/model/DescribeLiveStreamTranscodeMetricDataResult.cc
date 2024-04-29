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

#include <alibabacloud/live/model/DescribeLiveStreamTranscodeMetricDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamTranscodeMetricDataResult::DescribeLiveStreamTranscodeMetricDataResult() :
	ServiceResult()
{}

DescribeLiveStreamTranscodeMetricDataResult::DescribeLiveStreamTranscodeMetricDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamTranscodeMetricDataResult::~DescribeLiveStreamTranscodeMetricDataResult()
{}

void DescribeLiveStreamTranscodeMetricDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStreamDetailDataNode = value["StreamDetailData"]["StreamData"];
	for (auto valueStreamDetailDataStreamData : allStreamDetailDataNode)
	{
		StreamData streamDetailDataObject;
		if(!valueStreamDetailDataStreamData["AppName"].isNull())
			streamDetailDataObject.appName = valueStreamDetailDataStreamData["AppName"].asString();
		if(!valueStreamDetailDataStreamData["Duration"].isNull())
			streamDetailDataObject.duration = std::stol(valueStreamDetailDataStreamData["Duration"].asString());
		if(!valueStreamDetailDataStreamData["Fps"].isNull())
			streamDetailDataObject.fps = valueStreamDetailDataStreamData["Fps"].asString();
		if(!valueStreamDetailDataStreamData["Region"].isNull())
			streamDetailDataObject.region = valueStreamDetailDataStreamData["Region"].asString();
		if(!valueStreamDetailDataStreamData["Resolution"].isNull())
			streamDetailDataObject.resolution = valueStreamDetailDataStreamData["Resolution"].asString();
		if(!valueStreamDetailDataStreamData["StreamName"].isNull())
			streamDetailDataObject.streamName = valueStreamDetailDataStreamData["StreamName"].asString();
		if(!valueStreamDetailDataStreamData["TimeStamp"].isNull())
			streamDetailDataObject.timeStamp = valueStreamDetailDataStreamData["TimeStamp"].asString();
		if(!valueStreamDetailDataStreamData["TranscodeType"].isNull())
			streamDetailDataObject.transcodeType = valueStreamDetailDataStreamData["TranscodeType"].asString();
		streamDetailData_.push_back(streamDetailDataObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeLiveStreamTranscodeMetricDataResult::getEndTime()const
{
	return endTime_;
}

int DescribeLiveStreamTranscodeMetricDataResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeLiveStreamTranscodeMetricDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeLiveStreamTranscodeMetricDataResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::string DescribeLiveStreamTranscodeMetricDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeLiveStreamTranscodeMetricDataResult::StreamData> DescribeLiveStreamTranscodeMetricDataResult::getStreamDetailData()const
{
	return streamDetailData_;
}

