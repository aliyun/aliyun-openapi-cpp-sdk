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

#include <alibabacloud/cloudauth/model/VerifyDeviceRequest.h>

using AlibabaCloud::Cloudauth::Model::VerifyDeviceRequest;

VerifyDeviceRequest::VerifyDeviceRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "VerifyDevice")
{
	setMethod(HttpRequest::Method::Post);
}

VerifyDeviceRequest::~VerifyDeviceRequest()
{}

std::string VerifyDeviceRequest::getExtInfo()const
{
	return extInfo_;
}

void VerifyDeviceRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setBodyParameter("ExtInfo", extInfo);
}

std::string VerifyDeviceRequest::getCertifyData()const
{
	return certifyData_;
}

void VerifyDeviceRequest::setCertifyData(const std::string& certifyData)
{
	certifyData_ = certifyData;
	setParameter("CertifyData", certifyData);
}

std::string VerifyDeviceRequest::getAppVersion()const
{
	return appVersion_;
}

void VerifyDeviceRequest::setAppVersion(const std::string& appVersion)
{
	appVersion_ = appVersion;
	setParameter("AppVersion", appVersion);
}

std::string VerifyDeviceRequest::getCertifyId()const
{
	return certifyId_;
}

void VerifyDeviceRequest::setCertifyId(const std::string& certifyId)
{
	certifyId_ = certifyId;
	setParameter("CertifyId", certifyId);
}

