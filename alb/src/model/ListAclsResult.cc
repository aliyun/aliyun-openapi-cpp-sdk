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

#include <alibabacloud/alb/model/ListAclsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

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
	auto allAclsNode = value["Acls"]["Acl"];
	for (auto valueAclsAcl : allAclsNode)
	{
		Acl aclsObject;
		if(!valueAclsAcl["AclId"].isNull())
			aclsObject.aclId = valueAclsAcl["AclId"].asString();
		if(!valueAclsAcl["AclName"].isNull())
			aclsObject.aclName = valueAclsAcl["AclName"].asString();
		if(!valueAclsAcl["AclStatus"].isNull())
			aclsObject.aclStatus = valueAclsAcl["AclStatus"].asString();
		if(!valueAclsAcl["AddressIPVersion"].isNull())
			aclsObject.addressIPVersion = valueAclsAcl["AddressIPVersion"].asString();
		if(!valueAclsAcl["ResourceGroupId"].isNull())
			aclsObject.resourceGroupId = valueAclsAcl["ResourceGroupId"].asString();
		if(!valueAclsAcl["ServiceManagedEnabled"].isNull())
			aclsObject.serviceManagedEnabled = valueAclsAcl["ServiceManagedEnabled"].asString() == "true";
		if(!valueAclsAcl["ServiceManagedMode"].isNull())
			aclsObject.serviceManagedMode = valueAclsAcl["ServiceManagedMode"].asString();
		if(!valueAclsAcl["ConfigManagedEnabled"].isNull())
			aclsObject.configManagedEnabled = valueAclsAcl["ConfigManagedEnabled"].asString() == "true";
		if(!valueAclsAcl["CreateTime"].isNull())
			aclsObject.createTime = valueAclsAcl["CreateTime"].asString();
		auto allTagsNode = valueAclsAcl["Tags"]["Tag"];
		for (auto valueAclsAclTagsTag : allTagsNode)
		{
			Acl::Tag tagsObject;
			if(!valueAclsAclTagsTag["Key"].isNull())
				tagsObject.key = valueAclsAclTagsTag["Key"].asString();
			if(!valueAclsAclTagsTag["Value"].isNull())
				tagsObject.value = valueAclsAclTagsTag["Value"].asString();
			aclsObject.tags.push_back(tagsObject);
		}
		acls_.push_back(aclsObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListAclsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAclsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListAclsResult::Acl> ListAclsResult::getAcls()const
{
	return acls_;
}

int ListAclsResult::getMaxResults()const
{
	return maxResults_;
}

