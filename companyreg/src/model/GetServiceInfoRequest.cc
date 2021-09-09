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

#include <alibabacloud/companyreg/model/GetServiceInfoRequest.h>

using AlibabaCloud::Companyreg::Model::GetServiceInfoRequest;

GetServiceInfoRequest::GetServiceInfoRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "GetServiceInfo")
{
	setMethod(HttpRequest::Method::Get);
}

GetServiceInfoRequest::~GetServiceInfoRequest()
{}

std::string GetServiceInfoRequest::getPeriod()const
{
	return period_;
}

void GetServiceInfoRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string GetServiceInfoRequest::getBizId()const
{
	return bizId_;
}

void GetServiceInfoRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

