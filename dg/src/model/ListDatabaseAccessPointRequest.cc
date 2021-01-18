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

#include <alibabacloud/dg/model/ListDatabaseAccessPointRequest.h>

using AlibabaCloud::Dg::Model::ListDatabaseAccessPointRequest;

ListDatabaseAccessPointRequest::ListDatabaseAccessPointRequest() :
	RpcServiceRequest("dg", "2019-03-27", "ListDatabaseAccessPoint")
{
	setMethod(HttpRequest::Method::Post);
}

ListDatabaseAccessPointRequest::~ListDatabaseAccessPointRequest()
{}

std::string ListDatabaseAccessPointRequest::getSearchKey()const
{
	return searchKey_;
}

void ListDatabaseAccessPointRequest::setSearchKey(const std::string& searchKey)
{
	searchKey_ = searchKey;
	setBodyParameter("SearchKey", searchKey);
}

std::string ListDatabaseAccessPointRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDatabaseAccessPointRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListDatabaseAccessPointRequest::getRegionId()const
{
	return regionId_;
}

void ListDatabaseAccessPointRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string ListDatabaseAccessPointRequest::getPageSize()const
{
	return pageSize_;
}

void ListDatabaseAccessPointRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string ListDatabaseAccessPointRequest::getHost()const
{
	return host_;
}

void ListDatabaseAccessPointRequest::setHost(const std::string& host)
{
	host_ = host;
	setBodyParameter("Host", host);
}

std::string ListDatabaseAccessPointRequest::getDbInstanceId()const
{
	return dbInstanceId_;
}

void ListDatabaseAccessPointRequest::setDbInstanceId(const std::string& dbInstanceId)
{
	dbInstanceId_ = dbInstanceId;
	setBodyParameter("DbInstanceId", dbInstanceId);
}

std::string ListDatabaseAccessPointRequest::getGatewayId()const
{
	return gatewayId_;
}

void ListDatabaseAccessPointRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setBodyParameter("GatewayId", gatewayId);
}

int ListDatabaseAccessPointRequest::getPort()const
{
	return port_;
}

void ListDatabaseAccessPointRequest::setPort(int port)
{
	port_ = port;
	setBodyParameter("Port", std::to_string(port));
}

std::string ListDatabaseAccessPointRequest::getVpcId()const
{
	return vpcId_;
}

void ListDatabaseAccessPointRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setBodyParameter("VpcId", vpcId);
}

