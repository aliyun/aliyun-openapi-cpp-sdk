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

#include <alibabacloud/lubancloud/model/BuyOriginPicturesRequest.h>

using AlibabaCloud::Lubancloud::Model::BuyOriginPicturesRequest;

BuyOriginPicturesRequest::BuyOriginPicturesRequest() :
	RpcServiceRequest("lubancloud", "2018-05-09", "BuyOriginPictures")
{}

BuyOriginPicturesRequest::~BuyOriginPicturesRequest()
{}

bool BuyOriginPicturesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void BuyOriginPicturesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string BuyOriginPicturesRequest::getApp_ip()const
{
	return app_ip_;
}

void BuyOriginPicturesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string BuyOriginPicturesRequest::getRegionId()const
{
	return regionId_;
}

void BuyOriginPicturesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long BuyOriginPicturesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void BuyOriginPicturesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string BuyOriginPicturesRequest::getRequestId()const
{
	return requestId_;
}

void BuyOriginPicturesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string BuyOriginPicturesRequest::getCallerType()const
{
	return callerType_;
}

void BuyOriginPicturesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool BuyOriginPicturesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void BuyOriginPicturesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

long BuyOriginPicturesRequest::getCallerUid()const
{
	return callerUid_;
}

void BuyOriginPicturesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::vector<long> BuyOriginPicturesRequest::getPictureId()const
{
	return pictureId_;
}

void BuyOriginPicturesRequest::setPictureId(const std::vector<long>& pictureId)
{
	pictureId_ = pictureId;
	for(int i = 0; i!= pictureId.size(); i++)
		setParameter("PictureId."+ std::to_string(i), std::to_string(pictureId.at(i)));
}

