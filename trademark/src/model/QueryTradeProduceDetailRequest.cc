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

#include <alibabacloud/trademark/model/QueryTradeProduceDetailRequest.h>

using AlibabaCloud::Trademark::Model::QueryTradeProduceDetailRequest;

QueryTradeProduceDetailRequest::QueryTradeProduceDetailRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryTradeProduceDetail")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTradeProduceDetailRequest::~QueryTradeProduceDetailRequest()
{}

std::string QueryTradeProduceDetailRequest::getBizId()const
{
	return bizId_;
}

void QueryTradeProduceDetailRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

