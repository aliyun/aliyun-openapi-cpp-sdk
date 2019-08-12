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

#include <alibabacloud/vod/model/SubmitTranscodeJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SubmitTranscodeJobsResult::SubmitTranscodeJobsResult() :
	ServiceResult()
{}

SubmitTranscodeJobsResult::SubmitTranscodeJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitTranscodeJobsResult::~SubmitTranscodeJobsResult()
{}

void SubmitTranscodeJobsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTranscodeJobs = value["TranscodeJobs"]["TranscodeJob"];
	for (auto value : allTranscodeJobs)
	{
		TranscodeJob transcodeJobsObject;
		if(!value["JobId"].isNull())
			transcodeJobsObject.jobId = value["JobId"].asString();
		transcodeJobs_.push_back(transcodeJobsObject);
	}
	if(!value["TranscodeTaskId"].isNull())
		transcodeTaskId_ = value["TranscodeTaskId"].asString();

}

std::vector<SubmitTranscodeJobsResult::TranscodeJob> SubmitTranscodeJobsResult::getTranscodeJobs()const
{
	return transcodeJobs_;
}

std::string SubmitTranscodeJobsResult::getTranscodeTaskId()const
{
	return transcodeTaskId_;
}

