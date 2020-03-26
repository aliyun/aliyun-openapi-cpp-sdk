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

#include <alibabacloud/cas/model/CreateOrderRefundRecordRequest.h>

using AlibabaCloud::Cas::Model::CreateOrderRefundRecordRequest;

CreateOrderRefundRecordRequest::CreateOrderRefundRecordRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateOrderRefundRecord")
{
	setMethod(HttpRequest::Method::Post);
}

CreateOrderRefundRecordRequest::~CreateOrderRefundRecordRequest()
{}

std::string CreateOrderRefundRecordRequest::getReason()const
{
	return reason_;
}

void CreateOrderRefundRecordRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setParameter("Reason", reason);
}

long CreateOrderRefundRecordRequest::getOrderId()const
{
	return orderId_;
}

void CreateOrderRefundRecordRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setParameter("OrderId", std::to_string(orderId));
}

std::string CreateOrderRefundRecordRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateOrderRefundRecordRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateOrderRefundRecordRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrderRefundRecordRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

