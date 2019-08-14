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

#include <alibabacloud/emr/model/MetastoreUpdateTableRequest.h>

using AlibabaCloud::Emr::Model::MetastoreUpdateTableRequest;

MetastoreUpdateTableRequest::MetastoreUpdateTableRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreUpdateTable")
{}

MetastoreUpdateTableRequest::~MetastoreUpdateTableRequest()
{}

long MetastoreUpdateTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreUpdateTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreUpdateTableRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreUpdateTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<MetastoreUpdateTableRequest::AddColumn> MetastoreUpdateTableRequest::getAddColumn()const
{
	return addColumn_;
}

void MetastoreUpdateTableRequest::setAddColumn(const std::vector<AddColumn>& addColumn)
{
	addColumn_ = addColumn;
	int i = 0;
	for(int i = 0; i!= addColumn.size(); i++)	{
		auto obj = addColumn.at(i);
		std::string str ="AddColumn."+ std::to_string(i);
		setCoreParameter(str + ".Name", obj.name);
		setCoreParameter(str + ".Comment", obj.comment);
		setCoreParameter(str + ".Type", obj.type);
	}
}

std::vector<MetastoreUpdateTableRequest::AddPartition> MetastoreUpdateTableRequest::getAddPartition()const
{
	return addPartition_;
}

void MetastoreUpdateTableRequest::setAddPartition(const std::vector<AddPartition>& addPartition)
{
	addPartition_ = addPartition;
	int i = 0;
	for(int i = 0; i!= addPartition.size(); i++)	{
		auto obj = addPartition.at(i);
		std::string str ="AddPartition."+ std::to_string(i);
		setCoreParameter(str + ".Name", obj.name);
		setCoreParameter(str + ".Comment", obj.comment);
		setCoreParameter(str + ".Type", obj.type);
	}
}

std::vector<std::string> MetastoreUpdateTableRequest::getDeleteColumnName()const
{
	return deleteColumnName_;
}

void MetastoreUpdateTableRequest::setDeleteColumnName(const std::vector<std::string>& deleteColumnName)
{
	deleteColumnName_ = deleteColumnName;
	for(int i = 0; i!= deleteColumnName.size(); i++)
		setCoreParameter("DeleteColumnName."+ std::to_string(i), deleteColumnName.at(i));
}

std::string MetastoreUpdateTableRequest::getTableId()const
{
	return tableId_;
}

void MetastoreUpdateTableRequest::setTableId(const std::string& tableId)
{
	tableId_ = tableId;
	setCoreParameter("TableId", tableId);
}

std::vector<std::string> MetastoreUpdateTableRequest::getDeletePartitionName()const
{
	return deletePartitionName_;
}

void MetastoreUpdateTableRequest::setDeletePartitionName(const std::vector<std::string>& deletePartitionName)
{
	deletePartitionName_ = deletePartitionName;
	for(int i = 0; i!= deletePartitionName.size(); i++)
		setCoreParameter("DeletePartitionName."+ std::to_string(i), deletePartitionName.at(i));
}

std::string MetastoreUpdateTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreUpdateTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

