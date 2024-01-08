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

#include <alibabacloud/resourcesharing/model/ListResourceSharesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceSharing;
using namespace AlibabaCloud::ResourceSharing::Model;

ListResourceSharesResult::ListResourceSharesResult() :
	ServiceResult()
{}

ListResourceSharesResult::ListResourceSharesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceSharesResult::~ListResourceSharesResult()
{}

void ListResourceSharesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceSharesNode = value["ResourceShares"]["ResourceShare"];
	for (auto valueResourceSharesResourceShare : allResourceSharesNode)
	{
		ResourceShare resourceSharesObject;
		if(!valueResourceSharesResourceShare["UpdateTime"].isNull())
			resourceSharesObject.updateTime = valueResourceSharesResourceShare["UpdateTime"].asString();
		if(!valueResourceSharesResourceShare["ResourceShareName"].isNull())
			resourceSharesObject.resourceShareName = valueResourceSharesResourceShare["ResourceShareName"].asString();
		if(!valueResourceSharesResourceShare["ResourceShareOwner"].isNull())
			resourceSharesObject.resourceShareOwner = valueResourceSharesResourceShare["ResourceShareOwner"].asString();
		if(!valueResourceSharesResourceShare["CreateTime"].isNull())
			resourceSharesObject.createTime = valueResourceSharesResourceShare["CreateTime"].asString();
		if(!valueResourceSharesResourceShare["ResourceShareId"].isNull())
			resourceSharesObject.resourceShareId = valueResourceSharesResourceShare["ResourceShareId"].asString();
		if(!valueResourceSharesResourceShare["ResourceShareStatus"].isNull())
			resourceSharesObject.resourceShareStatus = valueResourceSharesResourceShare["ResourceShareStatus"].asString();
		if(!valueResourceSharesResourceShare["AllowExternalTargets"].isNull())
			resourceSharesObject.allowExternalTargets = valueResourceSharesResourceShare["AllowExternalTargets"].asString() == "true";
		if(!valueResourceSharesResourceShare["ResourceGroupId"].isNull())
			resourceSharesObject.resourceGroupId = valueResourceSharesResourceShare["ResourceGroupId"].asString();
		resourceShares_.push_back(resourceSharesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListResourceSharesResult::ResourceShare> ListResourceSharesResult::getResourceShares()const
{
	return resourceShares_;
}

std::string ListResourceSharesResult::getNextToken()const
{
	return nextToken_;
}

