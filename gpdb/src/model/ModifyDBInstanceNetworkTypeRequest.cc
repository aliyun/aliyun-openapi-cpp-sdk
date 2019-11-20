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

#include <alibabacloud/gpdb/model/ModifyDBInstanceNetworkTypeRequest.h>

using AlibabaCloud::Gpdb::Model::ModifyDBInstanceNetworkTypeRequest;

ModifyDBInstanceNetworkTypeRequest::ModifyDBInstanceNetworkTypeRequest() :
	RpcServiceRequest("gpdb", "2016-05-03", "ModifyDBInstanceNetworkType")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceNetworkTypeRequest::~ModifyDBInstanceNetworkTypeRequest()
{}

std::string ModifyDBInstanceNetworkTypeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceNetworkTypeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceNetworkTypeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyDBInstanceNetworkTypeRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void ModifyDBInstanceNetworkTypeRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string ModifyDBInstanceNetworkTypeRequest::getVPCId()const
{
	return vPCId_;
}

void ModifyDBInstanceNetworkTypeRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void ModifyDBInstanceNetworkTypeRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

