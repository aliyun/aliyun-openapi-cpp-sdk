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

#include <alibabacloud/vod/model/ListAIVideoPornRecogJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAIVideoPornRecogJobResult::ListAIVideoPornRecogJobResult() :
	ServiceResult()
{}

ListAIVideoPornRecogJobResult::ListAIVideoPornRecogJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAIVideoPornRecogJobResult::~ListAIVideoPornRecogJobResult()
{}

void ListAIVideoPornRecogJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAIVideoPornRecogJobList = value["AIVideoPornRecogJobList"]["AIVideoPornRecogJob"];
	for (auto value : allAIVideoPornRecogJobList)
	{
		AIVideoPornRecogJob aIVideoPornRecogJobListObject;
		if(!value["JobId"].isNull())
			aIVideoPornRecogJobListObject.jobId = value["JobId"].asString();
		if(!value["MediaId"].isNull())
			aIVideoPornRecogJobListObject.mediaId = value["MediaId"].asString();
		if(!value["Status"].isNull())
			aIVideoPornRecogJobListObject.status = value["Status"].asString();
		if(!value["Code"].isNull())
			aIVideoPornRecogJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			aIVideoPornRecogJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			aIVideoPornRecogJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["Data"].isNull())
			aIVideoPornRecogJobListObject.data = value["Data"].asString();
		aIVideoPornRecogJobList_.push_back(aIVideoPornRecogJobListObject);
	}
	auto allNonExistPornRecogJobIds = value["NonExistPornRecogJobIds"]["String"];
	for (const auto &item : allNonExistPornRecogJobIds)
		nonExistPornRecogJobIds_.push_back(item.asString());

}

std::vector<std::string> ListAIVideoPornRecogJobResult::getNonExistPornRecogJobIds()const
{
	return nonExistPornRecogJobIds_;
}

std::vector<ListAIVideoPornRecogJobResult::AIVideoPornRecogJob> ListAIVideoPornRecogJobResult::getAIVideoPornRecogJobList()const
{
	return aIVideoPornRecogJobList_;
}

