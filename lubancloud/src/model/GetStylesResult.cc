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
	auto allStylesNode = value["Styles"]["Style"];
	for (auto valueStylesStyle : allStylesNode)
	{
		Style stylesObject;
		if(!valueStylesStyle["Id"].isNull())
			stylesObject.id = std::stol(valueStylesStyle["Id"].asString());
		if(!valueStylesStyle["Name"].isNull())
			stylesObject.name = valueStylesStyle["Name"].asString();
		if(!valueStylesStyle["ParentId"].isNull())
			stylesObject.parentId = std::stol(valueStylesStyle["ParentId"].asString());
		if(!valueStylesStyle["PreviewUrl"].isNull())
			stylesObject.previewUrl = valueStylesStyle["PreviewUrl"].asString();
		auto allSubStylesNode = allStylesNode["SubStyles"]["SubStyle"];
		for (auto allStylesNodeSubStylesSubStyle : allSubStylesNode)
		{
			Style::SubStyle subStylesObject;
			if(!allStylesNodeSubStylesSubStyle["Id"].isNull())
				subStylesObject.id = std::stol(allStylesNodeSubStylesSubStyle["Id"].asString());
			if(!allStylesNodeSubStylesSubStyle["Name"].isNull())
				subStylesObject.name = allStylesNodeSubStylesSubStyle["Name"].asString();
			if(!allStylesNodeSubStylesSubStyle["ParentId"].isNull())
				subStylesObject.parentId = std::stol(allStylesNodeSubStylesSubStyle["ParentId"].asString());
			if(!allStylesNodeSubStylesSubStyle["PreviewUrl"].isNull())
				subStylesObject.previewUrl = allStylesNodeSubStylesSubStyle["PreviewUrl"].asString();
			stylesObject.subStyles.push_back(subStylesObject);
		}
		styles_.push_back(stylesObject);
	}

}

std::vector<GetStylesResult::Style> GetStylesResult::getStyles()const
{
	return styles_;
}

