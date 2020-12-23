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

#include <alibabacloud/hbase/model/CreateGlobalResourceRequest.h>

using AlibabaCloud::HBase::Model::CreateGlobalResourceRequest;

CreateGlobalResourceRequest::CreateGlobalResourceRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "CreateGlobalResource")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGlobalResourceRequest::~CreateGlobalResourceRequest()
{}

std::string CreateGlobalResourceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateGlobalResourceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateGlobalResourceRequest::getClusterId()const
{
	return clusterId_;
}

void CreateGlobalResourceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateGlobalResourceRequest::getResourceType()const
{
	return resourceType_;
}

void CreateGlobalResourceRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string CreateGlobalResourceRequest::getResourceName()const
{
	return resourceName_;
}

void CreateGlobalResourceRequest::setResourceName(const std::string& resourceName)
{
	resourceName_ = resourceName;
	setParameter("ResourceName", resourceName);
}

