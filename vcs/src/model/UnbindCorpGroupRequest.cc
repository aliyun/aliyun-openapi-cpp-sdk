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

#include <alibabacloud/vcs/model/UnbindCorpGroupRequest.h>

using AlibabaCloud::Vcs::Model::UnbindCorpGroupRequest;

UnbindCorpGroupRequest::UnbindCorpGroupRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UnbindCorpGroup")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindCorpGroupRequest::~UnbindCorpGroupRequest()
{}

std::string UnbindCorpGroupRequest::getCorpId()const
{
	return corpId_;
}

void UnbindCorpGroupRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string UnbindCorpGroupRequest::getCorpGroupId()const
{
	return corpGroupId_;
}

void UnbindCorpGroupRequest::setCorpGroupId(const std::string& corpGroupId)
{
	corpGroupId_ = corpGroupId;
	setBodyParameter("CorpGroupId", corpGroupId);
}

