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

#include <alibabacloud/cloudesl/model/QueryTemplateListByGroupIdRequest.h>

using AlibabaCloud::Cloudesl::Model::QueryTemplateListByGroupIdRequest;

QueryTemplateListByGroupIdRequest::QueryTemplateListByGroupIdRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "QueryTemplateListByGroupId")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTemplateListByGroupIdRequest::~QueryTemplateListByGroupIdRequest()
{}

std::string QueryTemplateListByGroupIdRequest::getGroupId()const
{
	return groupId_;
}

void QueryTemplateListByGroupIdRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", groupId);
}

int QueryTemplateListByGroupIdRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryTemplateListByGroupIdRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int QueryTemplateListByGroupIdRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTemplateListByGroupIdRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

