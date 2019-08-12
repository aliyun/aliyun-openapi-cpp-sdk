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

#include <alibabacloud/ehpc/model/UninstallSoftwareRequest.h>

using AlibabaCloud::EHPC::Model::UninstallSoftwareRequest;

UninstallSoftwareRequest::UninstallSoftwareRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "UninstallSoftware")
{}

UninstallSoftwareRequest::~UninstallSoftwareRequest()
{}

std::string UninstallSoftwareRequest::getApplication()const
{
	return application_;
}

void UninstallSoftwareRequest::setApplication(const std::string& application)
{
	application_ = application;
	setCoreParameter("Application", std::to_string(application));
}

std::string UninstallSoftwareRequest::getClusterId()const
{
	return clusterId_;
}

void UninstallSoftwareRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string UninstallSoftwareRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UninstallSoftwareRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

