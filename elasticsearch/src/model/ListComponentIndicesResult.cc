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

#include <alibabacloud/elasticsearch/model/ListComponentIndicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListComponentIndicesResult::ListComponentIndicesResult() :
	ServiceResult()
{}

ListComponentIndicesResult::ListComponentIndicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListComponentIndicesResult::~ListComponentIndicesResult()
{}

void ListComponentIndicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["name"].isNull())
			resultObject.name = valueResultResultItem["name"].asString();
		auto contentNode = value["content"];
		if(!contentNode["version"].isNull())
			resultObject.content.version = std::stol(contentNode["version"].asString());
		if(!contentNode["_meta"].isNull())
			resultObject.content._meta = contentNode["_meta"].asString();
		auto _templateNode = contentNode["template"];
		auto settingsNode = _templateNode["settings"];
		auto indexNode = settingsNode["index"];
		if(!indexNode["codec"].isNull())
			resultObject.content._template.settings.index.codec = indexNode["codec"].asString();
		auto lifecycleNode = indexNode["lifecycle"];
		if(!lifecycleNode["name"].isNull())
			resultObject.content._template.settings.index.lifecycle.name = lifecycleNode["name"].asString();
		auto allComposed = value["composed"]["composed"];
		for (auto value : allComposed)
			resultObject.composed.push_back(value.asString());
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stol(headersNode["X-Total-Count"].asString());

}

ListComponentIndicesResult::Headers ListComponentIndicesResult::getHeaders()const
{
	return headers_;
}

std::vector<ListComponentIndicesResult::ResultItem> ListComponentIndicesResult::getResult()const
{
	return result_;
}

