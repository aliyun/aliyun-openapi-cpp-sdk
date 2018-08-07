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

#include <alibabacloud/iot/model/CreateProductRequest.h>

using AlibabaCloud::Iot::Model::CreateProductRequest;

CreateProductRequest::CreateProductRequest() :
	RpcServiceRequest("iot", "2017-04-20", "CreateProduct")
{}

CreateProductRequest::~CreateProductRequest()
{}

long CreateProductRequest::getCatId()const
{
	return catId_;
}

void CreateProductRequest::setCatId(long catId)
{
	catId_ = catId;
	setParameter("CatId", std::to_string(catId));
}

int CreateProductRequest::getNodeType()const
{
	return nodeType_;
}

void CreateProductRequest::setNodeType(int nodeType)
{
	nodeType_ = nodeType;
	setParameter("NodeType", std::to_string(nodeType));
}

std::string CreateProductRequest::getRegionId()const
{
	return regionId_;
}

void CreateProductRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateProductRequest::getId2()const
{
	return id2_;
}

void CreateProductRequest::setId2(bool id2)
{
	id2_ = id2;
	setParameter("Id2", std::to_string(id2));
}

std::string CreateProductRequest::getName()const
{
	return name_;
}

void CreateProductRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateProductRequest::getExtProps()const
{
	return extProps_;
}

void CreateProductRequest::setExtProps(const std::string& extProps)
{
	extProps_ = extProps;
	setParameter("ExtProps", extProps);
}

std::string CreateProductRequest::getSecurityPolicy()const
{
	return securityPolicy_;
}

void CreateProductRequest::setSecurityPolicy(const std::string& securityPolicy)
{
	securityPolicy_ = securityPolicy;
	setParameter("SecurityPolicy", securityPolicy);
}

int CreateProductRequest::getPayType()const
{
	return payType_;
}

void CreateProductRequest::setPayType(int payType)
{
	payType_ = payType;
	setParameter("PayType", std::to_string(payType));
}

std::string CreateProductRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateProductRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateProductRequest::getDesc()const
{
	return desc_;
}

void CreateProductRequest::setDesc(const std::string& desc)
{
	desc_ = desc;
	setParameter("Desc", desc);
}

