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

#include <alibabacloud/dg/model/GetUserDatabasesRequest.h>

using AlibabaCloud::Dg::Model::GetUserDatabasesRequest;

GetUserDatabasesRequest::GetUserDatabasesRequest() :
	RpcServiceRequest("dg", "2019-03-27", "GetUserDatabases")
{
	setMethod(HttpRequest::Method::Post);
}

GetUserDatabasesRequest::~GetUserDatabasesRequest()
{}

std::string GetUserDatabasesRequest::getSearchKey()const
{
	return searchKey_;
}

void GetUserDatabasesRequest::setSearchKey(const std::string& searchKey)
{
	searchKey_ = searchKey;
	setBodyParameter("SearchKey", searchKey);
}

std::string GetUserDatabasesRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetUserDatabasesRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string GetUserDatabasesRequest::getRegionId()const
{
	return regionId_;
}

void GetUserDatabasesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string GetUserDatabasesRequest::getPageSize()const
{
	return pageSize_;
}

void GetUserDatabasesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string GetUserDatabasesRequest::getHost()const
{
	return host_;
}

void GetUserDatabasesRequest::setHost(const std::string& host)
{
	host_ = host;
	setBodyParameter("Host", host);
}

std::string GetUserDatabasesRequest::getGatewayId()const
{
	return gatewayId_;
}

void GetUserDatabasesRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setBodyParameter("GatewayId", gatewayId);
}

std::string GetUserDatabasesRequest::getInstanceId()const
{
	return instanceId_;
}

void GetUserDatabasesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

int GetUserDatabasesRequest::getPort()const
{
	return port_;
}

void GetUserDatabasesRequest::setPort(int port)
{
	port_ = port;
	setBodyParameter("Port", std::to_string(port));
}

std::string GetUserDatabasesRequest::getDbType()const
{
	return dbType_;
}

void GetUserDatabasesRequest::setDbType(const std::string& dbType)
{
	dbType_ = dbType;
	setBodyParameter("DbType", dbType);
}

