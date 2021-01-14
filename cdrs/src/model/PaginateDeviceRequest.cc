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

#include <alibabacloud/cdrs/model/PaginateDeviceRequest.h>

using AlibabaCloud::CDRS::Model::PaginateDeviceRequest;

PaginateDeviceRequest::PaginateDeviceRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "PaginateDevice")
{
	setMethod(HttpRequest::Method::Post);
}

PaginateDeviceRequest::~PaginateDeviceRequest()
{}

std::string PaginateDeviceRequest::getCorpId()const
{
	return corpId_;
}

void PaginateDeviceRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

long PaginateDeviceRequest::getPageNumber()const
{
	return pageNumber_;
}

void PaginateDeviceRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

bool PaginateDeviceRequest::getCountTotalNum()const
{
	return countTotalNum_;
}

void PaginateDeviceRequest::setCountTotalNum(bool countTotalNum)
{
	countTotalNum_ = countTotalNum;
	setBodyParameter("CountTotalNum", countTotalNum ? "true" : "false");
}

std::string PaginateDeviceRequest::getAppName()const
{
	return appName_;
}

void PaginateDeviceRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string PaginateDeviceRequest::get_NameSpace()const
{
	return _nameSpace_;
}

void PaginateDeviceRequest::set_NameSpace(const std::string& _nameSpace)
{
	_nameSpace_ = _nameSpace;
	setBodyParameter("_NameSpace", _nameSpace);
}

long PaginateDeviceRequest::getPageSize()const
{
	return pageSize_;
}

void PaginateDeviceRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

