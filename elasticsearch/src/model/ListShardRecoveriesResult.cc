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

#include <alibabacloud/elasticsearch/model/ListShardRecoveriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListShardRecoveriesResult::ListShardRecoveriesResult() :
	ServiceResult()
{}

ListShardRecoveriesResult::ListShardRecoveriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListShardRecoveriesResult::~ListShardRecoveriesResult()
{}

void ListShardRecoveriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["index"].isNull())
			resultObject.index = valueResultResultItem["index"].asString();
		if(!valueResultResultItem["sourceHost"].isNull())
			resultObject.sourceHost = valueResultResultItem["sourceHost"].asString();
		if(!valueResultResultItem["sourceNode"].isNull())
			resultObject.sourceNode = valueResultResultItem["sourceNode"].asString();
		if(!valueResultResultItem["filesTotal"].isNull())
			resultObject.filesTotal = std::stol(valueResultResultItem["filesTotal"].asString());
		if(!valueResultResultItem["bytesPercent"].isNull())
			resultObject.bytesPercent = valueResultResultItem["bytesPercent"].asString();
		if(!valueResultResultItem["translogOps"].isNull())
			resultObject.translogOps = std::stol(valueResultResultItem["translogOps"].asString());
		if(!valueResultResultItem["translogOpsPercent"].isNull())
			resultObject.translogOpsPercent = valueResultResultItem["translogOpsPercent"].asString();
		if(!valueResultResultItem["bytesTotal"].isNull())
			resultObject.bytesTotal = std::stol(valueResultResultItem["bytesTotal"].asString());
		if(!valueResultResultItem["targetHost"].isNull())
			resultObject.targetHost = valueResultResultItem["targetHost"].asString();
		if(!valueResultResultItem["targetNode"].isNull())
			resultObject.targetNode = valueResultResultItem["targetNode"].asString();
		if(!valueResultResultItem["filesPercent"].isNull())
			resultObject.filesPercent = valueResultResultItem["filesPercent"].asString();
		if(!valueResultResultItem["stage"].isNull())
			resultObject.stage = valueResultResultItem["stage"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<ListShardRecoveriesResult::ResultItem> ListShardRecoveriesResult::getResult()const
{
	return result_;
}

