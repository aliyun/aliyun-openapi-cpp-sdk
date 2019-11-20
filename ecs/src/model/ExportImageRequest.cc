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

#include <alibabacloud/ecs/model/ExportImageRequest.h>

using AlibabaCloud::Ecs::Model::ExportImageRequest;

ExportImageRequest::ExportImageRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ExportImage")
{
	setMethod(HttpRequest::Method::Post);
}

ExportImageRequest::~ExportImageRequest()
{}

long ExportImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ExportImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ExportImageRequest::getImageId()const
{
	return imageId_;
}

void ExportImageRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string ExportImageRequest::getRegionId()const
{
	return regionId_;
}

void ExportImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ExportImageRequest::getImageFormat()const
{
	return imageFormat_;
}

void ExportImageRequest::setImageFormat(const std::string& imageFormat)
{
	imageFormat_ = imageFormat;
	setCoreParameter("ImageFormat", imageFormat);
}

std::string ExportImageRequest::getOSSBucket()const
{
	return oSSBucket_;
}

void ExportImageRequest::setOSSBucket(const std::string& oSSBucket)
{
	oSSBucket_ = oSSBucket;
	setCoreParameter("OSSBucket", oSSBucket);
}

std::string ExportImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ExportImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ExportImageRequest::getRoleName()const
{
	return roleName_;
}

void ExportImageRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setCoreParameter("RoleName", roleName);
}

long ExportImageRequest::getOwnerId()const
{
	return ownerId_;
}

void ExportImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ExportImageRequest::getOSSPrefix()const
{
	return oSSPrefix_;
}

void ExportImageRequest::setOSSPrefix(const std::string& oSSPrefix)
{
	oSSPrefix_ = oSSPrefix;
	setCoreParameter("OSSPrefix", oSSPrefix);
}

