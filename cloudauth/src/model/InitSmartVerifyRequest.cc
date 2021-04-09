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

#include <alibabacloud/cloudauth/model/InitSmartVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::InitSmartVerifyRequest;

InitSmartVerifyRequest::InitSmartVerifyRequest() :
	RpcServiceRequest("cloudauth", "2020-06-18", "InitSmartVerify")
{
	setMethod(HttpRequest::Method::Post);
}

InitSmartVerifyRequest::~InitSmartVerifyRequest()
{}

std::string InitSmartVerifyRequest::getIdName()const
{
	return idName_;
}

void InitSmartVerifyRequest::setIdName(const std::string& idName)
{
	idName_ = idName;
	setBodyParameter("IdName", idName);
}

std::string InitSmartVerifyRequest::getUserId()const
{
	return userId_;
}

void InitSmartVerifyRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}

std::string InitSmartVerifyRequest::getCertifyId()const
{
	return certifyId_;
}

void InitSmartVerifyRequest::setCertifyId(const std::string& certifyId)
{
	certifyId_ = certifyId;
	setBodyParameter("CertifyId", certifyId);
}

std::string InitSmartVerifyRequest::getFacePictureBase64()const
{
	return facePictureBase64_;
}

void InitSmartVerifyRequest::setFacePictureBase64(const std::string& facePictureBase64)
{
	facePictureBase64_ = facePictureBase64;
	setBodyParameter("FacePictureBase64", facePictureBase64);
}

std::string InitSmartVerifyRequest::getMode()const
{
	return mode_;
}

void InitSmartVerifyRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setBodyParameter("Mode", mode);
}

std::string InitSmartVerifyRequest::getCertNo()const
{
	return certNo_;
}

void InitSmartVerifyRequest::setCertNo(const std::string& certNo)
{
	certNo_ = certNo;
	setBodyParameter("CertNo", certNo);
}

std::string InitSmartVerifyRequest::getOuterOrderNo()const
{
	return outerOrderNo_;
}

void InitSmartVerifyRequest::setOuterOrderNo(const std::string& outerOrderNo)
{
	outerOrderNo_ = outerOrderNo;
	setBodyParameter("OuterOrderNo", outerOrderNo);
}

std::string InitSmartVerifyRequest::getCertType()const
{
	return certType_;
}

void InitSmartVerifyRequest::setCertType(const std::string& certType)
{
	certType_ = certType;
	setBodyParameter("CertType", certType);
}

std::string InitSmartVerifyRequest::getMetaInfo()const
{
	return metaInfo_;
}

void InitSmartVerifyRequest::setMetaInfo(const std::string& metaInfo)
{
	metaInfo_ = metaInfo;
	setBodyParameter("MetaInfo", metaInfo);
}

std::string InitSmartVerifyRequest::getOcr()const
{
	return ocr_;
}

void InitSmartVerifyRequest::setOcr(const std::string& ocr)
{
	ocr_ = ocr;
	setBodyParameter("Ocr", ocr);
}

std::string InitSmartVerifyRequest::getOssObjectName()const
{
	return ossObjectName_;
}

void InitSmartVerifyRequest::setOssObjectName(const std::string& ossObjectName)
{
	ossObjectName_ = ossObjectName;
	setBodyParameter("OssObjectName", ossObjectName);
}

std::string InitSmartVerifyRequest::getFacePictureUrl()const
{
	return facePictureUrl_;
}

void InitSmartVerifyRequest::setFacePictureUrl(const std::string& facePictureUrl)
{
	facePictureUrl_ = facePictureUrl;
	setBodyParameter("FacePictureUrl", facePictureUrl);
}

std::string InitSmartVerifyRequest::getIp()const
{
	return ip_;
}

void InitSmartVerifyRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setBodyParameter("Ip", ip);
}

std::string InitSmartVerifyRequest::getCertName()const
{
	return certName_;
}

void InitSmartVerifyRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setBodyParameter("CertName", certName);
}

std::string InitSmartVerifyRequest::getMobile()const
{
	return mobile_;
}

void InitSmartVerifyRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setBodyParameter("Mobile", mobile);
}

std::string InitSmartVerifyRequest::getIdNo()const
{
	return idNo_;
}

void InitSmartVerifyRequest::setIdNo(const std::string& idNo)
{
	idNo_ = idNo;
	setBodyParameter("IdNo", idNo);
}

long InitSmartVerifyRequest::getSceneId()const
{
	return sceneId_;
}

void InitSmartVerifyRequest::setSceneId(long sceneId)
{
	sceneId_ = sceneId;
	setBodyParameter("SceneId", std::to_string(sceneId));
}

std::string InitSmartVerifyRequest::getCallbackToken()const
{
	return callbackToken_;
}

void InitSmartVerifyRequest::setCallbackToken(const std::string& callbackToken)
{
	callbackToken_ = callbackToken;
	setBodyParameter("CallbackToken", callbackToken);
}

std::string InitSmartVerifyRequest::getOssBucketName()const
{
	return ossBucketName_;
}

void InitSmartVerifyRequest::setOssBucketName(const std::string& ossBucketName)
{
	ossBucketName_ = ossBucketName;
	setBodyParameter("OssBucketName", ossBucketName);
}

std::string InitSmartVerifyRequest::getCallbackUrl()const
{
	return callbackUrl_;
}

void InitSmartVerifyRequest::setCallbackUrl(const std::string& callbackUrl)
{
	callbackUrl_ = callbackUrl;
	setBodyParameter("CallbackUrl", callbackUrl);
}

