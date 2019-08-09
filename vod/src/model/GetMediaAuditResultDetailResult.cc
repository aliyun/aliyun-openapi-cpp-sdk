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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto mediaAuditResultDetailNode = value["MediaAuditResultDetail"];
	if(!mediaAuditResultDetailNode["Total"].isNull())
		mediaAuditResultDetail_.total = std::stoi(mediaAuditResultDetailNode["Total"].asString());
	auto allList = value["List"]["ListItem"];
	for (auto value : allList)
	{
		MediaAuditResultDetail::ListItem listItemObject;
		if(!value["PornLabel"].isNull())
			listItemObject.pornLabel = value["PornLabel"].asString();
		if(!value["PornScore"].isNull())
			listItemObject.pornScore = value["PornScore"].asString();
		if(!value["TerrorismLabel"].isNull())
			listItemObject.terrorismLabel = value["TerrorismLabel"].asString();
		if(!value["TerrorismScore"].isNull())
			listItemObject.terrorismScore = value["TerrorismScore"].asString();
		if(!value["Timestamp"].isNull())
			listItemObject.timestamp = value["Timestamp"].asString();
		if(!value["Url"].isNull())
			listItemObject.url = value["Url"].asString();
		mediaAuditResultDetail_.list.push_back(listItemObject);
	}

}

GetMediaAuditResultDetailResult::MediaAuditResultDetail GetMediaAuditResultDetailResult::getMediaAuditResultDetail()const
{
	return mediaAuditResultDetail_;
}

