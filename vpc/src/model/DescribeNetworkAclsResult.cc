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
		if(!valueNetworkAclsNetworkAcl["Status"].isNull())
			networkAclsObject.status = valueNetworkAclsNetworkAcl["Status"].asString();
		if(!valueNetworkAclsNetworkAcl["VpcId"].isNull())
			networkAclsObject.vpcId = valueNetworkAclsNetworkAcl["VpcId"].asString();
		if(!valueNetworkAclsNetworkAcl["CreationTime"].isNull())
			networkAclsObject.creationTime = valueNetworkAclsNetworkAcl["CreationTime"].asString();
		if(!valueNetworkAclsNetworkAcl["Description"].isNull())
			networkAclsObject.description = valueNetworkAclsNetworkAcl["Description"].asString();
		if(!valueNetworkAclsNetworkAcl["NetworkAclName"].isNull())
			networkAclsObject.networkAclName = valueNetworkAclsNetworkAcl["NetworkAclName"].asString();
		if(!valueNetworkAclsNetworkAcl["NetworkAclId"].isNull())
			networkAclsObject.networkAclId = valueNetworkAclsNetworkAcl["NetworkAclId"].asString();
		if(!valueNetworkAclsNetworkAcl["OwnerId"].isNull())
			networkAclsObject.ownerId = std::stol(valueNetworkAclsNetworkAcl["OwnerId"].asString());
		if(!valueNetworkAclsNetworkAcl["RegionId"].isNull())
			networkAclsObject.regionId = valueNetworkAclsNetworkAcl["RegionId"].asString();
		auto allIngressAclEntriesNode = valueNetworkAclsNetworkAcl["IngressAclEntries"]["IngressAclEntry"];
		for (auto valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry : allIngressAclEntriesNode)
		{
			NetworkAcl::IngressAclEntry ingressAclEntriesObject;
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["NetworkAclEntryId"].isNull())
				ingressAclEntriesObject.networkAclEntryId = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["NetworkAclEntryId"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["EntryType"].isNull())
				ingressAclEntriesObject.entryType = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["EntryType"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["NetworkAclEntryName"].isNull())
				ingressAclEntriesObject.networkAclEntryName = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["NetworkAclEntryName"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["Policy"].isNull())
				ingressAclEntriesObject.policy = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["Policy"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["Description"].isNull())
				ingressAclEntriesObject.description = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["Description"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["SourceCidrIp"].isNull())
				ingressAclEntriesObject.sourceCidrIp = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["SourceCidrIp"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["IpVersion"].isNull())
				ingressAclEntriesObject.ipVersion = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["IpVersion"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["Protocol"].isNull())
				ingressAclEntriesObject.protocol = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["Protocol"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["Port"].isNull())
				ingressAclEntriesObject.port = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry["Port"].asString();
			networkAclsObject.ingressAclEntries.push_back(ingressAclEntriesObject);
		}
		auto allEgressAclEntriesNode = valueNetworkAclsNetworkAcl["EgressAclEntries"]["EgressAclEntry"];
		for (auto valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry : allEgressAclEntriesNode)
		{
			NetworkAcl::EgressAclEntry egressAclEntriesObject;
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["NetworkAclEntryId"].isNull())
				egressAclEntriesObject.networkAclEntryId = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["NetworkAclEntryId"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["EntryType"].isNull())
				egressAclEntriesObject.entryType = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["EntryType"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["NetworkAclEntryName"].isNull())
				egressAclEntriesObject.networkAclEntryName = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["NetworkAclEntryName"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["Policy"].isNull())
				egressAclEntriesObject.policy = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["Policy"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["Description"].isNull())
				egressAclEntriesObject.description = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["Description"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["Protocol"].isNull())
				egressAclEntriesObject.protocol = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["Protocol"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["DestinationCidrIp"].isNull())
				egressAclEntriesObject.destinationCidrIp = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["DestinationCidrIp"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["IpVersion"].isNull())
				egressAclEntriesObject.ipVersion = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["IpVersion"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["Port"].isNull())
				egressAclEntriesObject.port = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry["Port"].asString();
			networkAclsObject.egressAclEntries.push_back(egressAclEntriesObject);
		}
		auto allResourcesNode = valueNetworkAclsNetworkAcl["Resources"]["Resource"];
		for (auto valueNetworkAclsNetworkAclResourcesResource : allResourcesNode)
		{
			NetworkAcl::Resource resourcesObject;
			if(!valueNetworkAclsNetworkAclResourcesResource["Status"].isNull())
				resourcesObject.status = valueNetworkAclsNetworkAclResourcesResource["Status"].asString();
			if(!valueNetworkAclsNetworkAclResourcesResource["ResourceType"].isNull())
				resourcesObject.resourceType = valueNetworkAclsNetworkAclResourcesResource["ResourceType"].asString();
			if(!valueNetworkAclsNetworkAclResourcesResource["ResourceId"].isNull())
				resourcesObject.resourceId = valueNetworkAclsNetworkAclResourcesResource["ResourceId"].asString();
			networkAclsObject.resources.push_back(resourcesObject);
		}
		auto allTagsNode = valueNetworkAclsNetworkAcl["Tags"]["Tag"];
		for (auto valueNetworkAclsNetworkAclTagsTag : allTagsNode)
		{
			NetworkAcl::Tag tagsObject;
			if(!valueNetworkAclsNetworkAclTagsTag["Key"].isNull())
				tagsObject.key = valueNetworkAclsNetworkAclTagsTag["Key"].asString();
			if(!valueNetworkAclsNetworkAclTagsTag["Value"].isNull())
				tagsObject.value = valueNetworkAclsNetworkAclTagsTag["Value"].asString();
			networkAclsObject.tags.push_back(tagsObject);
		}
		networkAcls_.push_back(networkAclsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

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

