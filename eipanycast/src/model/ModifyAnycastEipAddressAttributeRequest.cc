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

#include <alibabacloud/eipanycast/model/ModifyAnycastEipAddressAttributeRequest.h>

using AlibabaCloud::Eipanycast::Model::ModifyAnycastEipAddressAttributeRequest;

ModifyAnycastEipAddressAttributeRequest::ModifyAnycastEipAddressAttributeRequest() :
	RpcServiceRequest("eipanycast", "2020-03-09", "ModifyAnycastEipAddressAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyAnycastEipAddressAttributeRequest::~ModifyAnycastEipAddressAttributeRequest()
{}

std::string ModifyAnycastEipAddressAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyAnycastEipAddressAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyAnycastEipAddressAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAnycastEipAddressAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyAnycastEipAddressAttributeRequest::getAnycastId()const
{
	return anycastId_;
}

void ModifyAnycastEipAddressAttributeRequest::setAnycastId(const std::string& anycastId)
{
	anycastId_ = anycastId;
	setParameter("AnycastId", anycastId);
}

std::string ModifyAnycastEipAddressAttributeRequest::getName()const
{
	return name_;
}

void ModifyAnycastEipAddressAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

