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

#include <alibabacloud/rds/model/DescribeKmsAssociateResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeKmsAssociateResourcesResult::DescribeKmsAssociateResourcesResult() :
	ServiceResult()
{}

DescribeKmsAssociateResourcesResult::DescribeKmsAssociateResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKmsAssociateResourcesResult::~DescribeKmsAssociateResourcesResult()
{}

void DescribeKmsAssociateResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAssociateDBInstancesNode = value["AssociateDBInstances"]["DBInstance"];
	for (auto valueAssociateDBInstancesDBInstance : allAssociateDBInstancesNode)
	{
		DBInstance associateDBInstancesObject;
		if(!valueAssociateDBInstancesDBInstance["DBInstanceName"].isNull())
			associateDBInstancesObject.dBInstanceName = valueAssociateDBInstancesDBInstance["DBInstanceName"].asString();
		if(!valueAssociateDBInstancesDBInstance["Engine"].isNull())
			associateDBInstancesObject.engine = valueAssociateDBInstancesDBInstance["Engine"].asString();
		if(!valueAssociateDBInstancesDBInstance["KeyUsedBy"].isNull())
			associateDBInstancesObject.keyUsedBy = valueAssociateDBInstancesDBInstance["KeyUsedBy"].asString();
		if(!valueAssociateDBInstancesDBInstance["Status"].isNull())
			associateDBInstancesObject.status = valueAssociateDBInstancesDBInstance["Status"].asString();
		associateDBInstances_.push_back(associateDBInstancesObject);
	}
	if(!value["AssociateStatus"].isNull())
		associateStatus_ = value["AssociateStatus"].asString() == "true";

}

std::vector<DescribeKmsAssociateResourcesResult::DBInstance> DescribeKmsAssociateResourcesResult::getAssociateDBInstances()const
{
	return associateDBInstances_;
}

bool DescribeKmsAssociateResourcesResult::getAssociateStatus()const
{
	return associateStatus_;
}

