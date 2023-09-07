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

#include <alibabacloud/iot/model/QueryJobRequest.h>

using AlibabaCloud::Iot::Model::QueryJobRequest;

QueryJobRequest::QueryJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryJob")
{
	setMethod(HttpRequest::Method::Post);
}

QueryJobRequest::~QueryJobRequest()
{}

std::string QueryJobRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryJobRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryJobRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryJobRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryJobRequest::getJobId()const
{
	return jobId_;
}

void QueryJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string QueryJobRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryJobRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

