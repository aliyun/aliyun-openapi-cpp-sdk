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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAIJobList = value["AIJobList"]["AIJob"];
	for (auto value : allAIJobList)
	{
		AIJob aIJobListObject;
		if(!value["JobId"].isNull())
			aIJobListObject.jobId = value["JobId"].asString();
		if(!value["MediaId"].isNull())
			aIJobListObject.mediaId = value["MediaId"].asString();
		if(!value["Type"].isNull())
			aIJobListObject.type = value["Type"].asString();
		if(!value["Status"].isNull())
			aIJobListObject.status = value["Status"].asString();
		if(!value["Code"].isNull())
			aIJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			aIJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			aIJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["CompleteTime"].isNull())
			aIJobListObject.completeTime = value["CompleteTime"].asString();
		if(!value["Data"].isNull())
			aIJobListObject.data = value["Data"].asString();
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

