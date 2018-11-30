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

#include <alibabacloud/vod/model/ListAIVideoCategoryJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAIVideoCategoryJobResult::ListAIVideoCategoryJobResult() :
	ServiceResult()
{}

ListAIVideoCategoryJobResult::ListAIVideoCategoryJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAIVideoCategoryJobResult::~ListAIVideoCategoryJobResult()
{}

void ListAIVideoCategoryJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAIVideoCategoryJobList = value["AIVideoCategoryJobList"]["AIVideoCategoryJob"];
	for (auto value : allAIVideoCategoryJobList)
	{
		AIVideoCategoryJob aIVideoCategoryJobListObject;
		if(!value["JobId"].isNull())
			aIVideoCategoryJobListObject.jobId = value["JobId"].asString();
		if(!value["MediaId"].isNull())
			aIVideoCategoryJobListObject.mediaId = value["MediaId"].asString();
		if(!value["Status"].isNull())
			aIVideoCategoryJobListObject.status = value["Status"].asString();
		if(!value["Code"].isNull())
			aIVideoCategoryJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			aIVideoCategoryJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			aIVideoCategoryJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["Data"].isNull())
			aIVideoCategoryJobListObject.data = value["Data"].asString();
		aIVideoCategoryJobList_.push_back(aIVideoCategoryJobListObject);
	}
	auto allNonExistAIVideoCategoryJobIds = value["NonExistAIVideoCategoryJobIds"]["String"];
	for (const auto &item : allNonExistAIVideoCategoryJobIds)
		nonExistAIVideoCategoryJobIds_.push_back(item.asString());

}

std::vector<ListAIVideoCategoryJobResult::AIVideoCategoryJob> ListAIVideoCategoryJobResult::getAIVideoCategoryJobList()const
{
	return aIVideoCategoryJobList_;
}

std::vector<std::string> ListAIVideoCategoryJobResult::getNonExistAIVideoCategoryJobIds()const
{
	return nonExistAIVideoCategoryJobIds_;
}

