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

#include <alibabacloud/dts/model/DescribeDgDatabasesRequest.h>

using AlibabaCloud::Dts::Model::DescribeDgDatabasesRequest;

DescribeDgDatabasesRequest::DescribeDgDatabasesRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeDgDatabases")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDgDatabasesRequest::~DescribeDgDatabasesRequest()
{}

std::string DescribeDgDatabasesRequest::getType()const
{
	return type_;
}

void DescribeDgDatabasesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeDgDatabasesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDgDatabasesRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

std::string DescribeDgDatabasesRequest::getEngine()const
{
	return engine_;
}

void DescribeDgDatabasesRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DescribeDgDatabasesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDgDatabasesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeDgDatabasesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDgDatabasesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeDgDatabasesRequest::getRoleName()const
{
	return roleName_;
}

void DescribeDgDatabasesRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setParameter("RoleName", roleName);
}

std::string DescribeDgDatabasesRequest::getIp()const
{
	return ip_;
}

void DescribeDgDatabasesRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string DescribeDgDatabasesRequest::getAliyunId()const
{
	return aliyunId_;
}

void DescribeDgDatabasesRequest::setAliyunId(const std::string& aliyunId)
{
	aliyunId_ = aliyunId;
	setParameter("AliyunId", aliyunId);
}

std::string DescribeDgDatabasesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDgDatabasesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeDgDatabasesRequest::getPort()const
{
	return port_;
}

void DescribeDgDatabasesRequest::setPort(const std::string& port)
{
	port_ = port;
	setParameter("Port", port);
}

std::string DescribeDgDatabasesRequest::getRegion()const
{
	return region_;
}

void DescribeDgDatabasesRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

