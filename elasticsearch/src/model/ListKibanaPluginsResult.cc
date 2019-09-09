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

#include <alibabacloud/elasticsearch/model/ListKibanaPluginsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListKibanaPluginsResult::ListKibanaPluginsResult() :
	ServiceResult()
{}

ListKibanaPluginsResult::ListKibanaPluginsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListKibanaPluginsResult::~ListKibanaPluginsResult()
{}

void ListKibanaPluginsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResult = value["Result"]["PluginItem"];
	for (auto value : allResult)
	{
		PluginItem resultObject;
		if(!value["name"].isNull())
			resultObject.name = value["name"].asString();
		if(!value["state"].isNull())
			resultObject.state = value["state"].asString();
		if(!value["source"].isNull())
			resultObject.source = value["source"].asString();
		if(!value["description"].isNull())
			resultObject.description = value["description"].asString();
		if(!value["specificationUrl"].isNull())
			resultObject.specificationUrl = value["specificationUrl"].asString();
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());

}

ListKibanaPluginsResult::Headers ListKibanaPluginsResult::getHeaders()const
{
	return headers_;
}

std::vector<ListKibanaPluginsResult::PluginItem> ListKibanaPluginsResult::getResult()const
{
	return result_;
}

