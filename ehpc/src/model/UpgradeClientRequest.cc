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

#include <alibabacloud/ehpc/model/UpgradeClientRequest.h>

using AlibabaCloud::EHPC::Model::UpgradeClientRequest;

UpgradeClientRequest::UpgradeClientRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "UpgradeClient")
{}

UpgradeClientRequest::~UpgradeClientRequest()
{}

std::string UpgradeClientRequest::getClientVersion()const
{
	return clientVersion_;
}

void UpgradeClientRequest::setClientVersion(const std::string& clientVersion)
{
	clientVersion_ = clientVersion;
	setParameter("ClientVersion", clientVersion);
}

std::string UpgradeClientRequest::getClusterId()const
{
	return clusterId_;
}

void UpgradeClientRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpgradeClientRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeClientRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

