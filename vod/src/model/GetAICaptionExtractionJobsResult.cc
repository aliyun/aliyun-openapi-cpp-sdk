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

#include <alibabacloud/vod/model/GetAICaptionExtractionJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetAICaptionExtractionJobsResult::GetAICaptionExtractionJobsResult() :
	ServiceResult()
{}

GetAICaptionExtractionJobsResult::GetAICaptionExtractionJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAICaptionExtractionJobsResult::~GetAICaptionExtractionJobsResult()
{}

void GetAICaptionExtractionJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAICaptionExtractionJobListNode = value["AICaptionExtractionJobList"]["AICaptionExtractionJob"];
	for (auto valueAICaptionExtractionJobListAICaptionExtractionJob : allAICaptionExtractionJobListNode)
	{
		AICaptionExtractionJob aICaptionExtractionJobListObject;
		if(!valueAICaptionExtractionJobListAICaptionExtractionJob["CreationTime"].isNull())
			aICaptionExtractionJobListObject.creationTime = valueAICaptionExtractionJobListAICaptionExtractionJob["CreationTime"].asString();
		if(!valueAICaptionExtractionJobListAICaptionExtractionJob["JobId"].isNull())
			aICaptionExtractionJobListObject.jobId = valueAICaptionExtractionJobListAICaptionExtractionJob["JobId"].asString();
		if(!valueAICaptionExtractionJobListAICaptionExtractionJob["VideoId"].isNull())
			aICaptionExtractionJobListObject.videoId = valueAICaptionExtractionJobListAICaptionExtractionJob["VideoId"].asString();
		if(!valueAICaptionExtractionJobListAICaptionExtractionJob["AICaptionExtractionResult"].isNull())
			aICaptionExtractionJobListObject.aICaptionExtractionResult = valueAICaptionExtractionJobListAICaptionExtractionJob["AICaptionExtractionResult"].asString();
		if(!valueAICaptionExtractionJobListAICaptionExtractionJob["UserData"].isNull())
			aICaptionExtractionJobListObject.userData = valueAICaptionExtractionJobListAICaptionExtractionJob["UserData"].asString();
		if(!valueAICaptionExtractionJobListAICaptionExtractionJob["Code"].isNull())
			aICaptionExtractionJobListObject.code = valueAICaptionExtractionJobListAICaptionExtractionJob["Code"].asString();
		if(!valueAICaptionExtractionJobListAICaptionExtractionJob["Message"].isNull())
			aICaptionExtractionJobListObject.message = valueAICaptionExtractionJobListAICaptionExtractionJob["Message"].asString();
		if(!valueAICaptionExtractionJobListAICaptionExtractionJob["Status"].isNull())
			aICaptionExtractionJobListObject.status = valueAICaptionExtractionJobListAICaptionExtractionJob["Status"].asString();
		if(!valueAICaptionExtractionJobListAICaptionExtractionJob["TemplateConfig"].isNull())
			aICaptionExtractionJobListObject.templateConfig = valueAICaptionExtractionJobListAICaptionExtractionJob["TemplateConfig"].asString();
		aICaptionExtractionJobList_.push_back(aICaptionExtractionJobListObject);
	}

}

std::vector<GetAICaptionExtractionJobsResult::AICaptionExtractionJob> GetAICaptionExtractionJobsResult::getAICaptionExtractionJobList()const
{
	return aICaptionExtractionJobList_;
}

