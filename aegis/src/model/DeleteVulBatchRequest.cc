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

#include <alibabacloud/aegis/model/DeleteVulBatchRequest.h>

using AlibabaCloud::Aegis::Model::DeleteVulBatchRequest;

DeleteVulBatchRequest::DeleteVulBatchRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DeleteVulBatch")
{}

DeleteVulBatchRequest::~DeleteVulBatchRequest()
{}

std::string DeleteVulBatchRequest::getResource()const
{
	return resource_;
}

void DeleteVulBatchRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", resource);
}

std::string DeleteVulBatchRequest::getBatchName()const
{
	return batchName_;
}

void DeleteVulBatchRequest::setBatchName(const std::string& batchName)
{
	batchName_ = batchName;
	setCoreParameter("BatchName", batchName);
}

std::string DeleteVulBatchRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteVulBatchRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

