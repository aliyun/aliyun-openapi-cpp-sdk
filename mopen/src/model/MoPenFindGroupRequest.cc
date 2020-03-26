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

#include <alibabacloud/mopen/model/MoPenFindGroupRequest.h>

using AlibabaCloud::MoPen::Model::MoPenFindGroupRequest;

MoPenFindGroupRequest::MoPenFindGroupRequest() :
	RpcServiceRequest("mopen", "2018-02-11", "MoPenFindGroup")
{
	setMethod(HttpRequest::Method::Post);
}

MoPenFindGroupRequest::~MoPenFindGroupRequest()
{}

std::string MoPenFindGroupRequest::getCreator()const
{
	return creator_;
}

void MoPenFindGroupRequest::setCreator(const std::string& creator)
{
	creator_ = creator;
	setBodyParameter("Creator", creator);
}

