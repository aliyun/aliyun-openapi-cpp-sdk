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

#include <alibabacloud/opensearch/model/ValidateDataSourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ValidateDataSourcesResult::ValidateDataSourcesResult() :
	ServiceResult()
{}

ValidateDataSourcesResult::ValidateDataSourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ValidateDataSourcesResult::~ValidateDataSourcesResult()
{}

void ValidateDataSourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["code"].isNull())
			resultObject.code = valueresultresultItem["code"].asString();
		if(!valueresultresultItem["message"].isNull())
			resultObject.message = valueresultresultItem["message"].asString();
		auto dataSourceNode = value["dataSource"];
		if(!dataSourceNode["tableName"].isNull())
			resultObject.dataSource.tableName = dataSourceNode["tableName"].asString();
		if(!dataSourceNode["type"].isNull())
			resultObject.dataSource.type = dataSourceNode["type"].asString();
		if(!dataSourceNode["parameters"].isNull())
			resultObject.dataSource.parameters = dataSourceNode["parameters"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ValidateDataSourcesResult::ResultItem> ValidateDataSourcesResult::getresult()const
{
	return result_;
}

std::string ValidateDataSourcesResult::getRequestId()const
{
	return requestId_;
}

