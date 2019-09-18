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
	auto allEmrMainVersionList = value["EmrMainVersionList"]["EmrMainVersion"];
	for (auto value : allEmrMainVersionList)
	{
		EmrMainVersion emrMainVersionListObject;
		if(!value["RegionId"].isNull())
			emrMainVersionListObject.regionId = value["RegionId"].asString();
		if(!value["MainVersionName"].isNull())
			emrMainVersionListObject.mainVersionName = value["MainVersionName"].asString();
		if(!value["EcmVersion"].isNull())
			emrMainVersionListObject.ecmVersion = value["EcmVersion"].asString() == "true";
		if(!value["StackName"].isNull())
			emrMainVersionListObject.stackName = value["StackName"].asString();
		if(!value["StackVersion"].isNull())
			emrMainVersionListObject.stackVersion = value["StackVersion"].asString();
		auto allClusterTypeInfoList = value["ClusterTypeInfoList"]["ClusterTypeInfo"];
		for (auto value : allClusterTypeInfoList)
		{
			EmrMainVersion::ClusterTypeInfo clusterTypeInfoListObject;
			if(!value["ClusterType"].isNull())
				clusterTypeInfoListObject.clusterType = value["ClusterType"].asString();
			auto allClusterServiceInfoList = value["ClusterServiceInfoList"]["ClusterServiceInfo"];
			for (auto value : allClusterServiceInfoList)
			{
				EmrMainVersion::ClusterTypeInfo::ClusterServiceInfo clusterServiceInfoListObject;
				if(!value["ServiceName"].isNull())
					clusterServiceInfoListObject.serviceName = value["ServiceName"].asString();
				if(!value["ServiceDisplayName"].isNull())
					clusterServiceInfoListObject.serviceDisplayName = value["ServiceDisplayName"].asString();
				if(!value["ServiceVersion"].isNull())
					clusterServiceInfoListObject.serviceVersion = value["ServiceVersion"].asString();
				if(!value["Mandatory"].isNull())
					clusterServiceInfoListObject.mandatory = value["Mandatory"].asString() == "true";
				clusterTypeInfoListObject.clusterServiceInfoList.push_back(clusterServiceInfoListObject);
			}
			emrMainVersionListObject.clusterTypeInfoList.push_back(clusterTypeInfoListObject);
		}
		emrMainVersionList_.push_back(emrMainVersionListObject);
	}
	auto allSecurityGroupList = value["SecurityGroupList"]["SecurityGroup"];
	for (auto value : allSecurityGroupList)
	{
		SecurityGroup securityGroupListObject;
		if(!value["SecurityGroupId"].isNull())
			securityGroupListObject.securityGroupId = value["SecurityGroupId"].asString();
		if(!value["Description"].isNull())
			securityGroupListObject.description = value["Description"].asString();
		if(!value["SecurityGroupName"].isNull())
			securityGroupListObject.securityGroupName = value["SecurityGroupName"].asString();
		if(!value["VpcId"].isNull())
			securityGroupListObject.vpcId = value["VpcId"].asString();
		if(!value["CreationTime"].isNull())
			securityGroupListObject.creationTime = value["CreationTime"].asString();
		if(!value["AvailableInstanceAmount"].isNull())
			securityGroupListObject.availableInstanceAmount = std::stoi(value["AvailableInstanceAmount"].asString());
		if(!value["EcsCount"].isNull())
			securityGroupListObject.ecsCount = std::stoi(value["EcsCount"].asString());
		securityGroupList_.push_back(securityGroupListObject);
	}
	auto allVpcInfoList = value["VpcInfoList"]["VpcInfo"];
	for (auto value : allVpcInfoList)
	{
		VpcInfo vpcInfoListObject;
		if(!value["VpcId"].isNull())
			vpcInfoListObject.vpcId = value["VpcId"].asString();
		if(!value["VpcName"].isNull())
			vpcInfoListObject.vpcName = value["VpcName"].asString();
		if(!value["CidrBlock"].isNull())
			vpcInfoListObject.cidrBlock = value["CidrBlock"].asString();
		if(!value["CreationTime"].isNull())
			vpcInfoListObject.creationTime = value["CreationTime"].asString();
		if(!value["VRouterId"].isNull())
			vpcInfoListObject.vRouterId = value["VRouterId"].asString();
		if(!value["Description"].isNull())
			vpcInfoListObject.description = value["Description"].asString();
		auto allVswitchInfoList = value["VswitchInfoList"]["VswitchInfo"];
		for (auto value : allVswitchInfoList)
		{
			VpcInfo::VswitchInfo vswitchInfoListObject;
			if(!value["VpcId"].isNull())
				vswitchInfoListObject.vpcId = value["VpcId"].asString();
			if(!value["VswitchId"].isNull())
				vswitchInfoListObject.vswitchId = value["VswitchId"].asString();
			if(!value["VswitchName"].isNull())
				vswitchInfoListObject.vswitchName = value["VswitchName"].asString();
			if(!value["ZoneId"].isNull())
				vswitchInfoListObject.zoneId = value["ZoneId"].asString();
			if(!value["CidrBlock"].isNull())
				vswitchInfoListObject.cidrBlock = value["CidrBlock"].asString();
			if(!value["AvailableIpAddressCount"].isNull())
				vswitchInfoListObject.availableIpAddressCount = std::stol(value["AvailableIpAddressCount"].asString());
			if(!value["Description"].isNull())
				vswitchInfoListObject.description = value["Description"].asString();
			if(!value["CreationTime"].isNull())
				vswitchInfoListObject.creationTime = value["CreationTime"].asString();
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

