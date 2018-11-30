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

#include <alibabacloud/vod/model/SubmitAIVideoCensorJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SubmitAIVideoCensorJobResult::SubmitAIVideoCensorJobResult() :
	ServiceResult()
{}

SubmitAIVideoCensorJobResult::SubmitAIVideoCensorJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitAIVideoCensorJobResult::~SubmitAIVideoCensorJobResult()
{}

void SubmitAIVideoCensorJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto aIVideoCensorJobNode = value["AIVideoCensorJob"];
	if(!aIVideoCensorJobNode["JobId"].isNull())
		aIVideoCensorJob_.jobId = aIVideoCensorJobNode["JobId"].asString();
	if(!aIVideoCensorJobNode["MediaId"].isNull())
		aIVideoCensorJob_.mediaId = aIVideoCensorJobNode["MediaId"].asString();
	if(!aIVideoCensorJobNode["Status"].isNull())
		aIVideoCensorJob_.status = aIVideoCensorJobNode["Status"].asString();
	if(!aIVideoCensorJobNode["Code"].isNull())
		aIVideoCensorJob_.code = aIVideoCensorJobNode["Code"].asString();
	if(!aIVideoCensorJobNode["Message"].isNull())
		aIVideoCensorJob_.message = aIVideoCensorJobNode["Message"].asString();
	if(!aIVideoCensorJobNode["CreationTime"].isNull())
		aIVideoCensorJob_.creationTime = aIVideoCensorJobNode["CreationTime"].asString();
	if(!aIVideoCensorJobNode["Data"].isNull())
		aIVideoCensorJob_.data = aIVideoCensorJobNode["Data"].asString();

}

SubmitAIVideoCensorJobResult::AIVideoCensorJob SubmitAIVideoCensorJobResult::getAIVideoCensorJob()const
{
	return aIVideoCensorJob_;
}

