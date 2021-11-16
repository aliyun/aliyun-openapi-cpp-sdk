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
	auto allResultNode = value["Result"]["返回结果"];
	for (auto valueResult返回结果 : allResultNode)
	{
		返回结果 resultObject;
		if(!valueResult返回结果["createdAt"].isNull())
			resultObject.createdAt = valueResult返回结果["createdAt"].asString();
		if(!valueResult返回结果["deployedReplica"].isNull())
			resultObject.deployedReplica = std::stol(valueResult返回结果["deployedReplica"].asString());
		if(!valueResult返回结果["description"].isNull())
			resultObject.description = valueResult返回结果["description"].asString();
		if(!valueResult返回结果["instanceId"].isNull())
			resultObject.instanceId = valueResult返回结果["instanceId"].asString();
		if(!valueResult返回结果["nodeAmount"].isNull())
			resultObject.nodeAmount = std::stol(valueResult返回结果["nodeAmount"].asString());
		if(!valueResult返回结果["outputES"].isNull())
			resultObject.outputES = valueResult返回结果["outputES"].asString();
		if(!valueResult返回结果["outputESUserName"].isNull())
			resultObject.outputESUserName = valueResult返回结果["outputESUserName"].asString();
		if(!valueResult返回结果["ownerId"].isNull())
			resultObject.ownerId = valueResult返回结果["ownerId"].asString();
		if(!valueResult返回结果["paymentType"].isNull())
			resultObject.paymentType = valueResult返回结果["paymentType"].asString();
		if(!valueResult返回结果["region"].isNull())
			resultObject.region = valueResult返回结果["region"].asString();
		if(!valueResult返回结果["replica"].isNull())
			resultObject.replica = std::stol(valueResult返回结果["replica"].asString());
		if(!valueResult返回结果["resourceSpec"].isNull())
			resultObject.resourceSpec = valueResult返回结果["resourceSpec"].asString();
		if(!valueResult返回结果["status"].isNull())
			resultObject.status = valueResult返回结果["status"].asString();
		if(!valueResult返回结果["version"].isNull())
			resultObject.version = valueResult返回结果["version"].asString();
		if(!valueResult返回结果["vpcId"].isNull())
			resultObject.vpcId = valueResult返回结果["vpcId"].asString();
		if(!valueResult返回结果["vsArea"].isNull())
			resultObject.vsArea = valueResult返回结果["vsArea"].asString();
		if(!valueResult返回结果["vswitchId"].isNull())
			resultObject.vswitchId = valueResult返回结果["vswitchId"].asString();
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

std::vector<ListApmResult::返回结果> ListApmResult::getResult()const
{
	return result_;
}

