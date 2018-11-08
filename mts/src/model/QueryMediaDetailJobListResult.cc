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
	auto allJobList = value["JobList"]["Job"];
	for (auto value : allJobList)
	{
		Job jobListObject;
		if(!value["Id"].isNull())
			jobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			jobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			jobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			jobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			jobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			jobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			jobListObject.creationTime = value["CreationTime"].asString();
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
		auto allMediaDetailRecgResults = value["MediaDetailRecgResults"]["MediaDetailRecgResult"];
		for (auto value : allMediaDetailRecgResults)
		{
			Job::MediaDetailResult::MediaDetailRecgResult mediaDetailRecgResultObject;
			if(!value["ImageUrl"].isNull())
				mediaDetailRecgResultObject.imageUrl = value["ImageUrl"].asString();
			if(!value["Time"].isNull())
				mediaDetailRecgResultObject.time = value["Time"].asString();
			if(!value["OcrText"].isNull())
				mediaDetailRecgResultObject.ocrText = value["OcrText"].asString();
			auto allCelebrities = value["Celebrities"]["Celebrity"];
			for (auto value : allCelebrities)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Celebrity celebritiesObject;
				if(!value["Name"].isNull())
					celebritiesObject.name = value["Name"].asString();
				if(!value["Score"].isNull())
					celebritiesObject.score = value["Score"].asString();
				if(!value["Target"].isNull())
					celebritiesObject.target = value["Target"].asString();
				mediaDetailRecgResultObject.celebrities.push_back(celebritiesObject);
			}
			auto allSensitives = value["Sensitives"]["Sensitive"];
			for (auto value : allSensitives)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Sensitive sensitivesObject;
				if(!value["Name"].isNull())
					sensitivesObject.name = value["Name"].asString();
				if(!value["Score"].isNull())
					sensitivesObject.score = value["Score"].asString();
				if(!value["Target"].isNull())
					sensitivesObject.target = value["Target"].asString();
				mediaDetailRecgResultObject.sensitives.push_back(sensitivesObject);
			}
			auto allPoliticians = value["Politicians"]["Politician"];
			for (auto value : allPoliticians)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Politician politiciansObject;
				if(!value["Name"].isNull())
					politiciansObject.name = value["Name"].asString();
				if(!value["Score"].isNull())
					politiciansObject.score = value["Score"].asString();
				if(!value["Target"].isNull())
					politiciansObject.target = value["Target"].asString();
				mediaDetailRecgResultObject.politicians.push_back(politiciansObject);
			}
			auto allFrameTagInfos = value["FrameTagInfos"]["FrameTagInfo"];
			for (auto value : allFrameTagInfos)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::FrameTagInfo frameTagInfosObject;
				if(!value["Tag"].isNull())
					frameTagInfosObject.tag = value["Tag"].asString();
				if(!value["Score"].isNull())
					frameTagInfosObject.score = value["Score"].asString();
				if(!value["Category"].isNull())
					frameTagInfosObject.category = value["Category"].asString();
				mediaDetailRecgResultObject.frameTagInfos.push_back(frameTagInfosObject);
			}
			auto allCustoms = value["Customs"]["Custom"];
			for (auto value : allCustoms)
			{
				Job::MediaDetailResult::MediaDetailRecgResult::Custom customsObject;
				if(!value["Name"].isNull())
					customsObject.name = value["Name"].asString();
				auto allClips = value["Clips"]["Clip"];
				for (auto value : allClips)
				{
					Job::MediaDetailResult::MediaDetailRecgResult::Custom::Clip clipsObject;
					if(!value["MinScore"].isNull())
						clipsObject.minScore = value["MinScore"].asString();
					if(!value["MaxScore"].isNull())
						clipsObject.maxScore = value["MaxScore"].asString();
					if(!value["AvgScore"].isNull())
						clipsObject.avgScore = value["AvgScore"].asString();
					if(!value["StartTarget"].isNull())
						clipsObject.startTarget = value["StartTarget"].asString();
					if(!value["EndTarget"].isNull())
						clipsObject.endTarget = value["EndTarget"].asString();
					if(!value["StartTime"].isNull())
						clipsObject.startTime = value["StartTime"].asString();
					if(!value["EndTime"].isNull())
						clipsObject.endTime = value["EndTime"].asString();
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

