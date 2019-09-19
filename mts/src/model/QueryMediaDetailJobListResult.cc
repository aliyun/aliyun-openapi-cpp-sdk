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
		if(!valueJobListJob["Id"].isNull())
			jobListObject.id = valueJobListJob["Id"].asString();
		if(!valueJobListJob["UserData"].isNull())
			jobListObject.userData = valueJobListJob["UserData"].asString();
		if(!valueJobListJob["PipelineId"].isNull())
			jobListObject.pipelineId = valueJobListJob["PipelineId"].asString();
		if(!valueJobListJob["State"].isNull())
			jobListObject.state = valueJobListJob["State"].asString();
		if(!valueJobListJob["Code"].isNull())
			jobListObject.code = valueJobListJob["Code"].asString();
		if(!valueJobListJob["Message"].isNull())
			jobListObject.message = valueJobListJob["Message"].asString();
		if(!valueJobListJob["CreationTime"].isNull())
			jobListObject.creationTime = valueJobListJob["CreationTime"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			jobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			jobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			jobListObject.input.object = inputNode["Object"].asString();
		auto mediaDetailConfigNode = value["MediaDetailConfig"];
		if(!mediaDetailConfigNode["Scenario"].isNull())
			jobListObject.mediaDetailConfig.scenario = mediaDetailConfigNode["Scenario"].asString();
		if(!mediaDetailConfigNode["DetailType"].isNull())
			jobListObject.mediaDetailConfig.detailType = mediaDetailConfigNode["DetailType"].asString();
		auto outputFileNode = mediaDetailConfigNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			jobListObject.mediaDetailConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			jobListObject.mediaDetailConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			jobListObject.mediaDetailConfig.outputFile.object = outputFileNode["Object"].asString();
		auto mediaDetailResultNode = value["MediaDetailResult"];
		if(!mediaDetailResultNode["Status"].isNull())
			jobListObject.mediaDetailResult.status = mediaDetailResultNode["Status"].asString();
		auto allMediaDetailRecgResultsNode = mediaDetailResultNode["MediaDetailRecgResults"]["MediaDetailRecgResult"];
		for (auto mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult : allMediaDetailRecgResultsNode)
		{
			Job::MediaDetailResult::MediaDetailRecgResult mediaDetailRecgResultObject;
			if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["ImageUrl"].isNull())
				mediaDetailRecgResultObject.imageUrl = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["ImageUrl"].asString();
			if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["Time"].isNull())
				mediaDetailRecgResultObject.time = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["Time"].asString();
			if(!mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["OcrText"].isNull())
				mediaDetailRecgResultObject.ocrText = mediaDetailResultNodeMediaDetailRecgResultsMediaDetailRecgResult["OcrText"].asString();
			auto allCelebritiesNode = allMediaDetailRecgResultsNode["Celebrities"]["Celebrity"];
			for (auto allMediaDetailRecgResultsNodeCelebritiesCelebrity : allCelebritiesNode)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Celebrity celebritiesObject;
				if(!allMediaDetailRecgResultsNodeCelebritiesCelebrity["Name"].isNull())
					celebritiesObject.name = allMediaDetailRecgResultsNodeCelebritiesCelebrity["Name"].asString();
				if(!allMediaDetailRecgResultsNodeCelebritiesCelebrity["Score"].isNull())
					celebritiesObject.score = allMediaDetailRecgResultsNodeCelebritiesCelebrity["Score"].asString();
				if(!allMediaDetailRecgResultsNodeCelebritiesCelebrity["Target"].isNull())
					celebritiesObject.target = allMediaDetailRecgResultsNodeCelebritiesCelebrity["Target"].asString();
				mediaDetailRecgResultObject.celebrities.push_back(celebritiesObject);
			}
			auto allSensitivesNode = allMediaDetailRecgResultsNode["Sensitives"]["Sensitive"];
			for (auto allMediaDetailRecgResultsNodeSensitivesSensitive : allSensitivesNode)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Sensitive sensitivesObject;
				if(!allMediaDetailRecgResultsNodeSensitivesSensitive["Name"].isNull())
					sensitivesObject.name = allMediaDetailRecgResultsNodeSensitivesSensitive["Name"].asString();
				if(!allMediaDetailRecgResultsNodeSensitivesSensitive["Score"].isNull())
					sensitivesObject.score = allMediaDetailRecgResultsNodeSensitivesSensitive["Score"].asString();
				if(!allMediaDetailRecgResultsNodeSensitivesSensitive["Target"].isNull())
					sensitivesObject.target = allMediaDetailRecgResultsNodeSensitivesSensitive["Target"].asString();
				mediaDetailRecgResultObject.sensitives.push_back(sensitivesObject);
			}
			auto allPoliticiansNode = allMediaDetailRecgResultsNode["Politicians"]["Politician"];
			for (auto allMediaDetailRecgResultsNodePoliticiansPolitician : allPoliticiansNode)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Politician politiciansObject;
				if(!allMediaDetailRecgResultsNodePoliticiansPolitician["Name"].isNull())
					politiciansObject.name = allMediaDetailRecgResultsNodePoliticiansPolitician["Name"].asString();
				if(!allMediaDetailRecgResultsNodePoliticiansPolitician["Score"].isNull())
					politiciansObject.score = allMediaDetailRecgResultsNodePoliticiansPolitician["Score"].asString();
				if(!allMediaDetailRecgResultsNodePoliticiansPolitician["Target"].isNull())
					politiciansObject.target = allMediaDetailRecgResultsNodePoliticiansPolitician["Target"].asString();
				mediaDetailRecgResultObject.politicians.push_back(politiciansObject);
			}
			auto allFrameTagInfosNode = allMediaDetailRecgResultsNode["FrameTagInfos"]["FrameTagInfo"];
			for (auto allMediaDetailRecgResultsNodeFrameTagInfosFrameTagInfo : allFrameTagInfosNode)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::FrameTagInfo frameTagInfosObject;
				if(!allMediaDetailRecgResultsNodeFrameTagInfosFrameTagInfo["Tag"].isNull())
					frameTagInfosObject.tag = allMediaDetailRecgResultsNodeFrameTagInfosFrameTagInfo["Tag"].asString();
				if(!allMediaDetailRecgResultsNodeFrameTagInfosFrameTagInfo["Score"].isNull())
					frameTagInfosObject.score = allMediaDetailRecgResultsNodeFrameTagInfosFrameTagInfo["Score"].asString();
				if(!allMediaDetailRecgResultsNodeFrameTagInfosFrameTagInfo["Category"].isNull())
					frameTagInfosObject.category = allMediaDetailRecgResultsNodeFrameTagInfosFrameTagInfo["Category"].asString();
				mediaDetailRecgResultObject.frameTagInfos.push_back(frameTagInfosObject);
			}
			auto allCustomsNode = allMediaDetailRecgResultsNode["Customs"]["Custom"];
			for (auto allMediaDetailRecgResultsNodeCustomsCustom : allCustomsNode)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Custom customsObject;
				if(!allMediaDetailRecgResultsNodeCustomsCustom["Name"].isNull())
					customsObject.name = allMediaDetailRecgResultsNodeCustomsCustom["Name"].asString();
				auto allClipsNode = allCustomsNode["Clips"]["Clip"];
				for (auto allCustomsNodeClipsClip : allClipsNode)
				{
					Job::MediaDetailResult::MediaDetailRecgResult::Custom::Clip clipsObject;
					if(!allCustomsNodeClipsClip["MinScore"].isNull())
						clipsObject.minScore = allCustomsNodeClipsClip["MinScore"].asString();
					if(!allCustomsNodeClipsClip["MaxScore"].isNull())
						clipsObject.maxScore = allCustomsNodeClipsClip["MaxScore"].asString();
					if(!allCustomsNodeClipsClip["AvgScore"].isNull())
						clipsObject.avgScore = allCustomsNodeClipsClip["AvgScore"].asString();
					if(!allCustomsNodeClipsClip["StartTarget"].isNull())
						clipsObject.startTarget = allCustomsNodeClipsClip["StartTarget"].asString();
					if(!allCustomsNodeClipsClip["EndTarget"].isNull())
						clipsObject.endTarget = allCustomsNodeClipsClip["EndTarget"].asString();
					if(!allCustomsNodeClipsClip["StartTime"].isNull())
						clipsObject.startTime = allCustomsNodeClipsClip["StartTime"].asString();
					if(!allCustomsNodeClipsClip["EndTime"].isNull())
						clipsObject.endTime = allCustomsNodeClipsClip["EndTime"].asString();
					customsObject.clips.push_back(clipsObject);
				}
				mediaDetailRecgResultObject.customs.push_back(customsObject);
			}
			auto allFrameTags = value["FrameTags"]["String"];
			for (auto value : allFrameTags)
				mediaDetailRecgResultObject.frameTags.push_back(value.asString());
			jobListObject.mediaDetailResult.mediaDetailRecgResults.push_back(mediaDetailRecgResultObject);
		}
			auto allTags = mediaDetailResultNode["Tags"]["String"];
			for (auto value : allTags)
				jobListObject.mediaDetailResult.tags.push_back(value.asString());
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

