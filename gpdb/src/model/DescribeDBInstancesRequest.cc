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

#include <alibabacloud/gpdb/model/DescribeDBInstancesRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDBInstancesRequest;

DescribeDBInstancesRequest::DescribeDBInstancesRequest() :
	RpcServiceRequest("gpdb", "2016-05-03", "DescribeDBInstances")
{}

DescribeDBInstancesRequest::~DescribeDBInstancesRequest()
{}

std::string DescribeDBInstancesRequest::getDBInstanceIds()const
{
	return dBInstanceIds_;
}

void DescribeDBInstancesRequest::setDBInstanceIds(const std::string& dBInstanceIds)
{
	dBInstanceIds_ = dBInstanceIds;
	setCoreParameter("DBInstanceIds", std::to_string(dBInstanceIds));
}

std::string DescribeDBInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int DescribeDBInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDBInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeDBInstancesRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void DescribeDBInstancesRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setCoreParameter("DBInstanceDescription", std::to_string(dBInstanceDescription));
}

std::vector<DescribeDBInstancesRequest::Tag> DescribeDBInstancesRequest::getTag()const
{
	return tag_;
}

void DescribeDBInstancesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

long DescribeDBInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDBInstancesRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void DescribeDBInstancesRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", std::to_string(instanceNetworkType));
}

int DescribeDBInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDBInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeDBInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

