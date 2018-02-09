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

#include <alibabacloud/ehpc/model/DescribeClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeClusterResult::DescribeClusterResult() :
	ServiceResult()
{}

DescribeClusterResult::DescribeClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterResult::~DescribeClusterResult()
{}

void DescribeClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allClusterInfo = value["ClusterInfo"];
	for (auto value : allClusterInfo)
	{
		ClusterInfo clusterInfoObject;
		if(!value["Id"].isNull())
			clusterInfoObject.id = value["Id"].asString();
		if(!value["RegionId"].isNull())
			clusterInfoObject.regionId = value["RegionId"].asString();
		if(!value["Name"].isNull())
			clusterInfoObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			clusterInfoObject.description = value["Description"].asString();
		if(!value["Status"].isNull())
			clusterInfoObject.status = value["Status"].asString();
		if(!value["OsTag"].isNull())
			clusterInfoObject.osTag = value["OsTag"].asString();
		if(!value["AccountType"].isNull())
			clusterInfoObject.accountType = value["AccountType"].asString();
		if(!value["SchedulerType"].isNull())
			clusterInfoObject.schedulerType = value["SchedulerType"].asString();
		if(!value["CreateTime"].isNull())
			clusterInfoObject.createTime = value["CreateTime"].asString();
		if(!value["SecurityGroupId"].isNull())
			clusterInfoObject.securityGroupId = value["SecurityGroupId"].asString();
		if(!value["VSwitchId"].isNull())
			clusterInfoObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["VolumeType"].isNull())
			clusterInfoObject.volumeType = value["VolumeType"].asString();
		if(!value["VolumeId"].isNull())
			clusterInfoObject.volumeId = value["VolumeId"].asString();
		if(!value["VolumeProtocol"].isNull())
			clusterInfoObject.volumeProtocol = value["VolumeProtocol"].asString();
		if(!value["VolumeMountpoint"].isNull())
			clusterInfoObject.volumeMountpoint = value["VolumeMountpoint"].asString();
		if(!value["RemoteDirectory"].isNull())
			clusterInfoObject.remoteDirectory = value["RemoteDirectory"].asString();
		if(!value["HaEnable"].isNull())
			clusterInfoObject.haEnable = value["HaEnable"].asString() == "true";
		if(!value["EcsChargeType"].isNull())
			clusterInfoObject.ecsChargeType = value["EcsChargeType"].asString();
		if(!value["KeyPairName"].isNull())
			clusterInfoObject.keyPairName = value["KeyPairName"].asString();
		if(!value["SccClusterId"].isNull())
			clusterInfoObject.sccClusterId = value["SccClusterId"].asString();
		if(!value["ClientVersion"].isNull())
			clusterInfoObject.clientVersion = value["ClientVersion"].asString();
		if(!value["ImageOwnerAlias"].isNull())
			clusterInfoObject.imageOwnerAlias = value["ImageOwnerAlias"].asString();
		if(!value["ImageId"].isNull())
			clusterInfoObject.imageId = value["ImageId"].asString();
		auto allApplicationInfo = value["ApplicationInfo"]["ApplicationInfoItem"];
		for (auto value : allApplicationInfo)
		{
			ClusterInfo::ApplicationInfoItem applicationInfoItemObject;
			if(!value["Tag"].isNull())
				applicationInfoItemObject.tag = value["Tag"].asString();
			if(!value["Name"].isNull())
				applicationInfoItemObject.name = value["Name"].asString();
			if(!value["Version"].isNull())
				applicationInfoItemObject.version = value["Version"].asString();
			clusterInfoObject.applicationInfo.push_back(applicationInfoItemObject);
		}
		auto allEcsInfo = value["EcsInfo"];
		for (auto value : allEcsInfo)
		{
			ClusterInfo::EcsInfo ecsInfoObject;
			auto allManager = value["Manager"];
			for (auto value : allManager)
			{
				ClusterInfo::EcsInfo::Manager managerObject;
				if(!value["Count"].isNull())
					managerObject.count = std::stoi(value["Count"].asString());
				if(!value["InstanceType"].isNull())
					managerObject.instanceType = value["InstanceType"].asString();
				ecsInfoObject.manager.push_back(managerObject);
			}
			auto allCompute = value["Compute"];
			for (auto value : allCompute)
			{
				ClusterInfo::EcsInfo::Compute computeObject;
				if(!value["Count"].isNull())
					computeObject.count = std::stoi(value["Count"].asString());
				if(!value["InstanceType"].isNull())
					computeObject.instanceType = value["InstanceType"].asString();
				ecsInfoObject.compute.push_back(computeObject);
			}
			auto allLogin = value["Login"];
			for (auto value : allLogin)
			{
				ClusterInfo::EcsInfo::Login loginObject;
				if(!value["Count"].isNull())
					loginObject.count = std::stoi(value["Count"].asString());
				if(!value["InstanceType"].isNull())
					loginObject.instanceType = value["InstanceType"].asString();
				ecsInfoObject.login.push_back(loginObject);
			}
			clusterInfoObject.ecsInfo.push_back(ecsInfoObject);
		}
		clusterInfo_.push_back(clusterInfoObject);
	}

}

std::vector<DescribeClusterResult::ClusterInfo> DescribeClusterResult::getClusterInfo()const
{
	return clusterInfo_;
}

