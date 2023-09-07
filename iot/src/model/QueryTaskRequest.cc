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

#include <alibabacloud/iot/model/QueryTaskRequest.h>

using AlibabaCloud::Iot::Model::QueryTaskRequest;

QueryTaskRequest::QueryTaskRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryTask")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTaskRequest::~QueryTaskRequest()
{}

std::string QueryTaskRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryTaskRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryTaskRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryTaskRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryTaskRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryTaskRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryTaskRequest::getTaskId()const
{
	return taskId_;
}

void QueryTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

std::string QueryTaskRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryTaskRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryTaskRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryTaskRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

