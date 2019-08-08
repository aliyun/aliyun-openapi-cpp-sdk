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

#include <alibabacloud/smartag/model/BindVbrRequest.h>

using AlibabaCloud::Smartag::Model::BindVbrRequest;

BindVbrRequest::BindVbrRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "BindVbr")
{}

BindVbrRequest::~BindVbrRequest()
{}

long BindVbrRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BindVbrRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BindVbrRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BindVbrRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string BindVbrRequest::getRegionId()const
{
	return regionId_;
}

void BindVbrRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string BindVbrRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void BindVbrRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string BindVbrRequest::getSmartAGId()const
{
	return smartAGId_;
}

void BindVbrRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long BindVbrRequest::getOwnerId()const
{
	return ownerId_;
}

void BindVbrRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string BindVbrRequest::getVbrId()const
{
	return vbrId_;
}

void BindVbrRequest::setVbrId(const std::string& vbrId)
{
	vbrId_ = vbrId;
	setCoreParameter("VbrId", vbrId);
}

std::string BindVbrRequest::getVbrRegionId()const
{
	return vbrRegionId_;
}

void BindVbrRequest::setVbrRegionId(const std::string& vbrRegionId)
{
	vbrRegionId_ = vbrRegionId;
	setCoreParameter("VbrRegionId", vbrRegionId);
}

