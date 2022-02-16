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

#include <alibabacloud/emr/model/ListClusterTemplatesRequest.h>

using AlibabaCloud::Emr::Model::ListClusterTemplatesRequest;

ListClusterTemplatesRequest::ListClusterTemplatesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterTemplates")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterTemplatesRequest::~ListClusterTemplatesRequest()
{}

long ListClusterTemplatesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterTemplatesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListClusterTemplatesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterTemplatesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterTemplatesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterTemplatesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterTemplatesRequest::getProductType()const
{
	return productType_;
}

void ListClusterTemplatesRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

std::string ListClusterTemplatesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListClusterTemplatesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListClusterTemplatesRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterTemplatesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListClusterTemplatesRequest::getBizId()const
{
	return bizId_;
}

void ListClusterTemplatesRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

int ListClusterTemplatesRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterTemplatesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

