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

#include <alibabacloud/linkwan/model/UpdateUserIsolationStateRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateUserIsolationStateRequest;

UpdateUserIsolationStateRequest::UpdateUserIsolationStateRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateUserIsolationState")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateUserIsolationStateRequest::~UpdateUserIsolationStateRequest()
{}

bool UpdateUserIsolationStateRequest::getIsolated()const
{
	return isolated_;
}

void UpdateUserIsolationStateRequest::setIsolated(bool isolated)
{
	isolated_ = isolated;
	setParameter("Isolated", isolated ? "true" : "false");
}

std::string UpdateUserIsolationStateRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateUserIsolationStateRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateUserIsolationStateRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateUserIsolationStateRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

