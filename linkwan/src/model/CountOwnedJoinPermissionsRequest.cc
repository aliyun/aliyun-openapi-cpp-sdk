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

#include <alibabacloud/linkwan/model/CountOwnedJoinPermissionsRequest.h>

using AlibabaCloud::LinkWAN::Model::CountOwnedJoinPermissionsRequest;

CountOwnedJoinPermissionsRequest::CountOwnedJoinPermissionsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CountOwnedJoinPermissions")
{
	setMethod(HttpRequest::Method::Post);
}

CountOwnedJoinPermissionsRequest::~CountOwnedJoinPermissionsRequest()
{}

bool CountOwnedJoinPermissionsRequest::getEnabled()const
{
	return enabled_;
}

void CountOwnedJoinPermissionsRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string CountOwnedJoinPermissionsRequest::getFuzzyJoinEui()const
{
	return fuzzyJoinEui_;
}

void CountOwnedJoinPermissionsRequest::setFuzzyJoinEui(const std::string& fuzzyJoinEui)
{
	fuzzyJoinEui_ = fuzzyJoinEui;
	setParameter("FuzzyJoinEui", fuzzyJoinEui);
}

std::string CountOwnedJoinPermissionsRequest::getFuzzyJoinPermissionName()const
{
	return fuzzyJoinPermissionName_;
}

void CountOwnedJoinPermissionsRequest::setFuzzyJoinPermissionName(const std::string& fuzzyJoinPermissionName)
{
	fuzzyJoinPermissionName_ = fuzzyJoinPermissionName;
	setParameter("FuzzyJoinPermissionName", fuzzyJoinPermissionName);
}

std::string CountOwnedJoinPermissionsRequest::getFuzzyRenterAliyunId()const
{
	return fuzzyRenterAliyunId_;
}

void CountOwnedJoinPermissionsRequest::setFuzzyRenterAliyunId(const std::string& fuzzyRenterAliyunId)
{
	fuzzyRenterAliyunId_ = fuzzyRenterAliyunId;
	setParameter("FuzzyRenterAliyunId", fuzzyRenterAliyunId);
}

std::string CountOwnedJoinPermissionsRequest::getApiProduct()const
{
	return apiProduct_;
}

void CountOwnedJoinPermissionsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CountOwnedJoinPermissionsRequest::getApiRevision()const
{
	return apiRevision_;
}

void CountOwnedJoinPermissionsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

