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

#include <alibabacloud/emr/model/ListClusterTagRequest.h>

using AlibabaCloud::Emr::Model::ListClusterTagRequest;

ListClusterTagRequest::ListClusterTagRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterTag")
{}

ListClusterTagRequest::~ListClusterTagRequest()
{}

long ListClusterTagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterTagRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ListClusterTagRequest::getClusterIdList()const
{
	return clusterIdList_;
}

void ListClusterTagRequest::setClusterIdList(const std::vector<std::string>& clusterIdList)
{
	clusterIdList_ = clusterIdList;
	for(int i = 0; i!= clusterIdList.size(); i++)
		setCoreParameter("ClusterIdList."+ std::to_string(i), clusterIdList.at(i));
}

std::string ListClusterTagRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListClusterTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

