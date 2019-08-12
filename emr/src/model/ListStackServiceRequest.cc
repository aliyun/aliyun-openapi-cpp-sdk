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

#include <alibabacloud/emr/model/ListStackServiceRequest.h>

using AlibabaCloud::Emr::Model::ListStackServiceRequest;

ListStackServiceRequest::ListStackServiceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListStackService")
{}

ListStackServiceRequest::~ListStackServiceRequest()
{}

long ListStackServiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListStackServiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListStackServiceRequest::getRegionId()const
{
	return regionId_;
}

void ListStackServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListStackServiceRequest::getStackName()const
{
	return stackName_;
}

void ListStackServiceRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setCoreParameter("StackName", stackName);
}

std::string ListStackServiceRequest::getStackVersion()const
{
	return stackVersion_;
}

void ListStackServiceRequest::setStackVersion(const std::string& stackVersion)
{
	stackVersion_ = stackVersion;
	setCoreParameter("StackVersion", stackVersion);
}

std::string ListStackServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListStackServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

