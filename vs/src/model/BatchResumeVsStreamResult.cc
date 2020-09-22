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

#include <alibabacloud/vs/model/BatchResumeVsStreamResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

BatchResumeVsStreamResult::BatchResumeVsStreamResult() :
	ServiceResult()
{}

BatchResumeVsStreamResult::BatchResumeVsStreamResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchResumeVsStreamResult::~BatchResumeVsStreamResult()
{}

void BatchResumeVsStreamResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResumeResultNode = value["ResumeResult"]["ResumeResultInfo"];
	for (auto valueResumeResultResumeResultInfo : allResumeResultNode)
	{
		ResumeResultInfo resumeResultObject;
		if(!valueResumeResultResumeResultInfo["Result"].isNull())
			resumeResultObject.result = valueResumeResultResumeResultInfo["Result"].asString();
		if(!valueResumeResultResumeResultInfo["Detail"].isNull())
			resumeResultObject.detail = valueResumeResultResumeResultInfo["Detail"].asString();
		if(!valueResumeResultResumeResultInfo["Count"].isNull())
			resumeResultObject.count = std::stoi(valueResumeResultResumeResultInfo["Count"].asString());
		auto allChannels = value["Channels"]["Channel"];
		for (auto value : allChannels)
			resumeResultObject.channels.push_back(value.asString());
		resumeResult_.push_back(resumeResultObject);
	}

}

std::vector<BatchResumeVsStreamResult::ResumeResultInfo> BatchResumeVsStreamResult::getResumeResult()const
{
	return resumeResult_;
}

