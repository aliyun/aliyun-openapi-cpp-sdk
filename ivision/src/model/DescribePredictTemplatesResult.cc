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

#include <alibabacloud/ivision/model/DescribePredictTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribePredictTemplatesResult::DescribePredictTemplatesResult() :
	ServiceResult()
{}

DescribePredictTemplatesResult::DescribePredictTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePredictTemplatesResult::~DescribePredictTemplatesResult()
{}

void DescribePredictTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplates = value["Templates"]["Template"];
	for (auto value : allTemplates)
	{
		_Template templatesObject;
		if(!value["TemplateId"].isNull())
			templatesObject.templateId = value["TemplateId"].asString();
		if(!value["Name"].isNull())
			templatesObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			templatesObject.description = value["Description"].asString();
		if(!value["Interval"].isNull())
			templatesObject.interval = std::stoi(value["Interval"].asString());
		if(!value["Output"].isNull())
			templatesObject.output = value["Output"].asString();
		if(!value["ModelIds"].isNull())
			templatesObject.modelIds = value["ModelIds"].asString();
		if(!value["CreationTime"].isNull())
			templatesObject.creationTime = value["CreationTime"].asString();
		templates_.push_back(templatesObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());

}

long DescribePredictTemplatesResult::getTotalNum()const
{
	return totalNum_;
}

long DescribePredictTemplatesResult::getPageSize()const
{
	return pageSize_;
}

long DescribePredictTemplatesResult::getCurrentPage()const
{
	return currentPage_;
}

std::string DescribePredictTemplatesResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<DescribePredictTemplatesResult::_Template> DescribePredictTemplatesResult::getTemplates()const
{
	return templates_;
}

