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

#include <alibabacloud/trademark/model/QueryIntentionListRequest.h>

using AlibabaCloud::Trademark::Model::QueryIntentionListRequest;

QueryIntentionListRequest::QueryIntentionListRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryIntentionList")
{}

QueryIntentionListRequest::~QueryIntentionListRequest()
{}

int QueryIntentionListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryIntentionListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryIntentionListRequest::getSortOrder()const
{
	return sortOrder_;
}

void QueryIntentionListRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setCoreParameter("SortOrder", std::to_string(sortOrder));
}

int QueryIntentionListRequest::getType()const
{
	return type_;
}

void QueryIntentionListRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

int QueryIntentionListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryIntentionListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string QueryIntentionListRequest::getSortFiled()const
{
	return sortFiled_;
}

void QueryIntentionListRequest::setSortFiled(const std::string& sortFiled)
{
	sortFiled_ = sortFiled;
	setCoreParameter("SortFiled", std::to_string(sortFiled));
}

int QueryIntentionListRequest::getStatus()const
{
	return status_;
}

void QueryIntentionListRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

