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

#include <alibabacloud/vod/model/SubmitAIVideoCoverJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

SubmitAIVideoCoverJobResult::SubmitAIVideoCoverJobResult() :
	ServiceResult()
{}

SubmitAIVideoCoverJobResult::SubmitAIVideoCoverJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitAIVideoCoverJobResult::~SubmitAIVideoCoverJobResult()
{}

void SubmitAIVideoCoverJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto aIVideoCoverJobNode = value["AIVideoCoverJob"];
	if(!aIVideoCoverJobNode["JobId"].isNull())
		aIVideoCoverJob_.jobId = aIVideoCoverJobNode["JobId"].asString();
	if(!aIVideoCoverJobNode["MediaId"].isNull())
		aIVideoCoverJob_.mediaId = aIVideoCoverJobNode["MediaId"].asString();
	if(!aIVideoCoverJobNode["Status"].isNull())
		aIVideoCoverJob_.status = aIVideoCoverJobNode["Status"].asString();
	if(!aIVideoCoverJobNode["Code"].isNull())
		aIVideoCoverJob_.code = aIVideoCoverJobNode["Code"].asString();
	if(!aIVideoCoverJobNode["Message"].isNull())
		aIVideoCoverJob_.message = aIVideoCoverJobNode["Message"].asString();
	if(!aIVideoCoverJobNode["CreationTime"].isNull())
		aIVideoCoverJob_.creationTime = aIVideoCoverJobNode["CreationTime"].asString();
	if(!aIVideoCoverJobNode["Data"].isNull())
		aIVideoCoverJob_.data = aIVideoCoverJobNode["Data"].asString();

}

SubmitAIVideoCoverJobResult::AIVideoCoverJob SubmitAIVideoCoverJobResult::getAIVideoCoverJob()const
{
	return aIVideoCoverJob_;
}

