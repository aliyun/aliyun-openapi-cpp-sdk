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

#include <alibabacloud/live/model/LiveUpstreamQosDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

LiveUpstreamQosDataResult::LiveUpstreamQosDataResult() :
	ServiceResult()
{}

LiveUpstreamQosDataResult::LiveUpstreamQosDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

LiveUpstreamQosDataResult::~LiveUpstreamQosDataResult()
{}

void LiveUpstreamQosDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["CdnDomain"].isNull())
			dataObject.cdnDomain = valueDataDataItem["CdnDomain"].asString();
		if(!valueDataDataItem["UpstreamDomain"].isNull())
			dataObject.upstreamDomain = valueDataDataItem["UpstreamDomain"].asString();
		if(!valueDataDataItem["KwaiSidc"].isNull())
			dataObject.kwaiSidc = valueDataDataItem["KwaiSidc"].asString();
		if(!valueDataDataItem["KwaiTsc"].isNull())
			dataObject.kwaiTsc = std::stol(valueDataDataItem["KwaiTsc"].asString());
		if(!valueDataDataItem["CdnIsp"].isNull())
			dataObject.cdnIsp = valueDataDataItem["CdnIsp"].asString();
		if(!valueDataDataItem["CdnProvince"].isNull())
			dataObject.cdnProvince = valueDataDataItem["CdnProvince"].asString();
		if(!valueDataDataItem["CdnOcid"].isNull())
			dataObject.cdnOcid = valueDataDataItem["CdnOcid"].asString();
		auto allDetailDataNode = valueDataDataItem["DetailData"]["DetailDataItem"];
		for (auto valueDataDataItemDetailDataDetailDataItem : allDetailDataNode)
		{
			DataItem::DetailDataItem detailDataObject;
			if(!valueDataDataItemDetailDataDetailDataItem["Timestamp"].isNull())
				detailDataObject.timestamp = valueDataDataItemDetailDataDetailDataItem["Timestamp"].asString();
			if(!valueDataDataItemDetailDataDetailDataItem["ConnectDur"].isNull())
				detailDataObject.connectDur = std::stol(valueDataDataItemDetailDataDetailDataItem["ConnectDur"].asString());
			if(!valueDataDataItemDetailDataDetailDataItem["FirstDataDur"].isNull())
				detailDataObject.firstDataDur = std::stol(valueDataDataItemDetailDataDetailDataItem["FirstDataDur"].asString());
			if(!valueDataDataItemDetailDataDetailDataItem["FirstFrameDur"].isNull())
				detailDataObject.firstFrameDur = std::stol(valueDataDataItemDetailDataDetailDataItem["FirstFrameDur"].asString());
			if(!valueDataDataItemDetailDataDetailDataItem["ConnectFailedCount"].isNull())
				detailDataObject.connectFailedCount = std::stol(valueDataDataItemDetailDataDetailDataItem["ConnectFailedCount"].asString());
			if(!valueDataDataItemDetailDataDetailDataItem["FirstDataFailedCount"].isNull())
				detailDataObject.firstDataFailedCount = std::stol(valueDataDataItemDetailDataDetailDataItem["FirstDataFailedCount"].asString());
			if(!valueDataDataItemDetailDataDetailDataItem["StatusCode5Xx"].isNull())
				detailDataObject.statusCode5Xx = std::stol(valueDataDataItemDetailDataDetailDataItem["StatusCode5Xx"].asString());
			if(!valueDataDataItemDetailDataDetailDataItem["StatusCode4Xx"].isNull())
				detailDataObject.statusCode4Xx = std::stol(valueDataDataItemDetailDataDetailDataItem["StatusCode4Xx"].asString());
			if(!valueDataDataItemDetailDataDetailDataItem["StatusCode3Xx"].isNull())
				detailDataObject.statusCode3Xx = std::stol(valueDataDataItemDetailDataDetailDataItem["StatusCode3Xx"].asString());
			if(!valueDataDataItemDetailDataDetailDataItem["StatusCode2Xx"].isNull())
				detailDataObject.statusCode2Xx = std::stol(valueDataDataItemDetailDataDetailDataItem["StatusCode2Xx"].asString());
			if(!valueDataDataItemDetailDataDetailDataItem["FirstFrameSuccessCount"].isNull())
				detailDataObject.firstFrameSuccessCount = std::stol(valueDataDataItemDetailDataDetailDataItem["FirstFrameSuccessCount"].asString());
			if(!valueDataDataItemDetailDataDetailDataItem["Count"].isNull())
				detailDataObject.count = std::stol(valueDataDataItemDetailDataDetailDataItem["Count"].asString());
			dataObject.detailData.push_back(detailDataObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string LiveUpstreamQosDataResult::getEndTime()const
{
	return endTime_;
}

std::string LiveUpstreamQosDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<LiveUpstreamQosDataResult::DataItem> LiveUpstreamQosDataResult::getData()const
{
	return data_;
}

