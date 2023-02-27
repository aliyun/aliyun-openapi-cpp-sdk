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

#include <alibabacloud/ice/model/QueryMediaCensorJobDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

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
	if(!mediaCensorJobDetailNode["CreationTime"].isNull())
		mediaCensorJobDetail_.creationTime = mediaCensorJobDetailNode["CreationTime"].asString();
	if(!mediaCensorJobDetailNode["FinishTime"].isNull())
		mediaCensorJobDetail_.finishTime = mediaCensorJobDetailNode["FinishTime"].asString();
	if(!mediaCensorJobDetailNode["Suggestion"].isNull())
		mediaCensorJobDetail_.suggestion = mediaCensorJobDetailNode["Suggestion"].asString();
	if(!mediaCensorJobDetailNode["State"].isNull())
		mediaCensorJobDetail_.state = mediaCensorJobDetailNode["State"].asString();
	if(!mediaCensorJobDetailNode["Message"].isNull())
		mediaCensorJobDetail_.message = mediaCensorJobDetailNode["Message"].asString();
	if(!mediaCensorJobDetailNode["JobId"].isNull())
		mediaCensorJobDetail_.jobId = mediaCensorJobDetailNode["JobId"].asString();
	if(!mediaCensorJobDetailNode["UserData"].isNull())
		mediaCensorJobDetail_.userData = mediaCensorJobDetailNode["UserData"].asString();
	if(!mediaCensorJobDetailNode["Code"].isNull())
		mediaCensorJobDetail_.code = mediaCensorJobDetailNode["Code"].asString();
	if(!mediaCensorJobDetailNode["PipelineId"].isNull())
		mediaCensorJobDetail_.pipelineId = mediaCensorJobDetailNode["PipelineId"].asString();
	auto allCoverImageCensorResultsNode = mediaCensorJobDetailNode["CoverImageCensorResults"]["CoverImageCensorResult"];
	for (auto mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult : allCoverImageCensorResultsNode)
	{
		MediaCensorJobDetail::CoverImageCensorResult coverImageCensorResultObject;
		if(!mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Object"].isNull())
			coverImageCensorResultObject.object = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Object"].asString();
		if(!mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Location"].isNull())
			coverImageCensorResultObject.location = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Location"].asString();
		if(!mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Bucket"].isNull())
			coverImageCensorResultObject.bucket = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Bucket"].asString();
		auto allResultsNode = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResult["Results"]["Result"];
		for (auto mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResultResultsResult : allResultsNode)
		{
			MediaCensorJobDetail::CoverImageCensorResult::Result resultsObject;
			if(!mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResultResultsResult["Suggestion"].isNull())
				resultsObject.suggestion = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResultResultsResult["Suggestion"].asString();
			if(!mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResultResultsResult["Label"].isNull())
				resultsObject.label = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResultResultsResult["Label"].asString();
			if(!mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResultResultsResult["Scene"].isNull())
				resultsObject.scene = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResultResultsResult["Scene"].asString();
			if(!mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResultResultsResult["Rate"].isNull())
				resultsObject.rate = mediaCensorJobDetailNodeCoverImageCensorResultsCoverImageCensorResultResultsResult["Rate"].asString();
			coverImageCensorResultObject.results.push_back(resultsObject);
		}
		mediaCensorJobDetail_.coverImageCensorResults.push_back(coverImageCensorResultObject);
	}
	auto titleCensorResultNode = mediaCensorJobDetailNode["TitleCensorResult"];
	if(!titleCensorResultNode["Suggestion"].isNull())
		mediaCensorJobDetail_.titleCensorResult.suggestion = titleCensorResultNode["Suggestion"].asString();
	if(!titleCensorResultNode["Label"].isNull())
		mediaCensorJobDetail_.titleCensorResult.label = titleCensorResultNode["Label"].asString();
	if(!titleCensorResultNode["Scene"].isNull())
		mediaCensorJobDetail_.titleCensorResult.scene = titleCensorResultNode["Scene"].asString();
	if(!titleCensorResultNode["Rate"].isNull())
		mediaCensorJobDetail_.titleCensorResult.rate = titleCensorResultNode["Rate"].asString();
	auto inputNode = mediaCensorJobDetailNode["Input"];
	if(!inputNode["Object"].isNull())
		mediaCensorJobDetail_.input.object = inputNode["Object"].asString();
	if(!inputNode["Location"].isNull())
		mediaCensorJobDetail_.input.location = inputNode["Location"].asString();
	if(!inputNode["Bucket"].isNull())
		mediaCensorJobDetail_.input.bucket = inputNode["Bucket"].asString();
	auto barrageCensorResultNode = mediaCensorJobDetailNode["BarrageCensorResult"];
	if(!barrageCensorResultNode["Suggestion"].isNull())
		mediaCensorJobDetail_.barrageCensorResult.suggestion = barrageCensorResultNode["Suggestion"].asString();
	if(!barrageCensorResultNode["Label"].isNull())
		mediaCensorJobDetail_.barrageCensorResult.label = barrageCensorResultNode["Label"].asString();
	if(!barrageCensorResultNode["Scene"].isNull())
		mediaCensorJobDetail_.barrageCensorResult.scene = barrageCensorResultNode["Scene"].asString();
	if(!barrageCensorResultNode["Rate"].isNull())
		mediaCensorJobDetail_.barrageCensorResult.rate = barrageCensorResultNode["Rate"].asString();
	auto descCensorResultNode = mediaCensorJobDetailNode["DescCensorResult"];
	if(!descCensorResultNode["Suggestion"].isNull())
		mediaCensorJobDetail_.descCensorResult.suggestion = descCensorResultNode["Suggestion"].asString();
	if(!descCensorResultNode["Label"].isNull())
		mediaCensorJobDetail_.descCensorResult.label = descCensorResultNode["Label"].asString();
	if(!descCensorResultNode["Scene"].isNull())
		mediaCensorJobDetail_.descCensorResult.scene = descCensorResultNode["Scene"].asString();
	if(!descCensorResultNode["Rate"].isNull())
		mediaCensorJobDetail_.descCensorResult.rate = descCensorResultNode["Rate"].asString();
	auto videoCensorConfigNode = mediaCensorJobDetailNode["VideoCensorConfig"];
	if(!videoCensorConfigNode["VideoCensor"].isNull())
		mediaCensorJobDetail_.videoCensorConfig.videoCensor = videoCensorConfigNode["VideoCensor"].asString();
	if(!videoCensorConfigNode["BizType"].isNull())
		mediaCensorJobDetail_.videoCensorConfig.bizType = videoCensorConfigNode["BizType"].asString();
	auto outputFileNode = videoCensorConfigNode["OutputFile"];
	if(!outputFileNode["Object"].isNull())
		mediaCensorJobDetail_.videoCensorConfig.outputFile.object = outputFileNode["Object"].asString();
	if(!outputFileNode["Location"].isNull())
		mediaCensorJobDetail_.videoCensorConfig.outputFile.location = outputFileNode["Location"].asString();
	if(!outputFileNode["Bucket"].isNull())
		mediaCensorJobDetail_.videoCensorConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
	auto vensorCensorResultNode = mediaCensorJobDetailNode["VensorCensorResult"];
	if(!vensorCensorResultNode["NextPageToken"].isNull())
		mediaCensorJobDetail_.vensorCensorResult.nextPageToken = vensorCensorResultNode["NextPageToken"].asString();
	auto allVideoTimelinesNode = vensorCensorResultNode["VideoTimelines"]["VideoTimeline"];
	for (auto vensorCensorResultNodeVideoTimelinesVideoTimeline : allVideoTimelinesNode)
	{
		MediaCensorJobDetail::VensorCensorResult::VideoTimeline videoTimelineObject;
		if(!vensorCensorResultNodeVideoTimelinesVideoTimeline["Timestamp"].isNull())
			videoTimelineObject.timestamp = vensorCensorResultNodeVideoTimelinesVideoTimeline["Timestamp"].asString();
		if(!vensorCensorResultNodeVideoTimelinesVideoTimeline["Object"].isNull())
			videoTimelineObject.object = vensorCensorResultNodeVideoTimelinesVideoTimeline["Object"].asString();
		auto allCensorResults1Node = vensorCensorResultNodeVideoTimelinesVideoTimeline["CensorResults"]["CensorResult"];
		for (auto vensorCensorResultNodeVideoTimelinesVideoTimelineCensorResultsCensorResult : allCensorResults1Node)
		{
			MediaCensorJobDetail::VensorCensorResult::VideoTimeline::CensorResult censorResults1Object;
			if(!vensorCensorResultNodeVideoTimelinesVideoTimelineCensorResultsCensorResult["Suggestion"].isNull())
				censorResults1Object.suggestion = vensorCensorResultNodeVideoTimelinesVideoTimelineCensorResultsCensorResult["Suggestion"].asString();
			if(!vensorCensorResultNodeVideoTimelinesVideoTimelineCensorResultsCensorResult["Label"].isNull())
				censorResults1Object.label = vensorCensorResultNodeVideoTimelinesVideoTimelineCensorResultsCensorResult["Label"].asString();
			if(!vensorCensorResultNodeVideoTimelinesVideoTimelineCensorResultsCensorResult["Scene"].isNull())
				censorResults1Object.scene = vensorCensorResultNodeVideoTimelinesVideoTimelineCensorResultsCensorResult["Scene"].asString();
			if(!vensorCensorResultNodeVideoTimelinesVideoTimelineCensorResultsCensorResult["Rate"].isNull())
				censorResults1Object.rate = vensorCensorResultNodeVideoTimelinesVideoTimelineCensorResultsCensorResult["Rate"].asString();
			videoTimelineObject.censorResults1.push_back(censorResults1Object);
		}
		mediaCensorJobDetail_.vensorCensorResult.videoTimelines.push_back(videoTimelineObject);
	}
	auto allCensorResultsNode = vensorCensorResultNode["CensorResults"]["CensorResult"];
	for (auto vensorCensorResultNodeCensorResultsCensorResult : allCensorResultsNode)
	{
		MediaCensorJobDetail::VensorCensorResult::CensorResult2 censorResult2Object;
		if(!vensorCensorResultNodeCensorResultsCensorResult["Suggestion"].isNull())
			censorResult2Object.suggestion = vensorCensorResultNodeCensorResultsCensorResult["Suggestion"].asString();
		if(!vensorCensorResultNodeCensorResultsCensorResult["Label"].isNull())
			censorResult2Object.label = vensorCensorResultNodeCensorResultsCensorResult["Label"].asString();
		if(!vensorCensorResultNodeCensorResultsCensorResult["Scene"].isNull())
			censorResult2Object.scene = vensorCensorResultNodeCensorResultsCensorResult["Scene"].asString();
		if(!vensorCensorResultNodeCensorResultsCensorResult["Rate"].isNull())
			censorResult2Object.rate = vensorCensorResultNodeCensorResultsCensorResult["Rate"].asString();
		mediaCensorJobDetail_.vensorCensorResult.censorResults.push_back(censorResult2Object);
	}

}

QueryMediaCensorJobDetailResult::MediaCensorJobDetail QueryMediaCensorJobDetailResult::getMediaCensorJobDetail()const
{
	return mediaCensorJobDetail_;
}

