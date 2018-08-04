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

#include <alibabacloud/mts/model/GetLicenseRequest.h>

using AlibabaCloud::Mts::Model::GetLicenseRequest;

GetLicenseRequest::GetLicenseRequest() :
	RpcServiceRequest("mts", "2014-06-18", "GetLicense")
{}

GetLicenseRequest::~GetLicenseRequest()
{}

std::string GetLicenseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetLicenseRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetLicenseRequest::getData()const
{
	return data_;
}

void GetLicenseRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

std::string GetLicenseRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetLicenseRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetLicenseRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetLicenseRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string GetLicenseRequest::getHeader()const
{
	return header_;
}

void GetLicenseRequest::setHeader(const std::string& header)
{
	header_ = header;
	setParameter("Header", header);
}

std::string GetLicenseRequest::getOwnerId()const
{
	return ownerId_;
}

void GetLicenseRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string GetLicenseRequest::getMediaId()const
{
	return mediaId_;
}

void GetLicenseRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

std::string GetLicenseRequest::getType()const
{
	return type_;
}

void GetLicenseRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string GetLicenseRequest::getLicenseUrl()const
{
	return licenseUrl_;
}

void GetLicenseRequest::setLicenseUrl(const std::string& licenseUrl)
{
	licenseUrl_ = licenseUrl;
	setParameter("LicenseUrl", licenseUrl);
}

std::string GetLicenseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetLicenseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

