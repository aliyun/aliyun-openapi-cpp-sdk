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

#include <alibabacloud/smarthosting/model/ListManagedHostsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SmartHosting;
using namespace AlibabaCloud::SmartHosting::Model;

ListManagedHostsResult::ListManagedHostsResult() :
	ServiceResult()
{}

ListManagedHostsResult::ListManagedHostsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListManagedHostsResult::~ListManagedHostsResult()
{}

void ListManagedHostsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allManagedHostSetsNode = value["ManagedHostSets"]["ManagedHostSet"];
	for (auto valueManagedHostSetsManagedHostSet : allManagedHostSetsNode)
	{
		ManagedHostSet managedHostSetsObject;
		if(!valueManagedHostSetsManagedHostSet["ManagedHostId"].isNull())
			managedHostSetsObject.managedHostId = valueManagedHostSetsManagedHostSet["ManagedHostId"].asString();
		if(!valueManagedHostSetsManagedHostSet["ManagedHostName"].isNull())
			managedHostSetsObject.managedHostName = valueManagedHostSetsManagedHostSet["ManagedHostName"].asString();
		if(!valueManagedHostSetsManagedHostSet["Mode"].isNull())
			managedHostSetsObject.mode = valueManagedHostSetsManagedHostSet["Mode"].asString();
		if(!valueManagedHostSetsManagedHostSet["ResourceGroupId"].isNull())
			managedHostSetsObject.resourceGroupId = valueManagedHostSetsManagedHostSet["ResourceGroupId"].asString();
		if(!valueManagedHostSetsManagedHostSet["Status"].isNull())
			managedHostSetsObject.status = valueManagedHostSetsManagedHostSet["Status"].asString();
		auto allInstanceSetsNode = allManagedHostSetsNode["InstanceSets"]["InstanceSet"];
		for (auto allManagedHostSetsNodeInstanceSetsInstanceSet : allInstanceSetsNode)
		{
			ManagedHostSet::InstanceSet instanceSetsObject;
			if(!allManagedHostSetsNodeInstanceSetsInstanceSet["InstanceId"].isNull())
				instanceSetsObject.instanceId = allManagedHostSetsNodeInstanceSetsInstanceSet["InstanceId"].asString();
			managedHostSetsObject.instanceSets.push_back(instanceSetsObject);
		}
		auto allTagsNode = allManagedHostSetsNode["Tags"]["Tag"];
		for (auto allManagedHostSetsNodeTagsTag : allTagsNode)
		{
			ManagedHostSet::Tag tagsObject;
			if(!allManagedHostSetsNodeTagsTag["Key"].isNull())
				tagsObject.key = allManagedHostSetsNodeTagsTag["Key"].asString();
			if(!allManagedHostSetsNodeTagsTag["Value"].isNull())
				tagsObject.value = allManagedHostSetsNodeTagsTag["Value"].asString();
			managedHostSetsObject.tags.push_back(tagsObject);
		}
		auto capacityAttributeNode = value["CapacityAttribute"];
		if(!capacityAttributeNode["AvailableMemories"].isNull())
			managedHostSetsObject.capacityAttribute.availableMemories = std::stoi(capacityAttributeNode["AvailableMemories"].asString());
		if(!capacityAttributeNode["AvailableVcpus"].isNull())
			managedHostSetsObject.capacityAttribute.availableVcpus = std::stoi(capacityAttributeNode["AvailableVcpus"].asString());
		if(!capacityAttributeNode["TotalMemories"].isNull())
			managedHostSetsObject.capacityAttribute.totalMemories = std::stoi(capacityAttributeNode["TotalMemories"].asString());
		if(!capacityAttributeNode["TotalVcpus"].isNull())
			managedHostSetsObject.capacityAttribute.totalVcpus = std::stoi(capacityAttributeNode["TotalVcpus"].asString());
		auto hostAttributeNode = value["HostAttribute"];
		if(!hostAttributeNode["CpuModelName"].isNull())
			managedHostSetsObject.hostAttribute.cpuModelName = hostAttributeNode["CpuModelName"].asString();
		if(!hostAttributeNode["HostType"].isNull())
			managedHostSetsObject.hostAttribute.hostType = hostAttributeNode["HostType"].asString();
		auto networkAssociationNode = value["NetworkAssociation"];
		auto allSwitchSetsNode = networkAssociationNode["SwitchSets"]["SwitchSet"];
		for (auto networkAssociationNodeSwitchSetsSwitchSet : allSwitchSetsNode)
		{
			ManagedHostSet::NetworkAssociation::SwitchSet switchSetObject;
			if(!networkAssociationNodeSwitchSetsSwitchSet["SwitchId"].isNull())
				switchSetObject.switchId = networkAssociationNodeSwitchSetsSwitchSet["SwitchId"].asString();
			managedHostSetsObject.networkAssociation.switchSets.push_back(switchSetObject);
		}
		auto allSupportedCustomInstanceTypeFamilies = value["SupportedCustomInstanceTypeFamilies"]["SupportedCustomInstanceTypeFamily"];
		for (auto value : allSupportedCustomInstanceTypeFamilies)
			managedHostSetsObject.supportedCustomInstanceTypeFamilies.push_back(value.asString());
		auto allSupportedInstanceTypeFamilies = value["SupportedInstanceTypeFamilies"]["SupportedInstanceTypeFamily"];
		for (auto value : allSupportedInstanceTypeFamilies)
			managedHostSetsObject.supportedInstanceTypeFamilies.push_back(value.asString());
		auto allSupportedInstanceTypes = value["SupportedInstanceTypes"]["SupportedInstanceType"];
		for (auto value : allSupportedInstanceTypes)
			managedHostSetsObject.supportedInstanceTypes.push_back(value.asString());
		managedHostSets_.push_back(managedHostSetsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListManagedHostsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListManagedHostsResult::getNextToken()const
{
	return nextToken_;
}

int ListManagedHostsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListManagedHostsResult::ManagedHostSet> ListManagedHostsResult::getManagedHostSets()const
{
	return managedHostSets_;
}

