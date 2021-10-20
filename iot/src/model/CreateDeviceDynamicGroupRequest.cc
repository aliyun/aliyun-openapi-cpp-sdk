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

#include <alibabacloud/iot/model/CreateDeviceDynamicGroupRequest.h>

using AlibabaCloud::Iot::Model::CreateDeviceDynamicGroupRequest;

CreateDeviceDynamicGroupRequest::CreateDeviceDynamicGroupRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateDeviceDynamicGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDeviceDynamicGroupRequest::~CreateDeviceDynamicGroupRequest()
{}

std::string CreateDeviceDynamicGroupRequest::getDynamicGroupExpression()const
{
	return dynamicGroupExpression_;
}

void CreateDeviceDynamicGroupRequest::setDynamicGroupExpression(const std::string& dynamicGroupExpression)
{
	dynamicGroupExpression_ = dynamicGroupExpression;
	setParameter("DynamicGroupExpression", dynamicGroupExpression);
}

std::string CreateDeviceDynamicGroupRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateDeviceDynamicGroupRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateDeviceDynamicGroupRequest::getGroupName()const
{
	return groupName_;
}

void CreateDeviceDynamicGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::string CreateDeviceDynamicGroupRequest::getGroupDesc()const
{
	return groupDesc_;
}

void CreateDeviceDynamicGroupRequest::setGroupDesc(const std::string& groupDesc)
{
	groupDesc_ = groupDesc;
	setParameter("GroupDesc", groupDesc);
}

std::string CreateDeviceDynamicGroupRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateDeviceDynamicGroupRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateDeviceDynamicGroupRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateDeviceDynamicGroupRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

