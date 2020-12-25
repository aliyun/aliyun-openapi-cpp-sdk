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

#include <alibabacloud/emr/model/ListFlowClusterAllRequest.h>

using AlibabaCloud::Emr::Model::ListFlowClusterAllRequest;

ListFlowClusterAllRequest::ListFlowClusterAllRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowClusterAll")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowClusterAllRequest::~ListFlowClusterAllRequest()
{}

std::string ListFlowClusterAllRequest::getProductType()const
{
	return productType_;
}

void ListFlowClusterAllRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

std::string ListFlowClusterAllRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListFlowClusterAllRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListFlowClusterAllRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowClusterAllRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

