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

#include <alibabacloud/iot/model/BindRoleToEdgeInstanceRequest.h>

using AlibabaCloud::Iot::Model::BindRoleToEdgeInstanceRequest;

BindRoleToEdgeInstanceRequest::BindRoleToEdgeInstanceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BindRoleToEdgeInstance")
{
	setMethod(HttpRequest::Method::Post);
}

BindRoleToEdgeInstanceRequest::~BindRoleToEdgeInstanceRequest()
{}

std::string BindRoleToEdgeInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindRoleToEdgeInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string BindRoleToEdgeInstanceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BindRoleToEdgeInstanceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string BindRoleToEdgeInstanceRequest::getRoleName()const
{
	return roleName_;
}

void BindRoleToEdgeInstanceRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setParameter("RoleName", roleName);
}

std::string BindRoleToEdgeInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void BindRoleToEdgeInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string BindRoleToEdgeInstanceRequest::getRoleArn()const
{
	return roleArn_;
}

void BindRoleToEdgeInstanceRequest::setRoleArn(const std::string& roleArn)
{
	roleArn_ = roleArn;
	setParameter("RoleArn", roleArn);
}

std::string BindRoleToEdgeInstanceRequest::getApiProduct()const
{
	return apiProduct_;
}

void BindRoleToEdgeInstanceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BindRoleToEdgeInstanceRequest::getApiRevision()const
{
	return apiRevision_;
}

void BindRoleToEdgeInstanceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

