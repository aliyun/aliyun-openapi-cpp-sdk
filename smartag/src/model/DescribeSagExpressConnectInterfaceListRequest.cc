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

#include <alibabacloud/smartag/model/DescribeSagExpressConnectInterfaceListRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagExpressConnectInterfaceListRequest;

DescribeSagExpressConnectInterfaceListRequest::DescribeSagExpressConnectInterfaceListRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSagExpressConnectInterfaceList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSagExpressConnectInterfaceListRequest::~DescribeSagExpressConnectInterfaceListRequest()
{}

long DescribeSagExpressConnectInterfaceListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSagExpressConnectInterfaceListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSagExpressConnectInterfaceListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSagExpressConnectInterfaceListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSagExpressConnectInterfaceListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSagExpressConnectInterfaceListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSagExpressConnectInterfaceListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSagExpressConnectInterfaceListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSagExpressConnectInterfaceListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSagExpressConnectInterfaceListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSagExpressConnectInterfaceListRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSagExpressConnectInterfaceListRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

std::string DescribeSagExpressConnectInterfaceListRequest::getSmartAGSn()const
{
	return smartAGSn_;
}

void DescribeSagExpressConnectInterfaceListRequest::setSmartAGSn(const std::string& smartAGSn)
{
	smartAGSn_ = smartAGSn;
	setParameter("SmartAGSn", smartAGSn);
}

std::string DescribeSagExpressConnectInterfaceListRequest::getPortName()const
{
	return portName_;
}

void DescribeSagExpressConnectInterfaceListRequest::setPortName(const std::string& portName)
{
	portName_ = portName;
	setParameter("PortName", portName);
}

