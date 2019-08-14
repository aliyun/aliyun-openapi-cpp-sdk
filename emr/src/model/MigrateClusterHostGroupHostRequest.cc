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

#include <alibabacloud/emr/model/MigrateClusterHostGroupHostRequest.h>

using AlibabaCloud::Emr::Model::MigrateClusterHostGroupHostRequest;

MigrateClusterHostGroupHostRequest::MigrateClusterHostGroupHostRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MigrateClusterHostGroupHost")
{}

MigrateClusterHostGroupHostRequest::~MigrateClusterHostGroupHostRequest()
{}

std::vector<std::string> MigrateClusterHostGroupHostRequest::getHostInstanceIdList()const
{
	return hostInstanceIdList_;
}

void MigrateClusterHostGroupHostRequest::setHostInstanceIdList(const std::vector<std::string>& hostInstanceIdList)
{
	hostInstanceIdList_ = hostInstanceIdList;
	for(int i = 0; i!= hostInstanceIdList.size(); i++)
		setCoreParameter("HostInstanceIdList."+ std::to_string(i), hostInstanceIdList.at(i));
}

long MigrateClusterHostGroupHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MigrateClusterHostGroupHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MigrateClusterHostGroupHostRequest::getRegionId()const
{
	return regionId_;
}

void MigrateClusterHostGroupHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string MigrateClusterHostGroupHostRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void MigrateClusterHostGroupHostRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setCoreParameter("HostGroupId", hostGroupId);
}

std::string MigrateClusterHostGroupHostRequest::getClusterId()const
{
	return clusterId_;
}

void MigrateClusterHostGroupHostRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string MigrateClusterHostGroupHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MigrateClusterHostGroupHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

