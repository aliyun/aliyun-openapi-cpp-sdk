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

#include <alibabacloud/elasticsearch/model/CreateDataTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

CreateDataTasksResult::CreateDataTasksResult() :
	ServiceResult()
{}

CreateDataTasksResult::CreateDataTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDataTasksResult::~CreateDataTasksResult()
{}

void CreateDataTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		auto sourceClusterNode = value["sourceCluster"];
		if(!sourceClusterNode["password"].isNull())
			resultObject.sourceCluster.password = sourceClusterNode["password"].asString();
		if(!sourceClusterNode["index"].isNull())
			resultObject.sourceCluster.index = sourceClusterNode["index"].asString();
		if(!sourceClusterNode["type"].isNull())
			resultObject.sourceCluster.type = sourceClusterNode["type"].asString();
		if(!sourceClusterNode["endpoint"].isNull())
			resultObject.sourceCluster.endpoint = sourceClusterNode["endpoint"].asString();
		if(!sourceClusterNode["username"].isNull())
			resultObject.sourceCluster.username = sourceClusterNode["username"].asString();
		if(!sourceClusterNode["vpcId"].isNull())
			resultObject.sourceCluster.vpcId = sourceClusterNode["vpcId"].asString();
		if(!sourceClusterNode["vpcInstanceId"].isNull())
			resultObject.sourceCluster.vpcInstanceId = sourceClusterNode["vpcInstanceId"].asString();
		if(!sourceClusterNode["vpcInstancePort"].isNull())
			resultObject.sourceCluster.vpcInstancePort = std::stoi(sourceClusterNode["vpcInstancePort"].asString());
		if(!sourceClusterNode["dataSourceType"].isNull())
			resultObject.sourceCluster.dataSourceType = sourceClusterNode["dataSourceType"].asString();
		auto sinkClusterNode = value["sinkCluster"];
		if(!sinkClusterNode["password"].isNull())
			resultObject.sinkCluster.password = sinkClusterNode["password"].asString();
		if(!sinkClusterNode["index"].isNull())
			resultObject.sinkCluster.index = sinkClusterNode["index"].asString();
		if(!sinkClusterNode["settings"].isNull())
			resultObject.sinkCluster.settings = sinkClusterNode["settings"].asString();
		if(!sinkClusterNode["mapping"].isNull())
			resultObject.sinkCluster.mapping = sinkClusterNode["mapping"].asString();
		if(!sinkClusterNode["type"].isNull())
			resultObject.sinkCluster.type = sinkClusterNode["type"].asString();
		if(!sinkClusterNode["routing"].isNull())
			resultObject.sinkCluster.routing = sinkClusterNode["routing"].asString();
		if(!sinkClusterNode["username"].isNull())
			resultObject.sinkCluster.username = sinkClusterNode["username"].asString();
		if(!sinkClusterNode["vpcId"].isNull())
			resultObject.sinkCluster.vpcId = sinkClusterNode["vpcId"].asString();
		if(!sinkClusterNode["vpcInstancePort"].isNull())
			resultObject.sinkCluster.vpcInstancePort = sinkClusterNode["vpcInstancePort"].asString();
		if(!sinkClusterNode["vpcInstanceId"].isNull())
			resultObject.sinkCluster.vpcInstanceId = sinkClusterNode["vpcInstanceId"].asString();
		if(!sinkClusterNode["dataSourceType"].isNull())
			resultObject.sinkCluster.dataSourceType = sinkClusterNode["dataSourceType"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<CreateDataTasksResult::ResultItem> CreateDataTasksResult::getResult()const
{
	return result_;
}

