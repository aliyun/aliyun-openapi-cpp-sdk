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

#include <alibabacloud/companyreg/model/GetVoucherCountRequest.h>

using AlibabaCloud::Companyreg::Model::GetVoucherCountRequest;

GetVoucherCountRequest::GetVoucherCountRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "GetVoucherCount")
{
	setMethod(HttpRequest::Method::Get);
}

GetVoucherCountRequest::~GetVoucherCountRequest()
{}

std::string GetVoucherCountRequest::getBizId()const
{
	return bizId_;
}

void GetVoucherCountRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string GetVoucherCountRequest::getStartPeriod()const
{
	return startPeriod_;
}

void GetVoucherCountRequest::setStartPeriod(const std::string& startPeriod)
{
	startPeriod_ = startPeriod;
	setParameter("StartPeriod", startPeriod);
}

std::string GetVoucherCountRequest::getEndPeriod()const
{
	return endPeriod_;
}

void GetVoucherCountRequest::setEndPeriod(const std::string& endPeriod)
{
	endPeriod_ = endPeriod;
	setParameter("EndPeriod", endPeriod);
}

