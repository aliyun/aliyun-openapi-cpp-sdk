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

#include <alibabacloud/aliyuncvc/model/GetDeviceListRequest.h>

using AlibabaCloud::Aliyuncvc::Model::GetDeviceListRequest;

GetDeviceListRequest::GetDeviceListRequest() :
	RpcServiceRequest("aliyuncvc", "2019-10-30", "GetDeviceList")
{
	setMethod(HttpRequest::Method::Post);
}

GetDeviceListRequest::~GetDeviceListRequest()
{}

std::string GetDeviceListRequest::getCastScreenCode()const
{
	return castScreenCode_;
}

void GetDeviceListRequest::setCastScreenCode(const std::string& castScreenCode)
{
	castScreenCode_ = castScreenCode;
	setParameter("CastScreenCode", castScreenCode);
}

std::string GetDeviceListRequest::getGroupId()const
{
	return groupId_;
}

void GetDeviceListRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

