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

#include <alibabacloud/cr/model/GetNamespaceListRequest.h>

using AlibabaCloud::Cr::Model::GetNamespaceListRequest;

GetNamespaceListRequest::GetNamespaceListRequest() :
	RoaServiceRequest("cr", "2016-06-07")
{}

GetNamespaceListRequest::~GetNamespaceListRequest()
{}

std::string GetNamespaceListRequest::getRegionId()const
{
	return regionId_;
}

void GetNamespaceListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetNamespaceListRequest::getAuthorize()const
{
	return authorize_;
}

void GetNamespaceListRequest::setAuthorize(const std::string& authorize)
{
	authorize_ = authorize;
	setCoreParameter("Authorize", authorize);
}

std::string GetNamespaceListRequest::getStatus()const
{
	return status_;
}

void GetNamespaceListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

