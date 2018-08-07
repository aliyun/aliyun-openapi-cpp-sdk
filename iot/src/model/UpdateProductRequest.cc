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

#include <alibabacloud/iot/model/UpdateProductRequest.h>

using AlibabaCloud::Iot::Model::UpdateProductRequest;

UpdateProductRequest::UpdateProductRequest() :
	RpcServiceRequest("iot", "2017-04-20", "UpdateProduct")
{}

UpdateProductRequest::~UpdateProductRequest()
{}

long UpdateProductRequest::getCatId()const
{
	return catId_;
}

void UpdateProductRequest::setCatId(long catId)
{
	catId_ = catId;
	setParameter("CatId", std::to_string(catId));
}

int UpdateProductRequest::getNodeType()const
{
	return nodeType_;
}

void UpdateProductRequest::setNodeType(int nodeType)
{
	nodeType_ = nodeType;
	setParameter("NodeType", std::to_string(nodeType));
}

std::string UpdateProductRequest::getProductName()const
{
	return productName_;
}

void UpdateProductRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string UpdateProductRequest::getExtProps()const
{
	return extProps_;
}

void UpdateProductRequest::setExtProps(const std::string& extProps)
{
	extProps_ = extProps;
	setParameter("ExtProps", extProps);
}

std::string UpdateProductRequest::getProductKey()const
{
	return productKey_;
}

void UpdateProductRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string UpdateProductRequest::getProductDesc()const
{
	return productDesc_;
}

void UpdateProductRequest::setProductDesc(const std::string& productDesc)
{
	productDesc_ = productDesc;
	setParameter("ProductDesc", productDesc);
}

std::string UpdateProductRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateProductRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

