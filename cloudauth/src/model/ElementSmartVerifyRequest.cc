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

#include <alibabacloud/cloudauth/model/ElementSmartVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::ElementSmartVerifyRequest;

ElementSmartVerifyRequest::ElementSmartVerifyRequest() :
	RpcServiceRequest("cloudauth", "2020-06-18", "ElementSmartVerify")
{
	setMethod(HttpRequest::Method::Post);
}

ElementSmartVerifyRequest::~ElementSmartVerifyRequest()
{}

std::string ElementSmartVerifyRequest::getCertFile()const
{
	return certFile_;
}

void ElementSmartVerifyRequest::setCertFile(const std::string& certFile)
{
	certFile_ = certFile;
	setBodyParameter("CertFile", certFile);
}

std::string ElementSmartVerifyRequest::getCertNationalEmblemUrl()const
{
	return certNationalEmblemUrl_;
}

void ElementSmartVerifyRequest::setCertNationalEmblemUrl(const std::string& certNationalEmblemUrl)
{
	certNationalEmblemUrl_ = certNationalEmblemUrl;
	setBodyParameter("CertNationalEmblemUrl", certNationalEmblemUrl);
}

std::string ElementSmartVerifyRequest::getCertName()const
{
	return certName_;
}

void ElementSmartVerifyRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setBodyParameter("CertName", certName);
}

std::string ElementSmartVerifyRequest::getMode()const
{
	return mode_;
}

void ElementSmartVerifyRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setBodyParameter("Mode", mode);
}

std::string ElementSmartVerifyRequest::getCertNo()const
{
	return certNo_;
}

void ElementSmartVerifyRequest::setCertNo(const std::string& certNo)
{
	certNo_ = certNo;
	setBodyParameter("CertNo", certNo);
}

std::string ElementSmartVerifyRequest::getOuterOrderNo()const
{
	return outerOrderNo_;
}

void ElementSmartVerifyRequest::setOuterOrderNo(const std::string& outerOrderNo)
{
	outerOrderNo_ = outerOrderNo;
	setBodyParameter("OuterOrderNo", outerOrderNo);
}

std::string ElementSmartVerifyRequest::getCertUrl()const
{
	return certUrl_;
}

void ElementSmartVerifyRequest::setCertUrl(const std::string& certUrl)
{
	certUrl_ = certUrl;
	setBodyParameter("CertUrl", certUrl);
}

std::string ElementSmartVerifyRequest::getCertType()const
{
	return certType_;
}

void ElementSmartVerifyRequest::setCertType(const std::string& certType)
{
	certType_ = certType;
	setBodyParameter("CertType", certType);
}

long ElementSmartVerifyRequest::getSceneId()const
{
	return sceneId_;
}

void ElementSmartVerifyRequest::setSceneId(long sceneId)
{
	sceneId_ = sceneId;
	setBodyParameter("SceneId", std::to_string(sceneId));
}

