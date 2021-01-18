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

#include <alibabacloud/dg/model/AddDatabaseListRequest.h>

using AlibabaCloud::Dg::Model::AddDatabaseListRequest;

AddDatabaseListRequest::AddDatabaseListRequest() :
	RpcServiceRequest("dg", "2019-03-27", "AddDatabaseList")
{
	setMethod(HttpRequest::Method::Post);
}

AddDatabaseListRequest::~AddDatabaseListRequest()
{}

std::string AddDatabaseListRequest::getDatabaseString()const
{
	return databaseString_;
}

void AddDatabaseListRequest::setDatabaseString(const std::string& databaseString)
{
	databaseString_ = databaseString;
	setBodyParameter("DatabaseString", databaseString);
}

std::string AddDatabaseListRequest::getClientToken()const
{
	return clientToken_;
}

void AddDatabaseListRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

