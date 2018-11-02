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

#include <alibabacloud/lubancloud/model/GetStylesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lubancloud;
using namespace AlibabaCloud::Lubancloud::Model;

GetStylesResult::GetStylesResult() :
	ServiceResult()
{}

GetStylesResult::GetStylesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStylesResult::~GetStylesResult()
{}

void GetStylesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allStyles = value["Styles"]["Style"];
	for (auto value : allStyles)
	{
		Style stylesObject;
		if(!value["Id"].isNull())
			stylesObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			stylesObject.name = value["Name"].asString();
		if(!value["ParentId"].isNull())
			stylesObject.parentId = std::stol(value["ParentId"].asString());
		if(!value["PreviewUrl"].isNull())
			stylesObject.previewUrl = value["PreviewUrl"].asString();
		auto allSubStyles = value["SubStyles"]["SubStyle"];
		for (auto value : allSubStyles)
		{
			Style::SubStyle subStylesObject;
			if(!value["Id"].isNull())
				subStylesObject.id = std::stol(value["Id"].asString());
			if(!value["Name"].isNull())
				subStylesObject.name = value["Name"].asString();
			if(!value["ParentId"].isNull())
				subStylesObject.parentId = std::stol(value["ParentId"].asString());
			if(!value["PreviewUrl"].isNull())
				subStylesObject.previewUrl = value["PreviewUrl"].asString();
			stylesObject.subStyles.push_back(subStylesObject);
		}
		styles_.push_back(stylesObject);
	}

}

std::vector<GetStylesResult::Style> GetStylesResult::getStyles()const
{
	return styles_;
}

