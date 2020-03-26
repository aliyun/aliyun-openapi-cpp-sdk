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

#include <alibabacloud/tesladam/model/ActionRequest.h>

using AlibabaCloud::TeslaDam::Model::ActionRequest;

ActionRequest::ActionRequest() :
	RpcServiceRequest("tesladam", "2018-01-18", "Action")
{
	setMethod(HttpRequest::Method::Get);
}

ActionRequest::~ActionRequest()
{}

int ActionRequest::getOrderId()const
{
	return orderId_;
}

void ActionRequest::setOrderId(int orderId)
{
	orderId_ = orderId;
	setParameter("OrderId", std::to_string(orderId));
}

std::string ActionRequest::getStepCode()const
{
	return stepCode_;
}

void ActionRequest::setStepCode(const std::string& stepCode)
{
	stepCode_ = stepCode;
	setParameter("StepCode", stepCode);
}

