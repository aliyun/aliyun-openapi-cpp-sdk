<<<<<<< HEAD
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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeAutoProvisioningGroupInstancesResult::DescribeAutoProvisioningGroupInstancesResult() :
	ServiceResult()
{}

DescribeAutoProvisioningGroupInstancesResult::DescribeAutoProvisioningGroupInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoProvisioningGroupInstancesResult::~DescribeAutoProvisioningGroupInstancesResult()
{}

void DescribeAutoProvisioningGroupInstancesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
=======
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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeAutoProvisioningGroupInstancesResult::DescribeAutoProvisioningGroupInstancesResult() :
	ServiceResult()
{}

DescribeAutoProvisioningGroupInstancesResult::DescribeAutoProvisioningGroupInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoProvisioningGroupInstancesResult::~DescribeAutoProvisioningGroupInstancesResult()
{}

void DescribeAutoProvisioningGroupInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
>>>>>>> master
	auto allInstances = value["Instances"]["Instance"];
	for (auto value : allInstances)
	{
		Instance instancesObject;
		if(!value["InstanceId"].isNull())
			instancesObject.instanceId = value["InstanceId"].asString();
		if(!value["Status"].isNull())
			instancesObject.status = value["Status"].asString();
		if(!value["RegionId"].isNull())
			instancesObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			instancesObject.zoneId = value["ZoneId"].asString();
		if(!value["CPU"].isNull())
			instancesObject.cPU = std::stoi(value["CPU"].asString());
		if(!value["Memory"].isNull())
			instancesObject.memory = std::stoi(value["Memory"].asString());
		if(!value["InstanceType"].isNull())
			instancesObject.instanceType = value["InstanceType"].asString();
		if(!value["IsSpot"].isNull())
			instancesObject.isSpot = value["IsSpot"].asString() == "true";
		if(!value["IoOptimized"].isNull())
			instancesObject.ioOptimized = value["IoOptimized"].asString() == "true";
		if(!value["NetworkType"].isNull())
			instancesObject.networkType = value["NetworkType"].asString();
		if(!value["OsType"].isNull())
			instancesObject.osType = value["OsType"].asString();
		if(!value["CreationTime"].isNull())
			instancesObject.creationTime = value["CreationTime"].asString();
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
<<<<<<< HEAD

}

=======

}

>>>>>>> master
std::vector<DescribeAutoProvisioningGroupInstancesResult::Instance> DescribeAutoProvisioningGroupInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeAutoProvisioningGroupInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAutoProvisioningGroupInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAutoProvisioningGroupInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

