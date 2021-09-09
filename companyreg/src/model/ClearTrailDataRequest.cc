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

#include <alibabacloud/companyreg/model/ClearTrailDataRequest.h>

using AlibabaCloud::Companyreg::Model::ClearTrailDataRequest;

ClearTrailDataRequest::ClearTrailDataRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "ClearTrailData")
{
	setMethod(HttpRequest::Method::Get);
}

ClearTrailDataRequest::~ClearTrailDataRequest()
{}

std::string ClearTrailDataRequest::getBizId()const
{
	return bizId_;
}

void ClearTrailDataRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

