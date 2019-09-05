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

#include <alibabacloud/ccc/model/DownloadRecordingRequest.h>

using AlibabaCloud::CCC::Model::DownloadRecordingRequest;

DownloadRecordingRequest::DownloadRecordingRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "DownloadRecording")
{}

DownloadRecordingRequest::~DownloadRecordingRequest()
{}

std::string DownloadRecordingRequest::getChannel()const
{
	return channel_;
}

void DownloadRecordingRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setCoreParameter("Channel", channel);
}

std::string DownloadRecordingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DownloadRecordingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DownloadRecordingRequest::getInstanceId()const
{
	return instanceId_;
}

void DownloadRecordingRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DownloadRecordingRequest::getFileName()const
{
	return fileName_;
}

void DownloadRecordingRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setCoreParameter("FileName", fileName);
}

