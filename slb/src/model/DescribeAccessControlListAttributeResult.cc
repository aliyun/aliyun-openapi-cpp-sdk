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

#include <alibabacloud/slb/model/DescribeAccessControlListAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeAccessControlListAttributeResult::DescribeAccessControlListAttributeResult() :
	ServiceResult()
{}

DescribeAccessControlListAttributeResult::DescribeAccessControlListAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessControlListAttributeResult::~DescribeAccessControlListAttributeResult()
{}

void DescribeAccessControlListAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAclEntrysNode = value["AclEntrys"]["AclEntry"];
	for (auto valueAclEntrysAclEntry : allAclEntrysNode)
	{
		AclEntry aclEntrysObject;
		if(!valueAclEntrysAclEntry["AclEntryIP"].isNull())
			aclEntrysObject.aclEntryIP = valueAclEntrysAclEntry["AclEntryIP"].asString();
		if(!valueAclEntrysAclEntry["AclEntryComment"].isNull())
			aclEntrysObject.aclEntryComment = valueAclEntrysAclEntry["AclEntryComment"].asString();
		aclEntrys_.push_back(aclEntrysObject);
	}
	auto allRelatedListenersNode = value["RelatedListeners"]["RelatedListener"];
	for (auto valueRelatedListenersRelatedListener : allRelatedListenersNode)
	{
		RelatedListener relatedListenersObject;
		if(!valueRelatedListenersRelatedListener["LoadBalancerId"].isNull())
			relatedListenersObject.loadBalancerId = valueRelatedListenersRelatedListener["LoadBalancerId"].asString();
		if(!valueRelatedListenersRelatedListener["ListenerPort"].isNull())
			relatedListenersObject.listenerPort = std::stoi(valueRelatedListenersRelatedListener["ListenerPort"].asString());
		if(!valueRelatedListenersRelatedListener["AclType"].isNull())
			relatedListenersObject.aclType = valueRelatedListenersRelatedListener["AclType"].asString();
		if(!valueRelatedListenersRelatedListener["Protocol"].isNull())
			relatedListenersObject.protocol = valueRelatedListenersRelatedListener["Protocol"].asString();
		relatedListeners_.push_back(relatedListenersObject);
	}
	if(!value["AclId"].isNull())
		aclId_ = value["AclId"].asString();
	if(!value["AclName"].isNull())
		aclName_ = value["AclName"].asString();
	if(!value["AddressIPVersion"].isNull())
		addressIPVersion_ = value["AddressIPVersion"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::vector<DescribeAccessControlListAttributeResult::AclEntry> DescribeAccessControlListAttributeResult::getAclEntrys()const
{
	return aclEntrys_;
}

std::string DescribeAccessControlListAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeAccessControlListAttributeResult::getAclId()const
{
	return aclId_;
}

std::string DescribeAccessControlListAttributeResult::getAddressIPVersion()const
{
	return addressIPVersion_;
}

std::vector<DescribeAccessControlListAttributeResult::RelatedListener> DescribeAccessControlListAttributeResult::getRelatedListeners()const
{
	return relatedListeners_;
}

std::string DescribeAccessControlListAttributeResult::getAclName()const
{
	return aclName_;
}

