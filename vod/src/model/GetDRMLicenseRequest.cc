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

#include <alibabacloud/vod/model/GetDRMLicenseRequest.h>

using AlibabaCloud::Vod::Model::GetDRMLicenseRequest;

GetDRMLicenseRequest::GetDRMLicenseRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetDRMLicense")
{
	setMethod(HttpRequest::Method::Post);
}

GetDRMLicenseRequest::~GetDRMLicenseRequest()
{}

std::string GetDRMLicenseRequest::getCDMData()const
{
	return cDMData_;
}

void GetDRMLicenseRequest::setCDMData(const std::string& cDMData)
{
	cDMData_ = cDMData;
	setParameter("CDMData", cDMData);
}

std::string GetDRMLicenseRequest::getCertId()const
{
	return certId_;
}

void GetDRMLicenseRequest::setCertId(const std::string& certId)
{
	certId_ = certId;
	setParameter("CertId", certId);
}

std::string GetDRMLicenseRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetDRMLicenseRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetDRMLicenseRequest::getVideoId()const
{
	return videoId_;
}

void GetDRMLicenseRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setParameter("VideoId", videoId);
}

long GetDRMLicenseRequest::getOwnerId()const
{
	return ownerId_;
}

void GetDRMLicenseRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetDRMLicenseRequest::getDRMType()const
{
	return dRMType_;
}

void GetDRMLicenseRequest::setDRMType(const std::string& dRMType)
{
	dRMType_ = dRMType;
	setParameter("DRMType", dRMType);
}

