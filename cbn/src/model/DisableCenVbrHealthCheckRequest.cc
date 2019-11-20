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

#include <alibabacloud/cbn/model/DisableCenVbrHealthCheckRequest.h>

using AlibabaCloud::Cbn::Model::DisableCenVbrHealthCheckRequest;

DisableCenVbrHealthCheckRequest::DisableCenVbrHealthCheckRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DisableCenVbrHealthCheck")
{
	setMethod(HttpRequest::Method::Post);
}

DisableCenVbrHealthCheckRequest::~DisableCenVbrHealthCheckRequest()
{}

long DisableCenVbrHealthCheckRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DisableCenVbrHealthCheckRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DisableCenVbrHealthCheckRequest::getCenId()const
{
	return cenId_;
}

void DisableCenVbrHealthCheckRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

long DisableCenVbrHealthCheckRequest::getVbrInstanceOwnerId()const
{
	return vbrInstanceOwnerId_;
}

void DisableCenVbrHealthCheckRequest::setVbrInstanceOwnerId(long vbrInstanceOwnerId)
{
	vbrInstanceOwnerId_ = vbrInstanceOwnerId;
	setCoreParameter("VbrInstanceOwnerId", std::to_string(vbrInstanceOwnerId));
}

std::string DisableCenVbrHealthCheckRequest::getVbrInstanceRegionId()const
{
	return vbrInstanceRegionId_;
}

void DisableCenVbrHealthCheckRequest::setVbrInstanceRegionId(const std::string& vbrInstanceRegionId)
{
	vbrInstanceRegionId_ = vbrInstanceRegionId;
	setCoreParameter("VbrInstanceRegionId", vbrInstanceRegionId);
}

std::string DisableCenVbrHealthCheckRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DisableCenVbrHealthCheckRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DisableCenVbrHealthCheckRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DisableCenVbrHealthCheckRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DisableCenVbrHealthCheckRequest::getOwnerId()const
{
	return ownerId_;
}

void DisableCenVbrHealthCheckRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DisableCenVbrHealthCheckRequest::getVbrInstanceId()const
{
	return vbrInstanceId_;
}

void DisableCenVbrHealthCheckRequest::setVbrInstanceId(const std::string& vbrInstanceId)
{
	vbrInstanceId_ = vbrInstanceId;
	setCoreParameter("VbrInstanceId", vbrInstanceId);
}

