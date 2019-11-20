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

#include <alibabacloud/drds/model/DescribeRdsListRequest.h>

using AlibabaCloud::Drds::Model::DescribeRdsListRequest;

DescribeRdsListRequest::DescribeRdsListRequest() :
	RpcServiceRequest("drds", "2017-10-16", "DescribeRdsList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRdsListRequest::~DescribeRdsListRequest()
{}

std::string DescribeRdsListRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeRdsListRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeRdsListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRdsListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRdsListRequest::getDbName()const
{
	return dbName_;
}

void DescribeRdsListRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

