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

#include <alibabacloud/vod/model/GetMediaAuditAudioResultDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetMediaAuditAudioResultDetailResult::GetMediaAuditAudioResultDetailResult() :
	ServiceResult()
{}

GetMediaAuditAudioResultDetailResult::GetMediaAuditAudioResultDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMediaAuditAudioResultDetailResult::~GetMediaAuditAudioResultDetailResult()
{}

void GetMediaAuditAudioResultDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaAuditAudioResultDetailNode = value["MediaAuditAudioResultDetail"];
	if(!mediaAuditAudioResultDetailNode["Total"].isNull())
		mediaAuditAudioResultDetail_.total = std::stoi(mediaAuditAudioResultDetailNode["Total"].asString());
	if(!mediaAuditAudioResultDetailNode["PageTotal"].isNull())
		mediaAuditAudioResultDetail_.pageTotal = std::stoi(mediaAuditAudioResultDetailNode["PageTotal"].asString());
	auto allListNode = mediaAuditAudioResultDetailNode["List"]["ListItem"];
	for (auto mediaAuditAudioResultDetailNodeListListItem : allListNode)
	{
		MediaAuditAudioResultDetail::ListItem listItemObject;
		if(!mediaAuditAudioResultDetailNodeListListItem["EndTime"].isNull())
			listItemObject.endTime = std::stol(mediaAuditAudioResultDetailNodeListListItem["EndTime"].asString());
		if(!mediaAuditAudioResultDetailNodeListListItem["StartTime"].isNull())
			listItemObject.startTime = std::stol(mediaAuditAudioResultDetailNodeListListItem["StartTime"].asString());
		if(!mediaAuditAudioResultDetailNodeListListItem["Text"].isNull())
			listItemObject.text = mediaAuditAudioResultDetailNodeListListItem["Text"].asString();
		if(!mediaAuditAudioResultDetailNodeListListItem["Label"].isNull())
			listItemObject.label = mediaAuditAudioResultDetailNodeListListItem["Label"].asString();
		mediaAuditAudioResultDetail_.list.push_back(listItemObject);
	}

}

GetMediaAuditAudioResultDetailResult::MediaAuditAudioResultDetail GetMediaAuditAudioResultDetailResult::getMediaAuditAudioResultDetail()const
{
	return mediaAuditAudioResultDetail_;
}

