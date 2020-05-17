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

#include <alibabacloud/vcs/model/ListDevicesRequest.h>

using AlibabaCloud::Vcs::Model::ListDevicesRequest;

ListDevicesRequest::ListDevicesRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListDevices")
{
	setMethod(HttpRequest::Method::Post);
}

ListDevicesRequest::~ListDevicesRequest()
{}

std::string ListDevicesRequest::getCorpId()const
{
	return corpId_;
}

void ListDevicesRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListDevicesRequest::getGbId()const
{
	return gbId_;
}

void ListDevicesRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setBodyParameter("GbId", gbId);
}

int ListDevicesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDevicesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int ListDevicesRequest::getPageSize()const
{
	return pageSize_;
}

void ListDevicesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListDevicesRequest::getDeviceName()const
{
	return deviceName_;
}

void ListDevicesRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

