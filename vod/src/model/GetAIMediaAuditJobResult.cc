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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto mediaAuditJobNode = value["MediaAuditJob"];
	if(!mediaAuditJobNode["JobId"].isNull())
		mediaAuditJob_.jobId = mediaAuditJobNode["JobId"].asString();
	if(!mediaAuditJobNode["MediaId"].isNull())
		mediaAuditJob_.mediaId = mediaAuditJobNode["MediaId"].asString();
	if(!mediaAuditJobNode["Type"].isNull())
		mediaAuditJob_.type = mediaAuditJobNode["Type"].asString();
	if(!mediaAuditJobNode["Status"].isNull())
		mediaAuditJob_.status = mediaAuditJobNode["Status"].asString();
	if(!mediaAuditJobNode["Code"].isNull())
		mediaAuditJob_.code = mediaAuditJobNode["Code"].asString();
	if(!mediaAuditJobNode["Message"].isNull())
		mediaAuditJob_.message = mediaAuditJobNode["Message"].asString();
	if(!mediaAuditJobNode["CreationTime"].isNull())
		mediaAuditJob_.creationTime = mediaAuditJobNode["CreationTime"].asString();
	if(!mediaAuditJobNode["CompleteTime"].isNull())
		mediaAuditJob_.completeTime = mediaAuditJobNode["CompleteTime"].asString();
	auto dataNode = mediaAuditJobNode["Data"];
	if(!dataNode["Suggestion"].isNull())
		mediaAuditJob_.data.suggestion = dataNode["Suggestion"].asString();
	if(!dataNode["AbnormalModules"].isNull())
		mediaAuditJob_.data.abnormalModules = dataNode["AbnormalModules"].asString();
	if(!dataNode["Label"].isNull())
		mediaAuditJob_.data.label = dataNode["Label"].asString();
	auto allImageResult = value["ImageResult"]["ImageResultItem"];
	for (auto value : allImageResult)
	{
		MediaAuditJob::Data::ImageResultItem imageResultItemObject;
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
			MediaAuditJob::Data::ImageResultItem::ResultItem resultObject;
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
		mediaAuditJob_.data.imageResult.push_back(imageResultItemObject);
	}
	auto allTextResult = value["TextResult"]["TextResultItem"];
	for (auto value : allTextResult)
	{
		MediaAuditJob::Data::TextResultItem textResultItemObject;
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
		mediaAuditJob_.data.textResult.push_back(textResultItemObject);
	}
	auto videoResultNode = dataNode["VideoResult"];
	if(!videoResultNode["Suggestion"].isNull())
		mediaAuditJob_.data.videoResult.suggestion = videoResultNode["Suggestion"].asString();
	if(!videoResultNode["Label"].isNull())
		mediaAuditJob_.data.videoResult.label = videoResultNode["Label"].asString();
	auto terrorismResultNode = videoResultNode["TerrorismResult"];
	if(!terrorismResultNode["Suggestion"].isNull())
		mediaAuditJob_.data.videoResult.terrorismResult.suggestion = terrorismResultNode["Suggestion"].asString();
	if(!terrorismResultNode["Label"].isNull())
		mediaAuditJob_.data.videoResult.terrorismResult.label = terrorismResultNode["Label"].asString();
	if(!terrorismResultNode["MaxScore"].isNull())
		mediaAuditJob_.data.videoResult.terrorismResult.maxScore = terrorismResultNode["MaxScore"].asString();
	if(!terrorismResultNode["AverageScore"].isNull())
		mediaAuditJob_.data.videoResult.terrorismResult.averageScore = terrorismResultNode["AverageScore"].asString();
	auto allCounterList = value["CounterList"]["CounterListItem"];
	for (auto value : allCounterList)
	{
		MediaAuditJob::Data::VideoResult::TerrorismResult::CounterListItem counterListItemObject;
		if(!value["Label"].isNull())
			counterListItemObject.label = value["Label"].asString();
		if(!value["Count"].isNull())
			counterListItemObject.count = std::stoi(value["Count"].asString());
		mediaAuditJob_.data.videoResult.terrorismResult.counterList.push_back(counterListItemObject);
	}
	auto allTopList = value["TopList"]["TopListItem"];
	for (auto value : allTopList)
	{
		MediaAuditJob::Data::VideoResult::TerrorismResult::TopListItem topListItemObject;
		if(!value["Label"].isNull())
			topListItemObject.label = value["Label"].asString();
		if(!value["Score"].isNull())
			topListItemObject.score = value["Score"].asString();
		if(!value["Timestamp"].isNull())
			topListItemObject.timestamp = value["Timestamp"].asString();
		if(!value["Url"].isNull())
			topListItemObject.url = value["Url"].asString();
		mediaAuditJob_.data.videoResult.terrorismResult.topList.push_back(topListItemObject);
	}
	auto pornResultNode = videoResultNode["PornResult"];
	if(!pornResultNode["Suggestion"].isNull())
		mediaAuditJob_.data.videoResult.pornResult.suggestion = pornResultNode["Suggestion"].asString();
	if(!pornResultNode["Label"].isNull())
		mediaAuditJob_.data.videoResult.pornResult.label = pornResultNode["Label"].asString();
	if(!pornResultNode["MaxScore"].isNull())
		mediaAuditJob_.data.videoResult.pornResult.maxScore = pornResultNode["MaxScore"].asString();
	if(!pornResultNode["AverageScore"].isNull())
		mediaAuditJob_.data.videoResult.pornResult.averageScore = pornResultNode["AverageScore"].asString();
	auto allCounterList1 = value["CounterList"]["CounterListItem"];
	for (auto value : allCounterList1)
	{
		MediaAuditJob::Data::VideoResult::PornResult::CounterListItem3 counterListItem3Object;
		if(!value["Label"].isNull())
			counterListItem3Object.label = value["Label"].asString();
		if(!value["Count"].isNull())
			counterListItem3Object.count = std::stoi(value["Count"].asString());
		mediaAuditJob_.data.videoResult.pornResult.counterList1.push_back(counterListItem3Object);
	}
	auto allTopList2 = value["TopList"]["TopListItem"];
	for (auto value : allTopList2)
	{
		MediaAuditJob::Data::VideoResult::PornResult::TopListItem4 topListItem4Object;
		if(!value["Label"].isNull())
			topListItem4Object.label = value["Label"].asString();
		if(!value["Score"].isNull())
			topListItem4Object.score = value["Score"].asString();
		if(!value["Timestamp"].isNull())
			topListItem4Object.timestamp = value["Timestamp"].asString();
		if(!value["Url"].isNull())
			topListItem4Object.url = value["Url"].asString();
		mediaAuditJob_.data.videoResult.pornResult.topList2.push_back(topListItem4Object);
	}

}

GetAIMediaAuditJobResult::MediaAuditJob GetAIMediaAuditJobResult::getMediaAuditJob()const
{
	return mediaAuditJob_;
}

