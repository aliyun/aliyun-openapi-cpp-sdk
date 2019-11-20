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

#include <alibabacloud/elasticsearch/model/ListLogstashResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListLogstashResult::ListLogstashResult() :
	ServiceResult()
{}

ListLogstashResult::ListLogstashResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLogstashResult::~ListLogstashResult()
{}

void ListLogstashResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Instance"];
	for (auto valueResultInstance : allResultNode)
	{
		Instance resultObject;
		if(!valueResultInstance["instanceId"].isNull())
			resultObject.instanceId = valueResultInstance["instanceId"].asString();
		if(!valueResultInstance["description"].isNull())
			resultObject.description = valueResultInstance["description"].asString();
		if(!valueResultInstance["nodeAmount"].isNull())
			resultObject.nodeAmount = std::stoi(valueResultInstance["nodeAmount"].asString());
		if(!valueResultInstance["paymentType"].isNull())
			resultObject.paymentType = valueResultInstance["paymentType"].asString();
		if(!valueResultInstance["status"].isNull())
			resultObject.status = valueResultInstance["status"].asString();
		if(!valueResultInstance["version"].isNull())
			resultObject.version = valueResultInstance["version"].asString();
		if(!valueResultInstance["createdAt"].isNull())
			resultObject.createdAt = valueResultInstance["createdAt"].asString();
		if(!valueResultInstance["updatedAt"].isNull())
			resultObject.updatedAt = valueResultInstance["updatedAt"].asString();
		auto nodeSpecNode = value["nodeSpec"];
		if(!nodeSpecNode["spec"].isNull())
			resultObject.nodeSpec.spec = nodeSpecNode["spec"].asString();
		if(!nodeSpecNode["disk"].isNull())
			resultObject.nodeSpec.disk = std::stoi(nodeSpecNode["disk"].asString());
		if(!nodeSpecNode["diskType"].isNull())
			resultObject.nodeSpec.diskType = nodeSpecNode["diskType"].asString();
		auto networkConfigNode = value["networkConfig"];
		if(!networkConfigNode["type"].isNull())
			resultObject.networkConfig.type = networkConfigNode["type"].asString();
		if(!networkConfigNode["vpcId"].isNull())
			resultObject.networkConfig.vpcId = networkConfigNode["vpcId"].asString();
		if(!networkConfigNode["vswitchId"].isNull())
			resultObject.networkConfig.vswitchId = networkConfigNode["vswitchId"].asString();
		if(!networkConfigNode["vsArea"].isNull())
			resultObject.networkConfig.vsArea = networkConfigNode["vsArea"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<ListLogstashResult::Instance> ListLogstashResult::getResult()const
{
	return result_;
}

