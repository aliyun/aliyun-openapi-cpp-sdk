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

#include <alibabacloud/retailcloud/model/CreateClusterRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateClusterRequest::~CreateClusterRequest()
{}

std::string CreateClusterRequest::getBusinessCode()const
{
	return businessCode_;
}

void CreateClusterRequest::setBusinessCode(const std::string& businessCode)
{
	businessCode_ = businessCode;
	setParameter("BusinessCode", businessCode);
}

bool CreateClusterRequest::getCreateWithLogIntegration()const
{
	return createWithLogIntegration_;
}

void CreateClusterRequest::setCreateWithLogIntegration(bool createWithLogIntegration)
{
	createWithLogIntegration_ = createWithLogIntegration;
	setParameter("CreateWithLogIntegration", createWithLogIntegration ? "true" : "false");
}

std::vector<std::string> CreateClusterRequest::getVswitchids()const
{
	return vswitchids_;
}

void CreateClusterRequest::setVswitchids(const std::vector<std::string>& vswitchids)
{
	vswitchids_ = vswitchids;
	for(int dep1 = 0; dep1!= vswitchids.size(); dep1++) {
		setParameter("Vswitchids."+ std::to_string(dep1), vswitchids.at(dep1));
	}
}

int CreateClusterRequest::getCloudMonitorFlags()const
{
	return cloudMonitorFlags_;
}

void CreateClusterRequest::setCloudMonitorFlags(int cloudMonitorFlags)
{
	cloudMonitorFlags_ = cloudMonitorFlags;
	setParameter("CloudMonitorFlags", std::to_string(cloudMonitorFlags));
}

std::string CreateClusterRequest::getClusterEnvType()const
{
	return clusterEnvType_;
}

void CreateClusterRequest::setClusterEnvType(const std::string& clusterEnvType)
{
	clusterEnvType_ = clusterEnvType;
	setParameter("ClusterEnvType", clusterEnvType);
}

bool CreateClusterRequest::getCreateWithArmsIntegration()const
{
	return createWithArmsIntegration_;
}

void CreateClusterRequest::setCreateWithArmsIntegration(bool createWithArmsIntegration)
{
	createWithArmsIntegration_ = createWithArmsIntegration;
	setParameter("CreateWithArmsIntegration", createWithArmsIntegration ? "true" : "false");
}

std::string CreateClusterRequest::getKeyPair()const
{
	return keyPair_;
}

void CreateClusterRequest::setKeyPair(const std::string& keyPair)
{
	keyPair_ = keyPair;
	setParameter("KeyPair", keyPair);
}

std::string CreateClusterRequest::getClusterTitle()const
{
	return clusterTitle_;
}

void CreateClusterRequest::setClusterTitle(const std::string& clusterTitle)
{
	clusterTitle_ = clusterTitle;
	setParameter("ClusterTitle", clusterTitle);
}

std::string CreateClusterRequest::getPodCIDR()const
{
	return podCIDR_;
}

void CreateClusterRequest::setPodCIDR(const std::string& podCIDR)
{
	podCIDR_ = podCIDR;
	setParameter("PodCIDR", podCIDR);
}

long CreateClusterRequest::getClusterId()const
{
	return clusterId_;
}

void CreateClusterRequest::setClusterId(long clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", std::to_string(clusterId));
}

std::string CreateClusterRequest::getClusterType()const
{
	return clusterType_;
}

void CreateClusterRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

std::string CreateClusterRequest::getPassword()const
{
	return password_;
}

void CreateClusterRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

int CreateClusterRequest::getSnatEntry()const
{
	return snatEntry_;
}

void CreateClusterRequest::setSnatEntry(int snatEntry)
{
	snatEntry_ = snatEntry;
	setParameter("SnatEntry", std::to_string(snatEntry));
}

std::string CreateClusterRequest::getNetPlug()const
{
	return netPlug_;
}

void CreateClusterRequest::setNetPlug(const std::string& netPlug)
{
	netPlug_ = netPlug;
	setParameter("NetPlug", netPlug);
}

std::string CreateClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateClusterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateClusterRequest::getRegionName()const
{
	return regionName_;
}

void CreateClusterRequest::setRegionName(const std::string& regionName)
{
	regionName_ = regionName;
	setParameter("RegionName", regionName);
}

bool CreateClusterRequest::getPrivateZone()const
{
	return privateZone_;
}

void CreateClusterRequest::setPrivateZone(bool privateZone)
{
	privateZone_ = privateZone;
	setParameter("PrivateZone", privateZone ? "true" : "false");
}

std::string CreateClusterRequest::getServiceCIDR()const
{
	return serviceCIDR_;
}

void CreateClusterRequest::setServiceCIDR(const std::string& serviceCIDR)
{
	serviceCIDR_ = serviceCIDR;
	setParameter("ServiceCIDR", serviceCIDR);
}

int CreateClusterRequest::getPublicSlb()const
{
	return publicSlb_;
}

void CreateClusterRequest::setPublicSlb(int publicSlb)
{
	publicSlb_ = publicSlb;
	setParameter("PublicSlb", std::to_string(publicSlb));
}

