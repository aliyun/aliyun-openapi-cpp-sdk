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

#include <alibabacloud/ccc/model/SubmitCabRecordingRequest.h>

using AlibabaCloud::CCC::Model::SubmitCabRecordingRequest;

SubmitCabRecordingRequest::SubmitCabRecordingRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "SubmitCabRecording")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitCabRecordingRequest::~SubmitCabRecordingRequest()
{}

std::string SubmitCabRecordingRequest::getMergedRecording()const
{
	return mergedRecording_;
}

void SubmitCabRecordingRequest::setMergedRecording(const std::string& mergedRecording)
{
	mergedRecording_ = mergedRecording;
	setCoreParameter("MergedRecording", mergedRecording);
}

std::string SubmitCabRecordingRequest::getResourceRecording()const
{
	return resourceRecording_;
}

void SubmitCabRecordingRequest::setResourceRecording(const std::string& resourceRecording)
{
	resourceRecording_ = resourceRecording;
	setCoreParameter("ResourceRecording", resourceRecording);
}

std::string SubmitCabRecordingRequest::getInstanceId()const
{
	return instanceId_;
}

void SubmitCabRecordingRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

long SubmitCabRecordingRequest::getInstanceOwnerId()const
{
	return instanceOwnerId_;
}

void SubmitCabRecordingRequest::setInstanceOwnerId(long instanceOwnerId)
{
	instanceOwnerId_ = instanceOwnerId;
	setCoreParameter("InstanceOwnerId", std::to_string(instanceOwnerId));
}

std::string SubmitCabRecordingRequest::getTaskId()const
{
	return taskId_;
}

void SubmitCabRecordingRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

