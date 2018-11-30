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

#include <alibabacloud/vod/model/SubmitAIJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SubmitAIJobResult::SubmitAIJobResult() :
	ServiceResult()
{}

SubmitAIJobResult::SubmitAIJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitAIJobResult::~SubmitAIJobResult()
{}

void SubmitAIJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAIJobList = value["AIJobList"]["AIJob"];
	for (auto value : allAIJobList)
	{
		AIJob aIJobListObject;
		if(!value["JobId"].isNull())
			aIJobListObject.jobId = value["JobId"].asString();
		if(!value["Type"].isNull())
			aIJobListObject.type = value["Type"].asString();
		if(!value["MediaId"].isNull())
			aIJobListObject.mediaId = value["MediaId"].asString();
		if(!value["Status"].isNull())
			aIJobListObject.status = value["Status"].asString();
		if(!value["Code"].isNull())
			aIJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			aIJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			aIJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["Data"].isNull())
			aIJobListObject.data = value["Data"].asString();
		aIJobList_.push_back(aIJobListObject);
	}

}

std::vector<SubmitAIJobResult::AIJob> SubmitAIJobResult::getAIJobList()const
{
	return aIJobList_;
}

