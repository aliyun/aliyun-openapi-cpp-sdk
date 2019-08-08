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

#include <alibabacloud/vpc/model/DescribeNetworkAclAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeNetworkAclAttributesResult::DescribeNetworkAclAttributesResult() :
	ServiceResult()
{}

DescribeNetworkAclAttributesResult::DescribeNetworkAclAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkAclAttributesResult::~DescribeNetworkAclAttributesResult()
{}

void DescribeNetworkAclAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto networkAclAttributeNode = value["NetworkAclAttribute"];
	if(!networkAclAttributeNode["NetworkAclId"].isNull())
		networkAclAttribute_.networkAclId = networkAclAttributeNode["NetworkAclId"].asString();
	if(!networkAclAttributeNode["RegionId"].isNull())
		networkAclAttribute_.regionId = networkAclAttributeNode["RegionId"].asString();
	if(!networkAclAttributeNode["NetworkAclName"].isNull())
		networkAclAttribute_.networkAclName = networkAclAttributeNode["NetworkAclName"].asString();
	if(!networkAclAttributeNode["Description"].isNull())
		networkAclAttribute_.description = networkAclAttributeNode["Description"].asString();
	if(!networkAclAttributeNode["VpcId"].isNull())
		networkAclAttribute_.vpcId = networkAclAttributeNode["VpcId"].asString();
	if(!networkAclAttributeNode["CreationTime"].isNull())
		networkAclAttribute_.creationTime = networkAclAttributeNode["CreationTime"].asString();
	if(!networkAclAttributeNode["Status"].isNull())
		networkAclAttribute_.status = networkAclAttributeNode["Status"].asString();
	auto allIngressAclEntries = value["IngressAclEntries"]["IngressAclEntry"];
	for (auto value : allIngressAclEntries)
	{
		NetworkAclAttribute::IngressAclEntry ingressAclEntryObject;
		if(!value["NetworkAclEntryId"].isNull())
			ingressAclEntryObject.networkAclEntryId = value["NetworkAclEntryId"].asString();
		if(!value["Policy"].isNull())
			ingressAclEntryObject.policy = value["Policy"].asString();
		if(!value["Protocol"].isNull())
			ingressAclEntryObject.protocol = value["Protocol"].asString();
		if(!value["SourceCidrIp"].isNull())
			ingressAclEntryObject.sourceCidrIp = value["SourceCidrIp"].asString();
		if(!value["Port"].isNull())
			ingressAclEntryObject.port = value["Port"].asString();
		if(!value["EntryType"].isNull())
			ingressAclEntryObject.entryType = value["EntryType"].asString();
		if(!value["NetworkAclEntryName"].isNull())
			ingressAclEntryObject.networkAclEntryName = value["NetworkAclEntryName"].asString();
		if(!value["Description"].isNull())
			ingressAclEntryObject.description = value["Description"].asString();
		networkAclAttribute_.ingressAclEntries.push_back(ingressAclEntryObject);
	}
	auto allEgressAclEntries = value["EgressAclEntries"]["EgressAclEntry"];
	for (auto value : allEgressAclEntries)
	{
		NetworkAclAttribute::EgressAclEntry egressAclEntryObject;
		if(!value["NetworkAclEntryId"].isNull())
			egressAclEntryObject.networkAclEntryId = value["NetworkAclEntryId"].asString();
		if(!value["Policy"].isNull())
			egressAclEntryObject.policy = value["Policy"].asString();
		if(!value["Protocol"].isNull())
			egressAclEntryObject.protocol = value["Protocol"].asString();
		if(!value["DestinationCidrIp"].isNull())
			egressAclEntryObject.destinationCidrIp = value["DestinationCidrIp"].asString();
		if(!value["Port"].isNull())
			egressAclEntryObject.port = value["Port"].asString();
		if(!value["EntryType"].isNull())
			egressAclEntryObject.entryType = value["EntryType"].asString();
		if(!value["Description"].isNull())
			egressAclEntryObject.description = value["Description"].asString();
		if(!value["NetworkAclEntryName"].isNull())
			egressAclEntryObject.networkAclEntryName = value["NetworkAclEntryName"].asString();
		networkAclAttribute_.egressAclEntries.push_back(egressAclEntryObject);
	}
	auto allResources = value["Resources"]["Resource"];
	for (auto value : allResources)
	{
		NetworkAclAttribute::Resource resourceObject;
		if(!value["ResourceId"].isNull())
			resourceObject.resourceId = value["ResourceId"].asString();
		if(!value["ResourceType"].isNull())
			resourceObject.resourceType = value["ResourceType"].asString();
		if(!value["Status"].isNull())
			resourceObject.status = value["Status"].asString();
		networkAclAttribute_.resources.push_back(resourceObject);
	}

}

DescribeNetworkAclAttributesResult::NetworkAclAttribute DescribeNetworkAclAttributesResult::getNetworkAclAttribute()const
{
	return networkAclAttribute_;
}

