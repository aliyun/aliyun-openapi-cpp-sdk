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

#include <alibabacloud/cs/model/DescribeClusterNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeClusterNodesResult::DescribeClusterNodesResult() :
	ServiceResult()
{}

DescribeClusterNodesResult::DescribeClusterNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterNodesResult::~DescribeClusterNodesResult()
{}

void DescribeClusterNodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allnodesNode = value["nodes"]["node"];
	for (auto valuenodesnode : allnodesNode)
	{
		Node nodesObject;
		if(!valuenodesnode["error_message"].isNull())
			nodesObject.error_message = valuenodesnode["error_message"].asString();
		if(!valuenodesnode["creation_time"].isNull())
			nodesObject.creation_time = valuenodesnode["creation_time"].asString();
		if(!valuenodesnode["node_status"].isNull())
			nodesObject.node_status = valuenodesnode["node_status"].asString();
		if(!valuenodesnode["instance_name"].isNull())
			nodesObject.instance_name = valuenodesnode["instance_name"].asString();
		if(!valuenodesnode["is_aliyun_node"].isNull())
			nodesObject.is_aliyun_node = valuenodesnode["is_aliyun_node"].asString() == "true";
		if(!valuenodesnode["node_name"].isNull())
			nodesObject.node_name = valuenodesnode["node_name"].asString();
		if(!valuenodesnode["expired_time"].isNull())
			nodesObject.expired_time = valuenodesnode["expired_time"].asString();
		if(!valuenodesnode["source"].isNull())
			nodesObject.source = valuenodesnode["source"].asString();
		if(!valuenodesnode["instance_type_family"].isNull())
			nodesObject.instance_type_family = valuenodesnode["instance_type_family"].asString();
		if(!valuenodesnode["instance_id"].isNull())
			nodesObject.instance_id = valuenodesnode["instance_id"].asString();
		if(!valuenodesnode["instance_charge_type"].isNull())
			nodesObject.instance_charge_type = valuenodesnode["instance_charge_type"].asString();
		if(!valuenodesnode["instance_role"].isNull())
			nodesObject.instance_role = valuenodesnode["instance_role"].asString();
		if(!valuenodesnode["state"].isNull())
			nodesObject.state = valuenodesnode["state"].asString();
		if(!valuenodesnode["instance_status"].isNull())
			nodesObject.instance_status = valuenodesnode["instance_status"].asString();
		if(!valuenodesnode["image_id"].isNull())
			nodesObject.image_id = valuenodesnode["image_id"].asString();
		if(!valuenodesnode["nodepool_id"].isNull())
			nodesObject.nodepool_id = valuenodesnode["nodepool_id"].asString();
		if(!valuenodesnode["instance_type"].isNull())
			nodesObject.instance_type = valuenodesnode["instance_type"].asString();
		if(!valuenodesnode["host_name"].isNull())
			nodesObject.host_name = valuenodesnode["host_name"].asString();
		auto allIp_address = value["ip_address"]["ip"];
		for (auto value : allIp_address)
			nodesObject.ip_address.push_back(value.asString());
		nodes_.push_back(nodesObject);
	}
	auto pageNode = value["page"];
	if(!pageNode["page_number"].isNull())
		page_.page_number = std::stoi(pageNode["page_number"].asString());
	if(!pageNode["total_count"].isNull())
		page_.total_count = std::stoi(pageNode["total_count"].asString());
	if(!pageNode["page_size"].isNull())
		page_.page_size = std::stoi(pageNode["page_size"].asString());

}

std::vector<DescribeClusterNodesResult::Node> DescribeClusterNodesResult::getnodes()const
{
	return nodes_;
}

DescribeClusterNodesResult::Page DescribeClusterNodesResult::getPage()const
{
	return page_;
}

