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

#include <alibabacloud/elasticsearch/model/ListAckClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListAckClustersResult::ListAckClustersResult() :
	ServiceResult()
{}

ListAckClustersResult::ListAckClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAckClustersResult::~ListAckClustersResult()
{}

void ListAckClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["resultItem"];
	for (auto valueResultresultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultresultItem["clusterType"].isNull())
			resultObject.clusterType = valueResultresultItem["clusterType"].asString();
		if(!valueResultresultItem["vpcId"].isNull())
			resultObject.vpcId = valueResultresultItem["vpcId"].asString();
		if(!valueResultresultItem["name"].isNull())
			resultObject.name = valueResultresultItem["name"].asString();
		if(!valueResultresultItem["clusterId"].isNull())
			resultObject.clusterId = valueResultresultItem["clusterId"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<ListAckClustersResult::ResultItem> ListAckClustersResult::getResult()const
{
	return result_;
}

