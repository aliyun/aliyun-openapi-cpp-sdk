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

#include <alibabacloud/elasticsearch/model/ListDataTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListDataTasksResult::ListDataTasksResult() :
	ServiceResult()
{}

ListDataTasksResult::ListDataTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataTasksResult::~ListDataTasksResult()
{}

void ListDataTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["createTime"].isNull())
			resultObject.createTime = valueResultResultItem["createTime"].asString();
		if(!valueResultResultItem["taskId"].isNull())
			resultObject.taskId = valueResultResultItem["taskId"].asString();
		if(!valueResultResultItem["status"].isNull())
			resultObject.status = valueResultResultItem["status"].asString();
		auto sinkClusterNode = value["sinkCluster"];
		if(!sinkClusterNode["index"].isNull())
			resultObject.sinkCluster.index = sinkClusterNode["index"].asString();
		if(!sinkClusterNode["type"].isNull())
			resultObject.sinkCluster.type = sinkClusterNode["type"].asString();
		if(!sinkClusterNode["endpoint"].isNull())
			resultObject.sinkCluster.endpoint = sinkClusterNode["endpoint"].asString();
		if(!sinkClusterNode["vpcId"].isNull())
			resultObject.sinkCluster.vpcId = sinkClusterNode["vpcId"].asString();
		if(!sinkClusterNode["vpcInstancePort"].isNull())
			resultObject.sinkCluster.vpcInstancePort = sinkClusterNode["vpcInstancePort"].asString();
		if(!sinkClusterNode["vpcInstanceId"].isNull())
			resultObject.sinkCluster.vpcInstanceId = sinkClusterNode["vpcInstanceId"].asString();
		if(!sinkClusterNode["dataSourceType"].isNull())
			resultObject.sinkCluster.dataSourceType = sinkClusterNode["dataSourceType"].asString();
		auto sourceClusterNode = value["sourceCluster"];
		if(!sourceClusterNode["index"].isNull())
			resultObject.sourceCluster.index = sourceClusterNode["index"].asString();
		if(!sourceClusterNode["settings"].isNull())
			resultObject.sourceCluster.settings = sourceClusterNode["settings"].asString();
		if(!sourceClusterNode["mapping"].isNull())
			resultObject.sourceCluster.mapping = sourceClusterNode["mapping"].asString();
		if(!sourceClusterNode["type"].isNull())
			resultObject.sourceCluster.type = sourceClusterNode["type"].asString();
		if(!sourceClusterNode["routing"].isNull())
			resultObject.sourceCluster.routing = sourceClusterNode["routing"].asString();
		if(!sourceClusterNode["dataSourceType"].isNull())
			resultObject.sourceCluster.dataSourceType = sourceClusterNode["dataSourceType"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<ListDataTasksResult::ResultItem> ListDataTasksResult::getResult()const
{
	return result_;
}

