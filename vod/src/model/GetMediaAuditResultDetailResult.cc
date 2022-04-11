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

#include <alibabacloud/vod/model/GetMediaAuditResultDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetMediaAuditResultDetailResult::GetMediaAuditResultDetailResult() :
	ServiceResult()
{}

GetMediaAuditResultDetailResult::GetMediaAuditResultDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMediaAuditResultDetailResult::~GetMediaAuditResultDetailResult()
{}

void GetMediaAuditResultDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaAuditResultDetailNode = value["MediaAuditResultDetail"];
	if(!mediaAuditResultDetailNode["Total"].isNull())
		mediaAuditResultDetail_.total = std::stoi(mediaAuditResultDetailNode["Total"].asString());
	auto allListNode = mediaAuditResultDetailNode["List"]["ListItem"];
	for (auto mediaAuditResultDetailNodeListListItem : allListNode)
	{
		MediaAuditResultDetail::ListItem listItemObject;
		if(!mediaAuditResultDetailNodeListListItem["TerrorismScore"].isNull())
			listItemObject.terrorismScore = mediaAuditResultDetailNodeListListItem["TerrorismScore"].asString();
		if(!mediaAuditResultDetailNodeListListItem["AdLabel"].isNull())
			listItemObject.adLabel = mediaAuditResultDetailNodeListListItem["AdLabel"].asString();
		if(!mediaAuditResultDetailNodeListListItem["PornLabel"].isNull())
			listItemObject.pornLabel = mediaAuditResultDetailNodeListListItem["PornLabel"].asString();
		if(!mediaAuditResultDetailNodeListListItem["PornScore"].isNull())
			listItemObject.pornScore = mediaAuditResultDetailNodeListListItem["PornScore"].asString();
		if(!mediaAuditResultDetailNodeListListItem["LiveLabel"].isNull())
			listItemObject.liveLabel = mediaAuditResultDetailNodeListListItem["LiveLabel"].asString();
		if(!mediaAuditResultDetailNodeListListItem["Url"].isNull())
			listItemObject.url = mediaAuditResultDetailNodeListListItem["Url"].asString();
		if(!mediaAuditResultDetailNodeListListItem["Timestamp"].isNull())
			listItemObject.timestamp = mediaAuditResultDetailNodeListListItem["Timestamp"].asString();
		if(!mediaAuditResultDetailNodeListListItem["AdScore"].isNull())
			listItemObject.adScore = mediaAuditResultDetailNodeListListItem["AdScore"].asString();
		if(!mediaAuditResultDetailNodeListListItem["LiveScore"].isNull())
			listItemObject.liveScore = mediaAuditResultDetailNodeListListItem["LiveScore"].asString();
		if(!mediaAuditResultDetailNodeListListItem["LogoScore"].isNull())
			listItemObject.logoScore = mediaAuditResultDetailNodeListListItem["LogoScore"].asString();
		if(!mediaAuditResultDetailNodeListListItem["LogoLabel"].isNull())
			listItemObject.logoLabel = mediaAuditResultDetailNodeListListItem["LogoLabel"].asString();
		if(!mediaAuditResultDetailNodeListListItem["TerrorismLabel"].isNull())
			listItemObject.terrorismLabel = mediaAuditResultDetailNodeListListItem["TerrorismLabel"].asString();
		mediaAuditResultDetail_.list.push_back(listItemObject);
	}

}

GetMediaAuditResultDetailResult::MediaAuditResultDetail GetMediaAuditResultDetailResult::getMediaAuditResultDetail()const
{
	return mediaAuditResultDetail_;
}

