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
	auto allReplicaSets = value["ReplicaSets"]["ReplicaSet"];
	for (auto value : allReplicaSets)
	{
		ReplicaSet replicaSetsObject;
		if(!value["ReplicaSetRole"].isNull())
			replicaSetsObject.replicaSetRole = value["ReplicaSetRole"].asString();
		if(!value["RoleId"].isNull())
			replicaSetsObject.roleId = value["RoleId"].asString();
		if(!value["ConnectionDomain"].isNull())
			replicaSetsObject.connectionDomain = value["ConnectionDomain"].asString();
		if(!value["ConnectionPort"].isNull())
			replicaSetsObject.connectionPort = value["ConnectionPort"].asString();
		if(!value["ExpiredTime"].isNull())
			replicaSetsObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["NetworkType"].isNull())
			replicaSetsObject.networkType = value["NetworkType"].asString();
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

