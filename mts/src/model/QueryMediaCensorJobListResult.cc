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

#include <alibabacloud/mts/model/QueryMediaCensorJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMediaCensorJobListResult::QueryMediaCensorJobListResult() :
	ServiceResult()
{}

QueryMediaCensorJobListResult::QueryMediaCensorJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMediaCensorJobListResult::~QueryMediaCensorJobListResult()
{}

void QueryMediaCensorJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaCensorJobListNode = value["MediaCensorJobList"]["MediaCensorJob"];
	for (auto valueMediaCensorJobListMediaCensorJob : allMediaCensorJobListNode)
	{
		MediaCensorJob mediaCensorJobListObject;
		if(!valueMediaCensorJobListMediaCensorJob["CreationTime"].isNull())
			mediaCensorJobListObject.creationTime = valueMediaCensorJobListMediaCensorJob["CreationTime"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["FinishTime"].isNull())
			mediaCensorJobListObject.finishTime = valueMediaCensorJobListMediaCensorJob["FinishTime"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["Suggestion"].isNull())
			mediaCensorJobListObject.suggestion = valueMediaCensorJobListMediaCensorJob["Suggestion"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["State"].isNull())
			mediaCensorJobListObject.state = valueMediaCensorJobListMediaCensorJob["State"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["Message"].isNull())
			mediaCensorJobListObject.message = valueMediaCensorJobListMediaCensorJob["Message"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["JobId"].isNull())
			mediaCensorJobListObject.jobId = valueMediaCensorJobListMediaCensorJob["JobId"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["UserData"].isNull())
			mediaCensorJobListObject.userData = valueMediaCensorJobListMediaCensorJob["UserData"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["Code"].isNull())
			mediaCensorJobListObject.code = valueMediaCensorJobListMediaCensorJob["Code"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["PipelineId"].isNull())
			mediaCensorJobListObject.pipelineId = valueMediaCensorJobListMediaCensorJob["PipelineId"].asString();
		auto allCoverImageCensorResultsNode = valueMediaCensorJobListMediaCensorJob["CoverImageCensorResults"]["CoverImageCensorResult"];
		for (auto valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult : allCoverImageCensorResultsNode)
		{
			MediaCensorJob::CoverImageCensorResult coverImageCensorResultsObject;
			if(!valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult["Object"].isNull())
				coverImageCensorResultsObject.object = valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult["Object"].asString();
			if(!valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult["Location"].isNull())
				coverImageCensorResultsObject.location = valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult["Location"].asString();
			if(!valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult["Bucket"].isNull())
				coverImageCensorResultsObject.bucket = valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult["Bucket"].asString();
			auto allResultsNode = valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult["Results"]["Result"];
			for (auto valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResultResultsResult : allResultsNode)
			{
				MediaCensorJob::CoverImageCensorResult::Result resultsObject;
				if(!valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResultResultsResult["Suggestion"].isNull())
					resultsObject.suggestion = valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResultResultsResult["Suggestion"].asString();
				if(!valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResultResultsResult["Label"].isNull())
					resultsObject.label = valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResultResultsResult["Label"].asString();
				if(!valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResultResultsResult["Scene"].isNull())
					resultsObject.scene = valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResultResultsResult["Scene"].asString();
				if(!valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResultResultsResult["Rate"].isNull())
					resultsObject.rate = valueMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResultResultsResult["Rate"].asString();
				coverImageCensorResultsObject.results.push_back(resultsObject);
			}
			mediaCensorJobListObject.coverImageCensorResults.push_back(coverImageCensorResultsObject);
		}
		auto titleCensorResultNode = value["TitleCensorResult"];
		if(!titleCensorResultNode["Suggestion"].isNull())
			mediaCensorJobListObject.titleCensorResult.suggestion = titleCensorResultNode["Suggestion"].asString();
		if(!titleCensorResultNode["Label"].isNull())
			mediaCensorJobListObject.titleCensorResult.label = titleCensorResultNode["Label"].asString();
		if(!titleCensorResultNode["Scene"].isNull())
			mediaCensorJobListObject.titleCensorResult.scene = titleCensorResultNode["Scene"].asString();
		if(!titleCensorResultNode["Rate"].isNull())
			mediaCensorJobListObject.titleCensorResult.rate = titleCensorResultNode["Rate"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Object"].isNull())
			mediaCensorJobListObject.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			mediaCensorJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			mediaCensorJobListObject.input.bucket = inputNode["Bucket"].asString();
		auto barrageCensorResultNode = value["BarrageCensorResult"];
		if(!barrageCensorResultNode["Suggestion"].isNull())
			mediaCensorJobListObject.barrageCensorResult.suggestion = barrageCensorResultNode["Suggestion"].asString();
		if(!barrageCensorResultNode["Label"].isNull())
			mediaCensorJobListObject.barrageCensorResult.label = barrageCensorResultNode["Label"].asString();
		if(!barrageCensorResultNode["Scene"].isNull())
			mediaCensorJobListObject.barrageCensorResult.scene = barrageCensorResultNode["Scene"].asString();
		if(!barrageCensorResultNode["Rate"].isNull())
			mediaCensorJobListObject.barrageCensorResult.rate = barrageCensorResultNode["Rate"].asString();
		auto descCensorResultNode = value["DescCensorResult"];
		if(!descCensorResultNode["Suggestion"].isNull())
			mediaCensorJobListObject.descCensorResult.suggestion = descCensorResultNode["Suggestion"].asString();
		if(!descCensorResultNode["Label"].isNull())
			mediaCensorJobListObject.descCensorResult.label = descCensorResultNode["Label"].asString();
		if(!descCensorResultNode["Scene"].isNull())
			mediaCensorJobListObject.descCensorResult.scene = descCensorResultNode["Scene"].asString();
		if(!descCensorResultNode["Rate"].isNull())
			mediaCensorJobListObject.descCensorResult.rate = descCensorResultNode["Rate"].asString();
		auto videoCensorConfigNode = value["VideoCensorConfig"];
		if(!videoCensorConfigNode["VideoCensor"].isNull())
			mediaCensorJobListObject.videoCensorConfig.videoCensor = videoCensorConfigNode["VideoCensor"].asString();
		if(!videoCensorConfigNode["BizType"].isNull())
			mediaCensorJobListObject.videoCensorConfig.bizType = videoCensorConfigNode["BizType"].asString();
		auto outputFileNode = videoCensorConfigNode["OutputFile"];
		if(!outputFileNode["Object"].isNull())
			mediaCensorJobListObject.videoCensorConfig.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["Location"].isNull())
			mediaCensorJobListObject.videoCensorConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Bucket"].isNull())
			mediaCensorJobListObject.videoCensorConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		auto vensorCensorResultNode = value["VensorCensorResult"];
		if(!vensorCensorResultNode["NextPageToken"].isNull())
			mediaCensorJobListObject.vensorCensorResult.nextPageToken = vensorCensorResultNode["NextPageToken"].asString();
		auto allVideoTimelinesNode = vensorCensorResultNode["VideoTimelines"]["VideoTimeline"];
		for (auto vensorCensorResultNodeVideoTimelinesVideoTimeline : allVideoTimelinesNode)
		{
			MediaCensorJob::VensorCensorResult::VideoTimeline videoTimelineObject;
			if(!vensorCensorResultNodeVideoTimelinesVideoTimeline["Timestamp"].isNull())
				videoTimelineObject.timestamp = vensorCensorResultNodeVideoTimelinesVideoTimeline["Timestamp"].asString();
			if(!vensorCensorResultNodeVideoTimelinesVideoTimeline["Object"].isNull())
				videoTimelineObject.object = vensorCensorResultNodeVideoTimelinesVideoTimeline["Object"].asString();
			auto allCensorResults1Node = vensorCensorResultNodeVideoTimelinesVideoTimeline["CensorResults"]["CensorResult"];
			for (auto vensorCensorResultNodeVideoTimelinesVideoTimelineCensorResultsCensorResult : allCensorResults1Node)
			{
				MediaCensorJob::VensorCensorResult::VideoTimeline::CensorResult censorResults1Object;
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
			mediaCensorJobListObject.vensorCensorResult.videoTimelines.push_back(videoTimelineObject);
		}
		auto allCensorResultsNode = vensorCensorResultNode["CensorResults"]["CensorResult"];
		for (auto vensorCensorResultNodeCensorResultsCensorResult : allCensorResultsNode)
		{
			MediaCensorJob::VensorCensorResult::CensorResult2 censorResult2Object;
			if(!vensorCensorResultNodeCensorResultsCensorResult["Suggestion"].isNull())
				censorResult2Object.suggestion = vensorCensorResultNodeCensorResultsCensorResult["Suggestion"].asString();
			if(!vensorCensorResultNodeCensorResultsCensorResult["Label"].isNull())
				censorResult2Object.label = vensorCensorResultNodeCensorResultsCensorResult["Label"].asString();
			if(!vensorCensorResultNodeCensorResultsCensorResult["Scene"].isNull())
				censorResult2Object.scene = vensorCensorResultNodeCensorResultsCensorResult["Scene"].asString();
			if(!vensorCensorResultNodeCensorResultsCensorResult["Rate"].isNull())
				censorResult2Object.rate = vensorCensorResultNodeCensorResultsCensorResult["Rate"].asString();
			mediaCensorJobListObject.vensorCensorResult.censorResults.push_back(censorResult2Object);
		}
		auto audioCensorResultNode = value["AudioCensorResult"];
		if(!audioCensorResultNode["Suggestion"].isNull())
			mediaCensorJobListObject.audioCensorResult.suggestion = audioCensorResultNode["Suggestion"].asString();
		if(!audioCensorResultNode["Label"].isNull())
			mediaCensorJobListObject.audioCensorResult.label = audioCensorResultNode["Label"].asString();
		mediaCensorJobList_.push_back(mediaCensorJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::vector<QueryMediaCensorJobListResult::MediaCensorJob> QueryMediaCensorJobListResult::getMediaCensorJobList()const
{
	return mediaCensorJobList_;
}

std::string QueryMediaCensorJobListResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<std::string> QueryMediaCensorJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

