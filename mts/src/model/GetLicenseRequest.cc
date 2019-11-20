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
{
	setMethod(HttpRequest::Method::Post);
}

GetLicenseRequest::~GetLicenseRequest()
{}

std::string GetLicenseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetLicenseRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetLicenseRequest::getData()const
{
	return data_;
}

void GetLicenseRequest::setData(const std::string& data)
{
	data_ = data;
	setCoreParameter("Data", data);
}

std::string GetLicenseRequest::getType()const
{
	return type_;
}

void GetLicenseRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string GetLicenseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetLicenseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetLicenseRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetLicenseRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetLicenseRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetLicenseRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string GetLicenseRequest::getOwnerId()const
{
	return ownerId_;
}

void GetLicenseRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string GetLicenseRequest::getMediaId()const
{
	return mediaId_;
}

void GetLicenseRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setCoreParameter("MediaId", mediaId);
}

std::string GetLicenseRequest::getHeader()const
{
	return header_;
}

void GetLicenseRequest::setHeader(const std::string& header)
{
	header_ = header;
	setCoreParameter("Header", header);
}

std::string GetLicenseRequest::getLicenseUrl()const
{
	return licenseUrl_;
}

void GetLicenseRequest::setLicenseUrl(const std::string& licenseUrl)
{
	licenseUrl_ = licenseUrl;
	setCoreParameter("LicenseUrl", licenseUrl);
}

