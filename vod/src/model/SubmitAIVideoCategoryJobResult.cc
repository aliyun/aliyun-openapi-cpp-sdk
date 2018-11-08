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

#include <alibabacloud/vod/model/SubmitAIVideoCategoryJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SubmitAIVideoCategoryJobResult::SubmitAIVideoCategoryJobResult() :
	ServiceResult()
{}

SubmitAIVideoCategoryJobResult::SubmitAIVideoCategoryJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitAIVideoCategoryJobResult::~SubmitAIVideoCategoryJobResult()
{}

void SubmitAIVideoCategoryJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto aIVideoCategoryJobNode = value["AIVideoCategoryJob"];
	if(!aIVideoCategoryJobNode["JobId"].isNull())
		aIVideoCategoryJob_.jobId = aIVideoCategoryJobNode["JobId"].asString();
	if(!aIVideoCategoryJobNode["MediaId"].isNull())
		aIVideoCategoryJob_.mediaId = aIVideoCategoryJobNode["MediaId"].asString();
	if(!aIVideoCategoryJobNode["Status"].isNull())
		aIVideoCategoryJob_.status = aIVideoCategoryJobNode["Status"].asString();
	if(!aIVideoCategoryJobNode["Code"].isNull())
		aIVideoCategoryJob_.code = aIVideoCategoryJobNode["Code"].asString();
	if(!aIVideoCategoryJobNode["Message"].isNull())
		aIVideoCategoryJob_.message = aIVideoCategoryJobNode["Message"].asString();
	if(!aIVideoCategoryJobNode["CreationTime"].isNull())
		aIVideoCategoryJob_.creationTime = aIVideoCategoryJobNode["CreationTime"].asString();
	if(!aIVideoCategoryJobNode["Data"].isNull())
		aIVideoCategoryJob_.data = aIVideoCategoryJobNode["Data"].asString();

}

SubmitAIVideoCategoryJobResult::AIVideoCategoryJob SubmitAIVideoCategoryJobResult::getAIVideoCategoryJob()const
{
	return aIVideoCategoryJob_;
}

