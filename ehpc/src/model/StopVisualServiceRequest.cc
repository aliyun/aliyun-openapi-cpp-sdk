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

#include <alibabacloud/ehpc/model/StopVisualServiceRequest.h>

using AlibabaCloud::EHPC::Model::StopVisualServiceRequest;

StopVisualServiceRequest::StopVisualServiceRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "StopVisualService")
{}

StopVisualServiceRequest::~StopVisualServiceRequest()
{}

int StopVisualServiceRequest::getPort()const
{
	return port_;
}

void StopVisualServiceRequest::setPort(int port)
{
	port_ = port;
	setCoreParameter("Port", std::to_string(port));
}

std::string StopVisualServiceRequest::getClusterId()const
{
	return clusterId_;
}

void StopVisualServiceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string StopVisualServiceRequest::getCidrIp()const
{
	return cidrIp_;
}

void StopVisualServiceRequest::setCidrIp(const std::string& cidrIp)
{
	cidrIp_ = cidrIp;
	setCoreParameter("CidrIp", cidrIp);
}

std::string StopVisualServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopVisualServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

