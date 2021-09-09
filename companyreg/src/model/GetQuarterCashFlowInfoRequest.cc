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

#include <alibabacloud/companyreg/model/GetQuarterCashFlowInfoRequest.h>

using AlibabaCloud::Companyreg::Model::GetQuarterCashFlowInfoRequest;

GetQuarterCashFlowInfoRequest::GetQuarterCashFlowInfoRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "GetQuarterCashFlowInfo")
{
	setMethod(HttpRequest::Method::Get);
}

GetQuarterCashFlowInfoRequest::~GetQuarterCashFlowInfoRequest()
{}

std::string GetQuarterCashFlowInfoRequest::getPeriod()const
{
	return period_;
}

void GetQuarterCashFlowInfoRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string GetQuarterCashFlowInfoRequest::getBizId()const
{
	return bizId_;
}

void GetQuarterCashFlowInfoRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

bool GetQuarterCashFlowInfoRequest::getIsQuarter()const
{
	return isQuarter_;
}

void GetQuarterCashFlowInfoRequest::setIsQuarter(bool isQuarter)
{
	isQuarter_ = isQuarter;
	setParameter("IsQuarter", isQuarter ? "true" : "false");
}

