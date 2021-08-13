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

#include <alibabacloud/smartag/model/DescribeACLsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeACLsResult::DescribeACLsResult() :
	ServiceResult()
{}

DescribeACLsResult::DescribeACLsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeACLsResult::~DescribeACLsResult()
{}

void DescribeACLsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAclsNode = value["Acls"]["Acl"];
	for (auto valueAclsAcl : allAclsNode)
	{
		Acl aclsObject;
		if(!valueAclsAcl["SagCount"].isNull())
			aclsObject.sagCount = valueAclsAcl["SagCount"].asString();
		if(!valueAclsAcl["AclId"].isNull())
			aclsObject.aclId = valueAclsAcl["AclId"].asString();
		if(!valueAclsAcl["Name"].isNull())
			aclsObject.name = valueAclsAcl["Name"].asString();
		if(!valueAclsAcl["ResourceGroupId"].isNull())
			aclsObject.resourceGroupId = valueAclsAcl["ResourceGroupId"].asString();
		acls_.push_back(aclsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeACLsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeACLsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeACLsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeACLsResult::Acl> DescribeACLsResult::getAcls()const
{
	return acls_;
}

