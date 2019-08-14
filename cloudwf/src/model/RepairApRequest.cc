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

#include <alibabacloud/cloudwf/model/RepairApRequest.h>

using AlibabaCloud::Cloudwf::Model::RepairApRequest;

RepairApRequest::RepairApRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "RepairAp")
{}

RepairApRequest::~RepairApRequest()
{}

long RepairApRequest::getId()const
{
	return id_;
}

void RepairApRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string RepairApRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RepairApRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

