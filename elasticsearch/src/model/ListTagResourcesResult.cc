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

#include <alibabacloud/elasticsearch/model/ListTagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListTagResourcesResult::ListTagResourcesResult() :
	ServiceResult()
{}

ListTagResourcesResult::ListTagResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagResourcesResult::~ListTagResourcesResult()
{}

void ListTagResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());
	auto tagResourcesNode = value["TagResources"];
	auto allTagResourceNode = tagResourcesNode["TagResource"]["TagResourceItem"];
	for (auto tagResourcesNodeTagResourceTagResourceItem : allTagResourceNode)
	{
		TagResources::TagResourceItem tagResourceItemObject;
		if(!tagResourcesNodeTagResourceTagResourceItem["TagValue"].isNull())
			tagResourceItemObject.tagValue = tagResourcesNodeTagResourceTagResourceItem["TagValue"].asString();
		if(!tagResourcesNodeTagResourceTagResourceItem["ResourceType"].isNull())
			tagResourceItemObject.resourceType = tagResourcesNodeTagResourceTagResourceItem["ResourceType"].asString();
		if(!tagResourcesNodeTagResourceTagResourceItem["ResourceId"].isNull())
			tagResourceItemObject.resourceId = tagResourcesNodeTagResourceTagResourceItem["ResourceId"].asString();
		if(!tagResourcesNodeTagResourceTagResourceItem["TagKey"].isNull())
			tagResourceItemObject.tagKey = tagResourcesNodeTagResourceTagResourceItem["TagKey"].asString();
		tagResources_.tagResource.push_back(tagResourceItemObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListTagResourcesResult::getPageSize()const
{
	return pageSize_;
}

ListTagResourcesResult::Headers ListTagResourcesResult::getHeaders()const
{
	return headers_;
}

ListTagResourcesResult::TagResources ListTagResourcesResult::getTagResources()const
{
	return tagResources_;
}

