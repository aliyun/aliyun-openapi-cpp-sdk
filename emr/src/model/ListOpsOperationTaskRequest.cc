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

#include <alibabacloud/emr/model/ListOpsOperationTaskRequest.h>

using AlibabaCloud::Emr::Model::ListOpsOperationTaskRequest;

ListOpsOperationTaskRequest::ListOpsOperationTaskRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListOpsOperationTask")
{}

ListOpsOperationTaskRequest::~ListOpsOperationTaskRequest()
{}

long ListOpsOperationTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListOpsOperationTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListOpsOperationTaskRequest::getRegionId()const
{
	return regionId_;
}

void ListOpsOperationTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long ListOpsOperationTaskRequest::getOperationId()const
{
	return operationId_;
}

void ListOpsOperationTaskRequest::setOperationId(long operationId)
{
	operationId_ = operationId;
	setCoreParameter("OperationId", operationId);
}

long ListOpsOperationTaskRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListOpsOperationTaskRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListOpsOperationTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListOpsOperationTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

