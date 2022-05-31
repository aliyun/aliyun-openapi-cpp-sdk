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

#include <alibabacloud/cloudesl/model/DescribeItemMaterialsRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeItemMaterialsRequest;

DescribeItemMaterialsRequest::DescribeItemMaterialsRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeItemMaterials")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeItemMaterialsRequest::~DescribeItemMaterialsRequest()
{}

std::string DescribeItemMaterialsRequest::getMaterialName()const
{
	return materialName_;
}

void DescribeItemMaterialsRequest::setMaterialName(const std::string& materialName)
{
	materialName_ = materialName;
	setBodyParameter("MaterialName", materialName);
}

std::string DescribeItemMaterialsRequest::getMaterialId()const
{
	return materialId_;
}

void DescribeItemMaterialsRequest::setMaterialId(const std::string& materialId)
{
	materialId_ = materialId;
	setBodyParameter("MaterialId", materialId);
}

int DescribeItemMaterialsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeItemMaterialsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeItemMaterialsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeItemMaterialsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeItemMaterialsRequest::getBarCode()const
{
	return barCode_;
}

void DescribeItemMaterialsRequest::setBarCode(const std::string& barCode)
{
	barCode_ = barCode;
	setBodyParameter("BarCode", barCode);
}

std::string DescribeItemMaterialsRequest::getItemName()const
{
	return itemName_;
}

void DescribeItemMaterialsRequest::setItemName(const std::string& itemName)
{
	itemName_ = itemName;
	setBodyParameter("ItemName", itemName);
}

