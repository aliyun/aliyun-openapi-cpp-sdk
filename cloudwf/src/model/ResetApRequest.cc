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

#include <alibabacloud/cloudwf/model/ResetApRequest.h>

using AlibabaCloud::Cloudwf::Model::ResetApRequest;

ResetApRequest::ResetApRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ResetAp")
{
	setMethod(HttpRequest::Method::Post);
}

ResetApRequest::~ResetApRequest()
{}

std::string ResetApRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResetApRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ResetApRequest::getId()const
{
	return id_;
}

void ResetApRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

