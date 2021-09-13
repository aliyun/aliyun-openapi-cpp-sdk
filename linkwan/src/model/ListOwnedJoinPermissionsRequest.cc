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

#include <alibabacloud/linkwan/model/ListOwnedJoinPermissionsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListOwnedJoinPermissionsRequest;

ListOwnedJoinPermissionsRequest::ListOwnedJoinPermissionsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListOwnedJoinPermissions")
{
	setMethod(HttpRequest::Method::Post);
}

ListOwnedJoinPermissionsRequest::~ListOwnedJoinPermissionsRequest()
{}

bool ListOwnedJoinPermissionsRequest::getEnabled()const
{
	return enabled_;
}

void ListOwnedJoinPermissionsRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string ListOwnedJoinPermissionsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListOwnedJoinPermissionsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListOwnedJoinPermissionsRequest::getFuzzyJoinEui()const
{
	return fuzzyJoinEui_;
}

void ListOwnedJoinPermissionsRequest::setFuzzyJoinEui(const std::string& fuzzyJoinEui)
{
	fuzzyJoinEui_ = fuzzyJoinEui;
	setParameter("FuzzyJoinEui", fuzzyJoinEui);
}

long ListOwnedJoinPermissionsRequest::getLimit()const
{
	return limit_;
}

void ListOwnedJoinPermissionsRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string ListOwnedJoinPermissionsRequest::getFuzzyJoinPermissionName()const
{
	return fuzzyJoinPermissionName_;
}

void ListOwnedJoinPermissionsRequest::setFuzzyJoinPermissionName(const std::string& fuzzyJoinPermissionName)
{
	fuzzyJoinPermissionName_ = fuzzyJoinPermissionName;
	setParameter("FuzzyJoinPermissionName", fuzzyJoinPermissionName);
}

long ListOwnedJoinPermissionsRequest::getOffset()const
{
	return offset_;
}

void ListOwnedJoinPermissionsRequest::setOffset(long offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

std::string ListOwnedJoinPermissionsRequest::getFuzzyRenterAliyunId()const
{
	return fuzzyRenterAliyunId_;
}

void ListOwnedJoinPermissionsRequest::setFuzzyRenterAliyunId(const std::string& fuzzyRenterAliyunId)
{
	fuzzyRenterAliyunId_ = fuzzyRenterAliyunId;
	setParameter("FuzzyRenterAliyunId", fuzzyRenterAliyunId);
}

bool ListOwnedJoinPermissionsRequest::getAscending()const
{
	return ascending_;
}

void ListOwnedJoinPermissionsRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string ListOwnedJoinPermissionsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListOwnedJoinPermissionsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListOwnedJoinPermissionsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListOwnedJoinPermissionsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListOwnedJoinPermissionsRequest::getSortingField()const
{
	return sortingField_;
}

void ListOwnedJoinPermissionsRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

