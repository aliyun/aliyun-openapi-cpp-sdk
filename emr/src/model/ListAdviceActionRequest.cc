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

#include <alibabacloud/emr/model/ListAdviceActionRequest.h>

using AlibabaCloud::Emr::Model::ListAdviceActionRequest;

ListAdviceActionRequest::ListAdviceActionRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListAdviceAction")
{
	setMethod(HttpRequest::Method::Post);
}

ListAdviceActionRequest::~ListAdviceActionRequest()
{}

long ListAdviceActionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAdviceActionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListAdviceActionRequest::getClusterId()const
{
	return clusterId_;
}

void ListAdviceActionRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListAdviceActionRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAdviceActionRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListAdviceActionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAdviceActionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListAdviceActionRequest::getComponent()const
{
	return component_;
}

void ListAdviceActionRequest::setComponent(const std::string& component)
{
	component_ = component;
	setParameter("Component", component);
}

std::string ListAdviceActionRequest::getRegionId()const
{
	return regionId_;
}

void ListAdviceActionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListAdviceActionRequest::getPageSize()const
{
	return pageSize_;
}

void ListAdviceActionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListAdviceActionRequest::getServiceName()const
{
	return serviceName_;
}

void ListAdviceActionRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

