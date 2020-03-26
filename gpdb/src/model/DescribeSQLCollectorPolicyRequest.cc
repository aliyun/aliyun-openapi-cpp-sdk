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

#include <alibabacloud/gpdb/model/DescribeSQLCollectorPolicyRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeSQLCollectorPolicyRequest;

DescribeSQLCollectorPolicyRequest::DescribeSQLCollectorPolicyRequest() :
	RpcServiceRequest("gpdb", "2016-05-03", "DescribeSQLCollectorPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSQLCollectorPolicyRequest::~DescribeSQLCollectorPolicyRequest()
{}

std::string DescribeSQLCollectorPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSQLCollectorPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSQLCollectorPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSQLCollectorPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

