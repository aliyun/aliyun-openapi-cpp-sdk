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
		if(!valueMediaCensorJobListMediaCensorJob["JobId"].isNull())
			mediaCensorJobListObject.jobId = valueMediaCensorJobListMediaCensorJob["JobId"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["UserData"].isNull())
			mediaCensorJobListObject.userData = valueMediaCensorJobListMediaCensorJob["UserData"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["PipelineId"].isNull())
			mediaCensorJobListObject.pipelineId = valueMediaCensorJobListMediaCensorJob["PipelineId"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["State"].isNull())
			mediaCensorJobListObject.state = valueMediaCensorJobListMediaCensorJob["State"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["Code"].isNull())
			mediaCensorJobListObject.code = valueMediaCensorJobListMediaCensorJob["Code"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["Suggestion"].isNull())
			mediaCensorJobListObject.suggestion = valueMediaCensorJobListMediaCensorJob["Suggestion"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["Message"].isNull())
			mediaCensorJobListObject.message = valueMediaCensorJobListMediaCensorJob["Message"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["CreationTime"].isNull())
			mediaCensorJobListObject.creationTime = valueMediaCensorJobListMediaCensorJob["CreationTime"].asString();
		if(!valueMediaCensorJobListMediaCensorJob["FinishTime"].isNull())
			mediaCensorJobListObject.finishTime = valueMediaCensorJobListMediaCensorJob["FinishTime"].asString();
		auto allCoverImageCensorResultsNode = allMediaCensorJobListNode["CoverImageCensorResults"]["CoverImageCensorResult"];
		for (auto allMediaCensorJobListNodeCoverImageCensorResultsCoverImageCensorResult : allCoverImageCensorResultsNode)
		{
			MediaCensorJob::CoverImageCensorResult coverImageCensorResultsObject;
			if(!allMediaCensorJobListNodeCoverImageCensorResultsCoverImageCensorResult["Location"].isNull())
				coverImageCensorResultsObject.location = allMediaCensorJobListNodeCoverImageCensorResultsCoverImageCensorResult["Location"].asString();
			if(!allMediaCensorJobListNodeCoverImageCensorResultsCoverImageCensorResult["Bucket"].isNull())
				coverImageCensorResultsObject.bucket = allMediaCensorJobListNodeCoverImageCensorResultsCoverImageCensorResult["Bucket"].asString();
			if(!allMediaCensorJobListNodeCoverImageCensorResultsCoverImageCensorResult["Object"].isNull())
				coverImageCensorResultsObject.object = allMediaCensorJobListNodeCoverImageCensorResultsCoverImageCensorResult["Object"].asString();
			auto allResultsNode = allCoverImageCensorResultsNode["Results"]["Result"];
			for (auto allCoverImageCensorResultsNodeResultsResult : allResultsNode)
			{
				MediaCensorJob::CoverImageCensorResult::Result resultsObject;
				if(!allCoverImageCensorResultsNodeResultsResult["Rate"].isNull())
					resultsObject.rate = allCoverImageCensorResultsNodeResultsResult["Rate"].asString();
				if(!allCoverImageCensorResultsNodeResultsResult["Scene"].isNull())
					resultsObject.scene = allCoverImageCensorResultsNodeResultsResult["Scene"].asString();
				if(!allCoverImageCensorResultsNodeResultsResult["Label"].isNull())
					resultsObject.label = allCoverImageCensorResultsNodeResultsResult["Label"].asString();
				if(!allCoverImageCensorResultsNodeResultsResult["Suggestion"].isNull())
					resultsObject.suggestion = allCoverImageCensorResultsNodeResultsResult["Suggestion"].asString();
				coverImageCensorResultsObject.results.push_back(resultsObject);
			}
			mediaCensorJobListObject.coverImageCensorResults.push_back(coverImageCensorResultsObject);
		}
		auto titleCensorResultNode = value["TitleCensorResult"];
		if(!titleCensorResultNode["Rate"].isNull())
			mediaCensorJobListObject.titleCensorResult.rate = titleCensorResultNode["Rate"].asString();
		if(!titleCensorResultNode["Scene"].isNull())
			mediaCensorJobListObject.titleCensorResult.scene = titleCensorResultNode["Scene"].asString();
		if(!titleCensorResultNode["Label"].isNull())
			mediaCensorJobListObject.titleCensorResult.label = titleCensorResultNode["Label"].asString();
		if(!titleCensorResultNode["Suggestion"].isNull())
			mediaCensorJobListObject.titleCensorResult.suggestion = titleCensorResultNode["Suggestion"].asString();
		auto descCensorResultNode = value["DescCensorResult"];
		if(!descCensorResultNode["Rate"].isNull())
			mediaCensorJobListObject.descCensorResult.rate = descCensorResultNode["Rate"].asString();
		if(!descCensorResultNode["Scene"].isNull())
			mediaCensorJobListObject.descCensorResult.scene = descCensorResultNode["Scene"].asString();
		if(!descCensorResultNode["Label"].isNull())
			mediaCensorJobListObject.descCensorResult.label = descCensorResultNode["Label"].asString();
		if(!descCensorResultNode["Suggestion"].isNull())
			mediaCensorJobListObject.descCensorResult.suggestion = descCensorResultNode["Suggestion"].asString();
		auto barrageCensorResultNode = value["BarrageCensorResult"];
		if(!barrageCensorResultNode["Rate"].isNull())
			mediaCensorJobListObject.barrageCensorResult.rate = barrageCensorResultNode["Rate"].asString();
		if(!barrageCensorResultNode["Scene"].isNull())
			mediaCensorJobListObject.barrageCensorResult.scene = barrageCensorResultNode["Scene"].asString();
		if(!barrageCensorResultNode["Label"].isNull())
			mediaCensorJobListObject.barrageCensorResult.label = barrageCensorResultNode["Label"].asString();
		if(!barrageCensorResultNode["Suggestion"].isNull())
			mediaCensorJobListObject.barrageCensorResult.suggestion = barrageCensorResultNode["Suggestion"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			mediaCensorJobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			mediaCensorJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			mediaCensorJobListObject.input.object = inputNode["Object"].asString();
		auto videoCensorConfigNode = value["VideoCensorConfig"];
		if(!videoCensorConfigNode["BizType"].isNull())
			mediaCensorJobListObject.videoCensorConfig.bizType = videoCensorConfigNode["BizType"].asString();
		if(!videoCensorConfigNode["VideoCensor"].isNull())
			mediaCensorJobListObject.videoCensorConfig.videoCensor = videoCensorConfigNode["VideoCensor"].asString();
		auto outputFileNode = videoCensorConfigNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			mediaCensorJobListObject.videoCensorConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			mediaCensorJobListObject.videoCensorConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			mediaCensorJobListObject.videoCensorConfig.outputFile.object = outputFileNode["Object"].asString();
		auto vensorCensorResultNode = value["VensorCensorResult"];
		if(!vensorCensorResultNode["NextPageToken"].isNull())
			mediaCensorJobListObject.vensorCensorResult.nextPageToken = vensorCensorResultNode["NextPageToken"].asString();
		auto allCensorResultsNode = vensorCensorResultNode["CensorResults"]["CensorResult"];
		for (auto vensorCensorResultNodeCensorResultsCensorResult : allCensorResultsNode)
		{
			MediaCensorJob::VensorCensorResult::CensorResult censorResultObject;
			if(!vensorCensorResultNodeCensorResultsCensorResult["Rate"].isNull())
				censorResultObject.rate = vensorCensorResultNodeCensorResultsCensorResult["Rate"].asString();
			if(!vensorCensorResultNodeCensorResultsCensorResult["Scene"].isNull())
				censorResultObject.scene = vensorCensorResultNodeCensorResultsCensorResult["Scene"].asString();
			if(!vensorCensorResultNodeCensorResultsCensorResult["Label"].isNull())
				censorResultObject.label = vensorCensorResultNodeCensorResultsCensorResult["Label"].asString();
			if(!vensorCensorResultNodeCensorResultsCensorResult["Suggestion"].isNull())
				censorResultObject.suggestion = vensorCensorResultNodeCensorResultsCensorResult["Suggestion"].asString();
			mediaCensorJobListObject.vensorCensorResult.censorResults.push_back(censorResultObject);
		}
		auto allVideoTimelinesNode = vensorCensorResultNode["VideoTimelines"]["VideoTimeline"];
		for (auto vensorCensorResultNodeVideoTimelinesVideoTimeline : allVideoTimelinesNode)
		{
			MediaCensorJob::VensorCensorResult::VideoTimeline videoTimelineObject;
			if(!vensorCensorResultNodeVideoTimelinesVideoTimeline["Object"].isNull())
				videoTimelineObject.object = vensorCensorResultNodeVideoTimelinesVideoTimeline["Object"].asString();
			if(!vensorCensorResultNodeVideoTimelinesVideoTimeline["Timestamp"].isNull())
				videoTimelineObject.timestamp = vensorCensorResultNodeVideoTimelinesVideoTimeline["Timestamp"].asString();
			auto allCensorResults1Node = allVideoTimelinesNode["CensorResults"]["CensorResult"];
			for (auto allVideoTimelinesNodeCensorResultsCensorResult : allCensorResults1Node)
			{
				MediaCensorJob::VensorCensorResult::VideoTimeline::CensorResult2 censorResults1Object;
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
			mediaCensorJobListObject.vensorCensorResult.videoTimelines.push_back(videoTimelineObject);
		}
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

