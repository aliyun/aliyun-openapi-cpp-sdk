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

#include <alibabacloud/ens/model/DescribeNetworkAclsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

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
		if(!valueNetworkAclsNetworkAcl["CreationTime"].isNull())
			networkAclsObject.creationTime = valueNetworkAclsNetworkAcl["CreationTime"].asString();
		if(!valueNetworkAclsNetworkAcl["Description"].isNull())
			networkAclsObject.description = valueNetworkAclsNetworkAcl["Description"].asString();
		if(!valueNetworkAclsNetworkAcl["NetworkAclId"].isNull())
			networkAclsObject.networkAclId = valueNetworkAclsNetworkAcl["NetworkAclId"].asString();
		if(!valueNetworkAclsNetworkAcl["NetworkAclName"].isNull())
			networkAclsObject.networkAclName = valueNetworkAclsNetworkAcl["NetworkAclName"].asString();
		auto allIngressAclEntriesNode = valueNetworkAclsNetworkAcl["IngressAclEntries"]["IngressAclRule"];
		for (auto valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule : allIngressAclEntriesNode)
		{
			NetworkAcl::IngressAclRule ingressAclEntriesObject;
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["Policy"].isNull())
				ingressAclEntriesObject.policy = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["Policy"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["NetworkAclEntryId"].isNull())
				ingressAclEntriesObject.networkAclEntryId = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["NetworkAclEntryId"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["NetworkAclEntryName"].isNull())
				ingressAclEntriesObject.networkAclEntryName = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["NetworkAclEntryName"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["CidrBlock"].isNull())
				ingressAclEntriesObject.cidrBlock = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["CidrBlock"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["Protocol"].isNull())
				ingressAclEntriesObject.protocol = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["Protocol"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["PortRange"].isNull())
				ingressAclEntriesObject.portRange = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["PortRange"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["Priority"].isNull())
				ingressAclEntriesObject.priority = std::stoi(valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["Priority"].asString());
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["Type"].isNull())
				ingressAclEntriesObject.type = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["Type"].asString();
			if(!valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["Description"].isNull())
				ingressAclEntriesObject.description = valueNetworkAclsNetworkAclIngressAclEntriesIngressAclRule["Description"].asString();
			networkAclsObject.ingressAclEntries.push_back(ingressAclEntriesObject);
		}
		auto allEgressAclEntriesNode = valueNetworkAclsNetworkAcl["EgressAclEntries"]["EgressAclRule"];
		for (auto valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule : allEgressAclEntriesNode)
		{
			NetworkAcl::EgressAclRule egressAclEntriesObject;
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["Policy"].isNull())
				egressAclEntriesObject.policy = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["Policy"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["NetworkAclEntryId"].isNull())
				egressAclEntriesObject.networkAclEntryId = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["NetworkAclEntryId"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["NetworkAclEntryName"].isNull())
				egressAclEntriesObject.networkAclEntryName = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["NetworkAclEntryName"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["CidrBlock"].isNull())
				egressAclEntriesObject.cidrBlock = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["CidrBlock"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["Protocol"].isNull())
				egressAclEntriesObject.protocol = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["Protocol"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["PortRange"].isNull())
				egressAclEntriesObject.portRange = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["PortRange"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["Priority"].isNull())
				egressAclEntriesObject.priority = std::stoi(valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["Priority"].asString());
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["Type"].isNull())
				egressAclEntriesObject.type = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["Type"].asString();
			if(!valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["Description"].isNull())
				egressAclEntriesObject.description = valueNetworkAclsNetworkAclEgressAclEntriesEgressAclRule["Description"].asString();
			networkAclsObject.egressAclEntries.push_back(egressAclEntriesObject);
		}
		auto allResourcesNode = valueNetworkAclsNetworkAcl["Resources"]["resource"];
		for (auto valueNetworkAclsNetworkAclResourcesresource : allResourcesNode)
		{
			NetworkAcl::Resource resourcesObject;
			if(!valueNetworkAclsNetworkAclResourcesresource["Status"].isNull())
				resourcesObject.status = valueNetworkAclsNetworkAclResourcesresource["Status"].asString();
			if(!valueNetworkAclsNetworkAclResourcesresource["ResourceType"].isNull())
				resourcesObject.resourceType = valueNetworkAclsNetworkAclResourcesresource["ResourceType"].asString();
			if(!valueNetworkAclsNetworkAclResourcesresource["ResourceId"].isNull())
				resourcesObject.resourceId = valueNetworkAclsNetworkAclResourcesresource["ResourceId"].asString();
			if(!valueNetworkAclsNetworkAclResourcesresource["EnsRegionId"].isNull())
				resourcesObject.ensRegionId = valueNetworkAclsNetworkAclResourcesresource["EnsRegionId"].asString();
			networkAclsObject.resources.push_back(resourcesObject);
		}
		networkAcls_.push_back(networkAclsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

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

