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

#include <alibabacloud/cloudwf/model/GetApgroupPortalConfigProgressRequest.h>

using AlibabaCloud::Cloudwf::Model::GetApgroupPortalConfigProgressRequest;

GetApgroupPortalConfigProgressRequest::GetApgroupPortalConfigProgressRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetApgroupPortalConfigProgress")
{
	setMethod(HttpRequest::Method::Post);
}

GetApgroupPortalConfigProgressRequest::~GetApgroupPortalConfigProgressRequest()
{}

std::string GetApgroupPortalConfigProgressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetApgroupPortalConfigProgressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long GetApgroupPortalConfigProgressRequest::getId()const
{
	return id_;
}

void GetApgroupPortalConfigProgressRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

