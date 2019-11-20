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

#include <alibabacloud/bssopenapi/model/ApplyInvoiceRequest.h>

using AlibabaCloud::BssOpenApi::Model::ApplyInvoiceRequest;

ApplyInvoiceRequest::ApplyInvoiceRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "ApplyInvoice")
{
	setMethod(HttpRequest::Method::Post);
}

ApplyInvoiceRequest::~ApplyInvoiceRequest()
{}

int ApplyInvoiceRequest::getInvoicingType()const
{
	return invoicingType_;
}

void ApplyInvoiceRequest::setInvoicingType(int invoicingType)
{
	invoicingType_ = invoicingType;
	setCoreParameter("InvoicingType", std::to_string(invoicingType));
}

int ApplyInvoiceRequest::getProcessWay()const
{
	return processWay_;
}

void ApplyInvoiceRequest::setProcessWay(int processWay)
{
	processWay_ = processWay;
	setCoreParameter("ProcessWay", std::to_string(processWay));
}

long ApplyInvoiceRequest::getCallerBid()const
{
	return callerBid_;
}

void ApplyInvoiceRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long ApplyInvoiceRequest::getOwnerId()const
{
	return ownerId_;
}

void ApplyInvoiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long ApplyInvoiceRequest::getInvoiceAmount()const
{
	return invoiceAmount_;
}

void ApplyInvoiceRequest::setInvoiceAmount(long invoiceAmount)
{
	invoiceAmount_ = invoiceAmount;
	setCoreParameter("InvoiceAmount", std::to_string(invoiceAmount));
}

long ApplyInvoiceRequest::getAddressId()const
{
	return addressId_;
}

void ApplyInvoiceRequest::setAddressId(long addressId)
{
	addressId_ = addressId;
	setCoreParameter("AddressId", std::to_string(addressId));
}

std::string ApplyInvoiceRequest::getApplyUserNick()const
{
	return applyUserNick_;
}

void ApplyInvoiceRequest::setApplyUserNick(const std::string& applyUserNick)
{
	applyUserNick_ = applyUserNick;
	setCoreParameter("ApplyUserNick", applyUserNick);
}

bool ApplyInvoiceRequest::getInvoiceByAmount()const
{
	return invoiceByAmount_;
}

void ApplyInvoiceRequest::setInvoiceByAmount(bool invoiceByAmount)
{
	invoiceByAmount_ = invoiceByAmount;
	setCoreParameter("InvoiceByAmount", invoiceByAmount ? "true" : "false");
}

long ApplyInvoiceRequest::getCustomerId()const
{
	return customerId_;
}

void ApplyInvoiceRequest::setCustomerId(long customerId)
{
	customerId_ = customerId;
	setCoreParameter("CustomerId", std::to_string(customerId));
}

std::vector<long> ApplyInvoiceRequest::getSelectedIds()const
{
	return selectedIds_;
}

void ApplyInvoiceRequest::setSelectedIds(const std::vector<long>& selectedIds)
{
	selectedIds_ = selectedIds;
	for(int dep1 = 0; dep1!= selectedIds.size(); dep1++)
		setCoreParameter("SelectedIds."+ std::to_string(dep1), std::to_string(selectedIds.at(dep1)));
}

long ApplyInvoiceRequest::getCallerUid()const
{
	return callerUid_;
}

void ApplyInvoiceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

