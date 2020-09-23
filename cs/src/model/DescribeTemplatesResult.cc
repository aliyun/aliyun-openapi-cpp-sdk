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

#include <alibabacloud/cs/model/DescribeTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeTemplatesResult::DescribeTemplatesResult() :
	ServiceResult()
{}

DescribeTemplatesResult::DescribeTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTemplatesResult::~DescribeTemplatesResult()
{}

void DescribeTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alltemplatesNode = value["templates"]["templatesItem"];
	for (auto valuetemplatestemplatesItem : alltemplatesNode)
	{
		TemplatesItem templatesObject;
		if(!valuetemplatestemplatesItem["template"].isNull())
			templatesObject._template = valuetemplatestemplatesItem["template"].asString();
		if(!valuetemplatestemplatesItem["created"].isNull())
			templatesObject.created = valuetemplatestemplatesItem["created"].asString();
		if(!valuetemplatestemplatesItem["name"].isNull())
			templatesObject.name = valuetemplatestemplatesItem["name"].asString();
		if(!valuetemplatestemplatesItem["description"].isNull())
			templatesObject.description = valuetemplatestemplatesItem["description"].asString();
		if(!valuetemplatestemplatesItem["template_type"].isNull())
			templatesObject.template_type = valuetemplatestemplatesItem["template_type"].asString();
		if(!valuetemplatestemplatesItem["id"].isNull())
			templatesObject.id = valuetemplatestemplatesItem["id"].asString();
		if(!valuetemplatestemplatesItem["acl"].isNull())
			templatesObject.acl = valuetemplatestemplatesItem["acl"].asString();
		if(!valuetemplatestemplatesItem["updated"].isNull())
			templatesObject.updated = valuetemplatestemplatesItem["updated"].asString();
		if(!valuetemplatestemplatesItem["tags"].isNull())
			templatesObject.tags = valuetemplatestemplatesItem["tags"].asString();
		templates_.push_back(templatesObject);
	}
	auto page_infoNode = value["page_info"];
	if(!page_infoNode["page_number"].isNull())
		page_info_.page_number = std::stol(page_infoNode["page_number"].asString());
	if(!page_infoNode["total_count"].isNull())
		page_info_.total_count = std::stol(page_infoNode["total_count"].asString());
	if(!page_infoNode["page_size"].isNull())
		page_info_.page_size = std::stol(page_infoNode["page_size"].asString());

}

DescribeTemplatesResult::Page_info DescribeTemplatesResult::getPage_info()const
{
	return page_info_;
}

std::vector<DescribeTemplatesResult::TemplatesItem> DescribeTemplatesResult::gettemplates()const
{
	return templates_;
}

