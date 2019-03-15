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

#include <alibabacloud/mts/model/QueryMediaCensorJobDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMediaCensorJobDetailResult::QueryMediaCensorJobDetailResult() :
	ServiceResult()
{}

QueryMediaCensorJobDetailResult::QueryMediaCensorJobDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMediaCensorJobDetailResult::~QueryMediaCensorJobDetailResult()
{}

void QueryMediaCensorJobDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto mediaCensorJobDetailNode = value["MediaCensorJobDetail"];
	if(!mediaCensorJobDetailNode["Id"].isNull())
		mediaCensorJobDetail_.id = mediaCensorJobDetailNode["Id"].asString();
	if(!mediaCensorJobDetailNode["UserData"].isNull())
		mediaCensorJobDetail_.userData = mediaCensorJobDetailNode["UserData"].asString();
	if(!mediaCensorJobDetailNode["PipelineId"].isNull())
		mediaCensorJobDetail_.pipelineId = mediaCensorJobDetailNode["PipelineId"].asString();
	if(!mediaCensorJobDetailNode["State"].isNull())
		mediaCensorJobDetail_.state = mediaCensorJobDetailNode["State"].asString();
	if(!mediaCensorJobDetailNode["Code"].isNull())
		mediaCensorJobDetail_.code = mediaCensorJobDetailNode["Code"].asString();
	if(!mediaCensorJobDetailNode["Suggestion"].isNull())
		mediaCensorJobDetail_.suggestion = mediaCensorJobDetailNode["Suggestion"].asString();
	if(!mediaCensorJobDetailNode["Message"].isNull())
		mediaCensorJobDetail_.message = mediaCensorJobDetailNode["Message"].asString();
	if(!mediaCensorJobDetailNode["CreationTime"].isNull())
		mediaCensorJobDetail_.creationTime = mediaCensorJobDetailNode["CreationTime"].asString();
	auto allCoverImageCensorResults = value["CoverImageCensorResults"]["CoverImageCensorResult"];
	for (auto value : allCoverImageCensorResults)
	{
		MediaCensorJobDetail::CoverImageCensorResult coverImageCensorResultObject;
		if(!value["Location"].isNull())
			coverImageCensorResultObject.location = value["Location"].asString();
		if(!value["Bucket"].isNull())
			coverImageCensorResultObject.bucket = value["Bucket"].asString();
		if(!value["Object"].isNull())
			coverImageCensorResultObject.object = value["Object"].asString();
		auto allResults = value["Results"]["Result"];
		for (auto value : allResults)
		{
			MediaCensorJobDetail::CoverImageCensorResult::Result resultsObject;
			if(!value["Rate"].isNull())
				resultsObject.rate = value["Rate"].asString();
			if(!value["Scene"].isNull())
				resultsObject.scene = value["Scene"].asString();
			if(!value["Label"].isNull())
				resultsObject.label = value["Label"].asString();
			if(!value["Suggestion"].isNull())
				resultsObject.suggestion = value["Suggestion"].asString();
			coverImageCensorResultObject.results.push_back(resultsObject);
		}
		mediaCensorJobDetail_.coverImageCensorResults.push_back(coverImageCensorResultObject);
	}
	auto titleCensorResultNode = mediaCensorJobDetailNode["TitleCensorResult"];
	if(!titleCensorResultNode["Rate"].isNull())
		mediaCensorJobDetail_.titleCensorResult.rate = titleCensorResultNode["Rate"].asString();
	if(!titleCensorResultNode["Scene"].isNull())
		mediaCensorJobDetail_.titleCensorResult.scene = titleCensorResultNode["Scene"].asString();
	if(!titleCensorResultNode["Label"].isNull())
		mediaCensorJobDetail_.titleCensorResult.label = titleCensorResultNode["Label"].asString();
	if(!titleCensorResultNode["Suggestion"].isNull())
		mediaCensorJobDetail_.titleCensorResult.suggestion = titleCensorResultNode["Suggestion"].asString();
	auto descCensorResultNode = mediaCensorJobDetailNode["DescCensorResult"];
	if(!descCensorResultNode["Rate"].isNull())
		mediaCensorJobDetail_.descCensorResult.rate = descCensorResultNode["Rate"].asString();
	if(!descCensorResultNode["Scene"].isNull())
		mediaCensorJobDetail_.descCensorResult.scene = descCensorResultNode["Scene"].asString();
	if(!descCensorResultNode["Label"].isNull())
		mediaCensorJobDetail_.descCensorResult.label = descCensorResultNode["Label"].asString();
	if(!descCensorResultNode["Suggestion"].isNull())
		mediaCensorJobDetail_.descCensorResult.suggestion = descCensorResultNode["Suggestion"].asString();
	auto barrageCensorResultNode = mediaCensorJobDetailNode["BarrageCensorResult"];
	if(!barrageCensorResultNode["Rate"].isNull())
		mediaCensorJobDetail_.barrageCensorResult.rate = barrageCensorResultNode["Rate"].asString();
	if(!barrageCensorResultNode["Scene"].isNull())
		mediaCensorJobDetail_.barrageCensorResult.scene = barrageCensorResultNode["Scene"].asString();
	if(!barrageCensorResultNode["Label"].isNull())
		mediaCensorJobDetail_.barrageCensorResult.label = barrageCensorResultNode["Label"].asString();
	if(!barrageCensorResultNode["Suggestion"].isNull())
		mediaCensorJobDetail_.barrageCensorResult.suggestion = barrageCensorResultNode["Suggestion"].asString();
	auto inputNode = mediaCensorJobDetailNode["Input"];
	if(!inputNode["Bucket"].isNull())
		mediaCensorJobDetail_.input.bucket = inputNode["Bucket"].asString();
	if(!inputNode["Location"].isNull())
		mediaCensorJobDetail_.input.location = inputNode["Location"].asString();
	if(!inputNode["Object"].isNull())
		mediaCensorJobDetail_.input.object = inputNode["Object"].asString();
	auto videoCensorConfigNode = mediaCensorJobDetailNode["VideoCensorConfig"];
	if(!videoCensorConfigNode["BizType"].isNull())
		mediaCensorJobDetail_.videoCensorConfig.bizType = videoCensorConfigNode["BizType"].asString();
	if(!videoCensorConfigNode["VideoCensor"].isNull())
		mediaCensorJobDetail_.videoCensorConfig.videoCensor = videoCensorConfigNode["VideoCensor"].asString();
	auto outputFileNode = videoCensorConfigNode["OutputFile"];
	if(!outputFileNode["Bucket"].isNull())
		mediaCensorJobDetail_.videoCensorConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
	if(!outputFileNode["Location"].isNull())
		mediaCensorJobDetail_.videoCensorConfig.outputFile.location = outputFileNode["Location"].asString();
	if(!outputFileNode["Object"].isNull())
		mediaCensorJobDetail_.videoCensorConfig.outputFile.object = outputFileNode["Object"].asString();
	auto vensorCensorResultNode = mediaCensorJobDetailNode["VensorCensorResult"];
	if(!vensorCensorResultNode["NextPageToken"].isNull())
		mediaCensorJobDetail_.vensorCensorResult.nextPageToken = vensorCensorResultNode["NextPageToken"].asString();
	auto allCensorResults = value["CensorResults"]["CensorResult"];
	for (auto value : allCensorResults)
	{
		MediaCensorJobDetail::VensorCensorResult::CensorResult censorResultObject;
		if(!value["Rate"].isNull())
			censorResultObject.rate = value["Rate"].asString();
		if(!value["Scene"].isNull())
			censorResultObject.scene = value["Scene"].asString();
		if(!value["Label"].isNull())
			censorResultObject.label = value["Label"].asString();
		if(!value["Suggestion"].isNull())
			censorResultObject.suggestion = value["Suggestion"].asString();
		mediaCensorJobDetail_.vensorCensorResult.censorResults.push_back(censorResultObject);
	}
	auto allVideoTimelines = value["VideoTimelines"]["VideoTimeline"];
	for (auto value : allVideoTimelines)
	{
		MediaCensorJobDetail::VensorCensorResult::VideoTimeline videoTimelineObject;
		if(!value["Object"].isNull())
			videoTimelineObject.object = value["Object"].asString();
		if(!value["Timestamp"].isNull())
			videoTimelineObject.timestamp = value["Timestamp"].asString();
		auto allCensorResults1 = value["CensorResults"]["CensorResult"];
		for (auto value : allCensorResults1)
		{
			MediaCensorJobDetail::VensorCensorResult::VideoTimeline::CensorResult2 censorResults1Object;
			if(!value["Rate"].isNull())
				censorResults1Object.rate = value["Rate"].asString();
			if(!value["Scene"].isNull())
				censorResults1Object.scene = value["Scene"].asString();
			if(!value["Label"].isNull())
				censorResults1Object.label = value["Label"].asString();
			if(!value["Suggestion"].isNull())
				censorResults1Object.suggestion = value["Suggestion"].asString();
			videoTimelineObject.censorResults1.push_back(censorResults1Object);
		}
		mediaCensorJobDetail_.vensorCensorResult.videoTimelines.push_back(videoTimelineObject);
	}

}

QueryMediaCensorJobDetailResult::MediaCensorJobDetail QueryMediaCensorJobDetailResult::getMediaCensorJobDetail()const
{
	return mediaCensorJobDetail_;
}

