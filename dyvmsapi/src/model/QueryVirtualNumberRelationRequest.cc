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

#include <alibabacloud/dyvmsapi/model/QueryVirtualNumberRelationRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryVirtualNumberRelationRequest;

QueryVirtualNumberRelationRequest::QueryVirtualNumberRelationRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryVirtualNumberRelation")
{
	setMethod(HttpRequest::Method::Post);
}

QueryVirtualNumberRelationRequest::~QueryVirtualNumberRelationRequest()
{}

long QueryVirtualNumberRelationRequest::getSpecId()const
{
	return specId_;
}

void QueryVirtualNumberRelationRequest::setSpecId(long specId)
{
	specId_ = specId;
	setParameter("SpecId", std::to_string(specId));
}

long QueryVirtualNumberRelationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryVirtualNumberRelationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryVirtualNumberRelationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryVirtualNumberRelationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int QueryVirtualNumberRelationRequest::getRouteType()const
{
	return routeType_;
}

void QueryVirtualNumberRelationRequest::setRouteType(int routeType)
{
	routeType_ = routeType;
	setParameter("RouteType", std::to_string(routeType));
}

int QueryVirtualNumberRelationRequest::getPageSize()const
{
	return pageSize_;
}

void QueryVirtualNumberRelationRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryVirtualNumberRelationRequest::getRelatedNum()const
{
	return relatedNum_;
}

void QueryVirtualNumberRelationRequest::setRelatedNum(const std::string& relatedNum)
{
	relatedNum_ = relatedNum;
	setParameter("RelatedNum", relatedNum);
}

std::string QueryVirtualNumberRelationRequest::getRegionNameCity()const
{
	return regionNameCity_;
}

void QueryVirtualNumberRelationRequest::setRegionNameCity(const std::string& regionNameCity)
{
	regionNameCity_ = regionNameCity;
	setParameter("RegionNameCity", regionNameCity);
}

long QueryVirtualNumberRelationRequest::getQualificationId()const
{
	return qualificationId_;
}

void QueryVirtualNumberRelationRequest::setQualificationId(long qualificationId)
{
	qualificationId_ = qualificationId;
	setParameter("QualificationId", std::to_string(qualificationId));
}

std::string QueryVirtualNumberRelationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryVirtualNumberRelationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryVirtualNumberRelationRequest::getProdCode()const
{
	return prodCode_;
}

void QueryVirtualNumberRelationRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setParameter("ProdCode", prodCode);
}

std::string QueryVirtualNumberRelationRequest::getPhoneNum()const
{
	return phoneNum_;
}

void QueryVirtualNumberRelationRequest::setPhoneNum(const std::string& phoneNum)
{
	phoneNum_ = phoneNum;
	setParameter("PhoneNum", phoneNum);
}

long QueryVirtualNumberRelationRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryVirtualNumberRelationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int QueryVirtualNumberRelationRequest::getPageNo()const
{
	return pageNo_;
}

void QueryVirtualNumberRelationRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

