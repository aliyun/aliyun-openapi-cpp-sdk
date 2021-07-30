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

#include <alibabacloud/dyvmsapi/model/QueryVirtualNumberRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryVirtualNumberRequest;

QueryVirtualNumberRequest::QueryVirtualNumberRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryVirtualNumber")
{
	setMethod(HttpRequest::Method::Post);
}

QueryVirtualNumberRequest::~QueryVirtualNumberRequest()
{}

long QueryVirtualNumberRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryVirtualNumberRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryVirtualNumberRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryVirtualNumberRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int QueryVirtualNumberRequest::getRouteType()const
{
	return routeType_;
}

void QueryVirtualNumberRequest::setRouteType(int routeType)
{
	routeType_ = routeType;
	setParameter("RouteType", std::to_string(routeType));
}

int QueryVirtualNumberRequest::getPageSize()const
{
	return pageSize_;
}

void QueryVirtualNumberRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryVirtualNumberRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryVirtualNumberRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryVirtualNumberRequest::getProdCode()const
{
	return prodCode_;
}

void QueryVirtualNumberRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setParameter("ProdCode", prodCode);
}

long QueryVirtualNumberRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryVirtualNumberRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int QueryVirtualNumberRequest::getPageNo()const
{
	return pageNo_;
}

void QueryVirtualNumberRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

