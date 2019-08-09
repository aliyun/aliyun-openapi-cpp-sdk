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

#include <alibabacloud/vod/model/GetMediaAuditResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetMediaAuditResultResult::GetMediaAuditResultResult() :
	ServiceResult()
{}

GetMediaAuditResultResult::GetMediaAuditResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMediaAuditResultResult::~GetMediaAuditResultResult()
{}

void GetMediaAuditResultResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto mediaAuditResultNode = value["MediaAuditResult"];
	if(!mediaAuditResultNode["AbnormalModules"].isNull())
		mediaAuditResult_.abnormalModules = mediaAuditResultNode["AbnormalModules"].asString();
	if(!mediaAuditResultNode["Label"].isNull())
		mediaAuditResult_.label = mediaAuditResultNode["Label"].asString();
	if(!mediaAuditResultNode["Suggestion"].isNull())
		mediaAuditResult_.suggestion = mediaAuditResultNode["Suggestion"].asString();
	auto allImageResult = value["ImageResult"]["ImageResultItem"];
	for (auto value : allImageResult)
	{
		MediaAuditResult::ImageResultItem imageResultItemObject;
		if(!value["Suggestion"].isNull())
			imageResultItemObject.suggestion = value["Suggestion"].asString();
		if(!value["Label"].isNull())
			imageResultItemObject.label = value["Label"].asString();
		if(!value["Type"].isNull())
			imageResultItemObject.type = value["Type"].asString();
		if(!value["Url"].isNull())
			imageResultItemObject.url = value["Url"].asString();
		auto allResult = value["Result"]["ResultItem"];
		for (auto value : allResult)
		{
			MediaAuditResult::ImageResultItem::ResultItem resultObject;
			if(!value["Suggestion"].isNull())
				resultObject.suggestion = value["Suggestion"].asString();
			if(!value["Label"].isNull())
				resultObject.label = value["Label"].asString();
			if(!value["Score"].isNull())
				resultObject.score = value["Score"].asString();
			if(!value["Scene"].isNull())
				resultObject.scene = value["Scene"].asString();
			imageResultItemObject.result.push_back(resultObject);
		}
		mediaAuditResult_.imageResult.push_back(imageResultItemObject);
	}
	auto allTextResult = value["TextResult"]["TextResultItem"];
	for (auto value : allTextResult)
	{
		MediaAuditResult::TextResultItem textResultItemObject;
		if(!value["Suggestion"].isNull())
			textResultItemObject.suggestion = value["Suggestion"].asString();
		if(!value["Label"].isNull())
			textResultItemObject.label = value["Label"].asString();
		if(!value["Score"].isNull())
			textResultItemObject.score = value["Score"].asString();
		if(!value["Scene"].isNull())
			textResultItemObject.scene = value["Scene"].asString();
		if(!value["Type"].isNull())
			textResultItemObject.type = value["Type"].asString();
		if(!value["Content"].isNull())
			textResultItemObject.content = value["Content"].asString();
		mediaAuditResult_.textResult.push_back(textResultItemObject);
	}
	auto videoResultNode = mediaAuditResultNode["VideoResult"];
	if(!videoResultNode["Suggestion"].isNull())
		mediaAuditResult_.videoResult.suggestion = videoResultNode["Suggestion"].asString();
	if(!videoResultNode["Label"].isNull())
		mediaAuditResult_.videoResult.label = videoResultNode["Label"].asString();
	auto terrorismResultNode = videoResultNode["TerrorismResult"];
	if(!terrorismResultNode["Suggestion"].isNull())
		mediaAuditResult_.videoResult.terrorismResult.suggestion = terrorismResultNode["Suggestion"].asString();
	if(!terrorismResultNode["Label"].isNull())
		mediaAuditResult_.videoResult.terrorismResult.label = terrorismResultNode["Label"].asString();
	if(!terrorismResultNode["MaxScore"].isNull())
		mediaAuditResult_.videoResult.terrorismResult.maxScore = terrorismResultNode["MaxScore"].asString();
	if(!terrorismResultNode["AverageScore"].isNull())
		mediaAuditResult_.videoResult.terrorismResult.averageScore = terrorismResultNode["AverageScore"].asString();
	auto allCounterList = value["CounterList"]["CounterListItem"];
	for (auto value : allCounterList)
	{
		MediaAuditResult::VideoResult::TerrorismResult::CounterListItem counterListItemObject;
		if(!value["Label"].isNull())
			counterListItemObject.label = value["Label"].asString();
		if(!value["Count"].isNull())
			counterListItemObject.count = std::stoi(value["Count"].asString());
		mediaAuditResult_.videoResult.terrorismResult.counterList.push_back(counterListItemObject);
	}
	auto allTopList = value["TopList"]["TopListItem"];
	for (auto value : allTopList)
	{
		MediaAuditResult::VideoResult::TerrorismResult::TopListItem topListItemObject;
		if(!value["Label"].isNull())
			topListItemObject.label = value["Label"].asString();
		if(!value["Score"].isNull())
			topListItemObject.score = value["Score"].asString();
		if(!value["Timestamp"].isNull())
			topListItemObject.timestamp = value["Timestamp"].asString();
		if(!value["Url"].isNull())
			topListItemObject.url = value["Url"].asString();
		mediaAuditResult_.videoResult.terrorismResult.topList.push_back(topListItemObject);
	}
	auto pornResultNode = videoResultNode["PornResult"];
	if(!pornResultNode["Suggestion"].isNull())
		mediaAuditResult_.videoResult.pornResult.suggestion = pornResultNode["Suggestion"].asString();
	if(!pornResultNode["Label"].isNull())
		mediaAuditResult_.videoResult.pornResult.label = pornResultNode["Label"].asString();
	if(!pornResultNode["MaxScore"].isNull())
		mediaAuditResult_.videoResult.pornResult.maxScore = pornResultNode["MaxScore"].asString();
	if(!pornResultNode["AverageScore"].isNull())
		mediaAuditResult_.videoResult.pornResult.averageScore = pornResultNode["AverageScore"].asString();
	auto allCounterList1 = value["CounterList"]["CounterListItem"];
	for (auto value : allCounterList1)
	{
		MediaAuditResult::VideoResult::PornResult::CounterListItem3 counterListItem3Object;
		if(!value["Label"].isNull())
			counterListItem3Object.label = value["Label"].asString();
		if(!value["Count"].isNull())
			counterListItem3Object.count = std::stoi(value["Count"].asString());
		mediaAuditResult_.videoResult.pornResult.counterList1.push_back(counterListItem3Object);
	}
	auto allTopList2 = value["TopList"]["TopListItem"];
	for (auto value : allTopList2)
	{
		MediaAuditResult::VideoResult::PornResult::TopListItem4 topListItem4Object;
		if(!value["Label"].isNull())
			topListItem4Object.label = value["Label"].asString();
		if(!value["Score"].isNull())
			topListItem4Object.score = value["Score"].asString();
		if(!value["Timestamp"].isNull())
			topListItem4Object.timestamp = value["Timestamp"].asString();
		if(!value["Url"].isNull())
			topListItem4Object.url = value["Url"].asString();
		mediaAuditResult_.videoResult.pornResult.topList2.push_back(topListItem4Object);
	}

}

GetMediaAuditResultResult::MediaAuditResult GetMediaAuditResultResult::getMediaAuditResult()const
{
	return mediaAuditResult_;
}

