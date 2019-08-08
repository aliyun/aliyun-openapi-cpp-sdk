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

#include <alibabacloud/emr/model/ListClustersRequest.h>

using AlibabaCloud::Emr::Model::ListClustersRequest;

ListClustersRequest::ListClustersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusters")
{}

ListClustersRequest::~ListClustersRequest()
{}

long ListClustersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClustersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ListClustersRequest::getStatusList()const
{
	return statusList_;
}

void ListClustersRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int i = 0; i!= statusList.size(); i++)
		setCoreParameter("StatusList."+ std::to_string(i), statusList.at(i));
}

std::string ListClustersRequest::getRegionId()const
{
	return regionId_;
}

void ListClustersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListClustersRequest::getPageSize()const
{
	return pageSize_;
}

void ListClustersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::vector<std::string> ListClustersRequest::getClusterTypeList()const
{
	return clusterTypeList_;
}

void ListClustersRequest::setClusterTypeList(const std::vector<std::string>& clusterTypeList)
{
	clusterTypeList_ = clusterTypeList;
	for(int i = 0; i!= clusterTypeList.size(); i++)
		setCoreParameter("ClusterTypeList."+ std::to_string(i), clusterTypeList.at(i));
}

bool ListClustersRequest::getIsDesc()const
{
	return isDesc_;
}

void ListClustersRequest::setIsDesc(bool isDesc)
{
	isDesc_ = isDesc;
	setCoreParameter("IsDesc", isDesc ? "true" : "false");
}

std::string ListClustersRequest::getCreateType()const
{
	return createType_;
}

void ListClustersRequest::setCreateType(const std::string& createType)
{
	createType_ = createType;
	setCoreParameter("CreateType", createType);
}

std::string ListClustersRequest::getDepositType()const
{
	return depositType_;
}

void ListClustersRequest::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setCoreParameter("DepositType", depositType);
}

bool ListClustersRequest::getDefaultStatus()const
{
	return defaultStatus_;
}

void ListClustersRequest::setDefaultStatus(bool defaultStatus)
{
	defaultStatus_ = defaultStatus;
	setCoreParameter("DefaultStatus", defaultStatus ? "true" : "false");
}

int ListClustersRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClustersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClustersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClustersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListClustersRequest::getMachineType()const
{
	return machineType_;
}

void ListClustersRequest::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setCoreParameter("MachineType", machineType);
}

