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

#include <alibabacloud/emr/model/ListClusterHostRequest.h>

using AlibabaCloud::Emr::Model::ListClusterHostRequest;

ListClusterHostRequest::ListClusterHostRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterHost")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterHostRequest::~ListClusterHostRequest()
{}

long ListClusterHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListClusterHostRequest::getHostInstanceId()const
{
	return hostInstanceId_;
}

void ListClusterHostRequest::setHostInstanceId(const std::string& hostInstanceId)
{
	hostInstanceId_ = hostInstanceId;
	setParameter("HostInstanceId", hostInstanceId);
}

std::vector<std::string> ListClusterHostRequest::getStatusList()const
{
	return statusList_;
}

void ListClusterHostRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setParameter("StatusList."+ std::to_string(dep1), statusList.at(dep1));
	}
}

std::string ListClusterHostRequest::getComponentName()const
{
	return componentName_;
}

void ListClusterHostRequest::setComponentName(const std::string& componentName)
{
	componentName_ = componentName;
	setParameter("ComponentName", componentName);
}

std::string ListClusterHostRequest::getPublicIp()const
{
	return publicIp_;
}

void ListClusterHostRequest::setPublicIp(const std::string& publicIp)
{
	publicIp_ = publicIp;
	setParameter("PublicIp", publicIp);
}

int ListClusterHostRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterHostRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClusterHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClusterHostRequest::getHostName()const
{
	return hostName_;
}

void ListClusterHostRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string ListClusterHostRequest::getGroupType()const
{
	return groupType_;
}

void ListClusterHostRequest::setGroupType(const std::string& groupType)
{
	groupType_ = groupType;
	setParameter("GroupType", groupType);
}

std::string ListClusterHostRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListClusterHostRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterHostRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListClusterHostRequest::getPrivateIp()const
{
	return privateIp_;
}

void ListClusterHostRequest::setPrivateIp(const std::string& privateIp)
{
	privateIp_ = privateIp;
	setParameter("PrivateIp", privateIp);
}

std::string ListClusterHostRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterHostRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListClusterHostRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void ListClusterHostRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

