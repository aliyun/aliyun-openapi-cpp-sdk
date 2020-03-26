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

#include <alibabacloud/cloudwf/model/UserDataShowListRequest.h>

using AlibabaCloud::Cloudwf::Model::UserDataShowListRequest;

UserDataShowListRequest::UserDataShowListRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "UserDataShowList")
{
	setMethod(HttpRequest::Method::Post);
}

UserDataShowListRequest::~UserDataShowListRequest()
{}

long UserDataShowListRequest::getIid()const
{
	return iid_;
}

void UserDataShowListRequest::setIid(long iid)
{
	iid_ = iid;
	setParameter("Iid", std::to_string(iid));
}

std::string UserDataShowListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UserDataShowListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UserDataShowListRequest::getName()const
{
	return name_;
}

void UserDataShowListRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int UserDataShowListRequest::getPage()const
{
	return page_;
}

void UserDataShowListRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

long UserDataShowListRequest::getBid()const
{
	return bid_;
}

void UserDataShowListRequest::setBid(long bid)
{
	bid_ = bid;
	setParameter("Bid", std::to_string(bid));
}

int UserDataShowListRequest::getPer()const
{
	return per_;
}

void UserDataShowListRequest::setPer(int per)
{
	per_ = per;
	setParameter("Per", std::to_string(per));
}

