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

#include <alibabacloud/elasticsearch/model/DescribeIndexTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

DescribeIndexTemplateResult::DescribeIndexTemplateResult() :
	ServiceResult()
{}

DescribeIndexTemplateResult::DescribeIndexTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIndexTemplateResult::~DescribeIndexTemplateResult()
{}

void DescribeIndexTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["dataStream"].isNull())
		result_.dataStream = resultNode["dataStream"].asString() == "true";
	if(!resultNode["indexTemplate"].isNull())
		result_.indexTemplate = resultNode["indexTemplate"].asString();
	if(!resultNode["ilmPolicy"].isNull())
		result_.ilmPolicy = resultNode["ilmPolicy"].asString();
	if(!resultNode["priority"].isNull())
		result_.priority = std::stoi(resultNode["priority"].asString());
	auto _templateNode = resultNode["template"];
	if(!_templateNode["settings"].isNull())
		result_._template.settings = _templateNode["settings"].asString();
	if(!_templateNode["mappings"].isNull())
		result_._template.mappings = _templateNode["mappings"].asString();
	if(!_templateNode["aliases"].isNull())
		result_._template.aliases = _templateNode["aliases"].asString();
		auto allIndexPatterns = resultNode["indexPatterns"]["IndexPatterns"];
		for (auto value : allIndexPatterns)
			result_.indexPatterns.push_back(value.asString());

}

DescribeIndexTemplateResult::Result DescribeIndexTemplateResult::getResult()const
{
	return result_;
}

