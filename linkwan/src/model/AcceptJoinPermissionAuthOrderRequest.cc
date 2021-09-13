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

#include <alibabacloud/linkwan/model/AcceptJoinPermissionAuthOrderRequest.h>

using AlibabaCloud::LinkWAN::Model::AcceptJoinPermissionAuthOrderRequest;

AcceptJoinPermissionAuthOrderRequest::AcceptJoinPermissionAuthOrderRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "AcceptJoinPermissionAuthOrder")
{
	setMethod(HttpRequest::Method::Post);
}

AcceptJoinPermissionAuthOrderRequest::~AcceptJoinPermissionAuthOrderRequest()
{}

std::string AcceptJoinPermissionAuthOrderRequest::getOrderId()const
{
	return orderId_;
}

void AcceptJoinPermissionAuthOrderRequest::setOrderId(const std::string& orderId)
{
	orderId_ = orderId;
	setParameter("OrderId", orderId);
}

std::string AcceptJoinPermissionAuthOrderRequest::getApiProduct()const
{
	return apiProduct_;
}

void AcceptJoinPermissionAuthOrderRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string AcceptJoinPermissionAuthOrderRequest::getApiRevision()const
{
	return apiRevision_;
}

void AcceptJoinPermissionAuthOrderRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

