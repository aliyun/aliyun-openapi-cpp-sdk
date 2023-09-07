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

#include <alibabacloud/iot/model/QueryConsumerGroupByGroupIdRequest.h>

using AlibabaCloud::Iot::Model::QueryConsumerGroupByGroupIdRequest;

QueryConsumerGroupByGroupIdRequest::QueryConsumerGroupByGroupIdRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryConsumerGroupByGroupId")
{
	setMethod(HttpRequest::Method::Post);
}

QueryConsumerGroupByGroupIdRequest::~QueryConsumerGroupByGroupIdRequest()
{}

std::string QueryConsumerGroupByGroupIdRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryConsumerGroupByGroupIdRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryConsumerGroupByGroupIdRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryConsumerGroupByGroupIdRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryConsumerGroupByGroupIdRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryConsumerGroupByGroupIdRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryConsumerGroupByGroupIdRequest::getGroupId()const
{
	return groupId_;
}

void QueryConsumerGroupByGroupIdRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string QueryConsumerGroupByGroupIdRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryConsumerGroupByGroupIdRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryConsumerGroupByGroupIdRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryConsumerGroupByGroupIdRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

