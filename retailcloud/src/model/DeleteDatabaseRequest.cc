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

#include <alibabacloud/retailcloud/model/DeleteDatabaseRequest.h>

using AlibabaCloud::Retailcloud::Model::DeleteDatabaseRequest;

DeleteDatabaseRequest::DeleteDatabaseRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "DeleteDatabase")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDatabaseRequest::~DeleteDatabaseRequest()
{}

std::string DeleteDatabaseRequest::getDBName()const
{
	return dBName_;
}

void DeleteDatabaseRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setBodyParameter("DBName", dBName);
}

std::string DeleteDatabaseRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DeleteDatabaseRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setBodyParameter("DBInstanceId", dBInstanceId);
}

