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

#include <alibabacloud/vod/model/GetMediaAuditResultTimelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetMediaAuditResultTimelineResult::GetMediaAuditResultTimelineResult() :
	ServiceResult()
{}

GetMediaAuditResultTimelineResult::GetMediaAuditResultTimelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMediaAuditResultTimelineResult::~GetMediaAuditResultTimelineResult()
{}

void GetMediaAuditResultTimelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaAuditResultTimelineNode = value["MediaAuditResultTimeline"];
	auto allPornNode = mediaAuditResultTimelineNode["Porn"]["PornItem"];
	for (auto mediaAuditResultTimelineNodePornPornItem : allPornNode)
	{
		MediaAuditResultTimeline::PornItem pornItemObject;
		if(!mediaAuditResultTimelineNodePornPornItem["Score"].isNull())
			pornItemObject.score = mediaAuditResultTimelineNodePornPornItem["Score"].asString();
		if(!mediaAuditResultTimelineNodePornPornItem["Timestamp"].isNull())
			pornItemObject.timestamp = mediaAuditResultTimelineNodePornPornItem["Timestamp"].asString();
		if(!mediaAuditResultTimelineNodePornPornItem["Label"].isNull())
			pornItemObject.label = mediaAuditResultTimelineNodePornPornItem["Label"].asString();
		mediaAuditResultTimeline_.porn.push_back(pornItemObject);
	}
	auto allTerrorismNode = mediaAuditResultTimelineNode["Terrorism"]["TerrorismItem"];
	for (auto mediaAuditResultTimelineNodeTerrorismTerrorismItem : allTerrorismNode)
	{
		MediaAuditResultTimeline::TerrorismItem terrorismItemObject;
		if(!mediaAuditResultTimelineNodeTerrorismTerrorismItem["Score"].isNull())
			terrorismItemObject.score = mediaAuditResultTimelineNodeTerrorismTerrorismItem["Score"].asString();
		if(!mediaAuditResultTimelineNodeTerrorismTerrorismItem["Timestamp"].isNull())
			terrorismItemObject.timestamp = mediaAuditResultTimelineNodeTerrorismTerrorismItem["Timestamp"].asString();
		if(!mediaAuditResultTimelineNodeTerrorismTerrorismItem["Label"].isNull())
			terrorismItemObject.label = mediaAuditResultTimelineNodeTerrorismTerrorismItem["Label"].asString();
		mediaAuditResultTimeline_.terrorism.push_back(terrorismItemObject);
	}
	auto allLogoNode = mediaAuditResultTimelineNode["Logo"]["LogoItem"];
	for (auto mediaAuditResultTimelineNodeLogoLogoItem : allLogoNode)
	{
		MediaAuditResultTimeline::LogoItem logoItemObject;
		if(!mediaAuditResultTimelineNodeLogoLogoItem["Score"].isNull())
			logoItemObject.score = mediaAuditResultTimelineNodeLogoLogoItem["Score"].asString();
		if(!mediaAuditResultTimelineNodeLogoLogoItem["Timestamp"].isNull())
			logoItemObject.timestamp = mediaAuditResultTimelineNodeLogoLogoItem["Timestamp"].asString();
		if(!mediaAuditResultTimelineNodeLogoLogoItem["Label"].isNull())
			logoItemObject.label = mediaAuditResultTimelineNodeLogoLogoItem["Label"].asString();
		mediaAuditResultTimeline_.logo.push_back(logoItemObject);
	}
	auto allLiveNode = mediaAuditResultTimelineNode["Live"]["LiveItem"];
	for (auto mediaAuditResultTimelineNodeLiveLiveItem : allLiveNode)
	{
		MediaAuditResultTimeline::LiveItem liveItemObject;
		if(!mediaAuditResultTimelineNodeLiveLiveItem["Score"].isNull())
			liveItemObject.score = mediaAuditResultTimelineNodeLiveLiveItem["Score"].asString();
		if(!mediaAuditResultTimelineNodeLiveLiveItem["Timestamp"].isNull())
			liveItemObject.timestamp = mediaAuditResultTimelineNodeLiveLiveItem["Timestamp"].asString();
		if(!mediaAuditResultTimelineNodeLiveLiveItem["Label"].isNull())
			liveItemObject.label = mediaAuditResultTimelineNodeLiveLiveItem["Label"].asString();
		mediaAuditResultTimeline_.live.push_back(liveItemObject);
	}
	auto allAdNode = mediaAuditResultTimelineNode["Ad"]["AdItem"];
	for (auto mediaAuditResultTimelineNodeAdAdItem : allAdNode)
	{
		MediaAuditResultTimeline::AdItem adItemObject;
		if(!mediaAuditResultTimelineNodeAdAdItem["Score"].isNull())
			adItemObject.score = mediaAuditResultTimelineNodeAdAdItem["Score"].asString();
		if(!mediaAuditResultTimelineNodeAdAdItem["Timestamp"].isNull())
			adItemObject.timestamp = mediaAuditResultTimelineNodeAdAdItem["Timestamp"].asString();
		if(!mediaAuditResultTimelineNodeAdAdItem["Label"].isNull())
			adItemObject.label = mediaAuditResultTimelineNodeAdAdItem["Label"].asString();
		mediaAuditResultTimeline_.ad.push_back(adItemObject);
	}

}

GetMediaAuditResultTimelineResult::MediaAuditResultTimeline GetMediaAuditResultTimelineResult::getMediaAuditResultTimeline()const
{
	return mediaAuditResultTimeline_;
}

