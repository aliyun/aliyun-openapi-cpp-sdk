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

#include <alibabacloud/iot/model/DeleteDeviceDistributeJobRequest.h>

using AlibabaCloud::Iot::Model::DeleteDeviceDistributeJobRequest;

DeleteDeviceDistributeJobRequest::DeleteDeviceDistributeJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteDeviceDistributeJob")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDeviceDistributeJobRequest::~DeleteDeviceDistributeJobRequest()
{}

std::string DeleteDeviceDistributeJobRequest::getJobId()const
{
	return jobId_;
}

void DeleteDeviceDistributeJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string DeleteDeviceDistributeJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteDeviceDistributeJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteDeviceDistributeJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteDeviceDistributeJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

