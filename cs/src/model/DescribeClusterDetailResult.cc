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

#include <alibabacloud/cs/model/DescribeClusterDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeClusterDetailResult::DescribeClusterDetailResult() :
	ServiceResult()
{}

DescribeClusterDetailResult::DescribeClusterDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterDetailResult::~DescribeClusterDetailResult()
{}

void DescribeClusterDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alltagsNode = value["tags"]["tagsItem"];
	for (auto valuetagstagsItem : alltagsNode)
	{
		TagsItem tagsObject;
		if(!valuetagstagsItem["value"].isNull())
			tagsObject.value = valuetagstagsItem["value"].asString();
		if(!valuetagstagsItem["key"].isNull())
			tagsObject.key = valuetagstagsItem["key"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["resource_group_id"].isNull())
		resource_group_id_ = value["resource_group_id"].asString();
	if(!value["vpc_id"].isNull())
		vpc_id_ = value["vpc_id"].asString();
	if(!value["deletion_protection"].isNull())
		deletion_protection_ = value["deletion_protection"].asString() == "true";
	if(!value["created"].isNull())
		created_ = value["created"].asString();
	if(!value["network_mode"].isNull())
		network_mode_ = value["network_mode"].asString();
	if(!value["region_id"].isNull())
		region_id_ = value["region_id"].asString();
	if(!value["security_group_id"].isNull())
		security_group_id_ = value["security_group_id"].asString();
	if(!value["current_version"].isNull())
		current_version_ = value["current_version"].asString();
	if(!value["cluster_type"].isNull())
		cluster_type_ = value["cluster_type"].asString();
	if(!value["docker_version"].isNull())
		docker_version_ = value["docker_version"].asString();
	if(!value["vswitch_cidr"].isNull())
		vswitch_cidr_ = value["vswitch_cidr"].asString();
	if(!value["zone_id"].isNull())
		zone_id_ = value["zone_id"].asString();
	if(!value["cluster_id"].isNull())
		cluster_id_ = value["cluster_id"].asString();
	if(!value["size"].isNull())
		size_ = std::stoi(value["size"].asString());
	if(!value["external_loadbalancer_id"].isNull())
		external_loadbalancer_id_ = value["external_loadbalancer_id"].asString();
	if(!value["vswitch_id"].isNull())
		vswitch_id_ = value["vswitch_id"].asString();
	if(!value["name"].isNull())
		name_ = value["name"].asString();
	if(!value["meta_data"].isNull())
		meta_data_ = value["meta_data"].asString();
	if(!value["state"].isNull())
		state_ = value["state"].asString();
	if(!value["updated"].isNull())
		updated_ = value["updated"].asString();
	if(!value["instance_type"].isNull())
		instance_type_ = value["instance_type"].asString();

}

std::string DescribeClusterDetailResult::getResource_group_id()const
{
	return resource_group_id_;
}

std::string DescribeClusterDetailResult::getCluster_type()const
{
	return cluster_type_;
}

std::string DescribeClusterDetailResult::getDocker_version()const
{
	return docker_version_;
}

std::string DescribeClusterDetailResult::getCluster_id()const
{
	return cluster_id_;
}

std::string DescribeClusterDetailResult::getExternal_loadbalancer_id()const
{
	return external_loadbalancer_id_;
}

std::string DescribeClusterDetailResult::getUpdated()const
{
	return updated_;
}

std::string DescribeClusterDetailResult::getRegion_id()const
{
	return region_id_;
}

int DescribeClusterDetailResult::getSize()const
{
	return size_;
}

std::string DescribeClusterDetailResult::getVpc_id()const
{
	return vpc_id_;
}

std::string DescribeClusterDetailResult::getVswitch_id()const
{
	return vswitch_id_;
}

bool DescribeClusterDetailResult::getDeletion_protection()const
{
	return deletion_protection_;
}

std::string DescribeClusterDetailResult::getMeta_data()const
{
	return meta_data_;
}

std::string DescribeClusterDetailResult::getNetwork_mode()const
{
	return network_mode_;
}

std::string DescribeClusterDetailResult::getSecurity_group_id()const
{
	return security_group_id_;
}

std::vector<DescribeClusterDetailResult::TagsItem> DescribeClusterDetailResult::gettags()const
{
	return tags_;
}

std::string DescribeClusterDetailResult::getCreated()const
{
	return created_;
}

std::string DescribeClusterDetailResult::getName()const
{
	return name_;
}

std::string DescribeClusterDetailResult::getZone_id()const
{
	return zone_id_;
}

std::string DescribeClusterDetailResult::getState()const
{
	return state_;
}

std::string DescribeClusterDetailResult::getVswitch_cidr()const
{
	return vswitch_cidr_;
}

std::string DescribeClusterDetailResult::getCurrent_version()const
{
	return current_version_;
}

std::string DescribeClusterDetailResult::getInstance_type()const
{
	return instance_type_;
}

