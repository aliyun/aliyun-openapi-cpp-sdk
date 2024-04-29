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

#include <alibabacloud/live/model/DescribeLiveStreamMetricDetailDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamMetricDetailDataResult::DescribeLiveStreamMetricDetailDataResult() :
	ServiceResult()
{}

DescribeLiveStreamMetricDetailDataResult::DescribeLiveStreamMetricDetailDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamMetricDetailDataResult::~DescribeLiveStreamMetricDetailDataResult()
{}

void DescribeLiveStreamMetricDetailDataResult::parse(const std::string &payload)
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
		if(!valueStreamDetailDataStreamData["Bps"].isNull())
			streamDetailDataObject.bps = std::stof(valueStreamDetailDataStreamData["Bps"].asString());
		if(!valueStreamDetailDataStreamData["Count"].isNull())
			streamDetailDataObject.count = std::stol(valueStreamDetailDataStreamData["Count"].asString());
		if(!valueStreamDetailDataStreamData["FlvBps"].isNull())
			streamDetailDataObject.flvBps = std::stof(valueStreamDetailDataStreamData["FlvBps"].asString());
		if(!valueStreamDetailDataStreamData["FlvCount"].isNull())
			streamDetailDataObject.flvCount = std::stol(valueStreamDetailDataStreamData["FlvCount"].asString());
		if(!valueStreamDetailDataStreamData["FlvTraffic"].isNull())
			streamDetailDataObject.flvTraffic = std::stol(valueStreamDetailDataStreamData["FlvTraffic"].asString());
		if(!valueStreamDetailDataStreamData["HlsBps"].isNull())
			streamDetailDataObject.hlsBps = std::stof(valueStreamDetailDataStreamData["HlsBps"].asString());
		if(!valueStreamDetailDataStreamData["HlsCount"].isNull())
			streamDetailDataObject.hlsCount = std::stol(valueStreamDetailDataStreamData["HlsCount"].asString());
		if(!valueStreamDetailDataStreamData["HlsTraffic"].isNull())
			streamDetailDataObject.hlsTraffic = std::stol(valueStreamDetailDataStreamData["HlsTraffic"].asString());
		if(!valueStreamDetailDataStreamData["NewConns"].isNull())
			streamDetailDataObject.newConns = valueStreamDetailDataStreamData["NewConns"].asString();
		if(!valueStreamDetailDataStreamData["P2pBps"].isNull())
			streamDetailDataObject.p2pBps = std::stof(valueStreamDetailDataStreamData["P2pBps"].asString());
		if(!valueStreamDetailDataStreamData["P2pCount"].isNull())
			streamDetailDataObject.p2pCount = std::stol(valueStreamDetailDataStreamData["P2pCount"].asString());
		if(!valueStreamDetailDataStreamData["P2pTraffic"].isNull())
			streamDetailDataObject.p2pTraffic = std::stol(valueStreamDetailDataStreamData["P2pTraffic"].asString());
		if(!valueStreamDetailDataStreamData["RtmpBps"].isNull())
			streamDetailDataObject.rtmpBps = std::stof(valueStreamDetailDataStreamData["RtmpBps"].asString());
		if(!valueStreamDetailDataStreamData["RtmpCount"].isNull())
			streamDetailDataObject.rtmpCount = std::stol(valueStreamDetailDataStreamData["RtmpCount"].asString());
		if(!valueStreamDetailDataStreamData["RtmpTraffic"].isNull())
			streamDetailDataObject.rtmpTraffic = std::stol(valueStreamDetailDataStreamData["RtmpTraffic"].asString());
		if(!valueStreamDetailDataStreamData["RtsBps"].isNull())
			streamDetailDataObject.rtsBps = std::stof(valueStreamDetailDataStreamData["RtsBps"].asString());
		if(!valueStreamDetailDataStreamData["RtsCount"].isNull())
			streamDetailDataObject.rtsCount = std::stol(valueStreamDetailDataStreamData["RtsCount"].asString());
		if(!valueStreamDetailDataStreamData["RtsTraffic"].isNull())
			streamDetailDataObject.rtsTraffic = std::stol(valueStreamDetailDataStreamData["RtsTraffic"].asString());
		if(!valueStreamDetailDataStreamData["StreamName"].isNull())
			streamDetailDataObject.streamName = valueStreamDetailDataStreamData["StreamName"].asString();
		if(!valueStreamDetailDataStreamData["TimeStamp"].isNull())
			streamDetailDataObject.timeStamp = valueStreamDetailDataStreamData["TimeStamp"].asString();
		if(!valueStreamDetailDataStreamData["Traffic"].isNull())
			streamDetailDataObject.traffic = std::stol(valueStreamDetailDataStreamData["Traffic"].asString());
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

std::string DescribeLiveStreamMetricDetailDataResult::getEndTime()const
{
	return endTime_;
}

int DescribeLiveStreamMetricDetailDataResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeLiveStreamMetricDetailDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeLiveStreamMetricDetailDataResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::string DescribeLiveStreamMetricDetailDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeLiveStreamMetricDetailDataResult::StreamData> DescribeLiveStreamMetricDetailDataResult::getStreamDetailData()const
{
	return streamDetailData_;
}

