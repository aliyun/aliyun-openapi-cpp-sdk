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

#include <alibabacloud/vod/model/SubmitAIVideoPornRecogJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SubmitAIVideoPornRecogJobResult::SubmitAIVideoPornRecogJobResult() :
	ServiceResult()
{}

SubmitAIVideoPornRecogJobResult::SubmitAIVideoPornRecogJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitAIVideoPornRecogJobResult::~SubmitAIVideoPornRecogJobResult()
{}

void SubmitAIVideoPornRecogJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto aIVideoPornRecogJobNode = value["AIVideoPornRecogJob"];
	if(!aIVideoPornRecogJobNode["JobId"].isNull())
		aIVideoPornRecogJob_.jobId = aIVideoPornRecogJobNode["JobId"].asString();
	if(!aIVideoPornRecogJobNode["MediaId"].isNull())
		aIVideoPornRecogJob_.mediaId = aIVideoPornRecogJobNode["MediaId"].asString();
	if(!aIVideoPornRecogJobNode["Status"].isNull())
		aIVideoPornRecogJob_.status = aIVideoPornRecogJobNode["Status"].asString();
	if(!aIVideoPornRecogJobNode["Code"].isNull())
		aIVideoPornRecogJob_.code = aIVideoPornRecogJobNode["Code"].asString();
	if(!aIVideoPornRecogJobNode["Message"].isNull())
		aIVideoPornRecogJob_.message = aIVideoPornRecogJobNode["Message"].asString();
	if(!aIVideoPornRecogJobNode["CreationTime"].isNull())
		aIVideoPornRecogJob_.creationTime = aIVideoPornRecogJobNode["CreationTime"].asString();
	if(!aIVideoPornRecogJobNode["Data"].isNull())
		aIVideoPornRecogJob_.data = aIVideoPornRecogJobNode["Data"].asString();

}

SubmitAIVideoPornRecogJobResult::AIVideoPornRecogJob SubmitAIVideoPornRecogJobResult::getAIVideoPornRecogJob()const
{
	return aIVideoPornRecogJob_;
}

