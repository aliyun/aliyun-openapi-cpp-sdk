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

#include <alibabacloud/openanalytics-open/model/CreateDatabaseRequest.h>

using AlibabaCloud::Openanalytics_open::Model::CreateDatabaseRequest;

CreateDatabaseRequest::CreateDatabaseRequest() :
	RpcServiceRequest("openanalytics-open", "2020-09-28", "CreateDatabase")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDatabaseRequest::~CreateDatabaseRequest()
{}

std::string CreateDatabaseRequest::getName()const
{
	return name_;
}

void CreateDatabaseRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateDatabaseRequest::getDescription()const
{
	return description_;
}

void CreateDatabaseRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateDatabaseRequest::getLocationUri()const
{
	return locationUri_;
}

void CreateDatabaseRequest::setLocationUri(const std::string& locationUri)
{
	locationUri_ = locationUri;
	setParameter("LocationUri", locationUri);
}

std::string CreateDatabaseRequest::getParameters()const
{
	return parameters_;
}

void CreateDatabaseRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setParameter("Parameters", parameters);
}

