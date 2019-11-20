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

#include <alibabacloud/ccc/model/LaunchAppraiseRequest.h>

using AlibabaCloud::CCC::Model::LaunchAppraiseRequest;

LaunchAppraiseRequest::LaunchAppraiseRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "LaunchAppraise")
{
	setMethod(HttpRequest::Method::Post);
}

LaunchAppraiseRequest::~LaunchAppraiseRequest()
{}

std::string LaunchAppraiseRequest::getAcid()const
{
	return acid_;
}

void LaunchAppraiseRequest::setAcid(const std::string& acid)
{
	acid_ = acid;
	setCoreParameter("Acid", acid);
}

std::string LaunchAppraiseRequest::getInstanceId()const
{
	return instanceId_;
}

void LaunchAppraiseRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string LaunchAppraiseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void LaunchAppraiseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

