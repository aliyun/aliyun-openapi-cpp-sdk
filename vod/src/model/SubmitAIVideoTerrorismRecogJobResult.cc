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

#include <alibabacloud/vod/model/SubmitAIVideoTerrorismRecogJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SubmitAIVideoTerrorismRecogJobResult::SubmitAIVideoTerrorismRecogJobResult() :
	ServiceResult()
{}

SubmitAIVideoTerrorismRecogJobResult::SubmitAIVideoTerrorismRecogJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitAIVideoTerrorismRecogJobResult::~SubmitAIVideoTerrorismRecogJobResult()
{}

void SubmitAIVideoTerrorismRecogJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto aIVideoTerrorismRecogJobNode = value["AIVideoTerrorismRecogJob"];
	if(!aIVideoTerrorismRecogJobNode["JobId"].isNull())
		aIVideoTerrorismRecogJob_.jobId = aIVideoTerrorismRecogJobNode["JobId"].asString();
	if(!aIVideoTerrorismRecogJobNode["MediaId"].isNull())
		aIVideoTerrorismRecogJob_.mediaId = aIVideoTerrorismRecogJobNode["MediaId"].asString();
	if(!aIVideoTerrorismRecogJobNode["Status"].isNull())
		aIVideoTerrorismRecogJob_.status = aIVideoTerrorismRecogJobNode["Status"].asString();
	if(!aIVideoTerrorismRecogJobNode["Code"].isNull())
		aIVideoTerrorismRecogJob_.code = aIVideoTerrorismRecogJobNode["Code"].asString();
	if(!aIVideoTerrorismRecogJobNode["Message"].isNull())
		aIVideoTerrorismRecogJob_.message = aIVideoTerrorismRecogJobNode["Message"].asString();
	if(!aIVideoTerrorismRecogJobNode["CreationTime"].isNull())
		aIVideoTerrorismRecogJob_.creationTime = aIVideoTerrorismRecogJobNode["CreationTime"].asString();
	if(!aIVideoTerrorismRecogJobNode["Data"].isNull())
		aIVideoTerrorismRecogJob_.data = aIVideoTerrorismRecogJobNode["Data"].asString();

}

SubmitAIVideoTerrorismRecogJobResult::AIVideoTerrorismRecogJob SubmitAIVideoTerrorismRecogJobResult::getAIVideoTerrorismRecogJob()const
{
	return aIVideoTerrorismRecogJob_;
}

