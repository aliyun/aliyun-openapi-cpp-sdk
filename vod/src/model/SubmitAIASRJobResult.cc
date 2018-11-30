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

#include <alibabacloud/vod/model/SubmitAIASRJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SubmitAIASRJobResult::SubmitAIASRJobResult() :
	ServiceResult()
{}

SubmitAIASRJobResult::SubmitAIASRJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitAIASRJobResult::~SubmitAIASRJobResult()
{}

void SubmitAIASRJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto aIASRJobNode = value["AIASRJob"];
	if(!aIASRJobNode["JobId"].isNull())
		aIASRJob_.jobId = aIASRJobNode["JobId"].asString();
	if(!aIASRJobNode["MediaId"].isNull())
		aIASRJob_.mediaId = aIASRJobNode["MediaId"].asString();
	if(!aIASRJobNode["Status"].isNull())
		aIASRJob_.status = aIASRJobNode["Status"].asString();
	if(!aIASRJobNode["Code"].isNull())
		aIASRJob_.code = aIASRJobNode["Code"].asString();
	if(!aIASRJobNode["Message"].isNull())
		aIASRJob_.message = aIASRJobNode["Message"].asString();
	if(!aIASRJobNode["CreationTime"].isNull())
		aIASRJob_.creationTime = aIASRJobNode["CreationTime"].asString();
	if(!aIASRJobNode["Data"].isNull())
		aIASRJob_.data = aIASRJobNode["Data"].asString();

}

SubmitAIASRJobResult::AIASRJob SubmitAIASRJobResult::getAIASRJob()const
{
	return aIASRJob_;
}

