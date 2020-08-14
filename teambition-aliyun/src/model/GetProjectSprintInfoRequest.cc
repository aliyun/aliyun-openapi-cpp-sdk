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

#include <alibabacloud/teambition-aliyun/model/GetProjectSprintInfoRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::GetProjectSprintInfoRequest;

GetProjectSprintInfoRequest::GetProjectSprintInfoRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "GetProjectSprintInfo")
{
	setMethod(HttpRequest::Method::Post);
}

GetProjectSprintInfoRequest::~GetProjectSprintInfoRequest()
{}

std::string GetProjectSprintInfoRequest::getSprintId()const
{
	return sprintId_;
}

void GetProjectSprintInfoRequest::setSprintId(const std::string& sprintId)
{
	sprintId_ = sprintId;
	setBodyParameter("SprintId", sprintId);
}

std::string GetProjectSprintInfoRequest::getOrgId()const
{
	return orgId_;
}

void GetProjectSprintInfoRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

