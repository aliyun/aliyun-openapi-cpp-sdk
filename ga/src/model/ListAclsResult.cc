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

#include <alibabacloud/ga/model/ListAclsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListAclsResult::ListAclsResult() :
	ServiceResult()
{}

ListAclsResult::ListAclsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAclsResult::~ListAclsResult()
{}

void ListAclsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAclsNode = value["Acls"]["GaAcls"];
	for (auto valueAclsGaAcls : allAclsNode)
	{
		GaAcls aclsObject;
		if(!valueAclsGaAcls["AclId"].isNull())
			aclsObject.aclId = valueAclsGaAcls["AclId"].asString();
		if(!valueAclsGaAcls["AclName"].isNull())
			aclsObject.aclName = valueAclsGaAcls["AclName"].asString();
		if(!valueAclsGaAcls["AddressIPVersion"].isNull())
			aclsObject.addressIPVersion = valueAclsGaAcls["AddressIPVersion"].asString();
		if(!valueAclsGaAcls["AclStatus"].isNull())
			aclsObject.aclStatus = valueAclsGaAcls["AclStatus"].asString();
		if(!valueAclsGaAcls["ResourceGroupId"].isNull())
			aclsObject.resourceGroupId = valueAclsGaAcls["ResourceGroupId"].asString();
		auto allTagsNode = valueAclsGaAcls["Tags"]["TagsItem"];
		for (auto valueAclsGaAclsTagsTagsItem : allTagsNode)
		{
			GaAcls::TagsItem tagsObject;
			if(!valueAclsGaAclsTagsTagsItem["Key"].isNull())
				tagsObject.key = valueAclsGaAclsTagsTagsItem["Key"].asString();
			if(!valueAclsGaAclsTagsTagsItem["Value"].isNull())
				tagsObject.value = valueAclsGaAclsTagsTagsItem["Value"].asString();
			aclsObject.tags.push_back(tagsObject);
		}
		acls_.push_back(aclsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListAclsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAclsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListAclsResult::GaAcls> ListAclsResult::getAcls()const
{
	return acls_;
}

int ListAclsResult::getMaxResults()const
{
	return maxResults_;
}

