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

#include <alibabacloud/rds/model/DescribeDBInstanceReplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceReplicationResult::DescribeDBInstanceReplicationResult() :
	ServiceResult()
{}

DescribeDBInstanceReplicationResult::DescribeDBInstanceReplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceReplicationResult::~DescribeDBInstanceReplicationResult()
{}

void DescribeDBInstanceReplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ExternalReplication"].isNull())
		externalReplication_ = value["ExternalReplication"].asString();
	if(!value["ReplicationSource"].isNull())
		replicationSource_ = value["ReplicationSource"].asString();
	if(!value["ReplicationState"].isNull())
		replicationState_ = value["ReplicationState"].asString();
	if(!value["ReplicationDelay"].isNull())
		replicationDelay_ = value["ReplicationDelay"].asString();
	if(!value["ReplicationErrorMessage"].isNull())
		replicationErrorMessage_ = value["ReplicationErrorMessage"].asString();

}

std::string DescribeDBInstanceReplicationResult::getExternalReplication()const
{
	return externalReplication_;
}

std::string DescribeDBInstanceReplicationResult::getReplicationDelay()const
{
	return replicationDelay_;
}

std::string DescribeDBInstanceReplicationResult::getReplicationErrorMessage()const
{
	return replicationErrorMessage_;
}

std::string DescribeDBInstanceReplicationResult::getReplicationSource()const
{
	return replicationSource_;
}

std::string DescribeDBInstanceReplicationResult::getReplicationState()const
{
	return replicationState_;
}

