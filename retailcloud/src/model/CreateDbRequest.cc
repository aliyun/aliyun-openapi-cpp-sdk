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

#include <alibabacloud/retailcloud/model/CreateDbRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateDbRequest;

CreateDbRequest::CreateDbRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateDb")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDbRequest::~CreateDbRequest()
{}

std::string CreateDbRequest::getDbName()const
{
	return dbName_;
}

void CreateDbRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setBodyParameter("DbName", dbName);
}

std::string CreateDbRequest::getDbInstanceId()const
{
	return dbInstanceId_;
}

void CreateDbRequest::setDbInstanceId(const std::string& dbInstanceId)
{
	dbInstanceId_ = dbInstanceId;
	setBodyParameter("DbInstanceId", dbInstanceId);
}

std::string CreateDbRequest::getDbDescription()const
{
	return dbDescription_;
}

void CreateDbRequest::setDbDescription(const std::string& dbDescription)
{
	dbDescription_ = dbDescription;
	setBodyParameter("DbDescription", dbDescription);
}

std::string CreateDbRequest::getCharacterSetName()const
{
	return characterSetName_;
}

void CreateDbRequest::setCharacterSetName(const std::string& characterSetName)
{
	characterSetName_ = characterSetName;
	setBodyParameter("CharacterSetName", characterSetName);
}

