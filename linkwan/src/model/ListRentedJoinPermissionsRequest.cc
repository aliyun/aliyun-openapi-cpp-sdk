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

#include <alibabacloud/linkwan/model/ListRentedJoinPermissionsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListRentedJoinPermissionsRequest;

ListRentedJoinPermissionsRequest::ListRentedJoinPermissionsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListRentedJoinPermissions")
{
	setMethod(HttpRequest::Method::Post);
}

ListRentedJoinPermissionsRequest::~ListRentedJoinPermissionsRequest()
{}

std::string ListRentedJoinPermissionsRequest::getType()const
{
	return type_;
}

void ListRentedJoinPermissionsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

bool ListRentedJoinPermissionsRequest::getEnabled()const
{
	return enabled_;
}

void ListRentedJoinPermissionsRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string ListRentedJoinPermissionsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListRentedJoinPermissionsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListRentedJoinPermissionsRequest::getFuzzyJoinEui()const
{
	return fuzzyJoinEui_;
}

void ListRentedJoinPermissionsRequest::setFuzzyJoinEui(const std::string& fuzzyJoinEui)
{
	fuzzyJoinEui_ = fuzzyJoinEui;
	setParameter("FuzzyJoinEui", fuzzyJoinEui);
}

long ListRentedJoinPermissionsRequest::getLimit()const
{
	return limit_;
}

void ListRentedJoinPermissionsRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string ListRentedJoinPermissionsRequest::getFuzzyJoinPermissionName()const
{
	return fuzzyJoinPermissionName_;
}

void ListRentedJoinPermissionsRequest::setFuzzyJoinPermissionName(const std::string& fuzzyJoinPermissionName)
{
	fuzzyJoinPermissionName_ = fuzzyJoinPermissionName;
	setParameter("FuzzyJoinPermissionName", fuzzyJoinPermissionName);
}

long ListRentedJoinPermissionsRequest::getOffset()const
{
	return offset_;
}

void ListRentedJoinPermissionsRequest::setOffset(long offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

bool ListRentedJoinPermissionsRequest::getAscending()const
{
	return ascending_;
}

void ListRentedJoinPermissionsRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

bool ListRentedJoinPermissionsRequest::getBoundNodeGroup()const
{
	return boundNodeGroup_;
}

void ListRentedJoinPermissionsRequest::setBoundNodeGroup(bool boundNodeGroup)
{
	boundNodeGroup_ = boundNodeGroup;
	setParameter("BoundNodeGroup", boundNodeGroup ? "true" : "false");
}

std::string ListRentedJoinPermissionsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListRentedJoinPermissionsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListRentedJoinPermissionsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListRentedJoinPermissionsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListRentedJoinPermissionsRequest::getFuzzyOwnerAliyunId()const
{
	return fuzzyOwnerAliyunId_;
}

void ListRentedJoinPermissionsRequest::setFuzzyOwnerAliyunId(const std::string& fuzzyOwnerAliyunId)
{
	fuzzyOwnerAliyunId_ = fuzzyOwnerAliyunId;
	setParameter("FuzzyOwnerAliyunId", fuzzyOwnerAliyunId);
}

std::string ListRentedJoinPermissionsRequest::getSortingField()const
{
	return sortingField_;
}

void ListRentedJoinPermissionsRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

