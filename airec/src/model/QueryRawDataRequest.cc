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

#include <alibabacloud/airec/model/QueryRawDataRequest.h>

using AlibabaCloud::Airec::Model::QueryRawDataRequest;

QueryRawDataRequest::QueryRawDataRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/tables/[table]/raw-data");
	setMethod(HttpRequest::Method::Get);
}

QueryRawDataRequest::~QueryRawDataRequest()
{}

std::string QueryRawDataRequest::getItemId()const
{
	return itemId_;
}

void QueryRawDataRequest::setItemId(const std::string& itemId)
{
	itemId_ = itemId;
	setParameter("ItemId", itemId);
}

std::string QueryRawDataRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryRawDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string QueryRawDataRequest::getItemType()const
{
	return itemType_;
}

void QueryRawDataRequest::setItemType(const std::string& itemType)
{
	itemType_ = itemType;
	setParameter("ItemType", itemType);
}

std::string QueryRawDataRequest::getUserType()const
{
	return userType_;
}

void QueryRawDataRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setParameter("UserType", userType);
}

std::string QueryRawDataRequest::getUserId()const
{
	return userId_;
}

void QueryRawDataRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string QueryRawDataRequest::getTable()const
{
	return table_;
}

void QueryRawDataRequest::setTable(const std::string& table)
{
	table_ = table;
	setParameter("Table", table);
}

