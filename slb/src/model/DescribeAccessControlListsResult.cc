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
	auto allAcls = value["Acls"]["Acl"];
	for (auto value : allAcls)
	{
		Acl aclsObject;
		if(!value["AclId"].isNull())
			aclsObject.aclId = value["AclId"].asString();
		if(!value["AclName"].isNull())
			aclsObject.aclName = value["AclName"].asString();
		if(!value["AddressIPVersion"].isNull())
			aclsObject.addressIPVersion = value["AddressIPVersion"].asString();
		if(!value["ResourceGroupId"].isNull())
			aclsObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Acl::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			aclsObject.tags.push_back(tagsObject);
		}
		acls_.push_back(aclsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

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

