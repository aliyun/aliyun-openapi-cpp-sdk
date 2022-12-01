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

#include <alibabacloud/opensearch/model/ListDataCollectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListDataCollectionsResult::ListDataCollectionsResult() :
	ServiceResult()
{}

ListDataCollectionsResult::ListDataCollectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataCollectionsResult::~ListDataCollectionsResult()
{}

void ListDataCollectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["created"].isNull())
			resultObject.created = std::stoi(valueresultresultItem["created"].asString());
		if(!valueresultresultItem["dataCollectionType"].isNull())
			resultObject.dataCollectionType = valueresultresultItem["dataCollectionType"].asString();
		if(!valueresultresultItem["type"].isNull())
			resultObject.type = valueresultresultItem["type"].asString();
		if(!valueresultresultItem["industryName"].isNull())
			resultObject.industryName = valueresultresultItem["industryName"].asString();
		if(!valueresultresultItem["status"].isNull())
			resultObject.status = std::stoi(valueresultresultItem["status"].asString());
		if(!valueresultresultItem["updated"].isNull())
			resultObject.updated = std::stoi(valueresultresultItem["updated"].asString());
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["sundialId"].isNull())
			resultObject.sundialId = valueresultresultItem["sundialId"].asString();
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = valueresultresultItem["id"].asString();
		result_.push_back(resultObject);
	}
	if(!value["totalCount"].isNull())
		totalCount_ = std::stoi(value["totalCount"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListDataCollectionsResult::ResultItem> ListDataCollectionsResult::getresult()const
{
	return result_;
}

int ListDataCollectionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDataCollectionsResult::getRequestId()const
{
	return requestId_;
}

