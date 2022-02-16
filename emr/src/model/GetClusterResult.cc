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

#include <alibabacloud/emr/model/GetClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetClusterResult::GetClusterResult() :
	ServiceResult()
{}

GetClusterResult::GetClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClusterResult::~GetClusterResult()
{}

void GetClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clusterNode = value["Cluster"];
	if(!clusterNode["RegionId"].isNull())
		cluster_.regionId = clusterNode["RegionId"].asString();
	if(!clusterNode["ClusterId"].isNull())
		cluster_.clusterId = clusterNode["ClusterId"].asString();
	if(!clusterNode["ClusterName"].isNull())
		cluster_.clusterName = clusterNode["ClusterName"].asString();
	if(!clusterNode["ClusterType"].isNull())
		cluster_.clusterType = clusterNode["ClusterType"].asString();
	if(!clusterNode["ClusterState"].isNull())
		cluster_.clusterState = clusterNode["ClusterState"].asString();
	if(!clusterNode["PaymentType"].isNull())
		cluster_.paymentType = clusterNode["PaymentType"].asString();
	if(!clusterNode["PaymentStatus"].isNull())
		cluster_.paymentStatus = clusterNode["PaymentStatus"].asString();
	if(!clusterNode["AutoRenew"].isNull())
		cluster_.autoRenew = clusterNode["AutoRenew"].asString() == "true";
	if(!clusterNode["HasUncompletedOrder"].isNull())
		cluster_.hasUncompletedOrder = clusterNode["HasUncompletedOrder"].asString() == "true";
	if(!clusterNode["CreateTime"].isNull())
		cluster_.createTime = std::stol(clusterNode["CreateTime"].asString());
	if(!clusterNode["DeleteTime"].isNull())
		cluster_.deleteTime = std::stol(clusterNode["DeleteTime"].asString());
	if(!clusterNode["ExpiredTime"].isNull())
		cluster_.expiredTime = std::stol(clusterNode["ExpiredTime"].asString());
	if(!clusterNode["MainVersion"].isNull())
		cluster_.mainVersion = clusterNode["MainVersion"].asString();
	if(!clusterNode["ReleaseVersion"].isNull())
		cluster_.releaseVersion = clusterNode["ReleaseVersion"].asString();
	if(!clusterNode["DeployMode"].isNull())
		cluster_.deployMode = clusterNode["DeployMode"].asString();
	if(!clusterNode["SecurityMode"].isNull())
		cluster_.securityMode = clusterNode["SecurityMode"].asString();
	if(!clusterNode["MetaStoreType"].isNull())
		cluster_.metaStoreType = clusterNode["MetaStoreType"].asString();
	if(!clusterNode["NetworkType"].isNull())
		cluster_.networkType = clusterNode["NetworkType"].asString();
	if(!clusterNode["VpcId"].isNull())
		cluster_.vpcId = clusterNode["VpcId"].asString();
	if(!clusterNode["ZoneId"].isNull())
		cluster_.zoneId = clusterNode["ZoneId"].asString();
	if(!clusterNode["NodeRamRole"].isNull())
		cluster_.nodeRamRole = clusterNode["NodeRamRole"].asString();
	if(!clusterNode["NodeKeyPairName"].isNull())
		cluster_.nodeKeyPairName = clusterNode["NodeKeyPairName"].asString();
	if(!clusterNode["NodeRootPassword"].isNull())
		cluster_.nodeRootPassword = clusterNode["NodeRootPassword"].asString();
	if(!clusterNode["SecurityGroupId"].isNull())
		cluster_.securityGroupId = clusterNode["SecurityGroupId"].asString();
	auto allAssociatedClustersNode = clusterNode["AssociatedClusters"]["AssociatedCluster"];
	for (auto clusterNodeAssociatedClustersAssociatedCluster : allAssociatedClustersNode)
	{
		Cluster::AssociatedCluster associatedClusterObject;
		if(!clusterNodeAssociatedClustersAssociatedCluster["AssociatedType"].isNull())
			associatedClusterObject.associatedType = clusterNodeAssociatedClustersAssociatedCluster["AssociatedType"].asString();
		if(!clusterNodeAssociatedClustersAssociatedCluster["ClusterName"].isNull())
			associatedClusterObject.clusterName = clusterNodeAssociatedClustersAssociatedCluster["ClusterName"].asString();
		if(!clusterNodeAssociatedClustersAssociatedCluster["ClusterId"].isNull())
			associatedClusterObject.clusterId = clusterNodeAssociatedClustersAssociatedCluster["ClusterId"].asString();
		cluster_.associatedClusters.push_back(associatedClusterObject);
	}
	auto subscriptionConfigNode = clusterNode["SubscriptionConfig"];
	if(!subscriptionConfigNode["PaymentDuration"].isNull())
		cluster_.subscriptionConfig.paymentDuration = std::stoi(subscriptionConfigNode["PaymentDuration"].asString());
	if(!subscriptionConfigNode["PaymentDurationUnit"].isNull())
		cluster_.subscriptionConfig.paymentDurationUnit = subscriptionConfigNode["PaymentDurationUnit"].asString();
	if(!subscriptionConfigNode["AutoPayOrder"].isNull())
		cluster_.subscriptionConfig.autoPayOrder = subscriptionConfigNode["AutoPayOrder"].asString() == "true";
	if(!subscriptionConfigNode["AutoRenew"].isNull())
		cluster_.subscriptionConfig.autoRenew = subscriptionConfigNode["AutoRenew"].asString() == "true";
	if(!subscriptionConfigNode["AutoRenewDuration"].isNull())
		cluster_.subscriptionConfig.autoRenewDuration = std::stoi(subscriptionConfigNode["AutoRenewDuration"].asString());
	if(!subscriptionConfigNode["AutoRenewDurationUnit"].isNull())
		cluster_.subscriptionConfig.autoRenewDurationUnit = subscriptionConfigNode["AutoRenewDurationUnit"].asString();
	auto nodeAttributesNode = clusterNode["NodeAttributes"];
	if(!nodeAttributesNode["VpcId"].isNull())
		cluster_.nodeAttributes.vpcId = nodeAttributesNode["VpcId"].asString();
	if(!nodeAttributesNode["ZoneId"].isNull())
		cluster_.nodeAttributes.zoneId = nodeAttributesNode["ZoneId"].asString();
	if(!nodeAttributesNode["SecurityGroupId"].isNull())
		cluster_.nodeAttributes.securityGroupId = nodeAttributesNode["SecurityGroupId"].asString();
	if(!nodeAttributesNode["RamRole"].isNull())
		cluster_.nodeAttributes.ramRole = nodeAttributesNode["RamRole"].asString();
	if(!nodeAttributesNode["KeyPairName"].isNull())
		cluster_.nodeAttributes.keyPairName = nodeAttributesNode["KeyPairName"].asString();
	if(!nodeAttributesNode["MasterRootPassword"].isNull())
		cluster_.nodeAttributes.masterRootPassword = nodeAttributesNode["MasterRootPassword"].asString();
	if(!nodeAttributesNode["DataDiskEncrypted"].isNull())
		cluster_.nodeAttributes.dataDiskEncrypted = nodeAttributesNode["DataDiskEncrypted"].asString() == "true";
	if(!nodeAttributesNode["DataDiskKMSKeyId"].isNull())
		cluster_.nodeAttributes.dataDiskKMSKeyId = nodeAttributesNode["DataDiskKMSKeyId"].asString();
	if(!nodeAttributesNode["EnableDeploymentSet"].isNull())
		cluster_.nodeAttributes.enableDeploymentSet = nodeAttributesNode["EnableDeploymentSet"].asString() == "true";
	if(!nodeAttributesNode["DeploymentSetId"].isNull())
		cluster_.nodeAttributes.deploymentSetId = nodeAttributesNode["DeploymentSetId"].asString();
	auto allUsersNode = nodeAttributesNode["Users"]["OSUser"];
	for (auto nodeAttributesNodeUsersOSUser : allUsersNode)
	{
		Cluster::NodeAttributes::OSUser oSUserObject;
		if(!nodeAttributesNodeUsersOSUser["Group"].isNull())
			oSUserObject.group = nodeAttributesNodeUsersOSUser["Group"].asString();
		if(!nodeAttributesNodeUsersOSUser["User"].isNull())
			oSUserObject.user = nodeAttributesNodeUsersOSUser["User"].asString();
		if(!nodeAttributesNodeUsersOSUser["Password"].isNull())
			oSUserObject.password = nodeAttributesNodeUsersOSUser["Password"].asString();
		cluster_.nodeAttributes.users.push_back(oSUserObject);
	}
	auto failedReasonNode = clusterNode["FailedReason"];
	if(!failedReasonNode["ErrorCode"].isNull())
		cluster_.failedReason.errorCode = failedReasonNode["ErrorCode"].asString();
	if(!failedReasonNode["ErrorMsg"].isNull())
		cluster_.failedReason.errorMsg = failedReasonNode["ErrorMsg"].asString();
	if(!failedReasonNode["ErrorMessage"].isNull())
		cluster_.failedReason.errorMessage = failedReasonNode["ErrorMessage"].asString();
	if(!failedReasonNode["RequestId"].isNull())
		cluster_.failedReason.requestId = failedReasonNode["RequestId"].asString();

}

GetClusterResult::Cluster GetClusterResult::getCluster()const
{
	return cluster_;
}

