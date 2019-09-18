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

#include <alibabacloud/imm/model/ListPornBatchDetectJobsRequest.h>

using AlibabaCloud::Imm::Model::ListPornBatchDetectJobsRequest;

ListPornBatchDetectJobsRequest::ListPornBatchDetectJobsRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListPornBatchDetectJobs")
{}

ListPornBatchDetectJobsRequest::~ListPornBatchDetectJobsRequest()
{}

int ListPornBatchDetectJobsRequest::getMaxKeys()const
{
	return maxKeys_;
}

void ListPornBatchDetectJobsRequest::setMaxKeys(int maxKeys)
{
	maxKeys_ = maxKeys;
	setCoreParameter("MaxKeys", std::to_string(maxKeys));
}

std::string ListPornBatchDetectJobsRequest::getProject()const
{
	return project_;
}

void ListPornBatchDetectJobsRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string ListPornBatchDetectJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListPornBatchDetectJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListPornBatchDetectJobsRequest::getMarker()const
{
	return marker_;
}

void ListPornBatchDetectJobsRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", marker);
}

