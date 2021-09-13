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

#include <alibabacloud/linkwan/model/UpdateDataDispatchEnablingStateRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateDataDispatchEnablingStateRequest;

UpdateDataDispatchEnablingStateRequest::UpdateDataDispatchEnablingStateRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateDataDispatchEnablingState")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDataDispatchEnablingStateRequest::~UpdateDataDispatchEnablingStateRequest()
{}

bool UpdateDataDispatchEnablingStateRequest::getDataDispatchEnabled()const
{
	return dataDispatchEnabled_;
}

void UpdateDataDispatchEnablingStateRequest::setDataDispatchEnabled(bool dataDispatchEnabled)
{
	dataDispatchEnabled_ = dataDispatchEnabled;
	setParameter("DataDispatchEnabled", dataDispatchEnabled ? "true" : "false");
}

std::string UpdateDataDispatchEnablingStateRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void UpdateDataDispatchEnablingStateRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string UpdateDataDispatchEnablingStateRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateDataDispatchEnablingStateRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateDataDispatchEnablingStateRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateDataDispatchEnablingStateRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

