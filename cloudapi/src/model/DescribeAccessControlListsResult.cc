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

#include <alibabacloud/cloudapi/model/DescribeAccessControlListsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

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
		if(!valueAclsAcl["AclName"].isNull())
			aclsObject.aclName = valueAclsAcl["AclName"].asString();
		if(!valueAclsAcl["AclId"].isNull())
			aclsObject.aclId = valueAclsAcl["AclId"].asString();
		if(!valueAclsAcl["AddressIPVersion"].isNull())
			aclsObject.addressIPVersion = valueAclsAcl["AddressIPVersion"].asString();
		acls_.push_back(aclsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

