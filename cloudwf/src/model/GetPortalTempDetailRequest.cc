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

#include <alibabacloud/cloudwf/model/GetPortalTempDetailRequest.h>

using AlibabaCloud::Cloudwf::Model::GetPortalTempDetailRequest;

GetPortalTempDetailRequest::GetPortalTempDetailRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetPortalTempDetail")
{}

GetPortalTempDetailRequest::~GetPortalTempDetailRequest()
{}

long GetPortalTempDetailRequest::getId()const
{
	return id_;
}

void GetPortalTempDetailRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string GetPortalTempDetailRequest::getUniqueId()const
{
	return uniqueId_;
}

void GetPortalTempDetailRequest::setUniqueId(const std::string& uniqueId)
{
	uniqueId_ = uniqueId;
	setCoreParameter("UniqueId", uniqueId);
}

std::string GetPortalTempDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetPortalTempDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

