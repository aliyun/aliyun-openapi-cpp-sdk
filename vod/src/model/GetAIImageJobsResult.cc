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

#include <alibabacloud/vod/model/GetAIImageJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetAIImageJobsResult::GetAIImageJobsResult() :
	ServiceResult()
{}

GetAIImageJobsResult::GetAIImageJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAIImageJobsResult::~GetAIImageJobsResult()
{}

void GetAIImageJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAIImageJobListNode = value["AIImageJobList"]["AIImageJob"];
	for (auto valueAIImageJobListAIImageJob : allAIImageJobListNode)
	{
		AIImageJob aIImageJobListObject;
		if(!valueAIImageJobListAIImageJob["Status"].isNull())
			aIImageJobListObject.status = valueAIImageJobListAIImageJob["Status"].asString();
		if(!valueAIImageJobListAIImageJob["CreationTime"].isNull())
			aIImageJobListObject.creationTime = valueAIImageJobListAIImageJob["CreationTime"].asString();
		if(!valueAIImageJobListAIImageJob["AIImageResult"].isNull())
			aIImageJobListObject.aIImageResult = valueAIImageJobListAIImageJob["AIImageResult"].asString();
		if(!valueAIImageJobListAIImageJob["VideoId"].isNull())
			aIImageJobListObject.videoId = valueAIImageJobListAIImageJob["VideoId"].asString();
		if(!valueAIImageJobListAIImageJob["JobId"].isNull())
			aIImageJobListObject.jobId = valueAIImageJobListAIImageJob["JobId"].asString();
		if(!valueAIImageJobListAIImageJob["UserData"].isNull())
			aIImageJobListObject.userData = valueAIImageJobListAIImageJob["UserData"].asString();
		if(!valueAIImageJobListAIImageJob["Code"].isNull())
			aIImageJobListObject.code = valueAIImageJobListAIImageJob["Code"].asString();
		if(!valueAIImageJobListAIImageJob["Message"].isNull())
			aIImageJobListObject.message = valueAIImageJobListAIImageJob["Message"].asString();
		if(!valueAIImageJobListAIImageJob["TemplateConfig"].isNull())
			aIImageJobListObject.templateConfig = valueAIImageJobListAIImageJob["TemplateConfig"].asString();
		if(!valueAIImageJobListAIImageJob["TemplateId"].isNull())
			aIImageJobListObject.templateId = valueAIImageJobListAIImageJob["TemplateId"].asString();
		aIImageJobList_.push_back(aIImageJobListObject);
	}

}

std::vector<GetAIImageJobsResult::AIImageJob> GetAIImageJobsResult::getAIImageJobList()const
{
	return aIImageJobList_;
}

