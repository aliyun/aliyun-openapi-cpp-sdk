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

#include <alibabacloud/iot/model/ListSourceReplicaRequest.h>

using AlibabaCloud::Iot::Model::ListSourceReplicaRequest;

ListSourceReplicaRequest::ListSourceReplicaRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListSourceReplica")
{
	setMethod(HttpRequest::Method::Post);
}

ListSourceReplicaRequest::~ListSourceReplicaRequest()
{}

std::string ListSourceReplicaRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListSourceReplicaRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string ListSourceReplicaRequest::getContext()const
{
	return context_;
}

void ListSourceReplicaRequest::setContext(const std::string& context)
{
	context_ = context;
	setBodyParameter("Context", context);
}

int ListSourceReplicaRequest::getPageSize()const
{
	return pageSize_;
}

void ListSourceReplicaRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListSourceReplicaRequest::getSourceType()const
{
	return sourceType_;
}

void ListSourceReplicaRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setParameter("SourceType", sourceType);
}

int ListSourceReplicaRequest::getPageNo()const
{
	return pageNo_;
}

void ListSourceReplicaRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string ListSourceReplicaRequest::getLpInstanceId()const
{
	return lpInstanceId_;
}

void ListSourceReplicaRequest::setLpInstanceId(const std::string& lpInstanceId)
{
	lpInstanceId_ = lpInstanceId;
	setParameter("LpInstanceId", lpInstanceId);
}

std::string ListSourceReplicaRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListSourceReplicaRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListSourceReplicaRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListSourceReplicaRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

