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

#include <alibabacloud/gpdb/model/RestartDBInstanceRequest.h>

using AlibabaCloud::Gpdb::Model::RestartDBInstanceRequest;

RestartDBInstanceRequest::RestartDBInstanceRequest() :
	RpcServiceRequest("gpdb", "2016-05-03", "RestartDBInstance")
{}

RestartDBInstanceRequest::~RestartDBInstanceRequest()
{}

std::string RestartDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void RestartDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string RestartDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RestartDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string RestartDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestartDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

