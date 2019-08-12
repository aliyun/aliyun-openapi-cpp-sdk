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

#include <alibabacloud/ccc/model/GetJobFileUploadUrlRequest.h>

using AlibabaCloud::CCC::Model::GetJobFileUploadUrlRequest;

GetJobFileUploadUrlRequest::GetJobFileUploadUrlRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetJobFileUploadUrl")
{}

GetJobFileUploadUrlRequest::~GetJobFileUploadUrlRequest()
{}

std::string GetJobFileUploadUrlRequest::getInstanceId()const
{
	return instanceId_;
}

void GetJobFileUploadUrlRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GetJobFileUploadUrlRequest::getFileName()const
{
	return fileName_;
}

void GetJobFileUploadUrlRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setCoreParameter("FileName", fileName);
}

