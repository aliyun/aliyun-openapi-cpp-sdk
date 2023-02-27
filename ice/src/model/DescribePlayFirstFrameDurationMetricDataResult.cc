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

#include <alibabacloud/ice/model/DescribePlayFirstFrameDurationMetricDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DescribePlayFirstFrameDurationMetricDataResult::DescribePlayFirstFrameDurationMetricDataResult() :
	ServiceResult()
{}

DescribePlayFirstFrameDurationMetricDataResult::DescribePlayFirstFrameDurationMetricDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlayFirstFrameDurationMetricDataResult::~DescribePlayFirstFrameDurationMetricDataResult()
{}

void DescribePlayFirstFrameDurationMetricDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodesNode = value["Nodes"]["Data"];
	for (auto valueNodesData : allNodesNode)
	{
		Data nodesObject;
		if(!valueNodesData["X"].isNull())
			nodesObject.x = std::stol(valueNodesData["X"].asString());
		if(!valueNodesData["Y"].isNull())
			nodesObject.y = std::stol(valueNodesData["Y"].asString());
		nodes_.push_back(nodesObject);
	}

}

std::vector<DescribePlayFirstFrameDurationMetricDataResult::Data> DescribePlayFirstFrameDurationMetricDataResult::getNodes()const
{
	return nodes_;
}

