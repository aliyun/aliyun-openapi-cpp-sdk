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

#include <alibabacloud/elasticsearch/model/ListApmResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListApmResult::ListApmResult() :
	ServiceResult()
{}

ListApmResult::ListApmResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApmResult::~ListApmResult()
{}

void ListApmResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["object"];
	for (auto valueResultobject : allResultNode)
	{
		Object resultObject;
		if(!valueResultobject["createdAt"].isNull())
			resultObject.createdAt = valueResultobject["createdAt"].asString();
		if(!valueResultobject["deployedReplica"].isNull())
			resultObject.deployedReplica = std::stol(valueResultobject["deployedReplica"].asString());
		if(!valueResultobject["description"].isNull())
			resultObject.description = valueResultobject["description"].asString();
		if(!valueResultobject["instanceId"].isNull())
			resultObject.instanceId = valueResultobject["instanceId"].asString();
		if(!valueResultobject["nodeAmount"].isNull())
			resultObject.nodeAmount = std::stol(valueResultobject["nodeAmount"].asString());
		if(!valueResultobject["outputES"].isNull())
			resultObject.outputES = valueResultobject["outputES"].asString();
		if(!valueResultobject["outputESUserName"].isNull())
			resultObject.outputESUserName = valueResultobject["outputESUserName"].asString();
		if(!valueResultobject["ownerId"].isNull())
			resultObject.ownerId = valueResultobject["ownerId"].asString();
		if(!valueResultobject["paymentType"].isNull())
			resultObject.paymentType = valueResultobject["paymentType"].asString();
		if(!valueResultobject["region"].isNull())
			resultObject.region = valueResultobject["region"].asString();
		if(!valueResultobject["replica"].isNull())
			resultObject.replica = std::stol(valueResultobject["replica"].asString());
		if(!valueResultobject["resourceSpec"].isNull())
			resultObject.resourceSpec = valueResultobject["resourceSpec"].asString();
		if(!valueResultobject["status"].isNull())
			resultObject.status = valueResultobject["status"].asString();
		if(!valueResultobject["version"].isNull())
			resultObject.version = valueResultobject["version"].asString();
		if(!valueResultobject["vpcId"].isNull())
			resultObject.vpcId = valueResultobject["vpcId"].asString();
		if(!valueResultobject["vsArea"].isNull())
			resultObject.vsArea = valueResultobject["vsArea"].asString();
		if(!valueResultobject["vswitchId"].isNull())
			resultObject.vswitchId = valueResultobject["vswitchId"].asString();
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stol(headersNode["X-Total-Count"].asString());

}

ListApmResult::Headers ListApmResult::getHeaders()const
{
	return headers_;
}

std::vector<ListApmResult::Object> ListApmResult::getResult()const
{
	return result_;
}

