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

#include <alibabacloud/smarthosting/model/ListManagedPrivateSpacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SmartHosting;
using namespace AlibabaCloud::SmartHosting::Model;

ListManagedPrivateSpacesResult::ListManagedPrivateSpacesResult() :
	ServiceResult()
{}

ListManagedPrivateSpacesResult::ListManagedPrivateSpacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListManagedPrivateSpacesResult::~ListManagedPrivateSpacesResult()
{}

void ListManagedPrivateSpacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allManagedPrivateSpaceSetsNode = value["ManagedPrivateSpaceSets"]["ManagedPrivateSpaceSet"];
	for (auto valueManagedPrivateSpaceSetsManagedPrivateSpaceSet : allManagedPrivateSpaceSetsNode)
	{
		ManagedPrivateSpaceSet managedPrivateSpaceSetsObject;
		if(!valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["CreationTime"].isNull())
			managedPrivateSpaceSetsObject.creationTime = valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["CreationTime"].asString();
		if(!valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["Description"].isNull())
			managedPrivateSpaceSetsObject.description = valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["Description"].asString();
		if(!valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["ManagedPrivateSpaceId"].isNull())
			managedPrivateSpaceSetsObject.managedPrivateSpaceId = valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["ManagedPrivateSpaceId"].asString();
		if(!valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["ManagedPrivateSpaceName"].isNull())
			managedPrivateSpaceSetsObject.managedPrivateSpaceName = valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["ManagedPrivateSpaceName"].asString();
		if(!valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["ResourceGroupId"].isNull())
			managedPrivateSpaceSetsObject.resourceGroupId = valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["ResourceGroupId"].asString();
		if(!valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["SaleMode"].isNull())
			managedPrivateSpaceSetsObject.saleMode = valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["SaleMode"].asString();
		if(!valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["ZoneId"].isNull())
			managedPrivateSpaceSetsObject.zoneId = valueManagedPrivateSpaceSetsManagedPrivateSpaceSet["ZoneId"].asString();
		auto allDeploymentAttributesNode = allManagedPrivateSpaceSetsNode["DeploymentAttributes"]["DeploymentAttribute"];
		for (auto allManagedPrivateSpaceSetsNodeDeploymentAttributesDeploymentAttribute : allDeploymentAttributesNode)
		{
			ManagedPrivateSpaceSet::DeploymentAttribute deploymentAttributesObject;
			if(!allManagedPrivateSpaceSetsNodeDeploymentAttributesDeploymentAttribute["ContractId"].isNull())
				deploymentAttributesObject.contractId = allManagedPrivateSpaceSetsNodeDeploymentAttributesDeploymentAttribute["ContractId"].asString();
			if(!allManagedPrivateSpaceSetsNodeDeploymentAttributesDeploymentAttribute["CreateTime"].isNull())
				deploymentAttributesObject.createTime = allManagedPrivateSpaceSetsNodeDeploymentAttributesDeploymentAttribute["CreateTime"].asString();
			if(!allManagedPrivateSpaceSetsNodeDeploymentAttributesDeploymentAttribute["Description"].isNull())
				deploymentAttributesObject.description = allManagedPrivateSpaceSetsNodeDeploymentAttributesDeploymentAttribute["Description"].asString();
			auto allDeploymentStepsNode = allDeploymentAttributesNode["DeploymentSteps"]["DeploymentStep"];
			for (auto allDeploymentAttributesNodeDeploymentStepsDeploymentStep : allDeploymentStepsNode)
			{
				ManagedPrivateSpaceSet::DeploymentAttribute::DeploymentStep deploymentStepsObject;
				if(!allDeploymentAttributesNodeDeploymentStepsDeploymentStep["ActualTime"].isNull())
					deploymentStepsObject.actualTime = allDeploymentAttributesNodeDeploymentStepsDeploymentStep["ActualTime"].asString();
				if(!allDeploymentAttributesNodeDeploymentStepsDeploymentStep["CurrentStep"].isNull())
					deploymentStepsObject.currentStep = allDeploymentAttributesNodeDeploymentStepsDeploymentStep["CurrentStep"].asString() == "true";
				if(!allDeploymentAttributesNodeDeploymentStepsDeploymentStep["ExpectTime"].isNull())
					deploymentStepsObject.expectTime = allDeploymentAttributesNodeDeploymentStepsDeploymentStep["ExpectTime"].asString();
				if(!allDeploymentAttributesNodeDeploymentStepsDeploymentStep["Status"].isNull())
					deploymentStepsObject.status = allDeploymentAttributesNodeDeploymentStepsDeploymentStep["Status"].asString();
				deploymentAttributesObject.deploymentSteps.push_back(deploymentStepsObject);
			}
			managedPrivateSpaceSetsObject.deploymentAttributes.push_back(deploymentAttributesObject);
		}
		auto allManagedHostSetsNode = allManagedPrivateSpaceSetsNode["ManagedHostSets"]["ManagedHostSet"];
		for (auto allManagedPrivateSpaceSetsNodeManagedHostSetsManagedHostSet : allManagedHostSetsNode)
		{
			ManagedPrivateSpaceSet::ManagedHostSet managedHostSetsObject;
			if(!allManagedPrivateSpaceSetsNodeManagedHostSetsManagedHostSet["ManagedHostId"].isNull())
				managedHostSetsObject.managedHostId = allManagedPrivateSpaceSetsNodeManagedHostSetsManagedHostSet["ManagedHostId"].asString();
			if(!allManagedPrivateSpaceSetsNodeManagedHostSetsManagedHostSet["ManagedHostStatus"].isNull())
				managedHostSetsObject.managedHostStatus = allManagedPrivateSpaceSetsNodeManagedHostSetsManagedHostSet["ManagedHostStatus"].asString();
			managedPrivateSpaceSetsObject.managedHostSets.push_back(managedHostSetsObject);
		}
		auto allTagsNode = allManagedPrivateSpaceSetsNode["Tags"]["Tag"];
		for (auto allManagedPrivateSpaceSetsNodeTagsTag : allTagsNode)
		{
			ManagedPrivateSpaceSet::Tag tagsObject;
			if(!allManagedPrivateSpaceSetsNodeTagsTag["Key"].isNull())
				tagsObject.key = allManagedPrivateSpaceSetsNodeTagsTag["Key"].asString();
			if(!allManagedPrivateSpaceSetsNodeTagsTag["Value"].isNull())
				tagsObject.value = allManagedPrivateSpaceSetsNodeTagsTag["Value"].asString();
			managedPrivateSpaceSetsObject.tags.push_back(tagsObject);
		}
		auto capacityAttributeNode = value["CapacityAttribute"];
		if(!capacityAttributeNode["AvailableHostCount"].isNull())
			managedPrivateSpaceSetsObject.capacityAttribute.availableHostCount = std::stoi(capacityAttributeNode["AvailableHostCount"].asString());
		if(!capacityAttributeNode["AvailableMemories"].isNull())
			managedPrivateSpaceSetsObject.capacityAttribute.availableMemories = std::stoi(capacityAttributeNode["AvailableMemories"].asString());
		if(!capacityAttributeNode["AvailableVcpus"].isNull())
			managedPrivateSpaceSetsObject.capacityAttribute.availableVcpus = std::stoi(capacityAttributeNode["AvailableVcpus"].asString());
		if(!capacityAttributeNode["ReservedHostCount"].isNull())
			managedPrivateSpaceSetsObject.capacityAttribute.reservedHostCount = std::stoi(capacityAttributeNode["ReservedHostCount"].asString());
		if(!capacityAttributeNode["ReservedMemories"].isNull())
			managedPrivateSpaceSetsObject.capacityAttribute.reservedMemories = std::stoi(capacityAttributeNode["ReservedMemories"].asString());
		if(!capacityAttributeNode["ReservedVcpus"].isNull())
			managedPrivateSpaceSetsObject.capacityAttribute.reservedVcpus = std::stoi(capacityAttributeNode["ReservedVcpus"].asString());
		if(!capacityAttributeNode["TotalHostCount"].isNull())
			managedPrivateSpaceSetsObject.capacityAttribute.totalHostCount = std::stoi(capacityAttributeNode["TotalHostCount"].asString());
		if(!capacityAttributeNode["TotalMemories"].isNull())
			managedPrivateSpaceSetsObject.capacityAttribute.totalMemories = std::stoi(capacityAttributeNode["TotalMemories"].asString());
		if(!capacityAttributeNode["TotalVcpus"].isNull())
			managedPrivateSpaceSetsObject.capacityAttribute.totalVcpus = std::stoi(capacityAttributeNode["TotalVcpus"].asString());
		auto lifecycleAttributeNode = value["LifecycleAttribute"];
		if(!lifecycleAttributeNode["DeliveryTime"].isNull())
			managedPrivateSpaceSetsObject.lifecycleAttribute.deliveryTime = lifecycleAttributeNode["DeliveryTime"].asString();
		if(!lifecycleAttributeNode["ExpirationTime"].isNull())
			managedPrivateSpaceSetsObject.lifecycleAttribute.expirationTime = lifecycleAttributeNode["ExpirationTime"].asString();
		if(!lifecycleAttributeNode["ReceptionTime"].isNull())
			managedPrivateSpaceSetsObject.lifecycleAttribute.receptionTime = lifecycleAttributeNode["ReceptionTime"].asString();
		auto locationAttributeNode = value["LocationAttribute"];
		if(!locationAttributeNode["Address"].isNull())
			managedPrivateSpaceSetsObject.locationAttribute.address = locationAttributeNode["Address"].asString();
		managedPrivateSpaceSets_.push_back(managedPrivateSpaceSetsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListManagedPrivateSpacesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListManagedPrivateSpacesResult::ManagedPrivateSpaceSet> ListManagedPrivateSpacesResult::getManagedPrivateSpaceSets()const
{
	return managedPrivateSpaceSets_;
}

std::string ListManagedPrivateSpacesResult::getNextToken()const
{
	return nextToken_;
}

