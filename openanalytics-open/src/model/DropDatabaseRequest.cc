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

#include <alibabacloud/openanalytics-open/model/DropDatabaseRequest.h>

using AlibabaCloud::Openanalytics_open::Model::DropDatabaseRequest;

DropDatabaseRequest::DropDatabaseRequest() :
	RpcServiceRequest("openanalytics-open", "2020-09-28", "DropDatabase")
{
	setMethod(HttpRequest::Method::Post);
}

DropDatabaseRequest::~DropDatabaseRequest()
{}

bool DropDatabaseRequest::getCascade()const
{
	return cascade_;
}

void DropDatabaseRequest::setCascade(bool cascade)
{
	cascade_ = cascade;
	setParameter("Cascade", cascade ? "true" : "false");
}

std::string DropDatabaseRequest::getName()const
{
	return name_;
}

void DropDatabaseRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

