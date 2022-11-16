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

#include <alibabacloud/cloudapi/model/DescribePluginTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribePluginTemplatesResult::DescribePluginTemplatesResult() :
	ServiceResult()
{}

DescribePluginTemplatesResult::DescribePluginTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePluginTemplatesResult::~DescribePluginTemplatesResult()
{}

void DescribePluginTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplatesNode = value["Templates"]["Template"];
	for (auto valueTemplatesTemplate : allTemplatesNode)
	{
		_Template templatesObject;
		if(!valueTemplatesTemplate["Title"].isNull())
			templatesObject.title = valueTemplatesTemplate["Title"].asString();
		if(!valueTemplatesTemplate["DocumentAnchor"].isNull())
			templatesObject.documentAnchor = valueTemplatesTemplate["DocumentAnchor"].asString();
		if(!valueTemplatesTemplate["Description"].isNull())
			templatesObject.description = valueTemplatesTemplate["Description"].asString();
		if(!valueTemplatesTemplate["DocumentId"].isNull())
			templatesObject.documentId = valueTemplatesTemplate["DocumentId"].asString();
		if(!valueTemplatesTemplate["Sample"].isNull())
			templatesObject.sample = valueTemplatesTemplate["Sample"].asString();
		templates_.push_back(templatesObject);
	}

}

std::vector<DescribePluginTemplatesResult::_Template> DescribePluginTemplatesResult::getTemplates()const
{
	return templates_;
}

