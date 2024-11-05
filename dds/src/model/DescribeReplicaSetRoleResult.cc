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

#include <alibabacloud/dds/model/DescribeReplicaSetRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeReplicaSetRoleResult::DescribeReplicaSetRoleResult() :
	ServiceResult()
{}

DescribeReplicaSetRoleResult::DescribeReplicaSetRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReplicaSetRoleResult::~DescribeReplicaSetRoleResult()
{}

void DescribeReplicaSetRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReplicaSetsNode = value["ReplicaSets"]["ReplicaSet"];
	for (auto valueReplicaSetsReplicaSet : allReplicaSetsNode)
	{
		ReplicaSet replicaSetsObject;
		if(!valueReplicaSetsReplicaSet["ConnectionPort"].isNull())
			replicaSetsObject.connectionPort = valueReplicaSetsReplicaSet["ConnectionPort"].asString();
		if(!valueReplicaSetsReplicaSet["ReplicaSetRole"].isNull())
			replicaSetsObject.replicaSetRole = valueReplicaSetsReplicaSet["ReplicaSetRole"].asString();
		if(!valueReplicaSetsReplicaSet["ExpiredTime"].isNull())
			replicaSetsObject.expiredTime = valueReplicaSetsReplicaSet["ExpiredTime"].asString();
		if(!valueReplicaSetsReplicaSet["ConnectionDomain"].isNull())
			replicaSetsObject.connectionDomain = valueReplicaSetsReplicaSet["ConnectionDomain"].asString();
		if(!valueReplicaSetsReplicaSet["NetworkType"].isNull())
			replicaSetsObject.networkType = valueReplicaSetsReplicaSet["NetworkType"].asString();
		if(!valueReplicaSetsReplicaSet["RoleId"].isNull())
			replicaSetsObject.roleId = valueReplicaSetsReplicaSet["RoleId"].asString();
		if(!valueReplicaSetsReplicaSet["ConnectionType"].isNull())
			replicaSetsObject.connectionType = valueReplicaSetsReplicaSet["ConnectionType"].asString();
		replicaSets_.push_back(replicaSetsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();

}

std::string DescribeReplicaSetRoleResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::vector<DescribeReplicaSetRoleResult::ReplicaSet> DescribeReplicaSetRoleResult::getReplicaSets()const
{
	return replicaSets_;
}

