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

#include <alibabacloud/csb/model/GetOrderRequest.h>

using AlibabaCloud::CSB::Model::GetOrderRequest;

GetOrderRequest::GetOrderRequest() :
	RpcServiceRequest("csb", "2017-11-18", "GetOrder")
{
	setMethod(HttpRequest::Method::Get);
}

GetOrderRequest::~GetOrderRequest()
{}

long GetOrderRequest::getOrderId()const
{
	return orderId_;
}

void GetOrderRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setParameter("OrderId", std::to_string(orderId));
}

std::string GetOrderRequest::getServiceName()const
{
	return serviceName_;
}

void GetOrderRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

