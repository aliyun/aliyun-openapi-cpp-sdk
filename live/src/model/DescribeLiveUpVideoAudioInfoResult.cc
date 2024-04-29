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

#include <alibabacloud/live/model/DescribeLiveUpVideoAudioInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveUpVideoAudioInfoResult::DescribeLiveUpVideoAudioInfoResult() :
	ServiceResult()
{}

DescribeLiveUpVideoAudioInfoResult::DescribeLiveUpVideoAudioInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveUpVideoAudioInfoResult::~DescribeLiveUpVideoAudioInfoResult()
{}

void DescribeLiveUpVideoAudioInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUpItemsNode = value["UpItems"]["PublishItem"];
	for (auto valueUpItemsPublishItem : allUpItemsNode)
	{
		PublishItem upItemsObject;
		if(!valueUpItemsPublishItem["AppName"].isNull())
			upItemsObject.appName = valueUpItemsPublishItem["AppName"].asString();
		if(!valueUpItemsPublishItem["CodecInfo"].isNull())
			upItemsObject.codecInfo = valueUpItemsPublishItem["CodecInfo"].asString();
		if(!valueUpItemsPublishItem["DomainName"].isNull())
			upItemsObject.domainName = valueUpItemsPublishItem["DomainName"].asString();
		if(!valueUpItemsPublishItem["PublishInterval"].isNull())
			upItemsObject.publishInterval = valueUpItemsPublishItem["PublishInterval"].asString();
		if(!valueUpItemsPublishItem["PublishIp"].isNull())
			upItemsObject.publishIp = valueUpItemsPublishItem["PublishIp"].asString();
		if(!valueUpItemsPublishItem["PublishStatus"].isNull())
			upItemsObject.publishStatus = valueUpItemsPublishItem["PublishStatus"].asString();
		if(!valueUpItemsPublishItem["PublishTime"].isNull())
			upItemsObject.publishTime = valueUpItemsPublishItem["PublishTime"].asString();
		if(!valueUpItemsPublishItem["StopTime"].isNull())
			upItemsObject.stopTime = valueUpItemsPublishItem["StopTime"].asString();
		if(!valueUpItemsPublishItem["StreamName"].isNull())
			upItemsObject.streamName = valueUpItemsPublishItem["StreamName"].asString();
		if(!valueUpItemsPublishItem["UniqueId"].isNull())
			upItemsObject.uniqueId = valueUpItemsPublishItem["UniqueId"].asString();
		auto allAacHeadersNode = valueUpItemsPublishItem["AacHeaders"]["AacHeadersItem"];
		for (auto valueUpItemsPublishItemAacHeadersAacHeadersItem : allAacHeadersNode)
		{
			PublishItem::AacHeadersItem aacHeadersObject;
			if(!valueUpItemsPublishItemAacHeadersAacHeadersItem["Time"].isNull())
				aacHeadersObject.time = std::stol(valueUpItemsPublishItemAacHeadersAacHeadersItem["Time"].asString());
			if(!valueUpItemsPublishItemAacHeadersAacHeadersItem["Value"].isNull())
				aacHeadersObject.value = std::stoi(valueUpItemsPublishItemAacHeadersAacHeadersItem["Value"].asString());
			upItemsObject.aacHeaders.push_back(aacHeadersObject);
		}
		auto allAudioBitRateNode = valueUpItemsPublishItem["AudioBitRate"]["AudioBitRateItem"];
		for (auto valueUpItemsPublishItemAudioBitRateAudioBitRateItem : allAudioBitRateNode)
		{
			PublishItem::AudioBitRateItem audioBitRateObject;
			if(!valueUpItemsPublishItemAudioBitRateAudioBitRateItem["Time"].isNull())
				audioBitRateObject.time = std::stol(valueUpItemsPublishItemAudioBitRateAudioBitRateItem["Time"].asString());
			if(!valueUpItemsPublishItemAudioBitRateAudioBitRateItem["Value"].isNull())
				audioBitRateObject.value = std::stoi(valueUpItemsPublishItemAudioBitRateAudioBitRateItem["Value"].asString());
			upItemsObject.audioBitRate.push_back(audioBitRateObject);
		}
		auto allAudioFramesNode = valueUpItemsPublishItem["AudioFrames"]["AudioFramesItem"];
		for (auto valueUpItemsPublishItemAudioFramesAudioFramesItem : allAudioFramesNode)
		{
			PublishItem::AudioFramesItem audioFramesObject;
			if(!valueUpItemsPublishItemAudioFramesAudioFramesItem["Time"].isNull())
				audioFramesObject.time = std::stol(valueUpItemsPublishItemAudioFramesAudioFramesItem["Time"].asString());
			if(!valueUpItemsPublishItemAudioFramesAudioFramesItem["Value"].isNull())
				audioFramesObject.value = std::stoi(valueUpItemsPublishItemAudioFramesAudioFramesItem["Value"].asString());
			upItemsObject.audioFrames.push_back(audioFramesObject);
		}
		auto allAudioIntervalNode = valueUpItemsPublishItem["AudioInterval"]["AudioIntervalItem"];
		for (auto valueUpItemsPublishItemAudioIntervalAudioIntervalItem : allAudioIntervalNode)
		{
			PublishItem::AudioIntervalItem audioIntervalObject;
			if(!valueUpItemsPublishItemAudioIntervalAudioIntervalItem["Time"].isNull())
				audioIntervalObject.time = std::stol(valueUpItemsPublishItemAudioIntervalAudioIntervalItem["Time"].asString());
			if(!valueUpItemsPublishItemAudioIntervalAudioIntervalItem["Value"].isNull())
				audioIntervalObject.value = std::stoi(valueUpItemsPublishItemAudioIntervalAudioIntervalItem["Value"].asString());
			upItemsObject.audioInterval.push_back(audioIntervalObject);
		}
		auto allAudioStampsNode = valueUpItemsPublishItem["AudioStamps"]["AudioStampsItem"];
		for (auto valueUpItemsPublishItemAudioStampsAudioStampsItem : allAudioStampsNode)
		{
			PublishItem::AudioStampsItem audioStampsObject;
			if(!valueUpItemsPublishItemAudioStampsAudioStampsItem["Time"].isNull())
				audioStampsObject.time = std::stol(valueUpItemsPublishItemAudioStampsAudioStampsItem["Time"].asString());
			if(!valueUpItemsPublishItemAudioStampsAudioStampsItem["Value"].isNull())
				audioStampsObject.value = std::stoi(valueUpItemsPublishItemAudioStampsAudioStampsItem["Value"].asString());
			upItemsObject.audioStamps.push_back(audioStampsObject);
		}
		auto allAvcHeadersNode = valueUpItemsPublishItem["AvcHeaders"]["AvcHeadersItem"];
		for (auto valueUpItemsPublishItemAvcHeadersAvcHeadersItem : allAvcHeadersNode)
		{
			PublishItem::AvcHeadersItem avcHeadersObject;
			if(!valueUpItemsPublishItemAvcHeadersAvcHeadersItem["Time"].isNull())
				avcHeadersObject.time = std::stol(valueUpItemsPublishItemAvcHeadersAvcHeadersItem["Time"].asString());
			if(!valueUpItemsPublishItemAvcHeadersAvcHeadersItem["Value"].isNull())
				avcHeadersObject.value = std::stoi(valueUpItemsPublishItemAvcHeadersAvcHeadersItem["Value"].asString());
			upItemsObject.avcHeaders.push_back(avcHeadersObject);
		}
		auto allErrorFlagsNode = valueUpItemsPublishItem["ErrorFlags"]["ErrorFlagsItem"];
		for (auto valueUpItemsPublishItemErrorFlagsErrorFlagsItem : allErrorFlagsNode)
		{
			PublishItem::ErrorFlagsItem errorFlagsObject;
			if(!valueUpItemsPublishItemErrorFlagsErrorFlagsItem["Time"].isNull())
				errorFlagsObject.time = std::stol(valueUpItemsPublishItemErrorFlagsErrorFlagsItem["Time"].asString());
			if(!valueUpItemsPublishItemErrorFlagsErrorFlagsItem["Value"].isNull())
				errorFlagsObject.value = std::stoi(valueUpItemsPublishItemErrorFlagsErrorFlagsItem["Value"].asString());
			upItemsObject.errorFlags.push_back(errorFlagsObject);
		}
		auto allVideoAndAudioStampNode = valueUpItemsPublishItem["VideoAndAudioStamp"]["V_AStamp"];
		for (auto valueUpItemsPublishItemVideoAndAudioStampV_AStamp : allVideoAndAudioStampNode)
		{
			PublishItem::V_AStamp videoAndAudioStampObject;
			if(!valueUpItemsPublishItemVideoAndAudioStampV_AStamp["Time"].isNull())
				videoAndAudioStampObject.time = std::stol(valueUpItemsPublishItemVideoAndAudioStampV_AStamp["Time"].asString());
			if(!valueUpItemsPublishItemVideoAndAudioStampV_AStamp["Value"].isNull())
				videoAndAudioStampObject.value = std::stoi(valueUpItemsPublishItemVideoAndAudioStampV_AStamp["Value"].asString());
			upItemsObject.videoAndAudioStamp.push_back(videoAndAudioStampObject);
		}
		auto allVideoBitRateNode = valueUpItemsPublishItem["VideoBitRate"]["VideoBitRateItem"];
		for (auto valueUpItemsPublishItemVideoBitRateVideoBitRateItem : allVideoBitRateNode)
		{
			PublishItem::VideoBitRateItem videoBitRateObject;
			if(!valueUpItemsPublishItemVideoBitRateVideoBitRateItem["Time"].isNull())
				videoBitRateObject.time = std::stol(valueUpItemsPublishItemVideoBitRateVideoBitRateItem["Time"].asString());
			if(!valueUpItemsPublishItemVideoBitRateVideoBitRateItem["Value"].isNull())
				videoBitRateObject.value = std::stoi(valueUpItemsPublishItemVideoBitRateVideoBitRateItem["Value"].asString());
			upItemsObject.videoBitRate.push_back(videoBitRateObject);
		}
		auto allVideoFramesNode = valueUpItemsPublishItem["VideoFrames"]["VideoFramesItem"];
		for (auto valueUpItemsPublishItemVideoFramesVideoFramesItem : allVideoFramesNode)
		{
			PublishItem::VideoFramesItem videoFramesObject;
			if(!valueUpItemsPublishItemVideoFramesVideoFramesItem["Time"].isNull())
				videoFramesObject.time = std::stol(valueUpItemsPublishItemVideoFramesVideoFramesItem["Time"].asString());
			if(!valueUpItemsPublishItemVideoFramesVideoFramesItem["Value"].isNull())
				videoFramesObject.value = std::stoi(valueUpItemsPublishItemVideoFramesVideoFramesItem["Value"].asString());
			upItemsObject.videoFrames.push_back(videoFramesObject);
		}
		auto allVideoIntervalNode = valueUpItemsPublishItem["VideoInterval"]["VideoIntervalItem"];
		for (auto valueUpItemsPublishItemVideoIntervalVideoIntervalItem : allVideoIntervalNode)
		{
			PublishItem::VideoIntervalItem videoIntervalObject;
			if(!valueUpItemsPublishItemVideoIntervalVideoIntervalItem["Time"].isNull())
				videoIntervalObject.time = std::stol(valueUpItemsPublishItemVideoIntervalVideoIntervalItem["Time"].asString());
			if(!valueUpItemsPublishItemVideoIntervalVideoIntervalItem["Value"].isNull())
				videoIntervalObject.value = std::stoi(valueUpItemsPublishItemVideoIntervalVideoIntervalItem["Value"].asString());
			upItemsObject.videoInterval.push_back(videoIntervalObject);
		}
		auto allVideoStampsNode = valueUpItemsPublishItem["VideoStamps"]["VideoStampsItem"];
		for (auto valueUpItemsPublishItemVideoStampsVideoStampsItem : allVideoStampsNode)
		{
			PublishItem::VideoStampsItem videoStampsObject;
			if(!valueUpItemsPublishItemVideoStampsVideoStampsItem["Time"].isNull())
				videoStampsObject.time = std::stol(valueUpItemsPublishItemVideoStampsVideoStampsItem["Time"].asString());
			if(!valueUpItemsPublishItemVideoStampsVideoStampsItem["Value"].isNull())
				videoStampsObject.value = std::stoi(valueUpItemsPublishItemVideoStampsVideoStampsItem["Value"].asString());
			upItemsObject.videoStamps.push_back(videoStampsObject);
		}
		upItems_.push_back(upItemsObject);
	}

}

std::vector<DescribeLiveUpVideoAudioInfoResult::PublishItem> DescribeLiveUpVideoAudioInfoResult::getUpItems()const
{
	return upItems_;
}

