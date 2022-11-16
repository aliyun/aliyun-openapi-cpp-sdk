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

#include <alibabacloud/cloudapi/model/DescribePluginSchemasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribePluginSchemasResult::DescribePluginSchemasResult() :
	ServiceResult()
{}

DescribePluginSchemasResult::DescribePluginSchemasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePluginSchemasResult::~DescribePluginSchemasResult()
{}

void DescribePluginSchemasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPluginSchemasNode = value["PluginSchemas"]["PluginSchema"];
	for (auto valuePluginSchemasPluginSchema : allPluginSchemasNode)
	{
		PluginSchema pluginSchemasObject;
		if(!valuePluginSchemasPluginSchema["Title"].isNull())
			pluginSchemasObject.title = valuePluginSchemasPluginSchema["Title"].asString();
		if(!valuePluginSchemasPluginSchema["Description"].isNull())
			pluginSchemasObject.description = valuePluginSchemasPluginSchema["Description"].asString();
		if(!valuePluginSchemasPluginSchema["Name"].isNull())
			pluginSchemasObject.name = valuePluginSchemasPluginSchema["Name"].asString();
		if(!valuePluginSchemasPluginSchema["DocumentId"].isNull())
			pluginSchemasObject.documentId = valuePluginSchemasPluginSchema["DocumentId"].asString();
		if(!valuePluginSchemasPluginSchema["SupportClassic"].isNull())
			pluginSchemasObject.supportClassic = valuePluginSchemasPluginSchema["SupportClassic"].asString() == "true";
		pluginSchemas_.push_back(pluginSchemasObject);
	}

}

std::vector<DescribePluginSchemasResult::PluginSchema> DescribePluginSchemasResult::getPluginSchemas()const
{
	return pluginSchemas_;
}

