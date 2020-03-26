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

#include <alibabacloud/trademark/model/QueryTaskListRequest.h>

using AlibabaCloud::Trademark::Model::QueryTaskListRequest;

QueryTaskListRequest::QueryTaskListRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryTaskList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTaskListRequest::~QueryTaskListRequest()
{}

std::string QueryTaskListRequest::getBizType()const
{
	return bizType_;
}

void QueryTaskListRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

int QueryTaskListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTaskListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int QueryTaskListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryTaskListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

