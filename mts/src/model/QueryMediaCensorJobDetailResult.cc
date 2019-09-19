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
	if(!mediaCensorJobDetailNode["JobId"].isNull())
		mediaCensorJobDetail_.jobId = mediaCensorJobDetailNode["JobId"].asString();
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
	if(!mediaCensorJobDetailNode["FinishTime"].isNull())
		mediaCensorJobDetail_.finishTime = mediaCensorJobDetailNode["FinishTime"].asString();
	auto allCoverImageCensorResultsNode = mediaCensorJobDetailNode["CoverImageCensorResults"]["CoverImageCensorResult"];
	for (auto mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult : allCoverImageCensorResultsNode)
	{
		MediaCensorJobDetail::CoverImageCensorResult coverImageCensorResultObject;
		if(!mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Location"].isNull())
			coverImageCensorResultObject.location = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Location"].asString();
		if(!mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Bucket"].isNull())
			coverImageCensorResultObject.bucket = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Bucket"].asString();
		if(!mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Object"].isNull())
			coverImageCensorResultObject.object = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Object"].asString();
		auto allResultsNode = allCoverImageCensorResultsNode["Results"]["Result"];
		for (auto allCoverImageCensorResultsNodeResultsResult : allResultsNode)
		{
			MediaCensorJobDetail::CoverImageCensorResult::Result resultsObject;
			if(!allCoverImageCensorResultsNodeResultsResult["Rate"].isNull())
				resultsObject.rate = allCoverImageCensorResultsNodeResultsResult["Rate"].asString();
			if(!allCoverImageCensorResultsNodeResultsResult["Scene"].isNull())
				resultsObject.scene = allCoverImageCensorResultsNodeResultsResult["Scene"].asString();
			if(!allCoverImageCensorResultsNodeResultsResult["Label"].isNull())
				resultsObject.label = allCoverImageCensorResultsNodeResultsResult["Label"].asString();
			if(!allCoverImageCensorResultsNodeResultsResult["Suggestion"].isNull())
				resultsObject.suggestion = allCoverImageCensorResultsNodeResultsResult["Suggestion"].asString();
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
	auto allCensorResultsNode = vensorCensorResultNode["CensorResults"]["CensorResult"];
	for (auto vensorCensorResultNodeCensorResultsCensorResult : allCensorResultsNode)
	{
		MediaCensorJobDetail::VensorCensorResult::CensorResult censorResultObject;
		if(!vensorCensorResultNodeCensorResultsCensorResult["Rate"].isNull())
			censorResultObject.rate = vensorCensorResultNodeCensorResultsCensorResult["Rate"].asString();
		if(!vensorCensorResultNodeCensorResultsCensorResult["Scene"].isNull())
			censorResultObject.scene = vensorCensorResultNodeCensorResultsCensorResult["Scene"].asString();
		if(!vensorCensorResultNodeCensorResultsCensorResult["Label"].isNull())
			censorResultObject.label = vensorCensorResultNodeCensorResultsCensorResult["Label"].asString();
		if(!vensorCensorResultNodeCensorResultsCensorResult["Suggestion"].isNull())
			censorResultObject.suggestion = vensorCensorResultNodeCensorResultsCensorResult["Suggestion"].asString();
		mediaCensorJobDetail_.vensorCensorResult.censorResults.push_back(censorResultObject);
	}
	auto allVideoTimelinesNode = vensorCensorResultNode["VideoTimelines"]["VideoTimeline"];
	for (auto vensorCensorResultNodeVideoTimelinesVideoTimeline : allVideoTimelinesNode)
	{
		MediaCensorJobDetail::VensorCensorResult::VideoTimeline videoTimelineObject;
		if(!vensorCensorResultNodeVideoTimelinesVideoTimeline["Object"].isNull())
			videoTimelineObject.object = vensorCensorResultNodeVideoTimelinesVideoTimeline["Object"].asString();
		if(!vensorCensorResultNodeVideoTimelinesVideoTimeline["Timestamp"].isNull())
			videoTimelineObject.timestamp = vensorCensorResultNodeVideoTimelinesVideoTimeline["Timestamp"].asString();
		auto allCensorResults1Node = allVideoTimelinesNode["CensorResults"]["CensorResult"];
		for (auto allVideoTimelinesNodeCensorResultsCensorResult : allCensorResults1Node)
		{
			MediaCensorJobDetail::VensorCensorResult::VideoTimeline::CensorResult2 censorResults1Object;
			if(!allVideoTimelinesNodeCensorResultsCensorResult["Rate"].isNull())
				censorResults1Object.rate = allVideoTimelinesNodeCensorResultsCensorResult["Rate"].asString();
			if(!allVideoTimelinesNodeCensorResultsCensorResult["Scene"].isNull())
				censorResults1Object.scene = allVideoTimelinesNodeCensorResultsCensorResult["Scene"].asString();
			if(!allVideoTimelinesNodeCensorResultsCensorResult["Label"].isNull())
				censorResults1Object.label = allVideoTimelinesNodeCensorResultsCensorResult["Label"].asString();
			if(!allVideoTimelinesNodeCensorResultsCensorResult["Suggestion"].isNull())
				censorResults1Object.suggestion = allVideoTimelinesNodeCensorResultsCensorResult["Suggestion"].asString();
			videoTimelineObject.censorResults1.push_back(censorResults1Object);
		}
		mediaCensorJobDetail_.vensorCensorResult.videoTimelines.push_back(videoTimelineObject);
	}

}

QueryMediaCensorJobDetailResult::MediaCensorJobDetail QueryMediaCensorJobDetailResult::getMediaCensorJobDetail()const
{
	return mediaCensorJobDetail_;
}

