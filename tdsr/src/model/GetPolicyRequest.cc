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

#include <alibabacloud/tdsr/model/GetPolicyRequest.h>

using AlibabaCloud::Tdsr::Model::GetPolicyRequest;

GetPolicyRequest::GetPolicyRequest() :
	RpcServiceRequest("tdsr", "2020-01-01", "GetPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

GetPolicyRequest::~GetPolicyRequest()
{}

std::string GetPolicyRequest::getSubSceneUuid()const
{
	return subSceneUuid_;
}

void GetPolicyRequest::setSubSceneUuid(const std::string& subSceneUuid)
{
	subSceneUuid_ = subSceneUuid;
	setParameter("SubSceneUuid", subSceneUuid);
}

std::string GetPolicyRequest::getType()const
{
	return type_;
}

void GetPolicyRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

