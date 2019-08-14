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

#include <alibabacloud/vod/model/GetEditingProjectMaterialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetEditingProjectMaterialsResult::GetEditingProjectMaterialsResult() :
	ServiceResult()
{}

GetEditingProjectMaterialsResult::GetEditingProjectMaterialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEditingProjectMaterialsResult::~GetEditingProjectMaterialsResult()
{}

void GetEditingProjectMaterialsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allMaterialList = value["MaterialList"]["Material"];
	for (auto value : allMaterialList)
	{
		Material materialListObject;
		if(!value["MaterialId"].isNull())
			materialListObject.materialId = value["MaterialId"].asString();
		if(!value["Title"].isNull())
			materialListObject.title = value["Title"].asString();
		if(!value["Tags"].isNull())
			materialListObject.tags = value["Tags"].asString();
		if(!value["Status"].isNull())
			materialListObject.status = value["Status"].asString();
		if(!value["Size"].isNull())
			materialListObject.size = std::stol(value["Size"].asString());
		if(!value["Duration"].isNull())
			materialListObject.duration = std::stof(value["Duration"].asString());
		if(!value["Description"].isNull())
			materialListObject.description = value["Description"].asString();
		if(!value["CreationTime"].isNull())
			materialListObject.creationTime = value["CreationTime"].asString();
		if(!value["ModifiedTime"].isNull())
			materialListObject.modifiedTime = value["ModifiedTime"].asString();
		if(!value["CoverURL"].isNull())
			materialListObject.coverURL = value["CoverURL"].asString();
		if(!value["CateId"].isNull())
			materialListObject.cateId = std::stoi(value["CateId"].asString());
		if(!value["CateName"].isNull())
			materialListObject.cateName = value["CateName"].asString();
		if(!value["Source"].isNull())
			materialListObject.source = value["Source"].asString();
		if(!value["SpriteConfig"].isNull())
			materialListObject.spriteConfig = value["SpriteConfig"].asString();
		auto allSnapshots = value["Snapshots"]["Snapshot"];
		for (auto value : allSnapshots)
			materialListObject.snapshots.push_back(value.asString());
		auto allSprites = value["Sprites"]["Sprite"];
		for (auto value : allSprites)
			materialListObject.sprites.push_back(value.asString());
		materialList_.push_back(materialListObject);
	}

}

std::vector<GetEditingProjectMaterialsResult::Material> GetEditingProjectMaterialsResult::getMaterialList()const
{
	return materialList_;
}

