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

#include <alibabacloud/emr/model/ListEmrAvailableConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListEmrAvailableConfigResult::ListEmrAvailableConfigResult() :
	ServiceResult()
{}

ListEmrAvailableConfigResult::ListEmrAvailableConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEmrAvailableConfigResult::~ListEmrAvailableConfigResult()
{}

void ListEmrAvailableConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEmrMainVersionListNode = value["EmrMainVersionList"]["EmrMainVersion"];
	for (auto valueEmrMainVersionListEmrMainVersion : allEmrMainVersionListNode)
	{
		EmrMainVersion emrMainVersionListObject;
		if(!valueEmrMainVersionListEmrMainVersion["RegionId"].isNull())
			emrMainVersionListObject.regionId = valueEmrMainVersionListEmrMainVersion["RegionId"].asString();
		if(!valueEmrMainVersionListEmrMainVersion["MainVersionName"].isNull())
			emrMainVersionListObject.mainVersionName = valueEmrMainVersionListEmrMainVersion["MainVersionName"].asString();
		if(!valueEmrMainVersionListEmrMainVersion["EcmVersion"].isNull())
			emrMainVersionListObject.ecmVersion = valueEmrMainVersionListEmrMainVersion["EcmVersion"].asString() == "true";
		if(!valueEmrMainVersionListEmrMainVersion["StackName"].isNull())
			emrMainVersionListObject.stackName = valueEmrMainVersionListEmrMainVersion["StackName"].asString();
		if(!valueEmrMainVersionListEmrMainVersion["StackVersion"].isNull())
			emrMainVersionListObject.stackVersion = valueEmrMainVersionListEmrMainVersion["StackVersion"].asString();
		auto allClusterTypeInfoListNode = allEmrMainVersionListNode["ClusterTypeInfoList"]["ClusterTypeInfo"];
		for (auto allEmrMainVersionListNodeClusterTypeInfoListClusterTypeInfo : allClusterTypeInfoListNode)
		{
			EmrMainVersion::ClusterTypeInfo clusterTypeInfoListObject;
			if(!allEmrMainVersionListNodeClusterTypeInfoListClusterTypeInfo["ClusterType"].isNull())
				clusterTypeInfoListObject.clusterType = allEmrMainVersionListNodeClusterTypeInfoListClusterTypeInfo["ClusterType"].asString();
			auto allClusterServiceInfoListNode = allClusterTypeInfoListNode["ClusterServiceInfoList"]["ClusterServiceInfo"];
			for (auto allClusterTypeInfoListNodeClusterServiceInfoListClusterServiceInfo : allClusterServiceInfoListNode)
			{
				EmrMainVersion::ClusterTypeInfo::ClusterServiceInfo clusterServiceInfoListObject;
				if(!allClusterTypeInfoListNodeClusterServiceInfoListClusterServiceInfo["ServiceName"].isNull())
					clusterServiceInfoListObject.serviceName = allClusterTypeInfoListNodeClusterServiceInfoListClusterServiceInfo["ServiceName"].asString();
				if(!allClusterTypeInfoListNodeClusterServiceInfoListClusterServiceInfo["ServiceDisplayName"].isNull())
					clusterServiceInfoListObject.serviceDisplayName = allClusterTypeInfoListNodeClusterServiceInfoListClusterServiceInfo["ServiceDisplayName"].asString();
				if(!allClusterTypeInfoListNodeClusterServiceInfoListClusterServiceInfo["ServiceVersion"].isNull())
					clusterServiceInfoListObject.serviceVersion = allClusterTypeInfoListNodeClusterServiceInfoListClusterServiceInfo["ServiceVersion"].asString();
				if(!allClusterTypeInfoListNodeClusterServiceInfoListClusterServiceInfo["Mandatory"].isNull())
					clusterServiceInfoListObject.mandatory = allClusterTypeInfoListNodeClusterServiceInfoListClusterServiceInfo["Mandatory"].asString() == "true";
				clusterTypeInfoListObject.clusterServiceInfoList.push_back(clusterServiceInfoListObject);
			}
			emrMainVersionListObject.clusterTypeInfoList.push_back(clusterTypeInfoListObject);
		}
		emrMainVersionList_.push_back(emrMainVersionListObject);
	}
	auto allSecurityGroupListNode = value["SecurityGroupList"]["SecurityGroup"];
	for (auto valueSecurityGroupListSecurityGroup : allSecurityGroupListNode)
	{
		SecurityGroup securityGroupListObject;
		if(!valueSecurityGroupListSecurityGroup["SecurityGroupId"].isNull())
			securityGroupListObject.securityGroupId = valueSecurityGroupListSecurityGroup["SecurityGroupId"].asString();
		if(!valueSecurityGroupListSecurityGroup["Description"].isNull())
			securityGroupListObject.description = valueSecurityGroupListSecurityGroup["Description"].asString();
		if(!valueSecurityGroupListSecurityGroup["SecurityGroupName"].isNull())
			securityGroupListObject.securityGroupName = valueSecurityGroupListSecurityGroup["SecurityGroupName"].asString();
		if(!valueSecurityGroupListSecurityGroup["VpcId"].isNull())
			securityGroupListObject.vpcId = valueSecurityGroupListSecurityGroup["VpcId"].asString();
		if(!valueSecurityGroupListSecurityGroup["CreationTime"].isNull())
			securityGroupListObject.creationTime = valueSecurityGroupListSecurityGroup["CreationTime"].asString();
		if(!valueSecurityGroupListSecurityGroup["SecurityGroupType"].isNull())
			securityGroupListObject.securityGroupType = valueSecurityGroupListSecurityGroup["SecurityGroupType"].asString();
		if(!valueSecurityGroupListSecurityGroup["AvailableInstanceAmount"].isNull())
			securityGroupListObject.availableInstanceAmount = std::stoi(valueSecurityGroupListSecurityGroup["AvailableInstanceAmount"].asString());
		if(!valueSecurityGroupListSecurityGroup["EcsCount"].isNull())
			securityGroupListObject.ecsCount = std::stoi(valueSecurityGroupListSecurityGroup["EcsCount"].asString());
		securityGroupList_.push_back(securityGroupListObject);
	}
	auto allVpcInfoListNode = value["VpcInfoList"]["VpcInfo"];
	for (auto valueVpcInfoListVpcInfo : allVpcInfoListNode)
	{
		VpcInfo vpcInfoListObject;
		if(!valueVpcInfoListVpcInfo["VpcId"].isNull())
			vpcInfoListObject.vpcId = valueVpcInfoListVpcInfo["VpcId"].asString();
		if(!valueVpcInfoListVpcInfo["VpcName"].isNull())
			vpcInfoListObject.vpcName = valueVpcInfoListVpcInfo["VpcName"].asString();
		if(!valueVpcInfoListVpcInfo["CidrBlock"].isNull())
			vpcInfoListObject.cidrBlock = valueVpcInfoListVpcInfo["CidrBlock"].asString();
		if(!valueVpcInfoListVpcInfo["CreationTime"].isNull())
			vpcInfoListObject.creationTime = valueVpcInfoListVpcInfo["CreationTime"].asString();
		if(!valueVpcInfoListVpcInfo["VRouterId"].isNull())
			vpcInfoListObject.vRouterId = valueVpcInfoListVpcInfo["VRouterId"].asString();
		if(!valueVpcInfoListVpcInfo["Description"].isNull())
			vpcInfoListObject.description = valueVpcInfoListVpcInfo["Description"].asString();
		auto allVswitchInfoListNode = allVpcInfoListNode["VswitchInfoList"]["VswitchInfo"];
		for (auto allVpcInfoListNodeVswitchInfoListVswitchInfo : allVswitchInfoListNode)
		{
			VpcInfo::VswitchInfo vswitchInfoListObject;
			if(!allVpcInfoListNodeVswitchInfoListVswitchInfo["VpcId"].isNull())
				vswitchInfoListObject.vpcId = allVpcInfoListNodeVswitchInfoListVswitchInfo["VpcId"].asString();
			if(!allVpcInfoListNodeVswitchInfoListVswitchInfo["VswitchId"].isNull())
				vswitchInfoListObject.vswitchId = allVpcInfoListNodeVswitchInfoListVswitchInfo["VswitchId"].asString();
			if(!allVpcInfoListNodeVswitchInfoListVswitchInfo["VswitchName"].isNull())
				vswitchInfoListObject.vswitchName = allVpcInfoListNodeVswitchInfoListVswitchInfo["VswitchName"].asString();
			if(!allVpcInfoListNodeVswitchInfoListVswitchInfo["ZoneId"].isNull())
				vswitchInfoListObject.zoneId = allVpcInfoListNodeVswitchInfoListVswitchInfo["ZoneId"].asString();
			if(!allVpcInfoListNodeVswitchInfoListVswitchInfo["CidrBlock"].isNull())
				vswitchInfoListObject.cidrBlock = allVpcInfoListNodeVswitchInfoListVswitchInfo["CidrBlock"].asString();
			if(!allVpcInfoListNodeVswitchInfoListVswitchInfo["AvailableIpAddressCount"].isNull())
				vswitchInfoListObject.availableIpAddressCount = std::stol(allVpcInfoListNodeVswitchInfoListVswitchInfo["AvailableIpAddressCount"].asString());
			if(!allVpcInfoListNodeVswitchInfoListVswitchInfo["Description"].isNull())
				vswitchInfoListObject.description = allVpcInfoListNodeVswitchInfoListVswitchInfo["Description"].asString();
			if(!allVpcInfoListNodeVswitchInfoListVswitchInfo["CreationTime"].isNull())
				vswitchInfoListObject.creationTime = allVpcInfoListNodeVswitchInfoListVswitchInfo["CreationTime"].asString();
			vpcInfoListObject.vswitchInfoList.push_back(vswitchInfoListObject);
		}
		vpcInfoList_.push_back(vpcInfoListObject);
	}
	auto allKeyPairNameList = value["KeyPairNameList"]["KeyPairName"];
	for (const auto &item : allKeyPairNameList)
		keyPairNameList_.push_back(item.asString());

}

std::vector<ListEmrAvailableConfigResult::SecurityGroup> ListEmrAvailableConfigResult::getSecurityGroupList()const
{
	return securityGroupList_;
}

std::vector<std::string> ListEmrAvailableConfigResult::getKeyPairNameList()const
{
	return keyPairNameList_;
}

std::vector<ListEmrAvailableConfigResult::VpcInfo> ListEmrAvailableConfigResult::getVpcInfoList()const
{
	return vpcInfoList_;
}

std::vector<ListEmrAvailableConfigResult::EmrMainVersion> ListEmrAvailableConfigResult::getEmrMainVersionList()const
{
	return emrMainVersionList_;
}

