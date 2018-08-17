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

#include <alibabacloud/vod/model/ListAIVideoTerrorismRecogJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAIVideoTerrorismRecogJobResult::ListAIVideoTerrorismRecogJobResult() :
	ServiceResult()
{}

ListAIVideoTerrorismRecogJobResult::ListAIVideoTerrorismRecogJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAIVideoTerrorismRecogJobResult::~ListAIVideoTerrorismRecogJobResult()
{}

void ListAIVideoTerrorismRecogJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAIVideoTerrorismRecogJobList = value["AIVideoTerrorismRecogJobList"]["AIVideoTerrorismRecogJob"];
	for (auto value : allAIVideoTerrorismRecogJobList)
	{
		AIVideoTerrorismRecogJob aIVideoTerrorismRecogJobListObject;
		if(!value["JobId"].isNull())
			aIVideoTerrorismRecogJobListObject.jobId = value["JobId"].asString();
		if(!value["MediaId"].isNull())
			aIVideoTerrorismRecogJobListObject.mediaId = value["MediaId"].asString();
		if(!value["Status"].isNull())
			aIVideoTerrorismRecogJobListObject.status = value["Status"].asString();
		if(!value["Code"].isNull())
			aIVideoTerrorismRecogJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			aIVideoTerrorismRecogJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			aIVideoTerrorismRecogJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["Data"].isNull())
			aIVideoTerrorismRecogJobListObject.data = value["Data"].asString();
		aIVideoTerrorismRecogJobList_.push_back(aIVideoTerrorismRecogJobListObject);
	}
	auto allNonExistTerrorismRecogJobIds = value["NonExistTerrorismRecogJobIds"]["String"];
	for (const auto &item : allNonExistTerrorismRecogJobIds)
		nonExistTerrorismRecogJobIds_.push_back(item.asString());

}

std::vector<ListAIVideoTerrorismRecogJobResult::AIVideoTerrorismRecogJob> ListAIVideoTerrorismRecogJobResult::getAIVideoTerrorismRecogJobList()const
{
	return aIVideoTerrorismRecogJobList_;
}

std::vector<std::string> ListAIVideoTerrorismRecogJobResult::getNonExistTerrorismRecogJobIds()const
{
	return nonExistTerrorismRecogJobIds_;
}

