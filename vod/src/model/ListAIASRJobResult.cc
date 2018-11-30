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

#include <alibabacloud/vod/model/ListAIASRJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAIASRJobResult::ListAIASRJobResult() :
	ServiceResult()
{}

ListAIASRJobResult::ListAIASRJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAIASRJobResult::~ListAIASRJobResult()
{}

void ListAIASRJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAIASRJobList = value["AIASRJobList"]["AIASRJob"];
	for (auto value : allAIASRJobList)
	{
		AIASRJob aIASRJobListObject;
		if(!value["JobId"].isNull())
			aIASRJobListObject.jobId = value["JobId"].asString();
		if(!value["MediaId"].isNull())
			aIASRJobListObject.mediaId = value["MediaId"].asString();
		if(!value["Status"].isNull())
			aIASRJobListObject.status = value["Status"].asString();
		if(!value["Code"].isNull())
			aIASRJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			aIASRJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			aIASRJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["Data"].isNull())
			aIASRJobListObject.data = value["Data"].asString();
		aIASRJobList_.push_back(aIASRJobListObject);
	}
	auto allNonExistAIASRJobIds = value["NonExistAIASRJobIds"]["String"];
	for (const auto &item : allNonExistAIASRJobIds)
		nonExistAIASRJobIds_.push_back(item.asString());

}

std::vector<std::string> ListAIASRJobResult::getNonExistAIASRJobIds()const
{
	return nonExistAIASRJobIds_;
}

std::vector<ListAIASRJobResult::AIASRJob> ListAIASRJobResult::getAIASRJobList()const
{
	return aIASRJobList_;
}

