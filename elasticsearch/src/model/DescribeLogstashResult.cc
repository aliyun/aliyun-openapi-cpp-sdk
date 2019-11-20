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

#include <alibabacloud/elasticsearch/model/DescribeLogstashResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

DescribeLogstashResult::DescribeLogstashResult() :
	ServiceResult()
{}

DescribeLogstashResult::DescribeLogstashResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogstashResult::~DescribeLogstashResult()
{}

void DescribeLogstashResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["instanceId"].isNull())
		result_.instanceId = resultNode["instanceId"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["nodeAmount"].isNull())
		result_.nodeAmount = std::stoi(resultNode["nodeAmount"].asString());
	if(!resultNode["paymentType"].isNull())
		result_.paymentType = resultNode["paymentType"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["version"].isNull())
		result_.version = resultNode["version"].asString();
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["updatedAt"].isNull())
		result_.updatedAt = resultNode["updatedAt"].asString();
	if(!resultNode["vpcInstanceId"].isNull())
		result_.vpcInstanceId = resultNode["vpcInstanceId"].asString();
	if(!resultNode["config"].isNull())
		result_.config = resultNode["config"].asString();
	auto allendpointListNode = resultNode["endpointList"]["endpoint"];
	for (auto resultNodeendpointListendpoint : allendpointListNode)
	{
		Result::Endpoint endpointObject;
		if(!resultNodeendpointListendpoint["host"].isNull())
			endpointObject.host = resultNodeendpointListendpoint["host"].asString();
		if(!resultNodeendpointListendpoint["port"].isNull())
			endpointObject.port = resultNodeendpointListendpoint["port"].asString();
		result_.endpointList.push_back(endpointObject);
	}
	auto nodeSpecNode = resultNode["nodeSpec"];
	if(!nodeSpecNode["spec"].isNull())
		result_.nodeSpec.spec = nodeSpecNode["spec"].asString();
	if(!nodeSpecNode["disk"].isNull())
		result_.nodeSpec.disk = std::stoi(nodeSpecNode["disk"].asString());
	if(!nodeSpecNode["diskType"].isNull())
		result_.nodeSpec.diskType = nodeSpecNode["diskType"].asString();
	auto networkConfigNode = resultNode["networkConfig"];
	if(!networkConfigNode["type"].isNull())
		result_.networkConfig.type = networkConfigNode["type"].asString();
	if(!networkConfigNode["vpcId"].isNull())
		result_.networkConfig.vpcId = networkConfigNode["vpcId"].asString();
	if(!networkConfigNode["vswitchId"].isNull())
		result_.networkConfig.vswitchId = networkConfigNode["vswitchId"].asString();
	if(!networkConfigNode["vsArea"].isNull())
		result_.networkConfig.vsArea = networkConfigNode["vsArea"].asString();

}

DescribeLogstashResult::Result DescribeLogstashResult::getResult()const
{
	return result_;
}

