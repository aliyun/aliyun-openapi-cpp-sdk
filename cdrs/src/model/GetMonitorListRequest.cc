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

#include <alibabacloud/cdrs/model/GetMonitorListRequest.h>

using AlibabaCloud::CDRS::Model::GetMonitorListRequest;

GetMonitorListRequest::GetMonitorListRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "GetMonitorList")
{
	setMethod(HttpRequest::Method::Post);
}

GetMonitorListRequest::~GetMonitorListRequest()
{}

std::string GetMonitorListRequest::getCorpId()const
{
	return corpId_;
}

void GetMonitorListRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

int GetMonitorListRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetMonitorListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int GetMonitorListRequest::getPageSize()const
{
	return pageSize_;
}

void GetMonitorListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string GetMonitorListRequest::getBizId()const
{
	return bizId_;
}

void GetMonitorListRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

