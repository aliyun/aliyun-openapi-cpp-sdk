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

#include <alibabacloud/gpdb/model/DescribeDBClusterNodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDBClusterNodeResult::DescribeDBClusterNodeResult() :
	ServiceResult()
{}

DescribeDBClusterNodeResult::DescribeDBClusterNodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterNodeResult::~DescribeDBClusterNodeResult()
{}

void DescribeDBClusterNodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodesNode = value["Nodes"]["Node"];
	for (auto valueNodesNode : allNodesNode)
	{
		Node nodesObject;
		if(!valueNodesNode["Name"].isNull())
			nodesObject.name = valueNodesNode["Name"].asString();
		nodes_.push_back(nodesObject);
	}
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeDBClusterNodeResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeDBClusterNodeResult::Node> DescribeDBClusterNodeResult::getNodes()const
{
	return nodes_;
}

