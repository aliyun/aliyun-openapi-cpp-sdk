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

#include <alibabacloud/domain/model/QueryTaskListRequest.h>

using AlibabaCloud::Domain::Model::QueryTaskListRequest;

QueryTaskListRequest::QueryTaskListRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryTaskList")
{}

QueryTaskListRequest::~QueryTaskListRequest()
{}

long QueryTaskListRequest::getBeginCreateTime()const
{
	return beginCreateTime_;
}

void QueryTaskListRequest::setBeginCreateTime(long beginCreateTime)
{
	beginCreateTime_ = beginCreateTime;
	setCoreParameter("BeginCreateTime", std::to_string(beginCreateTime));
}

long QueryTaskListRequest::getEndCreateTime()const
{
	return endCreateTime_;
}

void QueryTaskListRequest::setEndCreateTime(long endCreateTime)
{
	endCreateTime_ = endCreateTime;
	setCoreParameter("EndCreateTime", std::to_string(endCreateTime));
}

std::string QueryTaskListRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryTaskListRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

int QueryTaskListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTaskListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string QueryTaskListRequest::getLang()const
{
	return lang_;
}

void QueryTaskListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int QueryTaskListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryTaskListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

