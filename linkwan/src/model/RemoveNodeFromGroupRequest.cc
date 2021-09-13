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

#include <alibabacloud/linkwan/model/RemoveNodeFromGroupRequest.h>

using AlibabaCloud::LinkWAN::Model::RemoveNodeFromGroupRequest;

RemoveNodeFromGroupRequest::RemoveNodeFromGroupRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "RemoveNodeFromGroup")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveNodeFromGroupRequest::~RemoveNodeFromGroupRequest()
{}

std::string RemoveNodeFromGroupRequest::getDevEui()const
{
	return devEui_;
}

void RemoveNodeFromGroupRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

std::string RemoveNodeFromGroupRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void RemoveNodeFromGroupRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string RemoveNodeFromGroupRequest::getApiProduct()const
{
	return apiProduct_;
}

void RemoveNodeFromGroupRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string RemoveNodeFromGroupRequest::getApiRevision()const
{
	return apiRevision_;
}

void RemoveNodeFromGroupRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

