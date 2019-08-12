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

#include <alibabacloud/mts/model/QueryVideoSummaryJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryVideoSummaryJobListResult::QueryVideoSummaryJobListResult() :
	ServiceResult()
{}

QueryVideoSummaryJobListResult::QueryVideoSummaryJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryVideoSummaryJobListResult::~QueryVideoSummaryJobListResult()
{}

void QueryVideoSummaryJobListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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
		auto videoSummaryResultNode = value["VideoSummaryResult"];
		auto allVideoSummaryList = value["VideoSummaryList"]["VideoSummary"];
		for (auto value : allVideoSummaryList)
		{
			Job::VideoSummaryResult::VideoSummary videoSummaryObject;
			if(!value["StartTime"].isNull())
				videoSummaryObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				videoSummaryObject.endTime = value["EndTime"].asString();
			jobListObject.videoSummaryResult.videoSummaryList.push_back(videoSummaryObject);
		}
		auto outputFileNode = videoSummaryResultNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			jobListObject.videoSummaryResult.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			jobListObject.videoSummaryResult.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			jobListObject.videoSummaryResult.outputFile.object = outputFileNode["Object"].asString();
		jobList_.push_back(jobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryVideoSummaryJobListResult::Job> QueryVideoSummaryJobListResult::getJobList()const
{
	return jobList_;
}

std::vector<std::string> QueryVideoSummaryJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

