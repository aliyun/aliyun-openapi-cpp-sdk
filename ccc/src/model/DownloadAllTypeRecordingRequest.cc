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

#include <alibabacloud/ccc/model/DownloadAllTypeRecordingRequest.h>

using AlibabaCloud::CCC::Model::DownloadAllTypeRecordingRequest;

DownloadAllTypeRecordingRequest::DownloadAllTypeRecordingRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "DownloadAllTypeRecording")
{
	setMethod(HttpRequest::Method::Post);
}

DownloadAllTypeRecordingRequest::~DownloadAllTypeRecordingRequest()
{}

std::string DownloadAllTypeRecordingRequest::getContactId()const
{
	return contactId_;
}

void DownloadAllTypeRecordingRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setCoreParameter("ContactId", contactId);
}

std::string DownloadAllTypeRecordingRequest::getChannel()const
{
	return channel_;
}

void DownloadAllTypeRecordingRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setCoreParameter("Channel", channel);
}

std::string DownloadAllTypeRecordingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DownloadAllTypeRecordingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DownloadAllTypeRecordingRequest::getInstanceId()const
{
	return instanceId_;
}

void DownloadAllTypeRecordingRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

