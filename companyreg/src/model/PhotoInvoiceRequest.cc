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

#include <alibabacloud/companyreg/model/PhotoInvoiceRequest.h>

using AlibabaCloud::Companyreg::Model::PhotoInvoiceRequest;

PhotoInvoiceRequest::PhotoInvoiceRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "PhotoInvoice")
{
	setMethod(HttpRequest::Method::Get);
}

PhotoInvoiceRequest::~PhotoInvoiceRequest()
{}

int PhotoInvoiceRequest::getUploadedNum()const
{
	return uploadedNum_;
}

void PhotoInvoiceRequest::setUploadedNum(int uploadedNum)
{
	uploadedNum_ = uploadedNum;
	setParameter("UploadedNum", std::to_string(uploadedNum));
}

std::string PhotoInvoiceRequest::getFileUrlList()const
{
	return fileUrlList_;
}

void PhotoInvoiceRequest::setFileUrlList(const std::string& fileUrlList)
{
	fileUrlList_ = fileUrlList;
	setParameter("FileUrlList", fileUrlList);
}

long PhotoInvoiceRequest::getUploadedStamp()const
{
	return uploadedStamp_;
}

void PhotoInvoiceRequest::setUploadedStamp(long uploadedStamp)
{
	uploadedStamp_ = uploadedStamp;
	setParameter("UploadedStamp", std::to_string(uploadedStamp));
}

std::string PhotoInvoiceRequest::getBizId()const
{
	return bizId_;
}

void PhotoInvoiceRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string PhotoInvoiceRequest::getFileUrl()const
{
	return fileUrl_;
}

void PhotoInvoiceRequest::setFileUrl(const std::string& fileUrl)
{
	fileUrl_ = fileUrl;
	setParameter("FileUrl", fileUrl);
}

bool PhotoInvoiceRequest::getIsMobile()const
{
	return isMobile_;
}

void PhotoInvoiceRequest::setIsMobile(bool isMobile)
{
	isMobile_ = isMobile;
	setParameter("IsMobile", isMobile ? "true" : "false");
}

