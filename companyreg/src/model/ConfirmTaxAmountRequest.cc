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

#include <alibabacloud/companyreg/model/ConfirmTaxAmountRequest.h>

using AlibabaCloud::Companyreg::Model::ConfirmTaxAmountRequest;

ConfirmTaxAmountRequest::ConfirmTaxAmountRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "ConfirmTaxAmount")
{
	setMethod(HttpRequest::Method::Post);
}

ConfirmTaxAmountRequest::~ConfirmTaxAmountRequest()
{}

std::string ConfirmTaxAmountRequest::getBizId()const
{
	return bizId_;
}

void ConfirmTaxAmountRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

