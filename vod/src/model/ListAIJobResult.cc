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

#include <alibabacloud/vod/model/ListAIJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAIJobResult::ListAIJobResult() :
	ServiceResult()
{}

ListAIJobResult::ListAIJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAIJobResult::~ListAIJobResult()
{}

void ListAIJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAIJobListNode = value["AIJobList"]["AIJob"];
	for (auto valueAIJobListAIJob : allAIJobListNode)
	{
		AIJob aIJobListObject;
		if(!valueAIJobListAIJob["CreationTime"].isNull())
			aIJobListObject.creationTime = valueAIJobListAIJob["CreationTime"].asString();
		if(!valueAIJobListAIJob["Status"].isNull())
			aIJobListObject.status = valueAIJobListAIJob["Status"].asString();
		if(!valueAIJobListAIJob["Type"].isNull())
			aIJobListObject.type = valueAIJobListAIJob["Type"].asString();
		if(!valueAIJobListAIJob["Data"].isNull())
			aIJobListObject.data = valueAIJobListAIJob["Data"].asString();
		if(!valueAIJobListAIJob["CompleteTime"].isNull())
			aIJobListObject.completeTime = valueAIJobListAIJob["CompleteTime"].asString();
		if(!valueAIJobListAIJob["JobId"].isNull())
			aIJobListObject.jobId = valueAIJobListAIJob["JobId"].asString();
		if(!valueAIJobListAIJob["Code"].isNull())
			aIJobListObject.code = valueAIJobListAIJob["Code"].asString();
		if(!valueAIJobListAIJob["Message"].isNull())
			aIJobListObject.message = valueAIJobListAIJob["Message"].asString();
		if(!valueAIJobListAIJob["MediaId"].isNull())
			aIJobListObject.mediaId = valueAIJobListAIJob["MediaId"].asString();
		aIJobList_.push_back(aIJobListObject);
	}
	auto allNonExistAIJobIds = value["NonExistAIJobIds"]["String"];
	for (const auto &item : allNonExistAIJobIds)
		nonExistAIJobIds_.push_back(item.asString());

}

std::vector<ListAIJobResult::AIJob> ListAIJobResult::getAIJobList()const
{
	return aIJobList_;
}

std::vector<std::string> ListAIJobResult::getNonExistAIJobIds()const
{
	return nonExistAIJobIds_;
}

