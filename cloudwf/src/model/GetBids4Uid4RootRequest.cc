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

#include <alibabacloud/cloudwf/model/GetBids4Uid4RootRequest.h>

using AlibabaCloud::Cloudwf::Model::GetBids4Uid4RootRequest;

GetBids4Uid4RootRequest::GetBids4Uid4RootRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetBids4Uid4Root")
{
	setMethod(HttpRequest::Method::Post);
}

GetBids4Uid4RootRequest::~GetBids4Uid4RootRequest()
{}

std::string GetBids4Uid4RootRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetBids4Uid4RootRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long GetBids4Uid4RootRequest::getUid()const
{
	return uid_;
}

void GetBids4Uid4RootRequest::setUid(long uid)
{
	uid_ = uid;
	setParameter("Uid", std::to_string(uid));
}

