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

#include <alibabacloud/vod/model/ListAIVideoCoverJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAIVideoCoverJobResult::ListAIVideoCoverJobResult() :
	ServiceResult()
{}

ListAIVideoCoverJobResult::ListAIVideoCoverJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAIVideoCoverJobResult::~ListAIVideoCoverJobResult()
{}

void ListAIVideoCoverJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAIVideoCoverJobList = value["AIVideoCoverJobList"]["AIVideoCoverJob"];
	for (auto value : allAIVideoCoverJobList)
	{
		AIVideoCoverJob aIVideoCoverJobListObject;
		if(!value["JobId"].isNull())
			aIVideoCoverJobListObject.jobId = value["JobId"].asString();
		if(!value["MediaId"].isNull())
			aIVideoCoverJobListObject.mediaId = value["MediaId"].asString();
		if(!value["Status"].isNull())
			aIVideoCoverJobListObject.status = value["Status"].asString();
		if(!value["Code"].isNull())
			aIVideoCoverJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			aIVideoCoverJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			aIVideoCoverJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["Data"].isNull())
			aIVideoCoverJobListObject.data = value["Data"].asString();
		aIVideoCoverJobList_.push_back(aIVideoCoverJobListObject);
	}
	auto allNonExistAIVideoCoverJobIds = value["NonExistAIVideoCoverJobIds"]["String"];
	for (const auto &item : allNonExistAIVideoCoverJobIds)
		nonExistAIVideoCoverJobIds_.push_back(item.asString());

}

std::vector<ListAIVideoCoverJobResult::AIVideoCoverJob> ListAIVideoCoverJobResult::getAIVideoCoverJobList()const
{
	return aIVideoCoverJobList_;
}

std::vector<std::string> ListAIVideoCoverJobResult::getNonExistAIVideoCoverJobIds()const
{
	return nonExistAIVideoCoverJobIds_;
}

