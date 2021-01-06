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

#include <alibabacloud/cdrs/model/GetCdrsMonitorListRequest.h>

using AlibabaCloud::CDRS::Model::GetCdrsMonitorListRequest;

GetCdrsMonitorListRequest::GetCdrsMonitorListRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "GetCdrsMonitorList")
{
	setMethod(HttpRequest::Method::Post);
}

GetCdrsMonitorListRequest::~GetCdrsMonitorListRequest()
{}

std::string GetCdrsMonitorListRequest::getCorpId()const
{
	return corpId_;
}

void GetCdrsMonitorListRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

int GetCdrsMonitorListRequest::getPageNo()const
{
	return pageNo_;
}

void GetCdrsMonitorListRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", std::to_string(pageNo));
}

int GetCdrsMonitorListRequest::getPageSize()const
{
	return pageSize_;
}

void GetCdrsMonitorListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

