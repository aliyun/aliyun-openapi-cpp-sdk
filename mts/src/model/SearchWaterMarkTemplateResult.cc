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

#include <alibabacloud/mts/model/SearchWaterMarkTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SearchWaterMarkTemplateResult::SearchWaterMarkTemplateResult() :
	ServiceResult()
{}

SearchWaterMarkTemplateResult::SearchWaterMarkTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchWaterMarkTemplateResult::~SearchWaterMarkTemplateResult()
{}

void SearchWaterMarkTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWaterMarkTemplateList = value["WaterMarkTemplateList"]["WaterMarkTemplate"];
	for (auto value : allWaterMarkTemplateList)
	{
		WaterMarkTemplate waterMarkTemplateListObject;
		if(!value["Id"].isNull())
			waterMarkTemplateListObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			waterMarkTemplateListObject.name = value["Name"].asString();
		if(!value["Width"].isNull())
			waterMarkTemplateListObject.width = value["Width"].asString();
		if(!value["Height"].isNull())
			waterMarkTemplateListObject.height = value["Height"].asString();
		if(!value["Dx"].isNull())
			waterMarkTemplateListObject.dx = value["Dx"].asString();
		if(!value["Dy"].isNull())
			waterMarkTemplateListObject.dy = value["Dy"].asString();
		if(!value["ReferPos"].isNull())
			waterMarkTemplateListObject.referPos = value["ReferPos"].asString();
		if(!value["Type"].isNull())
			waterMarkTemplateListObject.type = value["Type"].asString();
		if(!value["State"].isNull())
			waterMarkTemplateListObject.state = value["State"].asString();
		auto timelineNode = value["Timeline"];
		if(!timelineNode["Start"].isNull())
			waterMarkTemplateListObject.timeline.start = timelineNode["Start"].asString();
		if(!timelineNode["Duration"].isNull())
			waterMarkTemplateListObject.timeline.duration = timelineNode["Duration"].asString();
		auto ratioReferNode = value["RatioRefer"];
		if(!ratioReferNode["Dx"].isNull())
			waterMarkTemplateListObject.ratioRefer.dx = ratioReferNode["Dx"].asString();
		if(!ratioReferNode["Dy"].isNull())
			waterMarkTemplateListObject.ratioRefer.dy = ratioReferNode["Dy"].asString();
		if(!ratioReferNode["Width"].isNull())
			waterMarkTemplateListObject.ratioRefer.width = ratioReferNode["Width"].asString();
		if(!ratioReferNode["Height"].isNull())
			waterMarkTemplateListObject.ratioRefer.height = ratioReferNode["Height"].asString();
		waterMarkTemplateList_.push_back(waterMarkTemplateListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long SearchWaterMarkTemplateResult::getTotalCount()const
{
	return totalCount_;
}

long SearchWaterMarkTemplateResult::getPageSize()const
{
	return pageSize_;
}

long SearchWaterMarkTemplateResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<SearchWaterMarkTemplateResult::WaterMarkTemplate> SearchWaterMarkTemplateResult::getWaterMarkTemplateList()const
{
	return waterMarkTemplateList_;
}

