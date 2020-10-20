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

#include <alibabacloud/vcs/model/GetMonitorListRequest.h>

using AlibabaCloud::Vcs::Model::GetMonitorListRequest;

GetMonitorListRequest::GetMonitorListRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "GetMonitorList")
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

int GetMonitorListRequest::getPageNo()const
{
	return pageNo_;
}

void GetMonitorListRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", std::to_string(pageNo));
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

