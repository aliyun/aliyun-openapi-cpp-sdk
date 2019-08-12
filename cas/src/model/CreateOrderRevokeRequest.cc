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

#include <alibabacloud/cas/model/CreateOrderRevokeRequest.h>

using AlibabaCloud::Cas::Model::CreateOrderRevokeRequest;

CreateOrderRevokeRequest::CreateOrderRevokeRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateOrderRevoke")
{}

CreateOrderRevokeRequest::~CreateOrderRevokeRequest()
{}

std::string CreateOrderRevokeRequest::getReason()const
{
	return reason_;
}

void CreateOrderRevokeRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setCoreParameter("Reason", std::to_string(reason));
}

std::string CreateOrderRevokeRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrderRevokeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

long CreateOrderRevokeRequest::getOrderId()const
{
	return orderId_;
}

void CreateOrderRevokeRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", orderId);
}

std::string CreateOrderRevokeRequest::getLang()const
{
	return lang_;
}

void CreateOrderRevokeRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

