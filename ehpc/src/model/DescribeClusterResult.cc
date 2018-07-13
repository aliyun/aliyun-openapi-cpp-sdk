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
	auto clusterInfoNode = value["ClusterInfo"];
	if(!clusterInfoNode["Id"].isNull())
		clusterInfo_.id = clusterInfoNode["Id"].asString();
	if(!clusterInfoNode["RegionId"].isNull())
		clusterInfo_.regionId = clusterInfoNode["RegionId"].asString();
	if(!clusterInfoNode["Name"].isNull())
		clusterInfo_.name = clusterInfoNode["Name"].asString();
	if(!clusterInfoNode["Description"].isNull())
		clusterInfo_.description = clusterInfoNode["Description"].asString();
	if(!clusterInfoNode["Status"].isNull())
		clusterInfo_.status = clusterInfoNode["Status"].asString();
	if(!clusterInfoNode["OsTag"].isNull())
		clusterInfo_.osTag = clusterInfoNode["OsTag"].asString();
	if(!clusterInfoNode["AccountType"].isNull())
		clusterInfo_.accountType = clusterInfoNode["AccountType"].asString();
	if(!clusterInfoNode["SchedulerType"].isNull())
		clusterInfo_.schedulerType = clusterInfoNode["SchedulerType"].asString();
	if(!clusterInfoNode["CreateTime"].isNull())
		clusterInfo_.createTime = clusterInfoNode["CreateTime"].asString();
	if(!clusterInfoNode["SecurityGroupId"].isNull())
		clusterInfo_.securityGroupId = clusterInfoNode["SecurityGroupId"].asString();
	if(!clusterInfoNode["VpcId"].isNull())
		clusterInfo_.vpcId = clusterInfoNode["VpcId"].asString();
	if(!clusterInfoNode["VSwitchId"].isNull())
		clusterInfo_.vSwitchId = clusterInfoNode["VSwitchId"].asString();
	if(!clusterInfoNode["VolumeType"].isNull())
		clusterInfo_.volumeType = clusterInfoNode["VolumeType"].asString();
	if(!clusterInfoNode["VolumeId"].isNull())
		clusterInfo_.volumeId = clusterInfoNode["VolumeId"].asString();
	if(!clusterInfoNode["VolumeProtocol"].isNull())
		clusterInfo_.volumeProtocol = clusterInfoNode["VolumeProtocol"].asString();
	if(!clusterInfoNode["VolumeMountpoint"].isNull())
		clusterInfo_.volumeMountpoint = clusterInfoNode["VolumeMountpoint"].asString();
	if(!clusterInfoNode["RemoteDirectory"].isNull())
		clusterInfo_.remoteDirectory = clusterInfoNode["RemoteDirectory"].asString();
	if(!clusterInfoNode["DeployMode"].isNull())
		clusterInfo_.deployMode = clusterInfoNode["DeployMode"].asString();
	if(!clusterInfoNode["HaEnable"].isNull())
		clusterInfo_.haEnable = clusterInfoNode["HaEnable"].asString() == "true";
	if(!clusterInfoNode["EcsChargeType"].isNull())
		clusterInfo_.ecsChargeType = clusterInfoNode["EcsChargeType"].asString();
	if(!clusterInfoNode["KeyPairName"].isNull())
		clusterInfo_.keyPairName = clusterInfoNode["KeyPairName"].asString();
	if(!clusterInfoNode["SccClusterId"].isNull())
		clusterInfo_.sccClusterId = clusterInfoNode["SccClusterId"].asString();
	if(!clusterInfoNode["ClientVersion"].isNull())
		clusterInfo_.clientVersion = clusterInfoNode["ClientVersion"].asString();
	if(!clusterInfoNode["ImageOwnerAlias"].isNull())
		clusterInfo_.imageOwnerAlias = clusterInfoNode["ImageOwnerAlias"].asString();
	if(!clusterInfoNode["ImageId"].isNull())
		clusterInfo_.imageId = clusterInfoNode["ImageId"].asString();
	if(!clusterInfoNode["Location"].isNull())
		clusterInfo_.location = clusterInfoNode["Location"].asString();
	auto allApplications = value["Applications"]["ApplicationInfo"];
	for (auto value : allApplications)
	{
		ClusterInfo::ApplicationInfo applicationInfoObject;
		if(!value["Tag"].isNull())
			applicationInfoObject.tag = value["Tag"].asString();
		if(!value["Name"].isNull())
			applicationInfoObject.name = value["Name"].asString();
		if(!value["Version"].isNull())
			applicationInfoObject.version = value["Version"].asString();
		clusterInfo_.applications.push_back(applicationInfoObject);
	}
	auto ecsInfoNode = clusterInfoNode["EcsInfo"];
	auto managerNode = ecsInfoNode["Manager"];
	if(!managerNode["Count"].isNull())
		clusterInfo_.ecsInfo.manager.count = std::stoi(managerNode["Count"].asString());
	if(!managerNode["InstanceType"].isNull())
		clusterInfo_.ecsInfo.manager.instanceType = managerNode["InstanceType"].asString();
	auto computeNode = ecsInfoNode["Compute"];
	if(!computeNode["Count"].isNull())
		clusterInfo_.ecsInfo.compute.count = std::stoi(computeNode["Count"].asString());
	if(!computeNode["InstanceType"].isNull())
		clusterInfo_.ecsInfo.compute.instanceType = computeNode["InstanceType"].asString();
	auto loginNode = ecsInfoNode["Login"];
	if(!loginNode["Count"].isNull())
		clusterInfo_.ecsInfo.login.count = std::stoi(loginNode["Count"].asString());
	if(!loginNode["InstanceType"].isNull())
		clusterInfo_.ecsInfo.login.instanceType = loginNode["InstanceType"].asString();

}

DescribeClusterResult::ClusterInfo DescribeClusterResult::getClusterInfo()const
{
	return clusterInfo_;
}

