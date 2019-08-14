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

#include <alibabacloud/bssopenapi/model/SetResellerUserStatusRequest.h>

using AlibabaCloud::BssOpenApi::Model::SetResellerUserStatusRequest;

SetResellerUserStatusRequest::SetResellerUserStatusRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "SetResellerUserStatus")
{}

SetResellerUserStatusRequest::~SetResellerUserStatusRequest()
{}

std::string SetResellerUserStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void SetResellerUserStatusRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetResellerUserStatusRequest::getStatus()const
{
	return status_;
}

void SetResellerUserStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

std::string SetResellerUserStatusRequest::getBusinessType()const
{
	return businessType_;
}

void SetResellerUserStatusRequest::setBusinessType(const std::string& businessType)
{
	businessType_ = businessType;
	setCoreParameter("BusinessType", businessType);
}

