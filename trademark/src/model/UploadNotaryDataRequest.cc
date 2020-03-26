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

#include <alibabacloud/trademark/model/UploadNotaryDataRequest.h>

using AlibabaCloud::Trademark::Model::UploadNotaryDataRequest;

UploadNotaryDataRequest::UploadNotaryDataRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "UploadNotaryData")
{
	setMethod(HttpRequest::Method::Post);
}

UploadNotaryDataRequest::~UploadNotaryDataRequest()
{}

std::string UploadNotaryDataRequest::getUploadContext()const
{
	return uploadContext_;
}

void UploadNotaryDataRequest::setUploadContext(const std::string& uploadContext)
{
	uploadContext_ = uploadContext;
	setParameter("UploadContext", uploadContext);
}

std::string UploadNotaryDataRequest::getBizOrderNo()const
{
	return bizOrderNo_;
}

void UploadNotaryDataRequest::setBizOrderNo(const std::string& bizOrderNo)
{
	bizOrderNo_ = bizOrderNo;
	setParameter("BizOrderNo", bizOrderNo);
}

int UploadNotaryDataRequest::getNotaryType()const
{
	return notaryType_;
}

void UploadNotaryDataRequest::setNotaryType(int notaryType)
{
	notaryType_ = notaryType;
	setParameter("NotaryType", std::to_string(notaryType));
}

