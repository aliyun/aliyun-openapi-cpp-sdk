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

#include <alibabacloud/cloudwf/model/UserDataDeleteRequest.h>

using AlibabaCloud::Cloudwf::Model::UserDataDeleteRequest;

UserDataDeleteRequest::UserDataDeleteRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "UserDataDelete")
{
	setMethod(HttpRequest::Method::Post);
}

UserDataDeleteRequest::~UserDataDeleteRequest()
{}

long UserDataDeleteRequest::getIid()const
{
	return iid_;
}

void UserDataDeleteRequest::setIid(long iid)
{
	iid_ = iid;
	setParameter("Iid", std::to_string(iid));
}

std::string UserDataDeleteRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UserDataDeleteRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long UserDataDeleteRequest::getBid()const
{
	return bid_;
}

void UserDataDeleteRequest::setBid(long bid)
{
	bid_ = bid;
	setParameter("Bid", std::to_string(bid));
}

