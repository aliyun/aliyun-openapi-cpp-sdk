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

#include <alibabacloud/ots/model/BindInstance2VpcRequest.h>

using AlibabaCloud::Ots::Model::BindInstance2VpcRequest;

BindInstance2VpcRequest::BindInstance2VpcRequest() :
	RpcServiceRequest("ots", "2016-06-20", "BindInstance2Vpc")
{}

BindInstance2VpcRequest::~BindInstance2VpcRequest()
{}

std::string BindInstance2VpcRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void BindInstance2VpcRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

std::string BindInstance2VpcRequest::getInstanceVpcName()const
{
	return instanceVpcName_;
}

void BindInstance2VpcRequest::setInstanceVpcName(const std::string& instanceVpcName)
{
	instanceVpcName_ = instanceVpcName;
	setCoreParameter("InstanceVpcName", instanceVpcName);
}

long BindInstance2VpcRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BindInstance2VpcRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BindInstance2VpcRequest::getInstanceName()const
{
	return instanceName_;
}

void BindInstance2VpcRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

std::string BindInstance2VpcRequest::getVpcId()const
{
	return vpcId_;
}

void BindInstance2VpcRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string BindInstance2VpcRequest::getVirtualSwitchId()const
{
	return virtualSwitchId_;
}

void BindInstance2VpcRequest::setVirtualSwitchId(const std::string& virtualSwitchId)
{
	virtualSwitchId_ = virtualSwitchId;
	setCoreParameter("VirtualSwitchId", virtualSwitchId);
}

std::string BindInstance2VpcRequest::getRegionNo()const
{
	return regionNo_;
}

void BindInstance2VpcRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setCoreParameter("RegionNo", regionNo);
}

std::string BindInstance2VpcRequest::getNetwork()const
{
	return network_;
}

void BindInstance2VpcRequest::setNetwork(const std::string& network)
{
	network_ = network;
	setCoreParameter("Network", network);
}

