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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto mediaAuditResultTimelineNode = value["MediaAuditResultTimeline"];
	auto allPorn = value["Porn"]["PornItem"];
	for (auto value : allPorn)
	{
		MediaAuditResultTimeline::PornItem pornItemObject;
		if(!value["Label"].isNull())
			pornItemObject.label = value["Label"].asString();
		if(!value["Score"].isNull())
			pornItemObject.score = value["Score"].asString();
		if(!value["Timestamp"].isNull())
			pornItemObject.timestamp = value["Timestamp"].asString();
		mediaAuditResultTimeline_.porn.push_back(pornItemObject);
	}
	auto allTerrorism = value["Terrorism"]["TerrorismItem"];
	for (auto value : allTerrorism)
	{
		MediaAuditResultTimeline::TerrorismItem terrorismItemObject;
		if(!value["Label"].isNull())
			terrorismItemObject.label = value["Label"].asString();
		if(!value["Score"].isNull())
			terrorismItemObject.score = value["Score"].asString();
		if(!value["Timestamp"].isNull())
			terrorismItemObject.timestamp = value["Timestamp"].asString();
		mediaAuditResultTimeline_.terrorism.push_back(terrorismItemObject);
	}

}

GetMediaAuditResultTimelineResult::MediaAuditResultTimeline GetMediaAuditResultTimelineResult::getMediaAuditResultTimeline()const
{
	return mediaAuditResultTimeline_;
}

