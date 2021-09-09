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

#include <alibabacloud/companyreg/model/DeleteInvoiceRequest.h>

using AlibabaCloud::Companyreg::Model::DeleteInvoiceRequest;

DeleteInvoiceRequest::DeleteInvoiceRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "DeleteInvoice")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteInvoiceRequest::~DeleteInvoiceRequest()
{}

std::string DeleteInvoiceRequest::getBizId()const
{
	return bizId_;
}

void DeleteInvoiceRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

long DeleteInvoiceRequest::getId()const
{
	return id_;
}

void DeleteInvoiceRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

