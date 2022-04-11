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

#include <alibabacloud/vod/model/GetAIMediaAuditJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetAIMediaAuditJobResult::GetAIMediaAuditJobResult() :
	ServiceResult()
{}

GetAIMediaAuditJobResult::GetAIMediaAuditJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAIMediaAuditJobResult::~GetAIMediaAuditJobResult()
{}

void GetAIMediaAuditJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaAuditJobNode = value["MediaAuditJob"];
	if(!mediaAuditJobNode["CreationTime"].isNull())
		mediaAuditJob_.creationTime = mediaAuditJobNode["CreationTime"].asString();
	if(!mediaAuditJobNode["Type"].isNull())
		mediaAuditJob_.type = mediaAuditJobNode["Type"].asString();
	if(!mediaAuditJobNode["Status"].isNull())
		mediaAuditJob_.status = mediaAuditJobNode["Status"].asString();
	if(!mediaAuditJobNode["CompleteTime"].isNull())
		mediaAuditJob_.completeTime = mediaAuditJobNode["CompleteTime"].asString();
	if(!mediaAuditJobNode["JobId"].isNull())
		mediaAuditJob_.jobId = mediaAuditJobNode["JobId"].asString();
	if(!mediaAuditJobNode["Code"].isNull())
		mediaAuditJob_.code = mediaAuditJobNode["Code"].asString();
	if(!mediaAuditJobNode["Message"].isNull())
		mediaAuditJob_.message = mediaAuditJobNode["Message"].asString();
	if(!mediaAuditJobNode["MediaId"].isNull())
		mediaAuditJob_.mediaId = mediaAuditJobNode["MediaId"].asString();
	auto dataNode = mediaAuditJobNode["Data"];
	if(!dataNode["Suggestion"].isNull())
		mediaAuditJob_.data.suggestion = dataNode["Suggestion"].asString();
	if(!dataNode["AbnormalModules"].isNull())
		mediaAuditJob_.data.abnormalModules = dataNode["AbnormalModules"].asString();
	if(!dataNode["Label"].isNull())
		mediaAuditJob_.data.label = dataNode["Label"].asString();
	auto allImageResultNode = dataNode["ImageResult"]["ImageResultItem"];
	for (auto dataNodeImageResultImageResultItem : allImageResultNode)
	{
		MediaAuditJob::Data::ImageResultItem imageResultItemObject;
		if(!dataNodeImageResultImageResultItem["Type"].isNull())
			imageResultItemObject.type = dataNodeImageResultImageResultItem["Type"].asString();
		if(!dataNodeImageResultImageResultItem["Url"].isNull())
			imageResultItemObject.url = dataNodeImageResultImageResultItem["Url"].asString();
		if(!dataNodeImageResultImageResultItem["Suggestion"].isNull())
			imageResultItemObject.suggestion = dataNodeImageResultImageResultItem["Suggestion"].asString();
		if(!dataNodeImageResultImageResultItem["Label"].isNull())
			imageResultItemObject.label = dataNodeImageResultImageResultItem["Label"].asString();
		auto allResultNode = dataNodeImageResultImageResultItem["Result"]["ResultItem"];
		for (auto dataNodeImageResultImageResultItemResultResultItem : allResultNode)
		{
			MediaAuditJob::Data::ImageResultItem::ResultItem resultObject;
			if(!dataNodeImageResultImageResultItemResultResultItem["Score"].isNull())
				resultObject.score = dataNodeImageResultImageResultItemResultResultItem["Score"].asString();
			if(!dataNodeImageResultImageResultItemResultResultItem["Suggestion"].isNull())
				resultObject.suggestion = dataNodeImageResultImageResultItemResultResultItem["Suggestion"].asString();
			if(!dataNodeImageResultImageResultItemResultResultItem["Label"].isNull())
				resultObject.label = dataNodeImageResultImageResultItemResultResultItem["Label"].asString();
			if(!dataNodeImageResultImageResultItemResultResultItem["Scene"].isNull())
				resultObject.scene = dataNodeImageResultImageResultItemResultResultItem["Scene"].asString();
			imageResultItemObject.result.push_back(resultObject);
		}
		mediaAuditJob_.data.imageResult.push_back(imageResultItemObject);
	}
	auto allTextResultNode = dataNode["TextResult"]["TextResultItem"];
	for (auto dataNodeTextResultTextResultItem : allTextResultNode)
	{
		MediaAuditJob::Data::TextResultItem textResultItemObject;
		if(!dataNodeTextResultTextResultItem["Type"].isNull())
			textResultItemObject.type = dataNodeTextResultTextResultItem["Type"].asString();
		if(!dataNodeTextResultTextResultItem["Suggestion"].isNull())
			textResultItemObject.suggestion = dataNodeTextResultTextResultItem["Suggestion"].asString();
		if(!dataNodeTextResultTextResultItem["Score"].isNull())
			textResultItemObject.score = dataNodeTextResultTextResultItem["Score"].asString();
		if(!dataNodeTextResultTextResultItem["Label"].isNull())
			textResultItemObject.label = dataNodeTextResultTextResultItem["Label"].asString();
		if(!dataNodeTextResultTextResultItem["Content"].isNull())
			textResultItemObject.content = dataNodeTextResultTextResultItem["Content"].asString();
		if(!dataNodeTextResultTextResultItem["Scene"].isNull())
			textResultItemObject.scene = dataNodeTextResultTextResultItem["Scene"].asString();
		mediaAuditJob_.data.textResult.push_back(textResultItemObject);
	}
	auto allAudioResultNode = dataNode["AudioResult"]["AudioResultItem"];
	for (auto dataNodeAudioResultAudioResultItem : allAudioResultNode)
	{
		MediaAuditJob::Data::AudioResultItem audioResultItemObject;
		if(!dataNodeAudioResultAudioResultItem["Score"].isNull())
			audioResultItemObject.score = dataNodeAudioResultAudioResultItem["Score"].asString();
		if(!dataNodeAudioResultAudioResultItem["Suggestion"].isNull())
			audioResultItemObject.suggestion = dataNodeAudioResultAudioResultItem["Suggestion"].asString();
		if(!dataNodeAudioResultAudioResultItem["Label"].isNull())
			audioResultItemObject.label = dataNodeAudioResultAudioResultItem["Label"].asString();
		if(!dataNodeAudioResultAudioResultItem["Scene"].isNull())
			audioResultItemObject.scene = dataNodeAudioResultAudioResultItem["Scene"].asString();
		mediaAuditJob_.data.audioResult.push_back(audioResultItemObject);
	}
	auto videoResultNode = dataNode["VideoResult"];
	if(!videoResultNode["Label"].isNull())
		mediaAuditJob_.data.videoResult.label = videoResultNode["Label"].asString();
	if(!videoResultNode["Suggestion"].isNull())
		mediaAuditJob_.data.videoResult.suggestion = videoResultNode["Suggestion"].asString();
	auto terrorismResultNode = videoResultNode["TerrorismResult"];
	if(!terrorismResultNode["Suggestion"].isNull())
		mediaAuditJob_.data.videoResult.terrorismResult.suggestion = terrorismResultNode["Suggestion"].asString();
	if(!terrorismResultNode["AverageScore"].isNull())
		mediaAuditJob_.data.videoResult.terrorismResult.averageScore = terrorismResultNode["AverageScore"].asString();
	if(!terrorismResultNode["Label"].isNull())
		mediaAuditJob_.data.videoResult.terrorismResult.label = terrorismResultNode["Label"].asString();
	if(!terrorismResultNode["MaxScore"].isNull())
		mediaAuditJob_.data.videoResult.terrorismResult.maxScore = terrorismResultNode["MaxScore"].asString();
	auto allCounterListNode = terrorismResultNode["CounterList"]["CounterListItem"];
	for (auto terrorismResultNodeCounterListCounterListItem : allCounterListNode)
	{
		MediaAuditJob::Data::VideoResult::TerrorismResult::CounterListItem counterListItemObject;
		if(!terrorismResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItemObject.label = terrorismResultNodeCounterListCounterListItem["Label"].asString();
		if(!terrorismResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItemObject.count = std::stoi(terrorismResultNodeCounterListCounterListItem["Count"].asString());
		mediaAuditJob_.data.videoResult.terrorismResult.counterList.push_back(counterListItemObject);
	}
	auto allTopListNode = terrorismResultNode["TopList"]["TopListItem"];
	for (auto terrorismResultNodeTopListTopListItem : allTopListNode)
	{
		MediaAuditJob::Data::VideoResult::TerrorismResult::TopListItem topListItemObject;
		if(!terrorismResultNodeTopListTopListItem["Url"].isNull())
			topListItemObject.url = terrorismResultNodeTopListTopListItem["Url"].asString();
		if(!terrorismResultNodeTopListTopListItem["Score"].isNull())
			topListItemObject.score = terrorismResultNodeTopListTopListItem["Score"].asString();
		if(!terrorismResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItemObject.timestamp = terrorismResultNodeTopListTopListItem["Timestamp"].asString();
		if(!terrorismResultNodeTopListTopListItem["Label"].isNull())
			topListItemObject.label = terrorismResultNodeTopListTopListItem["Label"].asString();
		mediaAuditJob_.data.videoResult.terrorismResult.topList.push_back(topListItemObject);
	}
	auto pornResultNode = videoResultNode["PornResult"];
	if(!pornResultNode["Suggestion"].isNull())
		mediaAuditJob_.data.videoResult.pornResult.suggestion = pornResultNode["Suggestion"].asString();
	if(!pornResultNode["AverageScore"].isNull())
		mediaAuditJob_.data.videoResult.pornResult.averageScore = pornResultNode["AverageScore"].asString();
	if(!pornResultNode["Label"].isNull())
		mediaAuditJob_.data.videoResult.pornResult.label = pornResultNode["Label"].asString();
	if(!pornResultNode["MaxScore"].isNull())
		mediaAuditJob_.data.videoResult.pornResult.maxScore = pornResultNode["MaxScore"].asString();
	auto allCounterList1Node = pornResultNode["CounterList"]["CounterListItem"];
	for (auto pornResultNodeCounterListCounterListItem : allCounterList1Node)
	{
		MediaAuditJob::Data::VideoResult::PornResult::CounterListItem3 counterListItem3Object;
		if(!pornResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItem3Object.label = pornResultNodeCounterListCounterListItem["Label"].asString();
		if(!pornResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItem3Object.count = std::stoi(pornResultNodeCounterListCounterListItem["Count"].asString());
		mediaAuditJob_.data.videoResult.pornResult.counterList1.push_back(counterListItem3Object);
	}
	auto allTopList2Node = pornResultNode["TopList"]["TopListItem"];
	for (auto pornResultNodeTopListTopListItem : allTopList2Node)
	{
		MediaAuditJob::Data::VideoResult::PornResult::TopListItem4 topListItem4Object;
		if(!pornResultNodeTopListTopListItem["Url"].isNull())
			topListItem4Object.url = pornResultNodeTopListTopListItem["Url"].asString();
		if(!pornResultNodeTopListTopListItem["Score"].isNull())
			topListItem4Object.score = pornResultNodeTopListTopListItem["Score"].asString();
		if(!pornResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItem4Object.timestamp = pornResultNodeTopListTopListItem["Timestamp"].asString();
		if(!pornResultNodeTopListTopListItem["Label"].isNull())
			topListItem4Object.label = pornResultNodeTopListTopListItem["Label"].asString();
		mediaAuditJob_.data.videoResult.pornResult.topList2.push_back(topListItem4Object);
	}
	auto adResultNode = videoResultNode["AdResult"];
	if(!adResultNode["Suggestion"].isNull())
		mediaAuditJob_.data.videoResult.adResult.suggestion = adResultNode["Suggestion"].asString();
	if(!adResultNode["AverageScore"].isNull())
		mediaAuditJob_.data.videoResult.adResult.averageScore = adResultNode["AverageScore"].asString();
	if(!adResultNode["Label"].isNull())
		mediaAuditJob_.data.videoResult.adResult.label = adResultNode["Label"].asString();
	if(!adResultNode["MaxScore"].isNull())
		mediaAuditJob_.data.videoResult.adResult.maxScore = adResultNode["MaxScore"].asString();
	auto allCounterList5Node = adResultNode["CounterList"]["CounterListItem"];
	for (auto adResultNodeCounterListCounterListItem : allCounterList5Node)
	{
		MediaAuditJob::Data::VideoResult::AdResult::CounterListItem7 counterListItem7Object;
		if(!adResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItem7Object.label = adResultNodeCounterListCounterListItem["Label"].asString();
		if(!adResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItem7Object.count = std::stoi(adResultNodeCounterListCounterListItem["Count"].asString());
		mediaAuditJob_.data.videoResult.adResult.counterList5.push_back(counterListItem7Object);
	}
	auto allTopList6Node = adResultNode["TopList"]["TopListItem"];
	for (auto adResultNodeTopListTopListItem : allTopList6Node)
	{
		MediaAuditJob::Data::VideoResult::AdResult::TopListItem8 topListItem8Object;
		if(!adResultNodeTopListTopListItem["Url"].isNull())
			topListItem8Object.url = adResultNodeTopListTopListItem["Url"].asString();
		if(!adResultNodeTopListTopListItem["Score"].isNull())
			topListItem8Object.score = adResultNodeTopListTopListItem["Score"].asString();
		if(!adResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItem8Object.timestamp = adResultNodeTopListTopListItem["Timestamp"].asString();
		if(!adResultNodeTopListTopListItem["Label"].isNull())
			topListItem8Object.label = adResultNodeTopListTopListItem["Label"].asString();
		mediaAuditJob_.data.videoResult.adResult.topList6.push_back(topListItem8Object);
	}
	auto liveResultNode = videoResultNode["LiveResult"];
	if(!liveResultNode["Suggestion"].isNull())
		mediaAuditJob_.data.videoResult.liveResult.suggestion = liveResultNode["Suggestion"].asString();
	if(!liveResultNode["AverageScore"].isNull())
		mediaAuditJob_.data.videoResult.liveResult.averageScore = liveResultNode["AverageScore"].asString();
	if(!liveResultNode["Label"].isNull())
		mediaAuditJob_.data.videoResult.liveResult.label = liveResultNode["Label"].asString();
	if(!liveResultNode["MaxScore"].isNull())
		mediaAuditJob_.data.videoResult.liveResult.maxScore = liveResultNode["MaxScore"].asString();
	auto allCounterList9Node = liveResultNode["CounterList"]["CounterListItem"];
	for (auto liveResultNodeCounterListCounterListItem : allCounterList9Node)
	{
		MediaAuditJob::Data::VideoResult::LiveResult::CounterListItem11 counterListItem11Object;
		if(!liveResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItem11Object.label = liveResultNodeCounterListCounterListItem["Label"].asString();
		if(!liveResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItem11Object.count = std::stoi(liveResultNodeCounterListCounterListItem["Count"].asString());
		mediaAuditJob_.data.videoResult.liveResult.counterList9.push_back(counterListItem11Object);
	}
	auto allTopList10Node = liveResultNode["TopList"]["TopListItem"];
	for (auto liveResultNodeTopListTopListItem : allTopList10Node)
	{
		MediaAuditJob::Data::VideoResult::LiveResult::TopListItem12 topListItem12Object;
		if(!liveResultNodeTopListTopListItem["Url"].isNull())
			topListItem12Object.url = liveResultNodeTopListTopListItem["Url"].asString();
		if(!liveResultNodeTopListTopListItem["Score"].isNull())
			topListItem12Object.score = liveResultNodeTopListTopListItem["Score"].asString();
		if(!liveResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItem12Object.timestamp = liveResultNodeTopListTopListItem["Timestamp"].asString();
		if(!liveResultNodeTopListTopListItem["Label"].isNull())
			topListItem12Object.label = liveResultNodeTopListTopListItem["Label"].asString();
		mediaAuditJob_.data.videoResult.liveResult.topList10.push_back(topListItem12Object);
	}
	auto logoResultNode = videoResultNode["LogoResult"];
	if(!logoResultNode["Suggestion"].isNull())
		mediaAuditJob_.data.videoResult.logoResult.suggestion = logoResultNode["Suggestion"].asString();
	if(!logoResultNode["AverageScore"].isNull())
		mediaAuditJob_.data.videoResult.logoResult.averageScore = logoResultNode["AverageScore"].asString();
	if(!logoResultNode["Label"].isNull())
		mediaAuditJob_.data.videoResult.logoResult.label = logoResultNode["Label"].asString();
	if(!logoResultNode["MaxScore"].isNull())
		mediaAuditJob_.data.videoResult.logoResult.maxScore = logoResultNode["MaxScore"].asString();
	auto allCounterList13Node = logoResultNode["CounterList"]["CounterListItem"];
	for (auto logoResultNodeCounterListCounterListItem : allCounterList13Node)
	{
		MediaAuditJob::Data::VideoResult::LogoResult::CounterListItem15 counterListItem15Object;
		if(!logoResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItem15Object.label = logoResultNodeCounterListCounterListItem["Label"].asString();
		if(!logoResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItem15Object.count = std::stoi(logoResultNodeCounterListCounterListItem["Count"].asString());
		mediaAuditJob_.data.videoResult.logoResult.counterList13.push_back(counterListItem15Object);
	}
	auto allTopList14Node = logoResultNode["TopList"]["TopListItem"];
	for (auto logoResultNodeTopListTopListItem : allTopList14Node)
	{
		MediaAuditJob::Data::VideoResult::LogoResult::TopListItem16 topListItem16Object;
		if(!logoResultNodeTopListTopListItem["Url"].isNull())
			topListItem16Object.url = logoResultNodeTopListTopListItem["Url"].asString();
		if(!logoResultNodeTopListTopListItem["Score"].isNull())
			topListItem16Object.score = logoResultNodeTopListTopListItem["Score"].asString();
		if(!logoResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItem16Object.timestamp = logoResultNodeTopListTopListItem["Timestamp"].asString();
		if(!logoResultNodeTopListTopListItem["Label"].isNull())
			topListItem16Object.label = logoResultNodeTopListTopListItem["Label"].asString();
		mediaAuditJob_.data.videoResult.logoResult.topList14.push_back(topListItem16Object);
	}

}

GetAIMediaAuditJobResult::MediaAuditJob GetAIMediaAuditJobResult::getMediaAuditJob()const
{
	return mediaAuditJob_;
}

