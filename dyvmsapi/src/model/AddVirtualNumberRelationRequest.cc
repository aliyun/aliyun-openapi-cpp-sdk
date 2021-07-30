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

#include <alibabacloud/dyvmsapi/model/AddVirtualNumberRelationRequest.h>

using AlibabaCloud::Dyvmsapi::Model::AddVirtualNumberRelationRequest;

AddVirtualNumberRelationRequest::AddVirtualNumberRelationRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "AddVirtualNumberRelation")
{
	setMethod(HttpRequest::Method::Post);
}

AddVirtualNumberRelationRequest::~AddVirtualNumberRelationRequest()
{}

long AddVirtualNumberRelationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddVirtualNumberRelationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddVirtualNumberRelationRequest::getNumberList()const
{
	return numberList_;
}

void AddVirtualNumberRelationRequest::setNumberList(const std::string& numberList)
{
	numberList_ = numberList;
	setParameter("NumberList", numberList);
}

std::string AddVirtualNumberRelationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddVirtualNumberRelationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int AddVirtualNumberRelationRequest::getRouteType()const
{
	return routeType_;
}

void AddVirtualNumberRelationRequest::setRouteType(int routeType)
{
	routeType_ = routeType;
	setParameter("RouteType", std::to_string(routeType));
}

std::string AddVirtualNumberRelationRequest::getCorpNameList()const
{
	return corpNameList_;
}

void AddVirtualNumberRelationRequest::setCorpNameList(const std::string& corpNameList)
{
	corpNameList_ = corpNameList;
	setParameter("CorpNameList", corpNameList);
}

std::string AddVirtualNumberRelationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddVirtualNumberRelationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddVirtualNumberRelationRequest::getProdCode()const
{
	return prodCode_;
}

void AddVirtualNumberRelationRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setParameter("ProdCode", prodCode);
}

std::string AddVirtualNumberRelationRequest::getPhoneNum()const
{
	return phoneNum_;
}

void AddVirtualNumberRelationRequest::setPhoneNum(const std::string& phoneNum)
{
	phoneNum_ = phoneNum;
	setParameter("PhoneNum", phoneNum);
}

long AddVirtualNumberRelationRequest::getOwnerId()const
{
	return ownerId_;
}

void AddVirtualNumberRelationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

