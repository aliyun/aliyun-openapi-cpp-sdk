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

#include <alibabacloud/mts/model/QueryVideoSplitJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryVideoSplitJobListResult::QueryVideoSplitJobListResult() :
	ServiceResult()
{}

QueryVideoSplitJobListResult::QueryVideoSplitJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryVideoSplitJobListResult::~QueryVideoSplitJobListResult()
{}

void QueryVideoSplitJobListResult::parse(const std::string &payload)
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
		auto videoSplitResultNode = value["VideoSplitResult"];
		auto allVideoSplitListNode = videoSplitResultNode["VideoSplitList"]["VideoSplit"];
		for (auto videoSplitResultNodeVideoSplitListVideoSplit : allVideoSplitListNode)
		{
			Job::VideoSplitResult::VideoSplit videoSplitObject;
			if(!videoSplitResultNodeVideoSplitListVideoSplit["EndTime"].isNull())
				videoSplitObject.endTime = videoSplitResultNodeVideoSplitListVideoSplit["EndTime"].asString();
			if(!videoSplitResultNodeVideoSplitListVideoSplit["StartTime"].isNull())
				videoSplitObject.startTime = videoSplitResultNodeVideoSplitListVideoSplit["StartTime"].asString();
			if(!videoSplitResultNodeVideoSplitListVideoSplit["Path"].isNull())
				videoSplitObject.path = videoSplitResultNodeVideoSplitListVideoSplit["Path"].asString();
			jobListObject.videoSplitResult.videoSplitList.push_back(videoSplitObject);
		}
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

std::vector<QueryVideoSplitJobListResult::Job> QueryVideoSplitJobListResult::getJobList()const
{
	return jobList_;
}

std::vector<std::string> QueryVideoSplitJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

