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
	setParameter("DataFormat", std::to_string(dataFormat));
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

bool CreateProductRequest::getId2()const
{
	return id2_;
}

void CreateProductRequest::setId2(bool id2)
{
	id2_ = id2;
	setParameter("Id2", std::to_string(id2));
}

std::string CreateProductRequest::getProductName()const
{
	return productName_;
}

void CreateProductRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string CreateProductRequest::getDescription()const
{
	return description_;
}

void CreateProductRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateProductRequest::getProtocolType()const
{
	return protocolType_;
}

void CreateProductRequest::setProtocolType(const std::string& protocolType)
{
	protocolType_ = protocolType;
	setParameter("ProtocolType", protocolType);
}

std::string CreateProductRequest::getAliyunCommodityCode()const
{
	return aliyunCommodityCode_;
}

void CreateProductRequest::setAliyunCommodityCode(const std::string& aliyunCommodityCode)
{
	aliyunCommodityCode_ = aliyunCommodityCode;
	setParameter("AliyunCommodityCode", aliyunCommodityCode);
}

long CreateProductRequest::getCategoryId()const
{
	return categoryId_;
}

void CreateProductRequest::setCategoryId(long categoryId)
{
	categoryId_ = categoryId;
	setParameter("CategoryId", std::to_string(categoryId));
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

