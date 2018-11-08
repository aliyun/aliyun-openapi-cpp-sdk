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

#include <alibabacloud/vod/model/ListAIVideoCensorJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAIVideoCensorJobResult::ListAIVideoCensorJobResult() :
	ServiceResult()
{}

ListAIVideoCensorJobResult::ListAIVideoCensorJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAIVideoCensorJobResult::~ListAIVideoCensorJobResult()
{}

void ListAIVideoCensorJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAIVideoCensorJobList = value["AIVideoCensorJobList"]["AIVideoCensorJob"];
	for (auto value : allAIVideoCensorJobList)
	{
		AIVideoCensorJob aIVideoCensorJobListObject;
		if(!value["JobId"].isNull())
			aIVideoCensorJobListObject.jobId = value["JobId"].asString();
		if(!value["MediaId"].isNull())
			aIVideoCensorJobListObject.mediaId = value["MediaId"].asString();
		if(!value["Status"].isNull())
			aIVideoCensorJobListObject.status = value["Status"].asString();
		if(!value["Code"].isNull())
			aIVideoCensorJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			aIVideoCensorJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			aIVideoCensorJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["Data"].isNull())
			aIVideoCensorJobListObject.data = value["Data"].asString();
		aIVideoCensorJobList_.push_back(aIVideoCensorJobListObject);
	}
	auto allNonExistAIVideoCensorJobIds = value["NonExistAIVideoCensorJobIds"]["String"];
	for (const auto &item : allNonExistAIVideoCensorJobIds)
		nonExistAIVideoCensorJobIds_.push_back(item.asString());

}

std::vector<ListAIVideoCensorJobResult::AIVideoCensorJob> ListAIVideoCensorJobResult::getAIVideoCensorJobList()const
{
	return aIVideoCensorJobList_;
}

std::vector<std::string> ListAIVideoCensorJobResult::getNonExistAIVideoCensorJobIds()const
{
	return nonExistAIVideoCensorJobIds_;
}

