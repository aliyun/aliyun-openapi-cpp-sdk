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

#include <alibabacloud/drds/model/DescribeRdsReadOnlyRequest.h>

using AlibabaCloud::Drds::Model::DescribeRdsReadOnlyRequest;

DescribeRdsReadOnlyRequest::DescribeRdsReadOnlyRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeRdsReadOnly")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRdsReadOnlyRequest::~DescribeRdsReadOnlyRequest()
{}

std::string DescribeRdsReadOnlyRequest::getRdsInstanceId()const
{
	return rdsInstanceId_;
}

void DescribeRdsReadOnlyRequest::setRdsInstanceId(const std::string& rdsInstanceId)
{
	rdsInstanceId_ = rdsInstanceId;
	setParameter("RdsInstanceId", rdsInstanceId);
}

std::string DescribeRdsReadOnlyRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeRdsReadOnlyRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeRdsReadOnlyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRdsReadOnlyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRdsReadOnlyRequest::getDbInstType()const
{
	return dbInstType_;
}

void DescribeRdsReadOnlyRequest::setDbInstType(const std::string& dbInstType)
{
	dbInstType_ = dbInstType;
	setParameter("DbInstType", dbInstType);
}

