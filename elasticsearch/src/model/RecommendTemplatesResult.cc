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

#include <alibabacloud/elasticsearch/model/RecommendTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

RecommendTemplatesResult::RecommendTemplatesResult() :
	ServiceResult()
{}

RecommendTemplatesResult::RecommendTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecommendTemplatesResult::~RecommendTemplatesResult()
{}

void RecommendTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["TemplateConfig"];
	for (auto valueResultTemplateConfig : allResultNode)
	{
		TemplateConfig resultObject;
		if(!valueResultTemplateConfig["content"].isNull())
			resultObject.content = valueResultTemplateConfig["content"].asString();
		if(!valueResultTemplateConfig["templateName"].isNull())
			resultObject.templateName = valueResultTemplateConfig["templateName"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<RecommendTemplatesResult::TemplateConfig> RecommendTemplatesResult::getResult()const
{
	return result_;
}

