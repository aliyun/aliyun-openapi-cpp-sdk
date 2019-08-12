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

#include <alibabacloud/ess/model/AttachDBInstancesRequest.h>

using AlibabaCloud::Ess::Model::AttachDBInstancesRequest;

AttachDBInstancesRequest::AttachDBInstancesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "AttachDBInstances")
{}

AttachDBInstancesRequest::~AttachDBInstancesRequest()
{}

std::string AttachDBInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AttachDBInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AttachDBInstancesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void AttachDBInstancesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", std::to_string(scalingGroupId));
}

bool AttachDBInstancesRequest::getForceAttach()const
{
	return forceAttach_;
}

void AttachDBInstancesRequest::setForceAttach(bool forceAttach)
{
	forceAttach_ = forceAttach;
	setCoreParameter("ForceAttach", forceAttach ? "true" : "false");
}

std::vector<std::string> AttachDBInstancesRequest::getDBInstance()const
{
	return dBInstance_;
}

void AttachDBInstancesRequest::setDBInstance(const std::vector<std::string>& dBInstance)
{
	dBInstance_ = dBInstance;
	for(int i = 0; i!= dBInstance.size(); i++)
		setCoreParameter("DBInstance."+ std::to_string(i), std::to_string(dBInstance.at(i)));
}

long AttachDBInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void AttachDBInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AttachDBInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AttachDBInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

