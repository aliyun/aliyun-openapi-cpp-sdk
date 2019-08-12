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

#include <alibabacloud/vod/model/SubmitPreprocessJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SubmitPreprocessJobsResult::SubmitPreprocessJobsResult() :
	ServiceResult()
{}

SubmitPreprocessJobsResult::SubmitPreprocessJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitPreprocessJobsResult::~SubmitPreprocessJobsResult()
{}

void SubmitPreprocessJobsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPreprocessJobs = value["PreprocessJobs"]["PreprocessJob"];
	for (auto value : allPreprocessJobs)
	{
		PreprocessJob preprocessJobsObject;
		if(!value["JobId"].isNull())
			preprocessJobsObject.jobId = value["JobId"].asString();
		preprocessJobs_.push_back(preprocessJobsObject);
	}

}

std::vector<SubmitPreprocessJobsResult::PreprocessJob> SubmitPreprocessJobsResult::getPreprocessJobs()const
{
	return preprocessJobs_;
}

