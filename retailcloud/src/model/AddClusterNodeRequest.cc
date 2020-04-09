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

#include <alibabacloud/retailcloud/model/AddClusterNodeRequest.h>

using AlibabaCloud::Retailcloud::Model::AddClusterNodeRequest;

AddClusterNodeRequest::AddClusterNodeRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "AddClusterNode")
{
	setMethod(HttpRequest::Method::Post);
}

AddClusterNodeRequest::~AddClusterNodeRequest()
{}

std::vector<std::string> AddClusterNodeRequest::getEcsInstanceIdList()const
{
	return ecsInstanceIdList_;
}

void AddClusterNodeRequest::setEcsInstanceIdList(const std::vector<std::string>& ecsInstanceIdList)
{
	ecsInstanceIdList_ = ecsInstanceIdList;
	for(int dep1 = 0; dep1!= ecsInstanceIdList.size(); dep1++) {
		setParameter("EcsInstanceIdList."+ std::to_string(dep1), ecsInstanceIdList.at(dep1));
	}
}

std::string AddClusterNodeRequest::getClusterInstanceId()const
{
	return clusterInstanceId_;
}

void AddClusterNodeRequest::setClusterInstanceId(const std::string& clusterInstanceId)
{
	clusterInstanceId_ = clusterInstanceId;
	setParameter("ClusterInstanceId", clusterInstanceId);
}

