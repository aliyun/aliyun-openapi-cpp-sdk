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

#include <alibabacloud/emr/model/RemoveClusterHostsRequest.h>

using AlibabaCloud::Emr::Model::RemoveClusterHostsRequest;

RemoveClusterHostsRequest::RemoveClusterHostsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RemoveClusterHosts")
{}

RemoveClusterHostsRequest::~RemoveClusterHostsRequest()
{}

long RemoveClusterHostsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveClusterHostsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RemoveClusterHostsRequest::getRegionId()const
{
	return regionId_;
}

void RemoveClusterHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RemoveClusterHostsRequest::getClusterId()const
{
	return clusterId_;
}

void RemoveClusterHostsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::vector<std::string> RemoveClusterHostsRequest::getHostIdList()const
{
	return hostIdList_;
}

void RemoveClusterHostsRequest::setHostIdList(const std::vector<std::string>& hostIdList)
{
	hostIdList_ = hostIdList;
	for(int i = 0; i!= hostIdList.size(); i++)
		setCoreParameter("HostIdList."+ std::to_string(i), hostIdList.at(i));
}

std::string RemoveClusterHostsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveClusterHostsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

