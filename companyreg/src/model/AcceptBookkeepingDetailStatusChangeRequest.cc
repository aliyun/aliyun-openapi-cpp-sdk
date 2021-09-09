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

#include <alibabacloud/companyreg/model/AcceptBookkeepingDetailStatusChangeRequest.h>

using AlibabaCloud::Companyreg::Model::AcceptBookkeepingDetailStatusChangeRequest;

AcceptBookkeepingDetailStatusChangeRequest::AcceptBookkeepingDetailStatusChangeRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "AcceptBookkeepingDetailStatusChange")
{
	setMethod(HttpRequest::Method::Post);
}

AcceptBookkeepingDetailStatusChangeRequest::~AcceptBookkeepingDetailStatusChangeRequest()
{}

std::string AcceptBookkeepingDetailStatusChangeRequest::getBizId()const
{
	return bizId_;
}

void AcceptBookkeepingDetailStatusChangeRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string AcceptBookkeepingDetailStatusChangeRequest::getTaxAmount()const
{
	return taxAmount_;
}

void AcceptBookkeepingDetailStatusChangeRequest::setTaxAmount(const std::string& taxAmount)
{
	taxAmount_ = taxAmount;
	setParameter("TaxAmount", taxAmount);
}

int AcceptBookkeepingDetailStatusChangeRequest::getStatus()const
{
	return status_;
}

void AcceptBookkeepingDetailStatusChangeRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

