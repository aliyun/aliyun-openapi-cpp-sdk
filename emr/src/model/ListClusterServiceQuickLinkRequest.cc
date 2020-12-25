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

#include <alibabacloud/emr/model/ListClusterServiceQuickLinkRequest.h>

using AlibabaCloud::Emr::Model::ListClusterServiceQuickLinkRequest;

ListClusterServiceQuickLinkRequest::ListClusterServiceQuickLinkRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterServiceQuickLink")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterServiceQuickLinkRequest::~ListClusterServiceQuickLinkRequest()
{}

long ListClusterServiceQuickLinkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterServiceQuickLinkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ListClusterServiceQuickLinkRequest::getDirectType()const
{
	return directType_;
}

void ListClusterServiceQuickLinkRequest::setDirectType(bool directType)
{
	directType_ = directType;
	setParameter("DirectType", directType ? "true" : "false");
}

std::string ListClusterServiceQuickLinkRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterServiceQuickLinkRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListClusterServiceQuickLinkRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterServiceQuickLinkRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterServiceQuickLinkRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterServiceQuickLinkRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListClusterServiceQuickLinkRequest::getServiceName()const
{
	return serviceName_;
}

void ListClusterServiceQuickLinkRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

