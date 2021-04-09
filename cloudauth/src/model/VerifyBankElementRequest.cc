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

#include <alibabacloud/cloudauth/model/VerifyBankElementRequest.h>

using AlibabaCloud::Cloudauth::Model::VerifyBankElementRequest;

VerifyBankElementRequest::VerifyBankElementRequest() :
	RpcServiceRequest("cloudauth", "2020-06-18", "VerifyBankElement")
{
	setMethod(HttpRequest::Method::Post);
}

VerifyBankElementRequest::~VerifyBankElementRequest()
{}

std::string VerifyBankElementRequest::getIdName()const
{
	return idName_;
}

void VerifyBankElementRequest::setIdName(const std::string& idName)
{
	idName_ = idName;
	setBodyParameter("IdName", idName);
}

std::string VerifyBankElementRequest::getMobile()const
{
	return mobile_;
}

void VerifyBankElementRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setBodyParameter("Mobile", mobile);
}

std::string VerifyBankElementRequest::getBankCardUrl()const
{
	return bankCardUrl_;
}

void VerifyBankElementRequest::setBankCardUrl(const std::string& bankCardUrl)
{
	bankCardUrl_ = bankCardUrl;
	setBodyParameter("BankCardUrl", bankCardUrl);
}

std::string VerifyBankElementRequest::getIdNo()const
{
	return idNo_;
}

void VerifyBankElementRequest::setIdNo(const std::string& idNo)
{
	idNo_ = idNo;
	setBodyParameter("IdNo", idNo);
}

std::string VerifyBankElementRequest::getBankCardNo()const
{
	return bankCardNo_;
}

void VerifyBankElementRequest::setBankCardNo(const std::string& bankCardNo)
{
	bankCardNo_ = bankCardNo;
	setBodyParameter("BankCardNo", bankCardNo);
}

std::string VerifyBankElementRequest::getMode()const
{
	return mode_;
}

void VerifyBankElementRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setBodyParameter("Mode", mode);
}

std::string VerifyBankElementRequest::getOuterOrderNo()const
{
	return outerOrderNo_;
}

void VerifyBankElementRequest::setOuterOrderNo(const std::string& outerOrderNo)
{
	outerOrderNo_ = outerOrderNo;
	setBodyParameter("OuterOrderNo", outerOrderNo);
}

std::string VerifyBankElementRequest::getBankCardFile()const
{
	return bankCardFile_;
}

void VerifyBankElementRequest::setBankCardFile(const std::string& bankCardFile)
{
	bankCardFile_ = bankCardFile;
	setBodyParameter("BankCardFile", bankCardFile);
}

long VerifyBankElementRequest::getSceneId()const
{
	return sceneId_;
}

void VerifyBankElementRequest::setSceneId(long sceneId)
{
	sceneId_ = sceneId;
	setBodyParameter("SceneId", std::to_string(sceneId));
}

