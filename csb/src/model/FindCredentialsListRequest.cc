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

#include <alibabacloud/csb/model/FindCredentialsListRequest.h>

using AlibabaCloud::CSB::Model::FindCredentialsListRequest;

FindCredentialsListRequest::FindCredentialsListRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindCredentialsList")
{
	setMethod(HttpRequest::Method::Get);
}

FindCredentialsListRequest::~FindCredentialsListRequest()
{}

long FindCredentialsListRequest::getCsbId()const
{
	return csbId_;
}

void FindCredentialsListRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setParameter("CsbId", std::to_string(csbId));
}

int FindCredentialsListRequest::getPageNum()const
{
	return pageNum_;
}

void FindCredentialsListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string FindCredentialsListRequest::getGroupName()const
{
	return groupName_;
}

void FindCredentialsListRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

