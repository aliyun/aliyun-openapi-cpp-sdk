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

#include <alibabacloud/emr/model/ListFlowProjectRequest.h>

using AlibabaCloud::Emr::Model::ListFlowProjectRequest;

ListFlowProjectRequest::ListFlowProjectRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowProject")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowProjectRequest::~ListFlowProjectRequest()
{}

int ListFlowProjectRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowProjectRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFlowProjectRequest::getProductType()const
{
	return productType_;
}

void ListFlowProjectRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

std::string ListFlowProjectRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListFlowProjectRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListFlowProjectRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowProjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListFlowProjectRequest::getName()const
{
	return name_;
}

void ListFlowProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListFlowProjectRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowProjectRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowProjectRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

