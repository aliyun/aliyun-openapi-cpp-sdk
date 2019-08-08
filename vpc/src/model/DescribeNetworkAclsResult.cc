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
	auto allNetworkAcls = value["NetworkAcls"]["NetworkAcl"];
	for (auto value : allNetworkAcls)
	{
		NetworkAcl networkAclsObject;
		if(!value["NetworkAclId"].isNull())
			networkAclsObject.networkAclId = value["NetworkAclId"].asString();
		if(!value["RegionId"].isNull())
			networkAclsObject.regionId = value["RegionId"].asString();
		if(!value["NetworkAclName"].isNull())
			networkAclsObject.networkAclName = value["NetworkAclName"].asString();
		if(!value["Description"].isNull())
			networkAclsObject.description = value["Description"].asString();
		if(!value["VpcId"].isNull())
			networkAclsObject.vpcId = value["VpcId"].asString();
		if(!value["CreationTime"].isNull())
			networkAclsObject.creationTime = value["CreationTime"].asString();
		if(!value["Status"].isNull())
			networkAclsObject.status = value["Status"].asString();
		auto allIngressAclEntries = value["IngressAclEntries"]["IngressAclEntry"];
		for (auto value : allIngressAclEntries)
		{
			NetworkAcl::IngressAclEntry ingressAclEntriesObject;
			if(!value["NetworkAclEntryId"].isNull())
				ingressAclEntriesObject.networkAclEntryId = value["NetworkAclEntryId"].asString();
			if(!value["Policy"].isNull())
				ingressAclEntriesObject.policy = value["Policy"].asString();
			if(!value["Protocol"].isNull())
				ingressAclEntriesObject.protocol = value["Protocol"].asString();
			if(!value["SourceCidrIp"].isNull())
				ingressAclEntriesObject.sourceCidrIp = value["SourceCidrIp"].asString();
			if(!value["Port"].isNull())
				ingressAclEntriesObject.port = value["Port"].asString();
			if(!value["EntryType"].isNull())
				ingressAclEntriesObject.entryType = value["EntryType"].asString();
			if(!value["NetworkAclEntryName"].isNull())
				ingressAclEntriesObject.networkAclEntryName = value["NetworkAclEntryName"].asString();
			if(!value["Description"].isNull())
				ingressAclEntriesObject.description = value["Description"].asString();
			networkAclsObject.ingressAclEntries.push_back(ingressAclEntriesObject);
		}
		auto allEgressAclEntries = value["EgressAclEntries"]["EgressAclEntry"];
		for (auto value : allEgressAclEntries)
		{
			NetworkAcl::EgressAclEntry egressAclEntriesObject;
			if(!value["NetworkAclEntryId"].isNull())
				egressAclEntriesObject.networkAclEntryId = value["NetworkAclEntryId"].asString();
			if(!value["Policy"].isNull())
				egressAclEntriesObject.policy = value["Policy"].asString();
			if(!value["Protocol"].isNull())
				egressAclEntriesObject.protocol = value["Protocol"].asString();
			if(!value["DestinationCidrIp"].isNull())
				egressAclEntriesObject.destinationCidrIp = value["DestinationCidrIp"].asString();
			if(!value["Port"].isNull())
				egressAclEntriesObject.port = value["Port"].asString();
			if(!value["EntryType"].isNull())
				egressAclEntriesObject.entryType = value["EntryType"].asString();
			if(!value["Description"].isNull())
				egressAclEntriesObject.description = value["Description"].asString();
			if(!value["NetworkAclEntryName"].isNull())
				egressAclEntriesObject.networkAclEntryName = value["NetworkAclEntryName"].asString();
			networkAclsObject.egressAclEntries.push_back(egressAclEntriesObject);
		}
		auto allResources = value["Resources"]["Resource"];
		for (auto value : allResources)
		{
			NetworkAcl::Resource resourcesObject;
			if(!value["ResourceId"].isNull())
				resourcesObject.resourceId = value["ResourceId"].asString();
			if(!value["ResourceType"].isNull())
				resourcesObject.resourceType = value["ResourceType"].asString();
			if(!value["Status"].isNull())
				resourcesObject.status = value["Status"].asString();
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

