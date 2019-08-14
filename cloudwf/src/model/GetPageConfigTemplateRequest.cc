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

#include <alibabacloud/cloudwf/model/GetPageConfigTemplateRequest.h>

using AlibabaCloud::Cloudwf::Model::GetPageConfigTemplateRequest;

GetPageConfigTemplateRequest::GetPageConfigTemplateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetPageConfigTemplate")
{}

GetPageConfigTemplateRequest::~GetPageConfigTemplateRequest()
{}

long GetPageConfigTemplateRequest::getId()const
{
	return id_;
}

void GetPageConfigTemplateRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string GetPageConfigTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetPageConfigTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

