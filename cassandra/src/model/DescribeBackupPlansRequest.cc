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

#include <alibabacloud/cassandra/model/DescribeBackupPlansRequest.h>

using AlibabaCloud::Cassandra::Model::DescribeBackupPlansRequest;

DescribeBackupPlansRequest::DescribeBackupPlansRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "DescribeBackupPlans")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBackupPlansRequest::~DescribeBackupPlansRequest()
{}

std::string DescribeBackupPlansRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeBackupPlansRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

