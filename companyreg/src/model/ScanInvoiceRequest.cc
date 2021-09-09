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

#include <alibabacloud/companyreg/model/ScanInvoiceRequest.h>

using AlibabaCloud::Companyreg::Model::ScanInvoiceRequest;

ScanInvoiceRequest::ScanInvoiceRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "ScanInvoice")
{
	setMethod(HttpRequest::Method::Post);
}

ScanInvoiceRequest::~ScanInvoiceRequest()
{}

std::string ScanInvoiceRequest::getDate()const
{
	return date_;
}

void ScanInvoiceRequest::setDate(const std::string& date)
{
	date_ = date;
	setParameter("Date", date);
}

std::string ScanInvoiceRequest::getNo()const
{
	return no_;
}

void ScanInvoiceRequest::setNo(const std::string& no)
{
	no_ = no;
	setParameter("No", no);
}

std::string ScanInvoiceRequest::getAmount()const
{
	return amount_;
}

void ScanInvoiceRequest::setAmount(const std::string& amount)
{
	amount_ = amount;
	setParameter("Amount", amount);
}

std::string ScanInvoiceRequest::getCode()const
{
	return code_;
}

void ScanInvoiceRequest::setCode(const std::string& code)
{
	code_ = code;
	setParameter("Code", code);
}

std::string ScanInvoiceRequest::getVCode()const
{
	return vCode_;
}

void ScanInvoiceRequest::setVCode(const std::string& vCode)
{
	vCode_ = vCode;
	setParameter("VCode", vCode);
}

std::string ScanInvoiceRequest::getBizId()const
{
	return bizId_;
}

void ScanInvoiceRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string ScanInvoiceRequest::getInvoiceCode()const
{
	return invoiceCode_;
}

void ScanInvoiceRequest::setInvoiceCode(const std::string& invoiceCode)
{
	invoiceCode_ = invoiceCode;
	setParameter("InvoiceCode", invoiceCode);
}

