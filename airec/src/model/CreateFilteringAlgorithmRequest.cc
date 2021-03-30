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

#include <alibabacloud/airec/model/CreateFilteringAlgorithmRequest.h>

using AlibabaCloud::Airec::Model::CreateFilteringAlgorithmRequest;

CreateFilteringAlgorithmRequest::CreateFilteringAlgorithmRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/filtering-algorithms");
	setMethod(HttpRequest::Method::Post);
}

CreateFilteringAlgorithmRequest::~CreateFilteringAlgorithmRequest()
{}

std::string CreateFilteringAlgorithmRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateFilteringAlgorithmRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateFilteringAlgorithmRequest::getDryRun()const
{
	return dryRun_;
}

void CreateFilteringAlgorithmRequest::setDryRun(const std::string& dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun);
}

