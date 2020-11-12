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

#include <alibabacloud/openanalytics-open/model/DeleteUserNetConfigRequest.h>

using AlibabaCloud::Openanalytics_open::Model::DeleteUserNetConfigRequest;

DeleteUserNetConfigRequest::DeleteUserNetConfigRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "DeleteUserNetConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteUserNetConfigRequest::~DeleteUserNetConfigRequest()
{}

std::string DeleteUserNetConfigRequest::getName()const
{
	return name_;
}

void DeleteUserNetConfigRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

