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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaAuditResultNode = value["MediaAuditResult"];
	if(!mediaAuditResultNode["AbnormalModules"].isNull())
		mediaAuditResult_.abnormalModules = mediaAuditResultNode["AbnormalModules"].asString();
	if(!mediaAuditResultNode["Label"].isNull())
		mediaAuditResult_.label = mediaAuditResultNode["Label"].asString();
	if(!mediaAuditResultNode["Suggestion"].isNull())
		mediaAuditResult_.suggestion = mediaAuditResultNode["Suggestion"].asString();
	auto allImageResultNode = mediaAuditResultNode["ImageResult"]["ImageResultItem"];
	for (auto mediaAuditResultNodeImageResultImageResultItem : allImageResultNode)
	{
		MediaAuditResult::ImageResultItem imageResultItemObject;
		if(!mediaAuditResultNodeImageResultImageResultItem["Suggestion"].isNull())
			imageResultItemObject.suggestion = mediaAuditResultNodeImageResultImageResultItem["Suggestion"].asString();
		if(!mediaAuditResultNodeImageResultImageResultItem["Label"].isNull())
			imageResultItemObject.label = mediaAuditResultNodeImageResultImageResultItem["Label"].asString();
		if(!mediaAuditResultNodeImageResultImageResultItem["Type"].isNull())
			imageResultItemObject.type = mediaAuditResultNodeImageResultImageResultItem["Type"].asString();
		if(!mediaAuditResultNodeImageResultImageResultItem["Url"].isNull())
			imageResultItemObject.url = mediaAuditResultNodeImageResultImageResultItem["Url"].asString();
		auto allResultNode = allImageResultNode["Result"]["ResultItem"];
		for (auto allImageResultNodeResultResultItem : allResultNode)
		{
			MediaAuditResult::ImageResultItem::ResultItem resultObject;
			if(!allImageResultNodeResultResultItem["Suggestion"].isNull())
				resultObject.suggestion = allImageResultNodeResultResultItem["Suggestion"].asString();
			if(!allImageResultNodeResultResultItem["Label"].isNull())
				resultObject.label = allImageResultNodeResultResultItem["Label"].asString();
			if(!allImageResultNodeResultResultItem["Score"].isNull())
				resultObject.score = allImageResultNodeResultResultItem["Score"].asString();
			if(!allImageResultNodeResultResultItem["Scene"].isNull())
				resultObject.scene = allImageResultNodeResultResultItem["Scene"].asString();
			imageResultItemObject.result.push_back(resultObject);
		}
		mediaAuditResult_.imageResult.push_back(imageResultItemObject);
	}
	auto allTextResultNode = mediaAuditResultNode["TextResult"]["TextResultItem"];
	for (auto mediaAuditResultNodeTextResultTextResultItem : allTextResultNode)
	{
		MediaAuditResult::TextResultItem textResultItemObject;
		if(!mediaAuditResultNodeTextResultTextResultItem["Suggestion"].isNull())
			textResultItemObject.suggestion = mediaAuditResultNodeTextResultTextResultItem["Suggestion"].asString();
		if(!mediaAuditResultNodeTextResultTextResultItem["Label"].isNull())
			textResultItemObject.label = mediaAuditResultNodeTextResultTextResultItem["Label"].asString();
		if(!mediaAuditResultNodeTextResultTextResultItem["Score"].isNull())
			textResultItemObject.score = mediaAuditResultNodeTextResultTextResultItem["Score"].asString();
		if(!mediaAuditResultNodeTextResultTextResultItem["Scene"].isNull())
			textResultItemObject.scene = mediaAuditResultNodeTextResultTextResultItem["Scene"].asString();
		if(!mediaAuditResultNodeTextResultTextResultItem["Type"].isNull())
			textResultItemObject.type = mediaAuditResultNodeTextResultTextResultItem["Type"].asString();
		if(!mediaAuditResultNodeTextResultTextResultItem["Content"].isNull())
			textResultItemObject.content = mediaAuditResultNodeTextResultTextResultItem["Content"].asString();
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
	auto allCounterListNode = terrorismResultNode["CounterList"]["CounterListItem"];
	for (auto terrorismResultNodeCounterListCounterListItem : allCounterListNode)
	{
		MediaAuditResult::VideoResult::TerrorismResult::CounterListItem counterListItemObject;
		if(!terrorismResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItemObject.label = terrorismResultNodeCounterListCounterListItem["Label"].asString();
		if(!terrorismResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItemObject.count = std::stoi(terrorismResultNodeCounterListCounterListItem["Count"].asString());
		mediaAuditResult_.videoResult.terrorismResult.counterList.push_back(counterListItemObject);
	}
	auto allTopListNode = terrorismResultNode["TopList"]["TopListItem"];
	for (auto terrorismResultNodeTopListTopListItem : allTopListNode)
	{
		MediaAuditResult::VideoResult::TerrorismResult::TopListItem topListItemObject;
		if(!terrorismResultNodeTopListTopListItem["Label"].isNull())
			topListItemObject.label = terrorismResultNodeTopListTopListItem["Label"].asString();
		if(!terrorismResultNodeTopListTopListItem["Score"].isNull())
			topListItemObject.score = terrorismResultNodeTopListTopListItem["Score"].asString();
		if(!terrorismResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItemObject.timestamp = terrorismResultNodeTopListTopListItem["Timestamp"].asString();
		if(!terrorismResultNodeTopListTopListItem["Url"].isNull())
			topListItemObject.url = terrorismResultNodeTopListTopListItem["Url"].asString();
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
	auto allCounterList1Node = pornResultNode["CounterList"]["CounterListItem"];
	for (auto pornResultNodeCounterListCounterListItem : allCounterList1Node)
	{
		MediaAuditResult::VideoResult::PornResult::CounterListItem3 counterListItem3Object;
		if(!pornResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItem3Object.label = pornResultNodeCounterListCounterListItem["Label"].asString();
		if(!pornResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItem3Object.count = std::stoi(pornResultNodeCounterListCounterListItem["Count"].asString());
		mediaAuditResult_.videoResult.pornResult.counterList1.push_back(counterListItem3Object);
	}
	auto allTopList2Node = pornResultNode["TopList"]["TopListItem"];
	for (auto pornResultNodeTopListTopListItem : allTopList2Node)
	{
		MediaAuditResult::VideoResult::PornResult::TopListItem4 topListItem4Object;
		if(!pornResultNodeTopListTopListItem["Label"].isNull())
			topListItem4Object.label = pornResultNodeTopListTopListItem["Label"].asString();
		if(!pornResultNodeTopListTopListItem["Score"].isNull())
			topListItem4Object.score = pornResultNodeTopListTopListItem["Score"].asString();
		if(!pornResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItem4Object.timestamp = pornResultNodeTopListTopListItem["Timestamp"].asString();
		if(!pornResultNodeTopListTopListItem["Url"].isNull())
			topListItem4Object.url = pornResultNodeTopListTopListItem["Url"].asString();
		mediaAuditResult_.videoResult.pornResult.topList2.push_back(topListItem4Object);
	}

}

GetMediaAuditResultResult::MediaAuditResult GetMediaAuditResultResult::getMediaAuditResult()const
{
	return mediaAuditResult_;
}

