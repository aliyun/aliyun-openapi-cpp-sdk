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

#include <alibabacloud/cloudauth/model/ContrastSmartVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::ContrastSmartVerifyRequest;

ContrastSmartVerifyRequest::ContrastSmartVerifyRequest() :
	RpcServiceRequest("cloudauth", "2020-06-18", "ContrastSmartVerify")
{
	setMethod(HttpRequest::Method::Post);
}

ContrastSmartVerifyRequest::~ContrastSmartVerifyRequest()
{}

std::string ContrastSmartVerifyRequest::getFacePicFile()const
{
	return facePicFile_;
}

void ContrastSmartVerifyRequest::setFacePicFile(const std::string& facePicFile)
{
	facePicFile_ = facePicFile;
	setBodyParameter("FacePicFile", facePicFile);
}

std::string ContrastSmartVerifyRequest::getIp()const
{
	return ip_;
}

void ContrastSmartVerifyRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setBodyParameter("Ip", ip);
}

std::string ContrastSmartVerifyRequest::getCertName()const
{
	return certName_;
}

void ContrastSmartVerifyRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setBodyParameter("CertName", certName);
}

std::string ContrastSmartVerifyRequest::getFacePicString()const
{
	return facePicString_;
}

void ContrastSmartVerifyRequest::setFacePicString(const std::string& facePicString)
{
	facePicString_ = facePicString;
	setBodyParameter("FacePicString", facePicString);
}

std::string ContrastSmartVerifyRequest::getMobile()const
{
	return mobile_;
}

void ContrastSmartVerifyRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setBodyParameter("Mobile", mobile);
}

std::string ContrastSmartVerifyRequest::getUserId()const
{
	return userId_;
}

void ContrastSmartVerifyRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}

std::string ContrastSmartVerifyRequest::getMode()const
{
	return mode_;
}

void ContrastSmartVerifyRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setBodyParameter("Mode", mode);
}

std::string ContrastSmartVerifyRequest::getCertNo()const
{
	return certNo_;
}

void ContrastSmartVerifyRequest::setCertNo(const std::string& certNo)
{
	certNo_ = certNo;
	setBodyParameter("CertNo", certNo);
}

std::string ContrastSmartVerifyRequest::getOuterOrderNo()const
{
	return outerOrderNo_;
}

void ContrastSmartVerifyRequest::setOuterOrderNo(const std::string& outerOrderNo)
{
	outerOrderNo_ = outerOrderNo;
	setBodyParameter("OuterOrderNo", outerOrderNo);
}

std::string ContrastSmartVerifyRequest::getFacePicUrl()const
{
	return facePicUrl_;
}

void ContrastSmartVerifyRequest::setFacePicUrl(const std::string& facePicUrl)
{
	facePicUrl_ = facePicUrl;
	setBodyParameter("FacePicUrl", facePicUrl);
}

std::string ContrastSmartVerifyRequest::getCertType()const
{
	return certType_;
}

void ContrastSmartVerifyRequest::setCertType(const std::string& certType)
{
	certType_ = certType;
	setBodyParameter("CertType", certType);
}

long ContrastSmartVerifyRequest::getSceneId()const
{
	return sceneId_;
}

void ContrastSmartVerifyRequest::setSceneId(long sceneId)
{
	sceneId_ = sceneId;
	setBodyParameter("SceneId", std::to_string(sceneId));
}

