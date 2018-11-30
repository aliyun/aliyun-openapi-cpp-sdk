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

#include <alibabacloud/vod/model/ListAIVideoSummaryJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAIVideoSummaryJobResult::ListAIVideoSummaryJobResult() :
	ServiceResult()
{}

ListAIVideoSummaryJobResult::ListAIVideoSummaryJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAIVideoSummaryJobResult::~ListAIVideoSummaryJobResult()
{}

void ListAIVideoSummaryJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAIVideoSummaryJobList = value["AIVideoSummaryJobList"]["AIVideoSummaryJob"];
	for (auto value : allAIVideoSummaryJobList)
	{
		AIVideoSummaryJob aIVideoSummaryJobListObject;
		if(!value["JobId"].isNull())
			aIVideoSummaryJobListObject.jobId = value["JobId"].asString();
		if(!value["MediaId"].isNull())
			aIVideoSummaryJobListObject.mediaId = value["MediaId"].asString();
		if(!value["Status"].isNull())
			aIVideoSummaryJobListObject.status = value["Status"].asString();
		if(!value["Code"].isNull())
			aIVideoSummaryJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			aIVideoSummaryJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			aIVideoSummaryJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["Data"].isNull())
			aIVideoSummaryJobListObject.data = value["Data"].asString();
		aIVideoSummaryJobList_.push_back(aIVideoSummaryJobListObject);
	}
	auto allNonExistAIVideoSummaryJobIds = value["NonExistAIVideoSummaryJobIds"]["String"];
	for (const auto &item : allNonExistAIVideoSummaryJobIds)
		nonExistAIVideoSummaryJobIds_.push_back(item.asString());

}

std::vector<std::string> ListAIVideoSummaryJobResult::getNonExistAIVideoSummaryJobIds()const
{
	return nonExistAIVideoSummaryJobIds_;
}

std::vector<ListAIVideoSummaryJobResult::AIVideoSummaryJob> ListAIVideoSummaryJobResult::getAIVideoSummaryJobList()const
{
	return aIVideoSummaryJobList_;
}

