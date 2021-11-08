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

#include <alibabacloud/elasticsearch/model/ListInstanceIndicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListInstanceIndicesResult::ListInstanceIndicesResult() :
	ServiceResult()
{}

ListInstanceIndicesResult::ListInstanceIndicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceIndicesResult::~ListInstanceIndicesResult()
{}

void ListInstanceIndicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["isManaged"].isNull())
			resultObject.isManaged = valueResultResultItem["isManaged"].asString();
		if(!valueResultResultItem["createTime"].isNull())
			resultObject.createTime = valueResultResultItem["createTime"].asString();
		if(!valueResultResultItem["size"].isNull())
			resultObject.size = std::stol(valueResultResultItem["size"].asString());
		if(!valueResultResultItem["managedStatus"].isNull())
			resultObject.managedStatus = valueResultResultItem["managedStatus"].asString();
		if(!valueResultResultItem["name"].isNull())
			resultObject.name = valueResultResultItem["name"].asString();
		if(!valueResultResultItem["health"].isNull())
			resultObject.health = valueResultResultItem["health"].asString();
		if(!valueResultResultItem["phase"].isNull())
			resultObject.phase = valueResultResultItem["phase"].asString();
		if(!valueResultResultItem["ilmExplain"].isNull())
			resultObject.ilmExplain = valueResultResultItem["ilmExplain"].asString();
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Managed-StorageSize"].isNull())
		headers_.xManagedStorageSize = std::stol(headersNode["X-Managed-StorageSize"].asString());
	if(!headersNode["X-Managed-Count"].isNull())
		headers_.xManagedCount = std::stoi(headersNode["X-Managed-Count"].asString());
	if(!headersNode["X-OSS-StorageSize"].isNull())
		headers_.xOSSStorageSize = std::stol(headersNode["X-OSS-StorageSize"].asString());
	if(!headersNode["X-OSS-Count"].isNull())
		headers_.xOSSCount = std::stoi(headersNode["X-OSS-Count"].asString());

}

ListInstanceIndicesResult::Headers ListInstanceIndicesResult::getHeaders()const
{
	return headers_;
}

std::vector<ListInstanceIndicesResult::ResultItem> ListInstanceIndicesResult::getResult()const
{
	return result_;
}

