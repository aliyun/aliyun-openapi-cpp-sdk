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

#include <alibabacloud/cloudwf/model/GetGroupApRepairProgressRequest.h>

using AlibabaCloud::Cloudwf::Model::GetGroupApRepairProgressRequest;

GetGroupApRepairProgressRequest::GetGroupApRepairProgressRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetGroupApRepairProgress")
{}

GetGroupApRepairProgressRequest::~GetGroupApRepairProgressRequest()
{}

long GetGroupApRepairProgressRequest::getId()const
{
	return id_;
}

void GetGroupApRepairProgressRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string GetGroupApRepairProgressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetGroupApRepairProgressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

