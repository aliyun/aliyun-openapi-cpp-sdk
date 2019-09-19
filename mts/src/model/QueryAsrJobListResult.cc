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

#include <alibabacloud/mts/model/QueryAsrJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryAsrJobListResult::QueryAsrJobListResult() :
	ServiceResult()
{}

QueryAsrJobListResult::QueryAsrJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAsrJobListResult::~QueryAsrJobListResult()
{}

void QueryAsrJobListResult::parse(const std::string &payload)
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
		auto asrConfigNode = value["AsrConfig"];
		if(!asrConfigNode["Scene"].isNull())
			jobListObject.asrConfig.scene = asrConfigNode["Scene"].asString();
		auto asrResultNode = value["AsrResult"];
		if(!asrResultNode["Duration"].isNull())
			jobListObject.asrResult.duration = asrResultNode["Duration"].asString();
		auto allAsrTextListNode = asrResultNode["AsrTextList"]["AsrText"];
		for (auto asrResultNodeAsrTextListAsrText : allAsrTextListNode)
		{
			Job::AsrResult::AsrText asrTextObject;
			if(!asrResultNodeAsrTextListAsrText["StartTime"].isNull())
				asrTextObject.startTime = std::stoi(asrResultNodeAsrTextListAsrText["StartTime"].asString());
			if(!asrResultNodeAsrTextListAsrText["EndTime"].isNull())
				asrTextObject.endTime = asrResultNodeAsrTextListAsrText["EndTime"].asString();
			if(!asrResultNodeAsrTextListAsrText["ChannelId"].isNull())
				asrTextObject.channelId = asrResultNodeAsrTextListAsrText["ChannelId"].asString();
			if(!asrResultNodeAsrTextListAsrText["SpeechRate"].isNull())
				asrTextObject.speechRate = asrResultNodeAsrTextListAsrText["SpeechRate"].asString();
			if(!asrResultNodeAsrTextListAsrText["Text"].isNull())
				asrTextObject.text = asrResultNodeAsrTextListAsrText["Text"].asString();
			jobListObject.asrResult.asrTextList.push_back(asrTextObject);
		}
		jobList_.push_back(jobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryAsrJobListResult::Job> QueryAsrJobListResult::getJobList()const
{
	return jobList_;
}

std::vector<std::string> QueryAsrJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

