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

#include <alibabacloud/mts/model/SubmitBeautifyJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitBeautifyJobsResult::SubmitBeautifyJobsResult() :
	ServiceResult()
{}

SubmitBeautifyJobsResult::SubmitBeautifyJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitBeautifyJobsResult::~SubmitBeautifyJobsResult()
{}

void SubmitBeautifyJobsResult::parse(const std::string &payload)
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
		if(!inputNode["RoleArn"].isNull())
			jobListObject.input.roleArn = inputNode["RoleArn"].asString();
		auto beautifyConfigNode = value["BeautifyConfig"];
		auto outputFileNode = beautifyConfigNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			jobListObject.beautifyConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			jobListObject.beautifyConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			jobListObject.beautifyConfig.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["RoleArn"].isNull())
			jobListObject.beautifyConfig.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		auto mNSMessageResultNode = value["MNSMessageResult"];
		if(!mNSMessageResultNode["MessageId"].isNull())
			jobListObject.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
		if(!mNSMessageResultNode["ErrorMessage"].isNull())
			jobListObject.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
		if(!mNSMessageResultNode["ErrorCode"].isNull())
			jobListObject.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
		jobList_.push_back(jobListObject);
	}

}

std::vector<SubmitBeautifyJobsResult::Job> SubmitBeautifyJobsResult::getJobList()const
{
	return jobList_;
}

