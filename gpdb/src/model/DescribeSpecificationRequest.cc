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

#include <alibabacloud/gpdb/model/DescribeSpecificationRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeSpecificationRequest;

DescribeSpecificationRequest::DescribeSpecificationRequest() :
	RpcServiceRequest("gpdb", "2016-05-03", "DescribeSpecification")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSpecificationRequest::~DescribeSpecificationRequest()
{}

std::string DescribeSpecificationRequest::getStorageType()const
{
	return storageType_;
}

void DescribeSpecificationRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setParameter("StorageType", storageType);
}

std::string DescribeSpecificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSpecificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int DescribeSpecificationRequest::getCpuCores()const
{
	return cpuCores_;
}

void DescribeSpecificationRequest::setCpuCores(int cpuCores)
{
	cpuCores_ = cpuCores;
	setParameter("CpuCores", std::to_string(cpuCores));
}

std::string DescribeSpecificationRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSpecificationRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

int DescribeSpecificationRequest::getTotalNodeNum()const
{
	return totalNodeNum_;
}

void DescribeSpecificationRequest::setTotalNodeNum(int totalNodeNum)
{
	totalNodeNum_ = totalNodeNum;
	setParameter("TotalNodeNum", std::to_string(totalNodeNum));
}

long DescribeSpecificationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSpecificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

