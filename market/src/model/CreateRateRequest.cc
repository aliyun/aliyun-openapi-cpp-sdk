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

#include <alibabacloud/market/model/CreateRateRequest.h>

using AlibabaCloud::Market::Model::CreateRateRequest;

CreateRateRequest::CreateRateRequest() :
	RpcServiceRequest("market", "2015-11-01", "CreateRate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRateRequest::~CreateRateRequest()
{}

std::string CreateRateRequest::getOrderId()const
{
	return orderId_;
}

void CreateRateRequest::setOrderId(const std::string& orderId)
{
	orderId_ = orderId;
	setParameter("OrderId", orderId);
}

std::string CreateRateRequest::getContent()const
{
	return content_;
}

void CreateRateRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

std::string CreateRateRequest::getScore()const
{
	return score_;
}

void CreateRateRequest::setScore(const std::string& score)
{
	score_ = score;
	setParameter("Score", score);
}

std::string CreateRateRequest::getRequestId()const
{
	return requestId_;
}

void CreateRateRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

