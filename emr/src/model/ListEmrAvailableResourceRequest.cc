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

#include <alibabacloud/emr/model/ListEmrAvailableResourceRequest.h>

using AlibabaCloud::Emr::Model::ListEmrAvailableResourceRequest;

ListEmrAvailableResourceRequest::ListEmrAvailableResourceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListEmrAvailableResource")
{
	setMethod(HttpRequest::Method::Post);
}

ListEmrAvailableResourceRequest::~ListEmrAvailableResourceRequest()
{}

long ListEmrAvailableResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListEmrAvailableResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListEmrAvailableResourceRequest::getDepositType()const
{
	return depositType_;
}

void ListEmrAvailableResourceRequest::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setParameter("DepositType", depositType);
}

std::string ListEmrAvailableResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListEmrAvailableResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListEmrAvailableResourceRequest::getSystemDiskType()const
{
	return systemDiskType_;
}

void ListEmrAvailableResourceRequest::setSystemDiskType(const std::string& systemDiskType)
{
	systemDiskType_ = systemDiskType;
	setParameter("SystemDiskType", systemDiskType);
}

std::string ListEmrAvailableResourceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListEmrAvailableResourceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListEmrAvailableResourceRequest::getRegionId()const
{
	return regionId_;
}

void ListEmrAvailableResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListEmrAvailableResourceRequest::getInstanceType()const
{
	return instanceType_;
}

void ListEmrAvailableResourceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string ListEmrAvailableResourceRequest::getEmrVersion()const
{
	return emrVersion_;
}

void ListEmrAvailableResourceRequest::setEmrVersion(const std::string& emrVersion)
{
	emrVersion_ = emrVersion;
	setParameter("EmrVersion", emrVersion);
}

std::string ListEmrAvailableResourceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void ListEmrAvailableResourceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string ListEmrAvailableResourceRequest::getClusterId()const
{
	return clusterId_;
}

void ListEmrAvailableResourceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListEmrAvailableResourceRequest::getDestinationResource()const
{
	return destinationResource_;
}

void ListEmrAvailableResourceRequest::setDestinationResource(const std::string& destinationResource)
{
	destinationResource_ = destinationResource;
	setParameter("DestinationResource", destinationResource);
}

std::string ListEmrAvailableResourceRequest::getClusterType()const
{
	return clusterType_;
}

void ListEmrAvailableResourceRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

std::string ListEmrAvailableResourceRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void ListEmrAvailableResourceRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

std::string ListEmrAvailableResourceRequest::getNetType()const
{
	return netType_;
}

void ListEmrAvailableResourceRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setParameter("NetType", netType);
}

std::string ListEmrAvailableResourceRequest::getZoneId()const
{
	return zoneId_;
}

void ListEmrAvailableResourceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string ListEmrAvailableResourceRequest::getDataDiskType()const
{
	return dataDiskType_;
}

void ListEmrAvailableResourceRequest::setDataDiskType(const std::string& dataDiskType)
{
	dataDiskType_ = dataDiskType;
	setParameter("DataDiskType", dataDiskType);
}

