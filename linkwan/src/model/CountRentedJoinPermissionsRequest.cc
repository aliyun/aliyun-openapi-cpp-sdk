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

#include <alibabacloud/linkwan/model/CountRentedJoinPermissionsRequest.h>

using AlibabaCloud::LinkWAN::Model::CountRentedJoinPermissionsRequest;

CountRentedJoinPermissionsRequest::CountRentedJoinPermissionsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CountRentedJoinPermissions")
{
	setMethod(HttpRequest::Method::Post);
}

CountRentedJoinPermissionsRequest::~CountRentedJoinPermissionsRequest()
{}

std::string CountRentedJoinPermissionsRequest::getType()const
{
	return type_;
}

void CountRentedJoinPermissionsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

bool CountRentedJoinPermissionsRequest::getEnabled()const
{
	return enabled_;
}

void CountRentedJoinPermissionsRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string CountRentedJoinPermissionsRequest::getFuzzyJoinEui()const
{
	return fuzzyJoinEui_;
}

void CountRentedJoinPermissionsRequest::setFuzzyJoinEui(const std::string& fuzzyJoinEui)
{
	fuzzyJoinEui_ = fuzzyJoinEui;
	setParameter("FuzzyJoinEui", fuzzyJoinEui);
}

std::string CountRentedJoinPermissionsRequest::getFuzzyJoinPermissionName()const
{
	return fuzzyJoinPermissionName_;
}

void CountRentedJoinPermissionsRequest::setFuzzyJoinPermissionName(const std::string& fuzzyJoinPermissionName)
{
	fuzzyJoinPermissionName_ = fuzzyJoinPermissionName;
	setParameter("FuzzyJoinPermissionName", fuzzyJoinPermissionName);
}

bool CountRentedJoinPermissionsRequest::getBoundNodeGroup()const
{
	return boundNodeGroup_;
}

void CountRentedJoinPermissionsRequest::setBoundNodeGroup(bool boundNodeGroup)
{
	boundNodeGroup_ = boundNodeGroup;
	setParameter("BoundNodeGroup", boundNodeGroup ? "true" : "false");
}

std::string CountRentedJoinPermissionsRequest::getApiProduct()const
{
	return apiProduct_;
}

void CountRentedJoinPermissionsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CountRentedJoinPermissionsRequest::getApiRevision()const
{
	return apiRevision_;
}

void CountRentedJoinPermissionsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CountRentedJoinPermissionsRequest::getFuzzyOwnerAliyunId()const
{
	return fuzzyOwnerAliyunId_;
}

void CountRentedJoinPermissionsRequest::setFuzzyOwnerAliyunId(const std::string& fuzzyOwnerAliyunId)
{
	fuzzyOwnerAliyunId_ = fuzzyOwnerAliyunId;
	setParameter("FuzzyOwnerAliyunId", fuzzyOwnerAliyunId);
}

