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

#include <alibabacloud/ess/model/DetachDBInstancesRequest.h>

using AlibabaCloud::Ess::Model::DetachDBInstancesRequest;

DetachDBInstancesRequest::DetachDBInstancesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DetachDBInstances")
{}

DetachDBInstancesRequest::~DetachDBInstancesRequest()
{}

std::string DetachDBInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachDBInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachDBInstancesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DetachDBInstancesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

std::vector<std::string> DetachDBInstancesRequest::getDBInstance()const
{
	return dBInstance_;
}

void DetachDBInstancesRequest::setDBInstance(const std::vector<std::string>& dBInstance)
{
	dBInstance_ = dBInstance;
	for(int i = 0; i!= dBInstance.size(); i++)
		setCoreParameter("DBInstance."+ std::to_string(i), std::to_string(dBInstance.at(i)));
}

bool DetachDBInstancesRequest::getForceDetach()const
{
	return forceDetach_;
}

void DetachDBInstancesRequest::setForceDetach(bool forceDetach)
{
	forceDetach_ = forceDetach;
	setCoreParameter("ForceDetach", forceDetach);
}

long DetachDBInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachDBInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DetachDBInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetachDBInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

