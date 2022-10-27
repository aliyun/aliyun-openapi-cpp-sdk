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

#include <alibabacloud/elasticsearch/model/ListDataStreamsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListDataStreamsResult::ListDataStreamsResult() :
	ServiceResult()
{}

ListDataStreamsResult::ListDataStreamsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataStreamsResult::~ListDataStreamsResult()
{}

void ListDataStreamsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["totalStorageSize"].isNull())
			resultObject.totalStorageSize = std::stol(valueResultResultItem["totalStorageSize"].asString());
		if(!valueResultResultItem["indexTemplateName"].isNull())
			resultObject.indexTemplateName = valueResultResultItem["indexTemplateName"].asString();
		if(!valueResultResultItem["ilmPolicyName"].isNull())
			resultObject.ilmPolicyName = valueResultResultItem["ilmPolicyName"].asString();
		if(!valueResultResultItem["name"].isNull())
			resultObject.name = valueResultResultItem["name"].asString();
		if(!valueResultResultItem["health"].isNull())
			resultObject.health = valueResultResultItem["health"].asString();
		if(!valueResultResultItem["managedStorageSize"].isNull())
			resultObject.managedStorageSize = std::stol(valueResultResultItem["managedStorageSize"].asString());
		auto allindicesNode = valueResultResultItem["indices"]["indicesItem"];
		for (auto valueResultResultItemindicesindicesItem : allindicesNode)
		{
			ResultItem::IndicesItem indicesObject;
			if(!valueResultResultItemindicesindicesItem["isManaged"].isNull())
				indicesObject.isManaged = valueResultResultItemindicesindicesItem["isManaged"].asString() == "true";
			if(!valueResultResultItemindicesindicesItem["createTime"].isNull())
				indicesObject.createTime = valueResultResultItemindicesindicesItem["createTime"].asString();
			if(!valueResultResultItemindicesindicesItem["size"].isNull())
				indicesObject.size = std::stol(valueResultResultItemindicesindicesItem["size"].asString());
			if(!valueResultResultItemindicesindicesItem["managedStatus"].isNull())
				indicesObject.managedStatus = valueResultResultItemindicesindicesItem["managedStatus"].asString();
			if(!valueResultResultItemindicesindicesItem["name"].isNull())
				indicesObject.name = valueResultResultItemindicesindicesItem["name"].asString();
			if(!valueResultResultItemindicesindicesItem["health"].isNull())
				indicesObject.health = valueResultResultItemindicesindicesItem["health"].asString();
			resultObject.indices.push_back(indicesObject);
		}
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Managed-StorageSize"].isNull())
		headers_.xManagedStorageSize = std::stol(headersNode["X-Managed-StorageSize"].asString());
	if(!headersNode["X-Managed-Count"].isNull())
		headers_.xManagedCount = std::stoi(headersNode["X-Managed-Count"].asString());

}

ListDataStreamsResult::Headers ListDataStreamsResult::getHeaders()const
{
	return headers_;
}

std::vector<ListDataStreamsResult::ResultItem> ListDataStreamsResult::getResult()const
{
	return result_;
}

