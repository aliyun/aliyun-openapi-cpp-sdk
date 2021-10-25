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
{
	setMethod(HttpRequest::Method::Post);
}

ListClustersRequest::~ListClustersRequest()
{}

long ListClustersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClustersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ListClustersRequest::getStatusList()const
{
	return statusList_;
}

void ListClustersRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setParameter("StatusList."+ std::to_string(dep1), statusList.at(dep1));
	}
}

bool ListClustersRequest::getIsDesc()const
{
	return isDesc_;
}

void ListClustersRequest::setIsDesc(bool isDesc)
{
	isDesc_ = isDesc;
	setParameter("IsDesc", isDesc ? "true" : "false");
}

std::string ListClustersRequest::getDepositType()const
{
	return depositType_;
}

void ListClustersRequest::setDepositType(const std::string& depositType)
{
	depositType_ = depositType;
	setParameter("DepositType", depositType);
}

int ListClustersRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClustersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListClustersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClustersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListClustersRequest::getMachineType()const
{
	return machineType_;
}

void ListClustersRequest::setMachineType(const std::string& machineType)
{
	machineType_ = machineType;
	setParameter("MachineType", machineType);
}

std::string ListClustersRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListClustersRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListClustersRequest::getRegionId()const
{
	return regionId_;
}

void ListClustersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListClustersRequest::getPageSize()const
{
	return pageSize_;
}

void ListClustersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<ListClustersRequest::Tag> ListClustersRequest::getTag()const
{
	return tag_;
}

void ListClustersRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string ListClustersRequest::getCreateType()const
{
	return createType_;
}

void ListClustersRequest::setCreateType(const std::string& createType)
{
	createType_ = createType;
	setParameter("CreateType", createType);
}

std::vector<std::string> ListClustersRequest::getExpiredTagList()const
{
	return expiredTagList_;
}

void ListClustersRequest::setExpiredTagList(const std::vector<std::string>& expiredTagList)
{
	expiredTagList_ = expiredTagList;
	for(int dep1 = 0; dep1!= expiredTagList.size(); dep1++) {
		setParameter("ExpiredTagList."+ std::to_string(dep1), expiredTagList.at(dep1));
	}
}

bool ListClustersRequest::getDefaultStatus()const
{
	return defaultStatus_;
}

void ListClustersRequest::setDefaultStatus(bool defaultStatus)
{
	defaultStatus_ = defaultStatus;
	setParameter("DefaultStatus", defaultStatus ? "true" : "false");
}

std::string ListClustersRequest::getVpcId()const
{
	return vpcId_;
}

void ListClustersRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string ListClustersRequest::getName()const
{
	return name_;
}

void ListClustersRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::vector<std::string> ListClustersRequest::getClusterTypeList()const
{
	return clusterTypeList_;
}

void ListClustersRequest::setClusterTypeList(const std::vector<std::string>& clusterTypeList)
{
	clusterTypeList_ = clusterTypeList;
	for(int dep1 = 0; dep1!= clusterTypeList.size(); dep1++) {
		setParameter("ClusterTypeList."+ std::to_string(dep1), clusterTypeList.at(dep1));
	}
}

