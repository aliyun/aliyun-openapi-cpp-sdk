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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAclEntrys = value["AclEntrys"]["AclEntry"];
	for (auto value : allAclEntrys)
	{
		AclEntry aclEntrysObject;
		if(!value["AclEntryIP"].isNull())
			aclEntrysObject.aclEntryIP = value["AclEntryIP"].asString();
		if(!value["AclEntryComment"].isNull())
			aclEntrysObject.aclEntryComment = value["AclEntryComment"].asString();
		aclEntrys_.push_back(aclEntrysObject);
	}
	auto allRelatedListeners = value["RelatedListeners"]["RelatedListener"];
	for (auto value : allRelatedListeners)
	{
		RelatedListener relatedListenersObject;
		if(!value["LoadBalancerId"].isNull())
			relatedListenersObject.loadBalancerId = value["LoadBalancerId"].asString();
		if(!value["ListenerPort"].isNull())
			relatedListenersObject.listenerPort = std::stoi(value["ListenerPort"].asString());
		if(!value["AclType"].isNull())
			relatedListenersObject.aclType = value["AclType"].asString();
		if(!value["Protocol"].isNull())
			relatedListenersObject.protocol = value["Protocol"].asString();
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

