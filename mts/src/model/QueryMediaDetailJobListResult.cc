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

#include <alibabacloud/mts/model/QueryMediaDetailJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMediaDetailJobListResult::QueryMediaDetailJobListResult() :
	ServiceResult()
{}

QueryMediaDetailJobListResult::QueryMediaDetailJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMediaDetailJobListResult::~QueryMediaDetailJobListResult()
{}

void QueryMediaDetailJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobListNode = value["JobList"]["Job"];
	for (auto valueJobListJob : allJobListNode)
	{
		Job jobListObject;
		if(!valueJobListJob["CreationTime"].isNull())
			jobListObject.creationTime = valueJobListJob["CreationTime"].asString();
		if(!valueJobListJob["State"].isNull())
			jobListObject.state = valueJobListJob["State"].asString();
		if(!valueJobListJob["UserData"].isNull())
			jobListObject.userData = valueJobListJob["UserData"].asString();
		if(!valueJobListJob["Code"].isNull())
			jobListObject.code = valueJobListJob["Code"].asString();
		if(!valueJobListJob["Message"].isNull())
			jobListObject.message = valueJobListJob["Message"].asString();
		if(!valueJobListJob["PipelineId"].isNull())
			jobListObject.pipelineId = valueJobListJob["PipelineId"].asString();
		if(!valueJobListJob["Id"].isNull())
			jobListObject.id = valueJobListJob["Id"].asString();
		auto mediaDetailResultNode = value["MediaDetailResult"];
		if(!mediaDetailResultNode["Status"].isNull())
			jobListObject.mediaDetailResult.status = mediaDetailResultNode["Status"].asString();
		auto allMediaDetailRecgResultsNode = mediaDetailResultNode["MediaDetailRecgResults"]["MediaDetailRecgResult"];
		for (auto mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult : allMediaDetailRecgResultsNode)
		{
			Job::MediaDetailResult::MediaDetailRecgResult mediaDetailRecgResultObject;
			if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["Time"].isNull())
				mediaDetailRecgResultObject.time = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["Time"].asString();
			if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["ImageUrl"].isNull())
				mediaDetailRecgResultObject.imageUrl = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["ImageUrl"].asString();
			if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["OcrText"].isNull())
				mediaDetailRecgResultObject.ocrText = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["OcrText"].asString();
			auto allSensitivesNode = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["Sensitives"]["Sensitive"];
			for (auto mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultSensitivesSensitive : allSensitivesNode)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Sensitive sensitivesObject;
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultSensitivesSensitive["Score"].isNull())
					sensitivesObject.score = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultSensitivesSensitive["Score"].asString();
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultSensitivesSensitive["Name"].isNull())
					sensitivesObject.name = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultSensitivesSensitive["Name"].asString();
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultSensitivesSensitive["Target"].isNull())
					sensitivesObject.target = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultSensitivesSensitive["Target"].asString();
				mediaDetailRecgResultObject.sensitives.push_back(sensitivesObject);
			}
			auto allPoliticiansNode = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["Politicians"]["Politician"];
			for (auto mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultPoliticiansPolitician : allPoliticiansNode)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Politician politiciansObject;
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultPoliticiansPolitician["Score"].isNull())
					politiciansObject.score = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultPoliticiansPolitician["Score"].asString();
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultPoliticiansPolitician["Name"].isNull())
					politiciansObject.name = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultPoliticiansPolitician["Name"].asString();
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultPoliticiansPolitician["Target"].isNull())
					politiciansObject.target = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultPoliticiansPolitician["Target"].asString();
				mediaDetailRecgResultObject.politicians.push_back(politiciansObject);
			}
			auto allCustomsNode = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["Customs"]["Custom"];
			for (auto mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustom : allCustomsNode)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Custom customsObject;
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustom["Name"].isNull())
					customsObject.name = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustom["Name"].asString();
				auto allClipsNode = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustom["Clips"]["Clip"];
				for (auto mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip : allClipsNode)
				{
					Job::MediaDetailResult::MediaDetailRecgResult::Custom::Clip clipsObject;
					if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["EndTime"].isNull())
						clipsObject.endTime = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["EndTime"].asString();
					if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["MinScore"].isNull())
						clipsObject.minScore = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["MinScore"].asString();
					if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["StartTime"].isNull())
						clipsObject.startTime = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["StartTime"].asString();
					if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["AvgScore"].isNull())
						clipsObject.avgScore = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["AvgScore"].asString();
					if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["MaxScore"].isNull())
						clipsObject.maxScore = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["MaxScore"].asString();
					if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["EndTarget"].isNull())
						clipsObject.endTarget = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["EndTarget"].asString();
					if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["StartTarget"].isNull())
						clipsObject.startTarget = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCustomsCustomClipsClip["StartTarget"].asString();
					customsObject.clips.push_back(clipsObject);
				}
				mediaDetailRecgResultObject.customs.push_back(customsObject);
			}
			auto allFrameTagInfosNode = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["FrameTagInfos"]["FrameTagInfo"];
			for (auto mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultFrameTagInfosFrameTagInfo : allFrameTagInfosNode)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::FrameTagInfo frameTagInfosObject;
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultFrameTagInfosFrameTagInfo["Score"].isNull())
					frameTagInfosObject.score = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultFrameTagInfosFrameTagInfo["Score"].asString();
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultFrameTagInfosFrameTagInfo["Category"].isNull())
					frameTagInfosObject.category = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultFrameTagInfosFrameTagInfo["Category"].asString();
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultFrameTagInfosFrameTagInfo["Tag"].isNull())
					frameTagInfosObject.tag = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultFrameTagInfosFrameTagInfo["Tag"].asString();
				mediaDetailRecgResultObject.frameTagInfos.push_back(frameTagInfosObject);
			}
			auto allCelebritiesNode = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["Celebrities"]["Celebrity"];
			for (auto mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCelebritiesCelebrity : allCelebritiesNode)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Celebrity celebritiesObject;
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCelebritiesCelebrity["Score"].isNull())
					celebritiesObject.score = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCelebritiesCelebrity["Score"].asString();
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCelebritiesCelebrity["Name"].isNull())
					celebritiesObject.name = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCelebritiesCelebrity["Name"].asString();
				if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCelebritiesCelebrity["Target"].isNull())
					celebritiesObject.target = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResultCelebritiesCelebrity["Target"].asString();
				mediaDetailRecgResultObject.celebrities.push_back(celebritiesObject);
			}
			auto allFrameTags = value["FrameTags"]["String"];
			for (auto value : allFrameTags)
				mediaDetailRecgResultObject.frameTags.push_back(value.asString());
			jobListObject.mediaDetailResult.mediaDetailRecgResults.push_back(mediaDetailRecgResultObject);
		}
			auto allTags = mediaDetailResultNode["Tags"]["String"];
			for (auto value : allTags)
				jobListObject.mediaDetailResult.tags.push_back(value.asString());
		auto mediaDetailConfigNode = value["MediaDetailConfig"];
		if(!mediaDetailConfigNode["Scenario"].isNull())
			jobListObject.mediaDetailConfig.scenario = mediaDetailConfigNode["Scenario"].asString();
		if(!mediaDetailConfigNode["DetailType"].isNull())
			jobListObject.mediaDetailConfig.detailType = mediaDetailConfigNode["DetailType"].asString();
		auto outputFileNode = mediaDetailConfigNode["OutputFile"];
		if(!outputFileNode["Object"].isNull())
			jobListObject.mediaDetailConfig.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["Location"].isNull())
			jobListObject.mediaDetailConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Bucket"].isNull())
			jobListObject.mediaDetailConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Object"].isNull())
			jobListObject.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			jobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			jobListObject.input.bucket = inputNode["Bucket"].asString();
		jobList_.push_back(jobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryMediaDetailJobListResult::Job> QueryMediaDetailJobListResult::getJobList()const
{
	return jobList_;
}

std::vector<std::string> QueryMediaDetailJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

