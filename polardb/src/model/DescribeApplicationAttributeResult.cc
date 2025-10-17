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

#include <alibabacloud/polardb/model/DescribeApplicationAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeApplicationAttributeResult::DescribeApplicationAttributeResult() :
	ServiceResult()
{}

DescribeApplicationAttributeResult::DescribeApplicationAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationAttributeResult::~DescribeApplicationAttributeResult()
{}

void DescribeApplicationAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityGroupsNode = value["SecurityGroups"]["SecurityGroup"];
	for (auto valueSecurityGroupsSecurityGroup : allSecurityGroupsNode)
	{
		SecurityGroup securityGroupsObject;
		if(!valueSecurityGroupsSecurityGroup["SecurityGroupName"].isNull())
			securityGroupsObject.securityGroupName = valueSecurityGroupsSecurityGroup["SecurityGroupName"].asString();
		if(!valueSecurityGroupsSecurityGroup["SecurityGroupId"].isNull())
			securityGroupsObject.securityGroupId = valueSecurityGroupsSecurityGroup["SecurityGroupId"].asString();
		if(!valueSecurityGroupsSecurityGroup["RegionId"].isNull())
			securityGroupsObject.regionId = valueSecurityGroupsSecurityGroup["RegionId"].asString();
		if(!valueSecurityGroupsSecurityGroup["NetType"].isNull())
			securityGroupsObject.netType = valueSecurityGroupsSecurityGroup["NetType"].asString();
		securityGroups_.push_back(securityGroupsObject);
	}
	auto allSecurityIPArraysNode = value["SecurityIPArrays"]["SecurityIPArray"];
	for (auto valueSecurityIPArraysSecurityIPArray : allSecurityIPArraysNode)
	{
		SecurityIPArray securityIPArraysObject;
		if(!valueSecurityIPArraysSecurityIPArray["SecurityIPArrayTag"].isNull())
			securityIPArraysObject.securityIPArrayTag = valueSecurityIPArraysSecurityIPArray["SecurityIPArrayTag"].asString();
		if(!valueSecurityIPArraysSecurityIPArray["SecurityIPType"].isNull())
			securityIPArraysObject.securityIPType = valueSecurityIPArraysSecurityIPArray["SecurityIPType"].asString();
		if(!valueSecurityIPArraysSecurityIPArray["SecurityIPList"].isNull())
			securityIPArraysObject.securityIPList = valueSecurityIPArraysSecurityIPArray["SecurityIPList"].asString();
		if(!valueSecurityIPArraysSecurityIPArray["SecurityIPArrayName"].isNull())
			securityIPArraysObject.securityIPArrayName = valueSecurityIPArraysSecurityIPArray["SecurityIPArrayName"].asString();
		if(!valueSecurityIPArraysSecurityIPArray["SecurityIPNetType"].isNull())
			securityIPArraysObject.securityIPNetType = valueSecurityIPArraysSecurityIPArray["SecurityIPNetType"].asString();
		securityIPArrays_.push_back(securityIPArraysObject);
	}
	auto allComponentsNode = value["Components"]["Component"];
	for (auto valueComponentsComponent : allComponentsNode)
	{
		Component componentsObject;
		if(!valueComponentsComponent["Status"].isNull())
			componentsObject.status = valueComponentsComponent["Status"].asString();
		if(!valueComponentsComponent["ComponentType"].isNull())
			componentsObject.componentType = valueComponentsComponent["ComponentType"].asString();
		if(!valueComponentsComponent["ComponentClassDescription"].isNull())
			componentsObject.componentClassDescription = valueComponentsComponent["ComponentClassDescription"].asString();
		if(!valueComponentsComponent["ComponentId"].isNull())
			componentsObject.componentId = valueComponentsComponent["ComponentId"].asString();
		if(!valueComponentsComponent["ComponentClass"].isNull())
			componentsObject.componentClass = valueComponentsComponent["ComponentClass"].asString();
		if(!valueComponentsComponent["ComponentReplica"].isNull())
			componentsObject.componentReplica = std::stol(valueComponentsComponent["ComponentReplica"].asString());
		if(!valueComponentsComponent["ComponentMaxReplica"].isNull())
			componentsObject.componentMaxReplica = std::stol(valueComponentsComponent["ComponentMaxReplica"].asString());
		if(!valueComponentsComponent["ComponentReplicaGroupName"].isNull())
			componentsObject.componentReplicaGroupName = valueComponentsComponent["ComponentReplicaGroupName"].asString();
		auto allSecurityGroups1Node = valueComponentsComponent["SecurityGroups"]["SecurityGroup"];
		for (auto valueComponentsComponentSecurityGroupsSecurityGroup : allSecurityGroups1Node)
		{
			Component::SecurityGroup3 securityGroups1Object;
			if(!valueComponentsComponentSecurityGroupsSecurityGroup["SecurityGroupName"].isNull())
				securityGroups1Object.securityGroupName = valueComponentsComponentSecurityGroupsSecurityGroup["SecurityGroupName"].asString();
			if(!valueComponentsComponentSecurityGroupsSecurityGroup["SecurityGroupId"].isNull())
				securityGroups1Object.securityGroupId = valueComponentsComponentSecurityGroupsSecurityGroup["SecurityGroupId"].asString();
			if(!valueComponentsComponentSecurityGroupsSecurityGroup["RegionId"].isNull())
				securityGroups1Object.regionId = valueComponentsComponentSecurityGroupsSecurityGroup["RegionId"].asString();
			if(!valueComponentsComponentSecurityGroupsSecurityGroup["NetType"].isNull())
				securityGroups1Object.netType = valueComponentsComponentSecurityGroupsSecurityGroup["NetType"].asString();
			componentsObject.securityGroups1.push_back(securityGroups1Object);
		}
		auto allSecurityIPArrays2Node = valueComponentsComponent["SecurityIPArrays"]["SecurityIPArray"];
		for (auto valueComponentsComponentSecurityIPArraysSecurityIPArray : allSecurityIPArrays2Node)
		{
			Component::SecurityIPArray4 securityIPArrays2Object;
			if(!valueComponentsComponentSecurityIPArraysSecurityIPArray["SecurityIPArrayTag"].isNull())
				securityIPArrays2Object.securityIPArrayTag = valueComponentsComponentSecurityIPArraysSecurityIPArray["SecurityIPArrayTag"].asString();
			if(!valueComponentsComponentSecurityIPArraysSecurityIPArray["SecurityIPType"].isNull())
				securityIPArrays2Object.securityIPType = valueComponentsComponentSecurityIPArraysSecurityIPArray["SecurityIPType"].asString();
			if(!valueComponentsComponentSecurityIPArraysSecurityIPArray["SecurityIPList"].isNull())
				securityIPArrays2Object.securityIPList = valueComponentsComponentSecurityIPArraysSecurityIPArray["SecurityIPList"].asString();
			if(!valueComponentsComponentSecurityIPArraysSecurityIPArray["SecurityIPArrayName"].isNull())
				securityIPArrays2Object.securityIPArrayName = valueComponentsComponentSecurityIPArraysSecurityIPArray["SecurityIPArrayName"].asString();
			if(!valueComponentsComponentSecurityIPArraysSecurityIPArray["SecurityIPNetType"].isNull())
				securityIPArrays2Object.securityIPNetType = valueComponentsComponentSecurityIPArraysSecurityIPArray["SecurityIPNetType"].asString();
			componentsObject.securityIPArrays2.push_back(securityIPArrays2Object);
		}
		auto topologyNode = value["Topology"];
		if(!topologyNode["Layer"].isNull())
			componentsObject.topology.layer = topologyNode["Layer"].asString();
			auto allParents = topologyNode["Parents"]["Parents"];
			for (auto value : allParents)
				componentsObject.topology.parents.push_back(value.asString());
			auto allChildren = topologyNode["Children"]["Children"];
			for (auto value : allChildren)
				componentsObject.topology.children.push_back(value.asString());
		components_.push_back(componentsObject);
	}
	auto allEndpointsNode = value["Endpoints"]["Endpoint"];
	for (auto valueEndpointsEndpoint : allEndpointsNode)
	{
		Endpoint endpointsObject;
		if(!valueEndpointsEndpoint["Description"].isNull())
			endpointsObject.description = valueEndpointsEndpoint["Description"].asString();
		if(!valueEndpointsEndpoint["EndpointId"].isNull())
			endpointsObject.endpointId = valueEndpointsEndpoint["EndpointId"].asString();
		if(!valueEndpointsEndpoint["IP"].isNull())
			endpointsObject.iP = valueEndpointsEndpoint["IP"].asString();
		if(!valueEndpointsEndpoint["Port"].isNull())
			endpointsObject.port = valueEndpointsEndpoint["Port"].asString();
		if(!valueEndpointsEndpoint["NetType"].isNull())
			endpointsObject.netType = valueEndpointsEndpoint["NetType"].asString();
		endpoints_.push_back(endpointsObject);
	}
	if(!value["ApplicationId"].isNull())
		applicationId_ = value["ApplicationId"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["Architecture"].isNull())
		architecture_ = value["Architecture"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["LockMode"].isNull())
		lockMode_ = value["LockMode"].asString();
	if(!value["ApplicationType"].isNull())
		applicationType_ = value["ApplicationType"].asString();
	if(!value["Version"].isNull())
		version_ = value["Version"].asString();
	if(!value["UpgradeAvailable"].isNull())
		upgradeAvailable_ = value["UpgradeAvailable"].asString();
	if(!value["MaintainStartTime"].isNull())
		maintainStartTime_ = value["MaintainStartTime"].asString();
	if(!value["MaintainEndTime"].isNull())
		maintainEndTime_ = value["MaintainEndTime"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["Expired"].isNull())
		expired_ = value["Expired"].asString() == "true";
	if(!value["VPCId"].isNull())
		vPCId_ = value["VPCId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["PolarFSInstanceId"].isNull())
		polarFSInstanceId_ = value["PolarFSInstanceId"].asString();
	if(!value["ServerlessType"].isNull())
		serverlessType_ = value["ServerlessType"].asString();

}

std::vector<DescribeApplicationAttributeResult::SecurityGroup> DescribeApplicationAttributeResult::getSecurityGroups()const
{
	return securityGroups_;
}

std::string DescribeApplicationAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeApplicationAttributeResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeApplicationAttributeResult::getPolarFSInstanceId()const
{
	return polarFSInstanceId_;
}

std::vector<DescribeApplicationAttributeResult::Component> DescribeApplicationAttributeResult::getComponents()const
{
	return components_;
}

std::vector<DescribeApplicationAttributeResult::Endpoint> DescribeApplicationAttributeResult::getEndpoints()const
{
	return endpoints_;
}

std::string DescribeApplicationAttributeResult::getMaintainEndTime()const
{
	return maintainEndTime_;
}

std::string DescribeApplicationAttributeResult::getVersion()const
{
	return version_;
}

std::string DescribeApplicationAttributeResult::getMaintainStartTime()const
{
	return maintainStartTime_;
}

std::string DescribeApplicationAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeApplicationAttributeResult::getArchitecture()const
{
	return architecture_;
}

std::string DescribeApplicationAttributeResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeApplicationAttributeResult::getVPCId()const
{
	return vPCId_;
}

std::string DescribeApplicationAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

bool DescribeApplicationAttributeResult::getExpired()const
{
	return expired_;
}

std::string DescribeApplicationAttributeResult::getLockMode()const
{
	return lockMode_;
}

std::string DescribeApplicationAttributeResult::getPayType()const
{
	return payType_;
}

std::string DescribeApplicationAttributeResult::getApplicationType()const
{
	return applicationType_;
}

std::string DescribeApplicationAttributeResult::getServerlessType()const
{
	return serverlessType_;
}

std::string DescribeApplicationAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeApplicationAttributeResult::getUpgradeAvailable()const
{
	return upgradeAvailable_;
}

std::vector<DescribeApplicationAttributeResult::SecurityIPArray> DescribeApplicationAttributeResult::getSecurityIPArrays()const
{
	return securityIPArrays_;
}

std::string DescribeApplicationAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeApplicationAttributeResult::getApplicationId()const
{
	return applicationId_;
}

std::string DescribeApplicationAttributeResult::getExpireTime()const
{
	return expireTime_;
}

