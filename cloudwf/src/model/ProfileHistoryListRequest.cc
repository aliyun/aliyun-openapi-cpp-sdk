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

#include <alibabacloud/cloudwf/model/ProfileHistoryListRequest.h>

using AlibabaCloud::Cloudwf::Model::ProfileHistoryListRequest;

ProfileHistoryListRequest::ProfileHistoryListRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ProfileHistoryList")
{
	setMethod(HttpRequest::Method::Post);
}

ProfileHistoryListRequest::~ProfileHistoryListRequest()
{}

std::string ProfileHistoryListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ProfileHistoryListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ProfileHistoryListRequest::getAgsid()const
{
	return agsid_;
}

void ProfileHistoryListRequest::setAgsid(long agsid)
{
	agsid_ = agsid;
	setParameter("Agsid", std::to_string(agsid));
}

long ProfileHistoryListRequest::getIdtype()const
{
	return idtype_;
}

void ProfileHistoryListRequest::setIdtype(long idtype)
{
	idtype_ = idtype;
	setParameter("Idtype", std::to_string(idtype));
}

int ProfileHistoryListRequest::getPage()const
{
	return page_;
}

void ProfileHistoryListRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

int ProfileHistoryListRequest::getPer()const
{
	return per_;
}

void ProfileHistoryListRequest::setPer(int per)
{
	per_ = per;
	setParameter("Per", std::to_string(per));
}

