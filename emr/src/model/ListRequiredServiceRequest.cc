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

#include <alibabacloud/emr/model/ListRequiredServiceRequest.h>

using AlibabaCloud::Emr::Model::ListRequiredServiceRequest;

ListRequiredServiceRequest::ListRequiredServiceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListRequiredService")
{}

ListRequiredServiceRequest::~ListRequiredServiceRequest()
{}

long ListRequiredServiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListRequiredServiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListRequiredServiceRequest::getRegionId()const
{
	return regionId_;
}

void ListRequiredServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListRequiredServiceRequest::getEmrVersion()const
{
	return emrVersion_;
}

void ListRequiredServiceRequest::setEmrVersion(const std::string& emrVersion)
{
	emrVersion_ = emrVersion;
	setCoreParameter("EmrVersion", std::to_string(emrVersion));
}

std::string ListRequiredServiceRequest::getServiceNameList()const
{
	return serviceNameList_;
}

void ListRequiredServiceRequest::setServiceNameList(const std::string& serviceNameList)
{
	serviceNameList_ = serviceNameList;
	setCoreParameter("ServiceNameList", std::to_string(serviceNameList));
}

std::string ListRequiredServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListRequiredServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

