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

#include <alibabacloud/companyreg/model/SubmitConsultationRequest.h>

using AlibabaCloud::Companyreg::Model::SubmitConsultationRequest;

SubmitConsultationRequest::SubmitConsultationRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "SubmitConsultation")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitConsultationRequest::~SubmitConsultationRequest()
{}

std::string SubmitConsultationRequest::getData()const
{
	return data_;
}

void SubmitConsultationRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

std::string SubmitConsultationRequest::getVcode()const
{
	return vcode_;
}

void SubmitConsultationRequest::setVcode(const std::string& vcode)
{
	vcode_ = vcode;
	setParameter("Vcode", vcode);
}

std::string SubmitConsultationRequest::getBizCode()const
{
	return bizCode_;
}

void SubmitConsultationRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

std::string SubmitConsultationRequest::getConsultRequestId()const
{
	return consultRequestId_;
}

void SubmitConsultationRequest::setConsultRequestId(const std::string& consultRequestId)
{
	consultRequestId_ = consultRequestId;
	setParameter("ConsultRequestId", consultRequestId);
}

std::string SubmitConsultationRequest::getBizSubCode()const
{
	return bizSubCode_;
}

void SubmitConsultationRequest::setBizSubCode(const std::string& bizSubCode)
{
	bizSubCode_ = bizSubCode;
	setParameter("BizSubCode", bizSubCode);
}

