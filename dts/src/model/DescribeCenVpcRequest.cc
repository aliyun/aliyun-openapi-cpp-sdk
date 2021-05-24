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

#include <alibabacloud/dts/model/DescribeCenVpcRequest.h>

using AlibabaCloud::Dts::Model::DescribeCenVpcRequest;

DescribeCenVpcRequest::DescribeCenVpcRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeCenVpc")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCenVpcRequest::~DescribeCenVpcRequest()
{}

std::string DescribeCenVpcRequest::getType()const
{
	return type_;
}

void DescribeCenVpcRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeCenVpcRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCenVpcRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

std::string DescribeCenVpcRequest::getEngine()const
{
	return engine_;
}

void DescribeCenVpcRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DescribeCenVpcRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCenVpcRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeCenVpcRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCenVpcRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeCenVpcRequest::getRoleName()const
{
	return roleName_;
}

void DescribeCenVpcRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setParameter("RoleName", roleName);
}

std::string DescribeCenVpcRequest::getIp()const
{
	return ip_;
}

void DescribeCenVpcRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string DescribeCenVpcRequest::getAliyunId()const
{
	return aliyunId_;
}

void DescribeCenVpcRequest::setAliyunId(const std::string& aliyunId)
{
	aliyunId_ = aliyunId;
	setParameter("AliyunId", aliyunId);
}

std::string DescribeCenVpcRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeCenVpcRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeCenVpcRequest::getPort()const
{
	return port_;
}

void DescribeCenVpcRequest::setPort(const std::string& port)
{
	port_ = port;
	setParameter("Port", port);
}

std::string DescribeCenVpcRequest::getRegion()const
{
	return region_;
}

void DescribeCenVpcRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

