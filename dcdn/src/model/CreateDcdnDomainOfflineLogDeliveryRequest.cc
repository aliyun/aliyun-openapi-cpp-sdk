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

#include <alibabacloud/dcdn/model/CreateDcdnDomainOfflineLogDeliveryRequest.h>

using AlibabaCloud::Dcdn::Model::CreateDcdnDomainOfflineLogDeliveryRequest;

CreateDcdnDomainOfflineLogDeliveryRequest::CreateDcdnDomainOfflineLogDeliveryRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "CreateDcdnDomainOfflineLogDelivery")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDcdnDomainOfflineLogDeliveryRequest::~CreateDcdnDomainOfflineLogDeliveryRequest()
{}

std::string CreateDcdnDomainOfflineLogDeliveryRequest::getRegionId()const
{
	return regionId_;
}

void CreateDcdnDomainOfflineLogDeliveryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string CreateDcdnDomainOfflineLogDeliveryRequest::getDomainName()const
{
	return domainName_;
}

void CreateDcdnDomainOfflineLogDeliveryRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setBodyParameter("DomainName", domainName);
}

long CreateDcdnDomainOfflineLogDeliveryRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDcdnDomainOfflineLogDeliveryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDcdnDomainOfflineLogDeliveryRequest::getFieldId()const
{
	return fieldId_;
}

void CreateDcdnDomainOfflineLogDeliveryRequest::setFieldId(const std::string& fieldId)
{
	fieldId_ = fieldId;
	setBodyParameter("FieldId", fieldId);
}

