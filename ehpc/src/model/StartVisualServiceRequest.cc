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

#include <alibabacloud/ehpc/model/StartVisualServiceRequest.h>

using AlibabaCloud::EHPC::Model::StartVisualServiceRequest;

StartVisualServiceRequest::StartVisualServiceRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "StartVisualService")
{}

StartVisualServiceRequest::~StartVisualServiceRequest()
{}

int StartVisualServiceRequest::getPort()const
{
	return port_;
}

void StartVisualServiceRequest::setPort(int port)
{
	port_ = port;
	setCoreParameter("Port", port);
}

std::string StartVisualServiceRequest::getClusterId()const
{
	return clusterId_;
}

void StartVisualServiceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string StartVisualServiceRequest::getCidrIp()const
{
	return cidrIp_;
}

void StartVisualServiceRequest::setCidrIp(const std::string& cidrIp)
{
	cidrIp_ = cidrIp;
	setCoreParameter("CidrIp", std::to_string(cidrIp));
}

std::string StartVisualServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartVisualServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

