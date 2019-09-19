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

#include <alibabacloud/vpc/model/DescribeNetworkAclsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeNetworkAclsResult::DescribeNetworkAclsResult() :
	ServiceResult()
{}

DescribeNetworkAclsResult::DescribeNetworkAclsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkAclsResult::~DescribeNetworkAclsResult()
{}

void DescribeNetworkAclsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkAclsNode = value["NetworkAcls"]["NetworkAcl"];
	for (auto valueNetworkAclsNetworkAcl : allNetworkAclsNode)
	{
		NetworkAcl networkAclsObject;
		if(!valueNetworkAclsNetworkAcl["NetworkAclId"].isNull())
			networkAclsObject.networkAclId = valueNetworkAclsNetworkAcl["NetworkAclId"].asString();
		if(!valueNetworkAclsNetworkAcl["RegionId"].isNull())
			networkAclsObject.regionId = valueNetworkAclsNetworkAcl["RegionId"].asString();
		if(!valueNetworkAclsNetworkAcl["NetworkAclName"].isNull())
			networkAclsObject.networkAclName = valueNetworkAclsNetworkAcl["NetworkAclName"].asString();
		if(!valueNetworkAclsNetworkAcl["Description"].isNull())
			networkAclsObject.description = valueNetworkAclsNetworkAcl["Description"].asString();
		if(!valueNetworkAclsNetworkAcl["VpcId"].isNull())
			networkAclsObject.vpcId = valueNetworkAclsNetworkAcl["VpcId"].asString();
		if(!valueNetworkAclsNetworkAcl["CreationTime"].isNull())
			networkAclsObject.creationTime = valueNetworkAclsNetworkAcl["CreationTime"].asString();
		if(!valueNetworkAclsNetworkAcl["Status"].isNull())
			networkAclsObject.status = valueNetworkAclsNetworkAcl["Status"].asString();
		auto allIngressAclEntriesNode = allNetworkAclsNode["IngressAclEntries"]["IngressAclEntry"];
		for (auto allNetworkAclsNodeIngressAclEntriesIngressAclEntry : allIngressAclEntriesNode)
		{
			NetworkAcl::IngressAclEntry ingressAclEntriesObject;
			if(!allNetworkAclsNodeIngressAclEntriesIngressAclEntry["NetworkAclEntryId"].isNull())
				ingressAclEntriesObject.networkAclEntryId = allNetworkAclsNodeIngressAclEntriesIngressAclEntry["NetworkAclEntryId"].asString();
			if(!allNetworkAclsNodeIngressAclEntriesIngressAclEntry["Policy"].isNull())
				ingressAclEntriesObject.policy = allNetworkAclsNodeIngressAclEntriesIngressAclEntry["Policy"].asString();
			if(!allNetworkAclsNodeIngressAclEntriesIngressAclEntry["Protocol"].isNull())
				ingressAclEntriesObject.protocol = allNetworkAclsNodeIngressAclEntriesIngressAclEntry["Protocol"].asString();
			if(!allNetworkAclsNodeIngressAclEntriesIngressAclEntry["SourceCidrIp"].isNull())
				ingressAclEntriesObject.sourceCidrIp = allNetworkAclsNodeIngressAclEntriesIngressAclEntry["SourceCidrIp"].asString();
			if(!allNetworkAclsNodeIngressAclEntriesIngressAclEntry["Port"].isNull())
				ingressAclEntriesObject.port = allNetworkAclsNodeIngressAclEntriesIngressAclEntry["Port"].asString();
			if(!allNetworkAclsNodeIngressAclEntriesIngressAclEntry["EntryType"].isNull())
				ingressAclEntriesObject.entryType = allNetworkAclsNodeIngressAclEntriesIngressAclEntry["EntryType"].asString();
			if(!allNetworkAclsNodeIngressAclEntriesIngressAclEntry["NetworkAclEntryName"].isNull())
				ingressAclEntriesObject.networkAclEntryName = allNetworkAclsNodeIngressAclEntriesIngressAclEntry["NetworkAclEntryName"].asString();
			if(!allNetworkAclsNodeIngressAclEntriesIngressAclEntry["Description"].isNull())
				ingressAclEntriesObject.description = allNetworkAclsNodeIngressAclEntriesIngressAclEntry["Description"].asString();
			networkAclsObject.ingressAclEntries.push_back(ingressAclEntriesObject);
		}
		auto allEgressAclEntriesNode = allNetworkAclsNode["EgressAclEntries"]["EgressAclEntry"];
		for (auto allNetworkAclsNodeEgressAclEntriesEgressAclEntry : allEgressAclEntriesNode)
		{
			NetworkAcl::EgressAclEntry egressAclEntriesObject;
			if(!allNetworkAclsNodeEgressAclEntriesEgressAclEntry["NetworkAclEntryId"].isNull())
				egressAclEntriesObject.networkAclEntryId = allNetworkAclsNodeEgressAclEntriesEgressAclEntry["NetworkAclEntryId"].asString();
			if(!allNetworkAclsNodeEgressAclEntriesEgressAclEntry["Policy"].isNull())
				egressAclEntriesObject.policy = allNetworkAclsNodeEgressAclEntriesEgressAclEntry["Policy"].asString();
			if(!allNetworkAclsNodeEgressAclEntriesEgressAclEntry["Protocol"].isNull())
				egressAclEntriesObject.protocol = allNetworkAclsNodeEgressAclEntriesEgressAclEntry["Protocol"].asString();
			if(!allNetworkAclsNodeEgressAclEntriesEgressAclEntry["DestinationCidrIp"].isNull())
				egressAclEntriesObject.destinationCidrIp = allNetworkAclsNodeEgressAclEntriesEgressAclEntry["DestinationCidrIp"].asString();
			if(!allNetworkAclsNodeEgressAclEntriesEgressAclEntry["Port"].isNull())
				egressAclEntriesObject.port = allNetworkAclsNodeEgressAclEntriesEgressAclEntry["Port"].asString();
			if(!allNetworkAclsNodeEgressAclEntriesEgressAclEntry["EntryType"].isNull())
				egressAclEntriesObject.entryType = allNetworkAclsNodeEgressAclEntriesEgressAclEntry["EntryType"].asString();
			if(!allNetworkAclsNodeEgressAclEntriesEgressAclEntry["Description"].isNull())
				egressAclEntriesObject.description = allNetworkAclsNodeEgressAclEntriesEgressAclEntry["Description"].asString();
			if(!allNetworkAclsNodeEgressAclEntriesEgressAclEntry["NetworkAclEntryName"].isNull())
				egressAclEntriesObject.networkAclEntryName = allNetworkAclsNodeEgressAclEntriesEgressAclEntry["NetworkAclEntryName"].asString();
			networkAclsObject.egressAclEntries.push_back(egressAclEntriesObject);
		}
		auto allResourcesNode = allNetworkAclsNode["Resources"]["Resource"];
		for (auto allNetworkAclsNodeResourcesResource : allResourcesNode)
		{
			NetworkAcl::Resource resourcesObject;
			if(!allNetworkAclsNodeResourcesResource["ResourceId"].isNull())
				resourcesObject.resourceId = allNetworkAclsNodeResourcesResource["ResourceId"].asString();
			if(!allNetworkAclsNodeResourcesResource["ResourceType"].isNull())
				resourcesObject.resourceType = allNetworkAclsNodeResourcesResource["ResourceType"].asString();
			if(!allNetworkAclsNodeResourcesResource["Status"].isNull())
				resourcesObject.status = allNetworkAclsNodeResourcesResource["Status"].asString();
			networkAclsObject.resources.push_back(resourcesObject);
		}
		networkAcls_.push_back(networkAclsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();

}

std::vector<DescribeNetworkAclsResult::NetworkAcl> DescribeNetworkAclsResult::getNetworkAcls()const
{
	return networkAcls_;
}

std::string DescribeNetworkAclsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeNetworkAclsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeNetworkAclsResult::getPageNumber()const
{
	return pageNumber_;
}

