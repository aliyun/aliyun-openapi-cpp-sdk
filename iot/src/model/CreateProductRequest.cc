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
	RpcServiceRequest("iot", "2018-01-20", "CreateProduct")
{}

CreateProductRequest::~CreateProductRequest()
{}

int CreateProductRequest::getDataFormat()const
{
	return dataFormat_;
}

void CreateProductRequest::setDataFormat(int dataFormat)
{
	dataFormat_ = dataFormat;
	setCoreParameter("DataFormat", dataFormat);
}

int CreateProductRequest::getNodeType()const
{
	return nodeType_;
}

void CreateProductRequest::setNodeType(int nodeType)
{
	nodeType_ = nodeType;
	setCoreParameter("NodeType", nodeType);
}

bool CreateProductRequest::getId2()const
{
	return id2_;
}

void CreateProductRequest::setId2(bool id2)
{
	id2_ = id2;
	setCoreParameter("Id2", id2);
}

std::string CreateProductRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateProductRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string CreateProductRequest::getNetType()const
{
	return netType_;
}

void CreateProductRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", netType);
}

std::string CreateProductRequest::getProductName()const
{
	return productName_;
}

void CreateProductRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setCoreParameter("ProductName", productName);
}

std::string CreateProductRequest::getDescription()const
{
	return description_;
}

void CreateProductRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateProductRequest::getProtocolType()const
{
	return protocolType_;
}

void CreateProductRequest::setProtocolType(const std::string& protocolType)
{
	protocolType_ = protocolType;
	setCoreParameter("ProtocolType", protocolType);
}

std::string CreateProductRequest::getAliyunCommodityCode()const
{
	return aliyunCommodityCode_;
}

void CreateProductRequest::setAliyunCommodityCode(const std::string& aliyunCommodityCode)
{
	aliyunCommodityCode_ = aliyunCommodityCode;
	setCoreParameter("AliyunCommodityCode", aliyunCommodityCode);
}

std::string CreateProductRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void CreateProductRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setCoreParameter("JoinPermissionId", joinPermissionId);
}

long CreateProductRequest::getCategoryId()const
{
	return categoryId_;
}

void CreateProductRequest::setCategoryId(long categoryId)
{
	categoryId_ = categoryId;
	setCoreParameter("CategoryId", categoryId);
}

std::string CreateProductRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateProductRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

