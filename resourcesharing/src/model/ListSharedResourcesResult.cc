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

#include <alibabacloud/resourcesharing/model/ListSharedResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceSharing;
using namespace AlibabaCloud::ResourceSharing::Model;

ListSharedResourcesResult::ListSharedResourcesResult() :
	ServiceResult()
{}

ListSharedResourcesResult::ListSharedResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSharedResourcesResult::~ListSharedResourcesResult()
{}

void ListSharedResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSharedResourcesNode = value["SharedResources"]["SharedResource"];
	for (auto valueSharedResourcesSharedResource : allSharedResourcesNode)
	{
		SharedResource sharedResourcesObject;
		if(!valueSharedResourcesSharedResource["UpdateTime"].isNull())
			sharedResourcesObject.updateTime = valueSharedResourcesSharedResource["UpdateTime"].asString();
		if(!valueSharedResourcesSharedResource["ResourceType"].isNull())
			sharedResourcesObject.resourceType = valueSharedResourcesSharedResource["ResourceType"].asString();
		if(!valueSharedResourcesSharedResource["CreateTime"].isNull())
			sharedResourcesObject.createTime = valueSharedResourcesSharedResource["CreateTime"].asString();
		if(!valueSharedResourcesSharedResource["ResourceShareId"].isNull())
			sharedResourcesObject.resourceShareId = valueSharedResourcesSharedResource["ResourceShareId"].asString();
		if(!valueSharedResourcesSharedResource["ResourceId"].isNull())
			sharedResourcesObject.resourceId = valueSharedResourcesSharedResource["ResourceId"].asString();
		if(!valueSharedResourcesSharedResource["ResourceStatus"].isNull())
			sharedResourcesObject.resourceStatus = valueSharedResourcesSharedResource["ResourceStatus"].asString();
		if(!valueSharedResourcesSharedResource["ResourceStatusMessage"].isNull())
			sharedResourcesObject.resourceStatusMessage = valueSharedResourcesSharedResource["ResourceStatusMessage"].asString();
		sharedResources_.push_back(sharedResourcesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListSharedResourcesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListSharedResourcesResult::SharedResource> ListSharedResourcesResult::getSharedResources()const
{
	return sharedResources_;
}

