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

#include <alibabacloud/reid/model/ImportSpecialPersonnelRequest.h>

using AlibabaCloud::Reid::Model::ImportSpecialPersonnelRequest;

ImportSpecialPersonnelRequest::ImportSpecialPersonnelRequest() :
	RpcServiceRequest("reid", "2019-09-28", "ImportSpecialPersonnel")
{
	setMethod(HttpRequest::Method::Post);
}

ImportSpecialPersonnelRequest::~ImportSpecialPersonnelRequest()
{}

long ImportSpecialPersonnelRequest::getUkId()const
{
	return ukId_;
}

void ImportSpecialPersonnelRequest::setUkId(long ukId)
{
	ukId_ = ukId;
	setBodyParameter("UkId", std::to_string(ukId));
}

std::string ImportSpecialPersonnelRequest::getDescription()const
{
	return description_;
}

void ImportSpecialPersonnelRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string ImportSpecialPersonnelRequest::getExternalId()const
{
	return externalId_;
}

void ImportSpecialPersonnelRequest::setExternalId(const std::string& externalId)
{
	externalId_ = externalId;
	setBodyParameter("ExternalId", externalId);
}

std::string ImportSpecialPersonnelRequest::getPersonType()const
{
	return personType_;
}

void ImportSpecialPersonnelRequest::setPersonType(const std::string& personType)
{
	personType_ = personType;
	setBodyParameter("PersonType", personType);
}

std::string ImportSpecialPersonnelRequest::getUrls()const
{
	return urls_;
}

void ImportSpecialPersonnelRequest::setUrls(const std::string& urls)
{
	urls_ = urls;
	setBodyParameter("Urls", urls);
}

std::string ImportSpecialPersonnelRequest::getPersonName()const
{
	return personName_;
}

void ImportSpecialPersonnelRequest::setPersonName(const std::string& personName)
{
	personName_ = personName;
	setBodyParameter("PersonName", personName);
}

std::string ImportSpecialPersonnelRequest::getStoreIds()const
{
	return storeIds_;
}

void ImportSpecialPersonnelRequest::setStoreIds(const std::string& storeIds)
{
	storeIds_ = storeIds;
	setBodyParameter("StoreIds", storeIds);
}

std::string ImportSpecialPersonnelRequest::getStatus()const
{
	return status_;
}

void ImportSpecialPersonnelRequest::setStatus(const std::string& status)
{
	status_ = status;
	setBodyParameter("Status", status);
}

