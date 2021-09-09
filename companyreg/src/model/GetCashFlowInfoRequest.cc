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

#include <alibabacloud/companyreg/model/GetCashFlowInfoRequest.h>

using AlibabaCloud::Companyreg::Model::GetCashFlowInfoRequest;

GetCashFlowInfoRequest::GetCashFlowInfoRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "GetCashFlowInfo")
{
	setMethod(HttpRequest::Method::Get);
}

GetCashFlowInfoRequest::~GetCashFlowInfoRequest()
{}

std::string GetCashFlowInfoRequest::getPeriod()const
{
	return period_;
}

void GetCashFlowInfoRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string GetCashFlowInfoRequest::getBizId()const
{
	return bizId_;
}

void GetCashFlowInfoRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

