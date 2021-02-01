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

#include <alibabacloud/facebody/model/ExecuteServerSideVerificationRequest.h>

using AlibabaCloud::Facebody::Model::ExecuteServerSideVerificationRequest;

ExecuteServerSideVerificationRequest::ExecuteServerSideVerificationRequest() :
	RoaServiceRequest("facebody", "2020-09-10")
{
	setResourcePath("/viapi/thirdparty/realperson/execServerSideVerification");
	setMethod(HttpRequest::Method::Post);
}

ExecuteServerSideVerificationRequest::~ExecuteServerSideVerificationRequest()
{}

std::string ExecuteServerSideVerificationRequest::getFacialPictureData()const
{
	return facialPictureData_;
}

void ExecuteServerSideVerificationRequest::setFacialPictureData(const std::string& facialPictureData)
{
	facialPictureData_ = facialPictureData;
	setBodyParameter("FacialPictureData", facialPictureData);
}

std::string ExecuteServerSideVerificationRequest::getSceneType()const
{
	return sceneType_;
}

void ExecuteServerSideVerificationRequest::setSceneType(const std::string& sceneType)
{
	sceneType_ = sceneType;
	setBodyParameter("SceneType", sceneType);
}

std::string ExecuteServerSideVerificationRequest::getCertificateNumber()const
{
	return certificateNumber_;
}

void ExecuteServerSideVerificationRequest::setCertificateNumber(const std::string& certificateNumber)
{
	certificateNumber_ = certificateNumber;
	setBodyParameter("CertificateNumber", certificateNumber);
}

std::string ExecuteServerSideVerificationRequest::getCertificateName()const
{
	return certificateName_;
}

void ExecuteServerSideVerificationRequest::setCertificateName(const std::string& certificateName)
{
	certificateName_ = certificateName;
	setBodyParameter("CertificateName", certificateName);
}

std::string ExecuteServerSideVerificationRequest::getFacialPictureUrl()const
{
	return facialPictureUrl_;
}

void ExecuteServerSideVerificationRequest::setFacialPictureUrl(const std::string& facialPictureUrl)
{
	facialPictureUrl_ = facialPictureUrl;
	setBodyParameter("FacialPictureUrl", facialPictureUrl);
}

