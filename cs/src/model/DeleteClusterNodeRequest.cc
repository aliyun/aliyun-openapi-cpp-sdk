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

#include <alibabacloud/cs/model/DeleteClusterNodeRequest.h>

using AlibabaCloud::CS::Model::DeleteClusterNodeRequest;

DeleteClusterNodeRequest::DeleteClusterNodeRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{}

DeleteClusterNodeRequest::~DeleteClusterNodeRequest()
{}

std::string DeleteClusterNodeRequest::getReleaseInstance()const
{
	return releaseInstance_;
}

void DeleteClusterNodeRequest::setReleaseInstance(const std::string& releaseInstance)
{
	releaseInstance_ = releaseInstance;
	setParameter("ReleaseInstance", releaseInstance);
}

std::string DeleteClusterNodeRequest::getIp()const
{
	return ip_;
}

void DeleteClusterNodeRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string DeleteClusterNodeRequest::getForce()const
{
	return force_;
}

void DeleteClusterNodeRequest::setForce(const std::string& force)
{
	force_ = force;
	setParameter("Force", force);
}

std::string DeleteClusterNodeRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteClusterNodeRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

