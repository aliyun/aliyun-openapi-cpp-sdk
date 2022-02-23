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

#include <alibabacloud/cloudauth-console/model/UploadIdentifyRecordRequest.h>

using AlibabaCloud::Cloudauth_console::Model::UploadIdentifyRecordRequest;

UploadIdentifyRecordRequest::UploadIdentifyRecordRequest() :
	RpcServiceRequest("cloudauth-console", "2019-04-03", "UploadIdentifyRecord")
{
	setMethod(HttpRequest::Method::Post);
}

UploadIdentifyRecordRequest::~UploadIdentifyRecordRequest()
{}

std::string UploadIdentifyRecordRequest::getExt()const
{
	return ext_;
}

void UploadIdentifyRecordRequest::setExt(const std::string& ext)
{
	ext_ = ext;
	setParameter("Ext", ext);
}

std::string UploadIdentifyRecordRequest::getIdentifyingImageUrl()const
{
	return identifyingImageUrl_;
}

void UploadIdentifyRecordRequest::setIdentifyingImageUrl(const std::string& identifyingImageUrl)
{
	identifyingImageUrl_ = identifyingImageUrl;
	setParameter("IdentifyingImageUrl", identifyingImageUrl);
}

std::string UploadIdentifyRecordRequest::getIdentifyingImageBase64()const
{
	return identifyingImageBase64_;
}

void UploadIdentifyRecordRequest::setIdentifyingImageBase64(const std::string& identifyingImageBase64)
{
	identifyingImageBase64_ = identifyingImageBase64;
	setBodyParameter("IdentifyingImageBase64", identifyingImageBase64);
}

std::string UploadIdentifyRecordRequest::getDeviceSecret()const
{
	return deviceSecret_;
}

void UploadIdentifyRecordRequest::setDeviceSecret(const std::string& deviceSecret)
{
	deviceSecret_ = deviceSecret;
	setParameter("DeviceSecret", deviceSecret);
}

std::string UploadIdentifyRecordRequest::getProductKey()const
{
	return productKey_;
}

void UploadIdentifyRecordRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string UploadIdentifyRecordRequest::getUserId()const
{
	return userId_;
}

void UploadIdentifyRecordRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string UploadIdentifyRecordRequest::getIotId()const
{
	return iotId_;
}

void UploadIdentifyRecordRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string UploadIdentifyRecordRequest::getDeviceName()const
{
	return deviceName_;
}

void UploadIdentifyRecordRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

long UploadIdentifyRecordRequest::getIdentifyingTime()const
{
	return identifyingTime_;
}

void UploadIdentifyRecordRequest::setIdentifyingTime(long identifyingTime)
{
	identifyingTime_ = identifyingTime;
	setParameter("IdentifyingTime", std::to_string(identifyingTime));
}

std::string UploadIdentifyRecordRequest::getProjectId()const
{
	return projectId_;
}

void UploadIdentifyRecordRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string UploadIdentifyRecordRequest::getUserName()const
{
	return userName_;
}

void UploadIdentifyRecordRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

