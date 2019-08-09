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

#include <alibabacloud/vod/model/UploadMediaByURLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

UploadMediaByURLResult::UploadMediaByURLResult() :
	ServiceResult()
{}

UploadMediaByURLResult::UploadMediaByURLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UploadMediaByURLResult::~UploadMediaByURLResult()
{}

void UploadMediaByURLResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allUploadJobs = value["UploadJobs"]["UploadJob"];
	for (auto value : allUploadJobs)
	{
		UploadJob uploadJobsObject;
		if(!value["JobId"].isNull())
			uploadJobsObject.jobId = value["JobId"].asString();
		if(!value["SourceURL"].isNull())
			uploadJobsObject.sourceURL = value["SourceURL"].asString();
		uploadJobs_.push_back(uploadJobsObject);
	}

}

std::vector<UploadMediaByURLResult::UploadJob> UploadMediaByURLResult::getUploadJobs()const
{
	return uploadJobs_;
}

