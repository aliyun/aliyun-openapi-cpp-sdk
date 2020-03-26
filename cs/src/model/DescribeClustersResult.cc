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

#include <alibabacloud/cs/model/DescribeClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeClustersResult::DescribeClustersResult() :
	ServiceResult()
{}

DescribeClustersResult::DescribeClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClustersResult::~DescribeClustersResult()
{}

void DescribeClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["agent_version"].isNull())
		agent_version_ = value["agent_version"].asString();
	if(!value["cluster_id"].isNull())
		cluster_id_ = value["cluster_id"].asString();
	if(!value["created"].isNull())
		created_ = value["created"].asString();
	if(!value["external_loadbalancer_id"].isNull())
		external_loadbalancer_id_ = value["external_loadbalancer_id"].asString();
	if(!value["master_url"].isNull())
		master_url_ = value["master_url"].asString();
	if(!value["name"].isNull())
		name_ = value["name"].asString();
	if(!value["network_mode"].isNull())
		network_mode_ = value["network_mode"].asString();
	if(!value["region_id"].isNull())
		region_id_ = value["region_id"].asString();
	if(!value["security_group_id"].isNull())
		security_group_id_ = value["security_group_id"].asString();
	if(!value["size"].isNull())
		size_ = value["size"].asString();
	if(!value["state"].isNull())
		state_ = value["state"].asString();
	if(!value["updated"].isNull())
		updated_ = value["updated"].asString();
	if(!value["vpc_id"].isNull())
		vpc_id_ = value["vpc_id"].asString();
	if(!value["vpc_id"].isNull())
		vpc_id1_ = value["vpc_id"].asString();

}

std::string DescribeClustersResult::getCluster_id()const
{
	return cluster_id_;
}

std::string DescribeClustersResult::getExternal_loadbalancer_id()const
{
	return external_loadbalancer_id_;
}

std::string DescribeClustersResult::getUpdated()const
{
	return updated_;
}

std::string DescribeClustersResult::getRegion_id()const
{
	return region_id_;
}

std::string DescribeClustersResult::getSize()const
{
	return size_;
}

std::string DescribeClustersResult::getVpc_id()const
{
	return vpc_id_;
}

std::string DescribeClustersResult::getNetwork_mode()const
{
	return network_mode_;
}

std::string DescribeClustersResult::getSecurity_group_id()const
{
	return security_group_id_;
}

std::string DescribeClustersResult::getCreated()const
{
	return created_;
}

std::string DescribeClustersResult::getName()const
{
	return name_;
}

std::string DescribeClustersResult::getAgent_version()const
{
	return agent_version_;
}

std::string DescribeClustersResult::getState()const
{
	return state_;
}

std::string DescribeClustersResult::getVpc_id1()const
{
	return vpc_id1_;
}

std::string DescribeClustersResult::getMaster_url()const
{
	return master_url_;
}

