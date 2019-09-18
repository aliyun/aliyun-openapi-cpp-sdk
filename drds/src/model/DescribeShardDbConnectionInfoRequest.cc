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

#include <alibabacloud/drds/model/DescribeShardDbConnectionInfoRequest.h>

using AlibabaCloud::Drds::Model::DescribeShardDbConnectionInfoRequest;

DescribeShardDbConnectionInfoRequest::DescribeShardDbConnectionInfoRequest() :
	RpcServiceRequest("drds", "2017-10-16", "DescribeShardDbConnectionInfo")
{}

DescribeShardDbConnectionInfoRequest::~DescribeShardDbConnectionInfoRequest()
{}

std::string DescribeShardDbConnectionInfoRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeShardDbConnectionInfoRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeShardDbConnectionInfoRequest::getSubDbName()const
{
	return subDbName_;
}

void DescribeShardDbConnectionInfoRequest::setSubDbName(const std::string& subDbName)
{
	subDbName_ = subDbName;
	setCoreParameter("SubDbName", subDbName);
}

std::string DescribeShardDbConnectionInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeShardDbConnectionInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeShardDbConnectionInfoRequest::getDbName()const
{
	return dbName_;
}

void DescribeShardDbConnectionInfoRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

