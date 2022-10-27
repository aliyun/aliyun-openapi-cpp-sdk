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

#include <alibabacloud/elasticsearch/model/DescribeComponentIndexResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

DescribeComponentIndexResult::DescribeComponentIndexResult() :
	ServiceResult()
{}

DescribeComponentIndexResult::DescribeComponentIndexResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeComponentIndexResult::~DescribeComponentIndexResult()
{}

void DescribeComponentIndexResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["_meta"].isNull())
		result_._meta = resultNode["_meta"].asString();
	auto _templateNode = resultNode["template"];
	if(!_templateNode["aliases"].isNull())
		result_._template.aliases = _templateNode["aliases"].asString();
	if(!_templateNode["mappings"].isNull())
		result_._template.mappings = _templateNode["mappings"].asString();
	if(!_templateNode["settings"].isNull())
		result_._template.settings = _templateNode["settings"].asString();

}

DescribeComponentIndexResult::Result DescribeComponentIndexResult::getResult()const
{
	return result_;
}

