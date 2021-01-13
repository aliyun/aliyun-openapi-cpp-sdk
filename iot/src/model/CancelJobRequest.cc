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

#include <alibabacloud/iot/model/CancelJobRequest.h>

using AlibabaCloud::Iot::Model::CancelJobRequest;

CancelJobRequest::CancelJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CancelJob")
{
	setMethod(HttpRequest::Method::Post);
}

CancelJobRequest::~CancelJobRequest()
{}

std::string CancelJobRequest::getJobId()const
{
	return jobId_;
}

void CancelJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string CancelJobRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CancelJobRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CancelJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void CancelJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CancelJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void CancelJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

