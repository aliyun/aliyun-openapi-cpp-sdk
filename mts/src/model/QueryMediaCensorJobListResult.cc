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
	auto allMediaCensorJobList = value["MediaCensorJobList"]["MediaCensorJob"];
	for (auto value : allMediaCensorJobList)
	{
		MediaCensorJob mediaCensorJobListObject;
		if(!value["JobId"].isNull())
			mediaCensorJobListObject.jobId = value["JobId"].asString();
		if(!value["UserData"].isNull())
			mediaCensorJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			mediaCensorJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			mediaCensorJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			mediaCensorJobListObject.code = value["Code"].asString();
		if(!value["Suggestion"].isNull())
			mediaCensorJobListObject.suggestion = value["Suggestion"].asString();
		if(!value["Message"].isNull())
			mediaCensorJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			mediaCensorJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["FinishTime"].isNull())
			mediaCensorJobListObject.finishTime = value["FinishTime"].asString();
		auto allCoverImageCensorResults = value["CoverImageCensorResults"]["CoverImageCensorResult"];
		for (auto value : allCoverImageCensorResults)
		{
			MediaCensorJob::CoverImageCensorResult coverImageCensorResultsObject;
			if(!value["Location"].isNull())
				coverImageCensorResultsObject.location = value["Location"].asString();
			if(!value["Bucket"].isNull())
				coverImageCensorResultsObject.bucket = value["Bucket"].asString();
			if(!value["Object"].isNull())
				coverImageCensorResultsObject.object = value["Object"].asString();
			auto allResults = value["Results"]["Result"];
			for (auto value : allResults)
			{
				MediaCensorJob::CoverImageCensorResult::Result resultsObject;
				if(!value["Rate"].isNull())
					resultsObject.rate = value["Rate"].asString();
				if(!value["Scene"].isNull())
					resultsObject.scene = value["Scene"].asString();
				if(!value["Label"].isNull())
					resultsObject.label = value["Label"].asString();
				if(!value["Suggestion"].isNull())
					resultsObject.suggestion = value["Suggestion"].asString();
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
		auto allCensorResults = value["CensorResults"]["CensorResult"];
		for (auto value : allCensorResults)
		{
			MediaCensorJob::VensorCensorResult::CensorResult censorResultObject;
			if(!value["Rate"].isNull())
				censorResultObject.rate = value["Rate"].asString();
			if(!value["Scene"].isNull())
				censorResultObject.scene = value["Scene"].asString();
			if(!value["Label"].isNull())
				censorResultObject.label = value["Label"].asString();
			if(!value["Suggestion"].isNull())
				censorResultObject.suggestion = value["Suggestion"].asString();
			mediaCensorJobListObject.vensorCensorResult.censorResults.push_back(censorResultObject);
		}
		auto allVideoTimelines = value["VideoTimelines"]["VideoTimeline"];
		for (auto value : allVideoTimelines)
		{
			MediaCensorJob::VensorCensorResult::VideoTimeline videoTimelineObject;
			if(!value["Object"].isNull())
				videoTimelineObject.object = value["Object"].asString();
			if(!value["Timestamp"].isNull())
				videoTimelineObject.timestamp = value["Timestamp"].asString();
			auto allCensorResults1 = value["CensorResults"]["CensorResult"];
			for (auto value : allCensorResults1)
			{
				MediaCensorJob::VensorCensorResult::VideoTimeline::CensorResult2 censorResults1Object;
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

