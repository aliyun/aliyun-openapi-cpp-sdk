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

#include <alibabacloud/emr/model/DescribeMetaTablePreviewTaskRequest.h>

using AlibabaCloud::Emr::Model::DescribeMetaTablePreviewTaskRequest;

DescribeMetaTablePreviewTaskRequest::DescribeMetaTablePreviewTaskRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeMetaTablePreviewTask")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeMetaTablePreviewTaskRequest::~DescribeMetaTablePreviewTaskRequest()
{}

long DescribeMetaTablePreviewTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMetaTablePreviewTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMetaTablePreviewTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMetaTablePreviewTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeMetaTablePreviewTaskRequest::getRegionId()const
{
	return regionId_;
}

void DescribeMetaTablePreviewTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeMetaTablePreviewTaskRequest::getTaskId()const
{
	return taskId_;
}

void DescribeMetaTablePreviewTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

