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

#include <alibabacloud/ecs/model/DeleteInstancesRequest.h>

using AlibabaCloud::Ecs::Model::DeleteInstancesRequest;

DeleteInstancesRequest::DeleteInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteInstances")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteInstancesRequest::~DeleteInstancesRequest()
{}

long DeleteInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteInstancesRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteInstancesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DeleteInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DeleteInstancesRequest::getTerminateSubscription()const
{
	return terminateSubscription_;
}

void DeleteInstancesRequest::setTerminateSubscription(bool terminateSubscription)
{
	terminateSubscription_ = terminateSubscription;
	setParameter("TerminateSubscription", terminateSubscription ? "true" : "false");
}

bool DeleteInstancesRequest::getDryRun()const
{
	return dryRun_;
}

void DeleteInstancesRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string DeleteInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> DeleteInstancesRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteInstancesRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

bool DeleteInstancesRequest::getForce()const
{
	return force_;
}

void DeleteInstancesRequest::setForce(bool force)
{
	force_ = force;
	setParameter("Force", force ? "true" : "false");
}

