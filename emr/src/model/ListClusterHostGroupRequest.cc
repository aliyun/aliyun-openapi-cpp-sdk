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

#include <alibabacloud/emr/model/ListClusterHostGroupRequest.h>

using AlibabaCloud::Emr::Model::ListClusterHostGroupRequest;

ListClusterHostGroupRequest::ListClusterHostGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterHostGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterHostGroupRequest::~ListClusterHostGroupRequest()
{}

long ListClusterHostGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterHostGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ListClusterHostGroupRequest::getStatusList()const
{
	return statusList_;
}

void ListClusterHostGroupRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setParameter("StatusList."+ std::to_string(dep1), statusList.at(dep1));
	}
}

std::string ListClusterHostGroupRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterHostGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListClusterHostGroupRequest::getHostGroupName()const
{
	return hostGroupName_;
}

void ListClusterHostGroupRequest::setHostGroupName(const std::string& hostGroupName)
{
	hostGroupName_ = hostGroupName;
	setParameter("HostGroupName", hostGroupName);
}

int ListClusterHostGroupRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterHostGroupRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterHostGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterHostGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterHostGroupRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterHostGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListClusterHostGroupRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void ListClusterHostGroupRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

int ListClusterHostGroupRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterHostGroupRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListClusterHostGroupRequest::getHostGroupType()const
{
	return hostGroupType_;
}

void ListClusterHostGroupRequest::setHostGroupType(const std::string& hostGroupType)
{
	hostGroupType_ = hostGroupType;
	setParameter("HostGroupType", hostGroupType);
}

