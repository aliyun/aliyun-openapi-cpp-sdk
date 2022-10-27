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

#include <alibabacloud/elasticsearch/model/ListDictsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListDictsResult::ListDictsResult() :
	ServiceResult()
{}

ListDictsResult::ListDictsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDictsResult::~ListDictsResult()
{}

void ListDictsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["fileSize"].isNull())
			resultObject.fileSize = std::stol(valueResultResultItem["fileSize"].asString());
		if(!valueResultResultItem["downloadUrl"].isNull())
			resultObject.downloadUrl = valueResultResultItem["downloadUrl"].asString();
		if(!valueResultResultItem["sourceType"].isNull())
			resultObject.sourceType = valueResultResultItem["sourceType"].asString();
		if(!valueResultResultItem["type"].isNull())
			resultObject.type = valueResultResultItem["type"].asString();
		if(!valueResultResultItem["name"].isNull())
			resultObject.name = valueResultResultItem["name"].asString();
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());

}

ListDictsResult::Headers ListDictsResult::getHeaders()const
{
	return headers_;
}

std::vector<ListDictsResult::ResultItem> ListDictsResult::getResult()const
{
	return result_;
}

