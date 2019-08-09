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

#include <alibabacloud/ecs/model/DescribeFleetInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeFleetInstancesResult::DescribeFleetInstancesResult() :
	ServiceResult()
{}

DescribeFleetInstancesResult::DescribeFleetInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFleetInstancesResult::~DescribeFleetInstancesResult()
{}

void DescribeFleetInstancesResult::parse(const std::string &payload)
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

#include <alibabacloud/ecs/model/DescribeFleetInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeFleetInstancesResult::DescribeFleetInstancesResult() :
	ServiceResult()
{}

DescribeFleetInstancesResult::DescribeFleetInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFleetInstancesResult::~DescribeFleetInstancesResult()
{}

void DescribeFleetInstancesResult::parse(const std::string &payload)
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
		if(!value["IzNo"].isNull())
			instancesObject.izNo = value["IzNo"].asString();
		if(!value["ZoneNo"].isNull())
			instancesObject.zoneNo = value["ZoneNo"].asString();
		if(!value["Cores"].isNull())
			instancesObject.cores = std::stoi(value["Cores"].asString());
		if(!value["Memory"].isNull())
			instancesObject.memory = std::stoi(value["Memory"].asString());
		if(!value["InstanceType"].isNull())
			instancesObject.instanceType = value["InstanceType"].asString();
		if(!value["IsSpot"].isNull())
			instancesObject.isSpot = value["IsSpot"].asString() == "true";
		if(!value["IoOptimized"].isNull())
			instancesObject.ioOptimized = value["IoOptimized"].asString() == "true";
		if(!value["NetworkType"].isNull())
			instancesObject.networkType = value["NetworkType"].asString() == "true";
		if(!value["OsType"].isNull())
			instancesObject.osType = value["OsType"].asString() == "true";
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

}

std::vector<DescribeFleetInstancesResult::Instance> DescribeFleetInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeFleetInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeFleetInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFleetInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

