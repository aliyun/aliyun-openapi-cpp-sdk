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

#include <alibabacloud/live/model/ListEdgeTranscodeTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListEdgeTranscodeTemplateResult::ListEdgeTranscodeTemplateResult() :
	ServiceResult()
{}

ListEdgeTranscodeTemplateResult::ListEdgeTranscodeTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEdgeTranscodeTemplateResult::~ListEdgeTranscodeTemplateResult()
{}

void ListEdgeTranscodeTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplateListNode = value["TemplateList"]["Template"];
	for (auto valueTemplateListTemplate : allTemplateListNode)
	{
		_Template templateListObject;
		if(!valueTemplateListTemplate["Bitrate"].isNull())
			templateListObject.bitrate = valueTemplateListTemplate["Bitrate"].asString();
		if(!valueTemplateListTemplate["Codec"].isNull())
			templateListObject.codec = valueTemplateListTemplate["Codec"].asString();
		if(!valueTemplateListTemplate["CreateTime"].isNull())
			templateListObject.createTime = valueTemplateListTemplate["CreateTime"].asString();
		if(!valueTemplateListTemplate["Fps"].isNull())
			templateListObject.fps = valueTemplateListTemplate["Fps"].asString();
		if(!valueTemplateListTemplate["Gop"].isNull())
			templateListObject.gop = valueTemplateListTemplate["Gop"].asString();
		if(!valueTemplateListTemplate["Name"].isNull())
			templateListObject.name = valueTemplateListTemplate["Name"].asString();
		if(!valueTemplateListTemplate["Resolution"].isNull())
			templateListObject.resolution = valueTemplateListTemplate["Resolution"].asString();
		if(!valueTemplateListTemplate["TemplateId"].isNull())
			templateListObject.templateId = valueTemplateListTemplate["TemplateId"].asString();
		if(!valueTemplateListTemplate["Type"].isNull())
			templateListObject.type = valueTemplateListTemplate["Type"].asString();
		templateList_.push_back(templateListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListEdgeTranscodeTemplateResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListEdgeTranscodeTemplateResult::_Template> ListEdgeTranscodeTemplateResult::getTemplateList()const
{
	return templateList_;
}

