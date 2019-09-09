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

#include <alibabacloud/elasticsearch/model/ListInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListInstanceResult::ListInstanceResult() :
	ServiceResult()
{}

ListInstanceResult::ListInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceResult::~ListInstanceResult()
{}

void ListInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResult = value["Result"]["Instance"];
	for (auto value : allResult)
	{
		Instance resultObject;
		if(!value["instanceId"].isNull())
			resultObject.instanceId = value["instanceId"].asString();
		if(!value["description"].isNull())
			resultObject.description = value["description"].asString();
		if(!value["nodeAmount"].isNull())
			resultObject.nodeAmount = std::stoi(value["nodeAmount"].asString());
		if(!value["paymentType"].isNull())
			resultObject.paymentType = value["paymentType"].asString();
		if(!value["status"].isNull())
			resultObject.status = value["status"].asString();
		if(!value["esVersion"].isNull())
			resultObject.esVersion = value["esVersion"].asString();
		if(!value["createdAt"].isNull())
			resultObject.createdAt = value["createdAt"].asString();
		if(!value["updatedAt"].isNull())
			resultObject.updatedAt = value["updatedAt"].asString();
		if(!value["advancedDedicateMaster"].isNull())
			resultObject.advancedDedicateMaster = value["advancedDedicateMaster"].asString() == "true";
		if(!value["dedicateMaster"].isNull())
			resultObject.dedicateMaster = value["dedicateMaster"].asString() == "true";
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
		auto masterConfigurationNode = value["masterConfiguration"];
		if(!masterConfigurationNode["spec"].isNull())
			resultObject.masterConfiguration.spec = masterConfigurationNode["spec"].asString();
		if(!masterConfigurationNode["amount"].isNull())
			resultObject.masterConfiguration.amount = std::stoi(masterConfigurationNode["amount"].asString());
		if(!masterConfigurationNode["diskType"].isNull())
			resultObject.masterConfiguration.diskType = masterConfigurationNode["diskType"].asString();
		if(!masterConfigurationNode["disk"].isNull())
			resultObject.masterConfiguration.disk = std::stoi(masterConfigurationNode["disk"].asString());
		auto kibanaConfigurationNode = value["kibanaConfiguration"];
		if(!kibanaConfigurationNode["spec"].isNull())
			resultObject.kibanaConfiguration.spec = kibanaConfigurationNode["spec"].asString();
		if(!kibanaConfigurationNode["disk"].isNull())
			resultObject.kibanaConfiguration.disk = std::stoi(kibanaConfigurationNode["disk"].asString());
		if(!kibanaConfigurationNode["amount"].isNull())
			resultObject.kibanaConfiguration.amount = std::stoi(kibanaConfigurationNode["amount"].asString());
		if(!kibanaConfigurationNode["diskType"].isNull())
			resultObject.kibanaConfiguration.diskType = kibanaConfigurationNode["diskType"].asString();
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());

}

ListInstanceResult::Headers ListInstanceResult::getHeaders()const
{
	return headers_;
}

std::vector<ListInstanceResult::Instance> ListInstanceResult::getResult()const
{
	return result_;
}

