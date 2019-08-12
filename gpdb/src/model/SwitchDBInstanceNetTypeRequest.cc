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

#include <alibabacloud/gpdb/model/SwitchDBInstanceNetTypeRequest.h>

using AlibabaCloud::Gpdb::Model::SwitchDBInstanceNetTypeRequest;

SwitchDBInstanceNetTypeRequest::SwitchDBInstanceNetTypeRequest() :
	RpcServiceRequest("gpdb", "2016-05-03", "SwitchDBInstanceNetType")
{}

SwitchDBInstanceNetTypeRequest::~SwitchDBInstanceNetTypeRequest()
{}

std::string SwitchDBInstanceNetTypeRequest::getConnectionStringPrefix()const
{
	return connectionStringPrefix_;
}

void SwitchDBInstanceNetTypeRequest::setConnectionStringPrefix(const std::string& connectionStringPrefix)
{
	connectionStringPrefix_ = connectionStringPrefix;
	setCoreParameter("ConnectionStringPrefix", std::to_string(connectionStringPrefix));
}

std::string SwitchDBInstanceNetTypeRequest::getPort()const
{
	return port_;
}

void SwitchDBInstanceNetTypeRequest::setPort(const std::string& port)
{
	port_ = port;
	setCoreParameter("Port", std::to_string(port));
}

std::string SwitchDBInstanceNetTypeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void SwitchDBInstanceNetTypeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string SwitchDBInstanceNetTypeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchDBInstanceNetTypeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

