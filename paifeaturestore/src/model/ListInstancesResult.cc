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

#include <alibabacloud/paifeaturestore/model/ListInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListInstancesResult::ListInstancesResult() :
	ServiceResult()
{}

ListInstancesResult::ListInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesResult::~ListInstancesResult()
{}

void ListInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["InstancesItem"];
	for (auto valueInstancesInstancesItem : allInstancesNode)
	{
		InstancesItem instancesObject;
		if(!valueInstancesInstancesItem["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstancesItem["InstanceId"].asString();
		if(!valueInstancesInstancesItem["Type"].isNull())
			instancesObject.type = valueInstancesInstancesItem["Type"].asString();
		if(!valueInstancesInstancesItem["Status"].isNull())
			instancesObject.status = valueInstancesInstancesItem["Status"].asString();
		if(!valueInstancesInstancesItem["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstancesItem["RegionId"].asString();
		if(!valueInstancesInstancesItem["GmtCreateTime"].isNull())
			instancesObject.gmtCreateTime = valueInstancesInstancesItem["GmtCreateTime"].asString();
		if(!valueInstancesInstancesItem["GmtModifiedTime"].isNull())
			instancesObject.gmtModifiedTime = valueInstancesInstancesItem["GmtModifiedTime"].asString();
		auto featureDBInstanceInfoNode = value["FeatureDBInstanceInfo"];
		if(!featureDBInstanceInfoNode["Status"].isNull())
			instancesObject.featureDBInstanceInfo.status = featureDBInstanceInfoNode["Status"].asString();
		auto featureDBInfoNode = value["FeatureDBInfo"];
		if(!featureDBInfoNode["Status"].isNull())
			instancesObject.featureDBInfo.status = featureDBInfoNode["Status"].asString();
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<ListInstancesResult::InstancesItem> ListInstancesResult::getInstances()const
{
	return instances_;
}

long ListInstancesResult::getTotalCount()const
{
	return totalCount_;
}

