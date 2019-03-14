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

#include <alibabacloud/emr/model/AttachPubIpRequest.h>

using AlibabaCloud::Emr::Model::AttachPubIpRequest;

AttachPubIpRequest::AttachPubIpRequest() :
	RpcServiceRequest("emr", "2016-04-08", "AttachPubIp")
{}

AttachPubIpRequest::~AttachPubIpRequest()
{}

long AttachPubIpRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AttachPubIpRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AttachPubIpRequest::getRegionId()const
{
	return regionId_;
}

void AttachPubIpRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> AttachPubIpRequest::getInstanceIds()const
{
	return instanceIds_;
}

void AttachPubIpRequest::setInstanceIds(const std::vector<std::string>& instanceIds)
{
	instanceIds_ = instanceIds;
	for(int i = 0; i!= instanceIds.size(); i++)
		setParameter("InstanceIds."+ std::to_string(i), instanceIds.at(i));
}

std::string AttachPubIpRequest::getClusterId()const
{
	return clusterId_;
}

void AttachPubIpRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string AttachPubIpRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AttachPubIpRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

