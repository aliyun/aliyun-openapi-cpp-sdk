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

#include <alibabacloud/trademark/model/QueryCommunicationLogsRequest.h>

using AlibabaCloud::Trademark::Model::QueryCommunicationLogsRequest;

QueryCommunicationLogsRequest::QueryCommunicationLogsRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryCommunicationLogs")
{}

QueryCommunicationLogsRequest::~QueryCommunicationLogsRequest()
{}

std::string QueryCommunicationLogsRequest::getBizId()const
{
	return bizId_;
}

void QueryCommunicationLogsRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", std::to_string(bizId));
}

int QueryCommunicationLogsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryCommunicationLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int QueryCommunicationLogsRequest::getType()const
{
	return type_;
}

void QueryCommunicationLogsRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

int QueryCommunicationLogsRequest::getPageNum()const
{
	return pageNum_;
}

void QueryCommunicationLogsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

