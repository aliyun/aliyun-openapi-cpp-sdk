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

#include <alibabacloud/iot/model/QueryDeviceGroupInfoRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceGroupInfoRequest;

QueryDeviceGroupInfoRequest::QueryDeviceGroupInfoRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceGroupInfo")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceGroupInfoRequest::~QueryDeviceGroupInfoRequest()
{}

std::string QueryDeviceGroupInfoRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryDeviceGroupInfoRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryDeviceGroupInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceGroupInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryDeviceGroupInfoRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryDeviceGroupInfoRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryDeviceGroupInfoRequest::getGroupType()const
{
	return groupType_;
}

void QueryDeviceGroupInfoRequest::setGroupType(const std::string& groupType)
{
	groupType_ = groupType;
	setParameter("GroupType", groupType);
}

std::string QueryDeviceGroupInfoRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceGroupInfoRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryDeviceGroupInfoRequest::getGroupId()const
{
	return groupId_;
}

void QueryDeviceGroupInfoRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string QueryDeviceGroupInfoRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceGroupInfoRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceGroupInfoRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceGroupInfoRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

