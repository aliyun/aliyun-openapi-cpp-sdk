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

#include <alibabacloud/iot/model/CreateConsumerGroupRequest.h>

using AlibabaCloud::Iot::Model::CreateConsumerGroupRequest;

CreateConsumerGroupRequest::CreateConsumerGroupRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateConsumerGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateConsumerGroupRequest::~CreateConsumerGroupRequest()
{}

std::string CreateConsumerGroupRequest::getRealTenantId()const
{
	return realTenantId_;
}

void CreateConsumerGroupRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string CreateConsumerGroupRequest::getType()const
{
	return type_;
}

void CreateConsumerGroupRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateConsumerGroupRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void CreateConsumerGroupRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string CreateConsumerGroupRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateConsumerGroupRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateConsumerGroupRequest::getGroupName()const
{
	return groupName_;
}

void CreateConsumerGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::string CreateConsumerGroupRequest::getSubBizCode()const
{
	return subBizCode_;
}

void CreateConsumerGroupRequest::setSubBizCode(const std::string& subBizCode)
{
	subBizCode_ = subBizCode;
	setParameter("SubBizCode", subBizCode);
}

std::string CreateConsumerGroupRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateConsumerGroupRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateConsumerGroupRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateConsumerGroupRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

