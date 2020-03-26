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

#include <alibabacloud/ubsms/model/SetUserBusinessStatusRequest.h>

using AlibabaCloud::Ubsms::Model::SetUserBusinessStatusRequest;

SetUserBusinessStatusRequest::SetUserBusinessStatusRequest() :
	RpcServiceRequest("ubsms", "2015-06-23", "SetUserBusinessStatus")
{
	setMethod(HttpRequest::Method::Post);
}

SetUserBusinessStatusRequest::~SetUserBusinessStatusRequest()
{}

std::string SetUserBusinessStatusRequest::getUid()const
{
	return uid_;
}

void SetUserBusinessStatusRequest::setUid(const std::string& uid)
{
	uid_ = uid;
	setParameter("Uid", uid);
}

std::string SetUserBusinessStatusRequest::getStatusValue()const
{
	return statusValue_;
}

void SetUserBusinessStatusRequest::setStatusValue(const std::string& statusValue)
{
	statusValue_ = statusValue;
	setParameter("StatusValue", statusValue);
}

std::string SetUserBusinessStatusRequest::getService()const
{
	return service_;
}

void SetUserBusinessStatusRequest::setService(const std::string& service)
{
	service_ = service;
	setParameter("Service", service);
}

std::string SetUserBusinessStatusRequest::getStatusKey()const
{
	return statusKey_;
}

void SetUserBusinessStatusRequest::setStatusKey(const std::string& statusKey)
{
	statusKey_ = statusKey;
	setParameter("StatusKey", statusKey);
}

