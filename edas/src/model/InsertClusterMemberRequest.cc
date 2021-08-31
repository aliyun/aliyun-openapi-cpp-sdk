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

#include <alibabacloud/edas/model/InsertClusterMemberRequest.h>

using AlibabaCloud::Edas::Model::InsertClusterMemberRequest;

InsertClusterMemberRequest::InsertClusterMemberRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/resource/cluster_member");
	setMethod(HttpRequest::Method::Post);
}

InsertClusterMemberRequest::~InsertClusterMemberRequest()
{}

std::string InsertClusterMemberRequest::getPassword()const
{
	return password_;
}

void InsertClusterMemberRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string InsertClusterMemberRequest::getInstanceIds()const
{
	return instanceIds_;
}

void InsertClusterMemberRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

std::string InsertClusterMemberRequest::getClusterId()const
{
	return clusterId_;
}

void InsertClusterMemberRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

