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
		if(!mediaAuditResultTimelineNodePornPornItem["Label"].isNull())
			pornItemObject.label = mediaAuditResultTimelineNodePornPornItem["Label"].asString();
		if(!mediaAuditResultTimelineNodePornPornItem["Score"].isNull())
			pornItemObject.score = mediaAuditResultTimelineNodePornPornItem["Score"].asString();
		if(!mediaAuditResultTimelineNodePornPornItem["Timestamp"].isNull())
			pornItemObject.timestamp = mediaAuditResultTimelineNodePornPornItem["Timestamp"].asString();
		mediaAuditResultTimeline_.porn.push_back(pornItemObject);
	}
	auto allTerrorismNode = mediaAuditResultTimelineNode["Terrorism"]["TerrorismItem"];
	for (auto mediaAuditResultTimelineNodeTerrorismTerrorismItem : allTerrorismNode)
	{
		MediaAuditResultTimeline::TerrorismItem terrorismItemObject;
		if(!mediaAuditResultTimelineNodeTerrorismTerrorismItem["Label"].isNull())
			terrorismItemObject.label = mediaAuditResultTimelineNodeTerrorismTerrorismItem["Label"].asString();
		if(!mediaAuditResultTimelineNodeTerrorismTerrorismItem["Score"].isNull())
			terrorismItemObject.score = mediaAuditResultTimelineNodeTerrorismTerrorismItem["Score"].asString();
		if(!mediaAuditResultTimelineNodeTerrorismTerrorismItem["Timestamp"].isNull())
			terrorismItemObject.timestamp = mediaAuditResultTimelineNodeTerrorismTerrorismItem["Timestamp"].asString();
		mediaAuditResultTimeline_.terrorism.push_back(terrorismItemObject);
	}

}

GetMediaAuditResultTimelineResult::MediaAuditResultTimeline GetMediaAuditResultTimelineResult::getMediaAuditResultTimeline()const
{
	return mediaAuditResultTimeline_;
}

