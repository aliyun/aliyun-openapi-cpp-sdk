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

#include <alibabacloud/companyreg/model/SaveOpeningBalanceStatusRequest.h>

using AlibabaCloud::Companyreg::Model::SaveOpeningBalanceStatusRequest;

SaveOpeningBalanceStatusRequest::SaveOpeningBalanceStatusRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "SaveOpeningBalanceStatus")
{
	setMethod(HttpRequest::Method::Post);
}

SaveOpeningBalanceStatusRequest::~SaveOpeningBalanceStatusRequest()
{}

std::string SaveOpeningBalanceStatusRequest::getOpeningBalanceStatus()const
{
	return openingBalanceStatus_;
}

void SaveOpeningBalanceStatusRequest::setOpeningBalanceStatus(const std::string& openingBalanceStatus)
{
	openingBalanceStatus_ = openingBalanceStatus;
	setParameter("OpeningBalanceStatus", openingBalanceStatus);
}

std::string SaveOpeningBalanceStatusRequest::getBizId()const
{
	return bizId_;
}

void SaveOpeningBalanceStatusRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

