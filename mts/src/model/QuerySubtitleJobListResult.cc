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

#include <alibabacloud/mts/model/QuerySubtitleJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QuerySubtitleJobListResult::QuerySubtitleJobListResult() :
	ServiceResult()
{}

QuerySubtitleJobListResult::QuerySubtitleJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySubtitleJobListResult::~QuerySubtitleJobListResult()
{}

void QuerySubtitleJobListResult::parse(const std::string &payload)
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
		if(!value["JobId"].isNull())
			jobListObject.jobId = value["JobId"].asString();
		if(!value["InputConfig"].isNull())
			jobListObject.inputConfig = value["InputConfig"].asString();
		if(!value["OutputConfig"].isNull())
			jobListObject.outputConfig = value["OutputConfig"].asString();
		if(!value["UserData"].isNull())
			jobListObject.userData = value["UserData"].asString();
		if(!value["State"].isNull())
			jobListObject.state = value["State"].asString();
		auto mNSMessageResultNode = value["MNSMessageResult"];
		if(!mNSMessageResultNode["MessageId"].isNull())
			jobListObject.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
		if(!mNSMessageResultNode["ErrorMessage"].isNull())
			jobListObject.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
		if(!mNSMessageResultNode["ErrorCode"].isNull())
			jobListObject.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
		jobList_.push_back(jobListObject);
	}
	auto allNonExistJobIds = value["NonExistJobIds"]["String"];
	for (const auto &item : allNonExistJobIds)
		nonExistJobIds_.push_back(item.asString());

}

std::vector<std::string> QuerySubtitleJobListResult::getNonExistJobIds()const
{
	return nonExistJobIds_;
}

std::vector<QuerySubtitleJobListResult::Job> QuerySubtitleJobListResult::getJobList()const
{
	return jobList_;
}

