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

#include <alibabacloud/slb/model/DescribeAccessControlListsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeAccessControlListsResult::DescribeAccessControlListsResult() :
	ServiceResult()
{}

DescribeAccessControlListsResult::DescribeAccessControlListsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessControlListsResult::~DescribeAccessControlListsResult()
{}

void DescribeAccessControlListsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAclsNode = value["Acls"]["Acl"];
	for (auto valueAclsAcl : allAclsNode)
	{
		Acl aclsObject;
		if(!valueAclsAcl["ServiceManagedMode"].isNull())
			aclsObject.serviceManagedMode = valueAclsAcl["ServiceManagedMode"].asString();
		if(!valueAclsAcl["AclId"].isNull())
			aclsObject.aclId = valueAclsAcl["AclId"].asString();
		if(!valueAclsAcl["AddressIPVersion"].isNull())
			aclsObject.addressIPVersion = valueAclsAcl["AddressIPVersion"].asString();
		if(!valueAclsAcl["AclName"].isNull())
			aclsObject.aclName = valueAclsAcl["AclName"].asString();
		if(!valueAclsAcl["ResourceGroupId"].isNull())
			aclsObject.resourceGroupId = valueAclsAcl["ResourceGroupId"].asString();
		if(!valueAclsAcl["CreateTime"].isNull())
			aclsObject.createTime = valueAclsAcl["CreateTime"].asString();
		auto allTagsNode = valueAclsAcl["Tags"]["Tag"];
		for (auto valueAclsAclTagsTag : allTagsNode)
		{
			Acl::Tag tagsObject;
			if(!valueAclsAclTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueAclsAclTagsTag["TagValue"].asString();
			if(!valueAclsAclTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueAclsAclTagsTag["TagKey"].asString();
			aclsObject.tags.push_back(tagsObject);
		}
		acls_.push_back(aclsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int DescribeAccessControlListsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAccessControlListsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAccessControlListsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAccessControlListsResult::Acl> DescribeAccessControlListsResult::getAcls()const
{
	return acls_;
}

int DescribeAccessControlListsResult::getCount()const
{
	return count_;
}

