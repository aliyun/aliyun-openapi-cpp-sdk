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

#include <alibabacloud/elasticsearch/model/ListIndexTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListIndexTemplatesResult::ListIndexTemplatesResult() :
	ServiceResult()
{}

ListIndexTemplatesResult::ListIndexTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIndexTemplatesResult::~ListIndexTemplatesResult()
{}

void ListIndexTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["dataStream"].isNull())
			resultObject.dataStream = valueResultResultItem["dataStream"].asString() == "true";
		if(!valueResultResultItem["indexTemplate"].isNull())
			resultObject.indexTemplate = valueResultResultItem["indexTemplate"].asString();
		if(!valueResultResultItem["ilmPolicy"].isNull())
			resultObject.ilmPolicy = valueResultResultItem["ilmPolicy"].asString();
		if(!valueResultResultItem["priority"].isNull())
			resultObject.priority = std::stoi(valueResultResultItem["priority"].asString());
		auto _templateNode = value["template"];
		if(!_templateNode["settings"].isNull())
			resultObject._template.settings = _templateNode["settings"].asString();
		if(!_templateNode["mappings"].isNull())
			resultObject._template.mappings = _templateNode["mappings"].asString();
		if(!_templateNode["aliases"].isNull())
			resultObject._template.aliases = _templateNode["aliases"].asString();
		auto allIndexPatterns = value["indexPatterns"]["indexPatterns"];
		for (auto value : allIndexPatterns)
			resultObject.indexPatterns.push_back(value.asString());
		result_.push_back(resultObject);
	}

}

std::vector<ListIndexTemplatesResult::ResultItem> ListIndexTemplatesResult::getResult()const
{
	return result_;
}

