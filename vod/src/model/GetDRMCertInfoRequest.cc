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

#include <alibabacloud/vod/model/GetDRMCertInfoRequest.h>

using AlibabaCloud::Vod::Model::GetDRMCertInfoRequest;

GetDRMCertInfoRequest::GetDRMCertInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetDRMCertInfo")
{
	setMethod(HttpRequest::Method::Post);
}

GetDRMCertInfoRequest::~GetDRMCertInfoRequest()
{}

std::string GetDRMCertInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetDRMCertInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetDRMCertInfoRequest::getVideoId()const
{
	return videoId_;
}

void GetDRMCertInfoRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setParameter("VideoId", videoId);
}

std::string GetDRMCertInfoRequest::getCertId()const
{
	return certId_;
}

void GetDRMCertInfoRequest::setCertId(const std::string& certId)
{
	certId_ = certId;
	setParameter("CertId", certId);
}

long GetDRMCertInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void GetDRMCertInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

