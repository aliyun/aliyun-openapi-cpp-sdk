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

#include <alibabacloud/elasticsearch/model/UpdateHotIkDictsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

UpdateHotIkDictsResult::UpdateHotIkDictsResult() :
	ServiceResult()
{}

UpdateHotIkDictsResult::UpdateHotIkDictsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateHotIkDictsResult::~UpdateHotIkDictsResult()
{}

void UpdateHotIkDictsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["DictList"];
	for (auto valueResultDictList : allResultNode)
	{
		DictList resultObject;
		if(!valueResultDictList["name"].isNull())
			resultObject.name = valueResultDictList["name"].asString();
		if(!valueResultDictList["fileSize"].isNull())
			resultObject.fileSize = std::stol(valueResultDictList["fileSize"].asString());
		if(!valueResultDictList["type"].isNull())
			resultObject.type = valueResultDictList["type"].asString();
		if(!valueResultDictList["sourceType"].isNull())
			resultObject.sourceType = valueResultDictList["sourceType"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<UpdateHotIkDictsResult::DictList> UpdateHotIkDictsResult::getResult()const
{
	return result_;
}

