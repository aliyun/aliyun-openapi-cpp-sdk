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

#include <alibabacloud/emr/model/UpdateUserStatusRequest.h>

using AlibabaCloud::Emr::Model::UpdateUserStatusRequest;

UpdateUserStatusRequest::UpdateUserStatusRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateUserStatus")
{}

UpdateUserStatusRequest::~UpdateUserStatusRequest()
{}

long UpdateUserStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateUserStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateUserStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateUserStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateUserStatusRequest::getRegionId()const
{
	return regionId_;
}

void UpdateUserStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateUserStatusRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void UpdateUserStatusRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

std::string UpdateUserStatusRequest::getUpdateStatus()const
{
	return updateStatus_;
}

void UpdateUserStatusRequest::setUpdateStatus(const std::string& updateStatus)
{
	updateStatus_ = updateStatus;
	setCoreParameter("UpdateStatus", updateStatus);
}

