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

#include <alibabacloud/live/model/DescribeLiveUserStreamMetricDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveUserStreamMetricDataResult::DescribeLiveUserStreamMetricDataResult() :
	ServiceResult()
{}

DescribeLiveUserStreamMetricDataResult::DescribeLiveUserStreamMetricDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveUserStreamMetricDataResult::~DescribeLiveUserStreamMetricDataResult()
{}

void DescribeLiveUserStreamMetricDataResult::parse(const std::string &payload)
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
			streamDetailDataObject.flvTraffic = valueStreamDetailDataStreamData["FlvTraffic"].asString();
		if(!valueStreamDetailDataStreamData["HlsBps"].isNull())
			streamDetailDataObject.hlsBps = std::stof(valueStreamDetailDataStreamData["HlsBps"].asString());
		if(!valueStreamDetailDataStreamData["HlsCount"].isNull())
			streamDetailDataObject.hlsCount = std::stol(valueStreamDetailDataStreamData["HlsCount"].asString());
		if(!valueStreamDetailDataStreamData["HlsTraffic"].isNull())
			streamDetailDataObject.hlsTraffic = valueStreamDetailDataStreamData["HlsTraffic"].asString();
		if(!valueStreamDetailDataStreamData["NewConns"].isNull())
			streamDetailDataObject.newConns = std::stol(valueStreamDetailDataStreamData["NewConns"].asString());
		if(!valueStreamDetailDataStreamData["P2pBps"].isNull())
			streamDetailDataObject.p2pBps = std::stof(valueStreamDetailDataStreamData["P2pBps"].asString());
		if(!valueStreamDetailDataStreamData["P2pCount"].isNull())
			streamDetailDataObject.p2pCount = std::stol(valueStreamDetailDataStreamData["P2pCount"].asString());
		if(!valueStreamDetailDataStreamData["P2pTraffic"].isNull())
			streamDetailDataObject.p2pTraffic = valueStreamDetailDataStreamData["P2pTraffic"].asString();
		if(!valueStreamDetailDataStreamData["RtmpBps"].isNull())
			streamDetailDataObject.rtmpBps = std::stof(valueStreamDetailDataStreamData["RtmpBps"].asString());
		if(!valueStreamDetailDataStreamData["RtmpCount"].isNull())
			streamDetailDataObject.rtmpCount = std::stol(valueStreamDetailDataStreamData["RtmpCount"].asString());
		if(!valueStreamDetailDataStreamData["RtmpTraffic"].isNull())
			streamDetailDataObject.rtmpTraffic = valueStreamDetailDataStreamData["RtmpTraffic"].asString();
		if(!valueStreamDetailDataStreamData["RtsBps"].isNull())
			streamDetailDataObject.rtsBps = valueStreamDetailDataStreamData["RtsBps"].asString();
		if(!valueStreamDetailDataStreamData["RtsCount"].isNull())
			streamDetailDataObject.rtsCount = std::stol(valueStreamDetailDataStreamData["RtsCount"].asString());
		if(!valueStreamDetailDataStreamData["RtsTraffic"].isNull())
			streamDetailDataObject.rtsTraffic = valueStreamDetailDataStreamData["RtsTraffic"].asString();
		if(!valueStreamDetailDataStreamData["StreamName"].isNull())
			streamDetailDataObject.streamName = valueStreamDetailDataStreamData["StreamName"].asString();
		if(!valueStreamDetailDataStreamData["TimeStamp"].isNull())
			streamDetailDataObject.timeStamp = valueStreamDetailDataStreamData["TimeStamp"].asString();
		if(!valueStreamDetailDataStreamData["Traffic"].isNull())
			streamDetailDataObject.traffic = valueStreamDetailDataStreamData["Traffic"].asString();
		streamDetailData_.push_back(streamDetailDataObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribeLiveUserStreamMetricDataResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeLiveUserStreamMetricDataResult::getEndTime()const
{
	return endTime_;
}

long DescribeLiveUserStreamMetricDataResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeLiveUserStreamMetricDataResult::getDomainName()const
{
	return domainName_;
}

long DescribeLiveUserStreamMetricDataResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeLiveUserStreamMetricDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeLiveUserStreamMetricDataResult::StreamData> DescribeLiveUserStreamMetricDataResult::getStreamDetailData()const
{
	return streamDetailData_;
}

