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

#include <alibabacloud/cas/model/CreateOrderCancelRequest.h>

using AlibabaCloud::Cas::Model::CreateOrderCancelRequest;

CreateOrderCancelRequest::CreateOrderCancelRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateOrderCancel")
{}

CreateOrderCancelRequest::~CreateOrderCancelRequest()
{}

long CreateOrderCancelRequest::getOrderId()const
{
	return orderId_;
}

void CreateOrderCancelRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", std::to_string(orderId));
}

std::string CreateOrderCancelRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateOrderCancelRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateOrderCancelRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrderCancelRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateOrderCancelRequest::getLang()const
{
	return lang_;
}

void CreateOrderCancelRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

