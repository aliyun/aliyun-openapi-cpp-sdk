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

#include <alibabacloud/opensearch/model/DescribeDataCollctionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

DescribeDataCollctionResult::DescribeDataCollctionResult() :
	ServiceResult()
{}

DescribeDataCollctionResult::DescribeDataCollctionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataCollctionResult::~DescribeDataCollctionResult()
{}

void DescribeDataCollctionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["created"].isNull())
		result_.created = std::stoi(resultNode["created"].asString());
	if(!resultNode["dataCollectionType"].isNull())
		result_.dataCollectionType = resultNode["dataCollectionType"].asString();
	if(!resultNode["type"].isNull())
		result_.type = resultNode["type"].asString();
	if(!resultNode["industryName"].isNull())
		result_.industryName = resultNode["industryName"].asString();
	if(!resultNode["status"].isNull())
		result_.status = std::stoi(resultNode["status"].asString());
	if(!resultNode["updated"].isNull())
		result_.updated = std::stoi(resultNode["updated"].asString());
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["sundialId"].isNull())
		result_.sundialId = resultNode["sundialId"].asString();
	if(!resultNode["id"].isNull())
		result_.id = resultNode["id"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string DescribeDataCollctionResult::getRequestId()const
{
	return requestId_;
}

DescribeDataCollctionResult::Result DescribeDataCollctionResult::getResult()const
{
	return result_;
}

