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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMaterialListNode = value["MaterialList"]["Material"];
	for (auto valueMaterialListMaterial : allMaterialListNode)
	{
		Material materialListObject;
		if(!valueMaterialListMaterial["Status"].isNull())
			materialListObject.status = valueMaterialListMaterial["Status"].asString();
		if(!valueMaterialListMaterial["CreationTime"].isNull())
			materialListObject.creationTime = valueMaterialListMaterial["CreationTime"].asString();
		if(!valueMaterialListMaterial["CateId"].isNull())
			materialListObject.cateId = std::stoi(valueMaterialListMaterial["CateId"].asString());
		if(!valueMaterialListMaterial["MaterialType"].isNull())
			materialListObject.materialType = valueMaterialListMaterial["MaterialType"].asString();
		if(!valueMaterialListMaterial["Tags"].isNull())
			materialListObject.tags = valueMaterialListMaterial["Tags"].asString();
		if(!valueMaterialListMaterial["SpriteConfig"].isNull())
			materialListObject.spriteConfig = valueMaterialListMaterial["SpriteConfig"].asString();
		if(!valueMaterialListMaterial["Source"].isNull())
			materialListObject.source = valueMaterialListMaterial["Source"].asString();
		if(!valueMaterialListMaterial["CateName"].isNull())
			materialListObject.cateName = valueMaterialListMaterial["CateName"].asString();
		if(!valueMaterialListMaterial["ModifiedTime"].isNull())
			materialListObject.modifiedTime = valueMaterialListMaterial["ModifiedTime"].asString();
		if(!valueMaterialListMaterial["Description"].isNull())
			materialListObject.description = valueMaterialListMaterial["Description"].asString();
		if(!valueMaterialListMaterial["MaterialId"].isNull())
			materialListObject.materialId = valueMaterialListMaterial["MaterialId"].asString();
		if(!valueMaterialListMaterial["Size"].isNull())
			materialListObject.size = std::stol(valueMaterialListMaterial["Size"].asString());
		if(!valueMaterialListMaterial["CoverURL"].isNull())
			materialListObject.coverURL = valueMaterialListMaterial["CoverURL"].asString();
		if(!valueMaterialListMaterial["Duration"].isNull())
			materialListObject.duration = std::stof(valueMaterialListMaterial["Duration"].asString());
		if(!valueMaterialListMaterial["Title"].isNull())
			materialListObject.title = valueMaterialListMaterial["Title"].asString();
		auto allSprites = value["Sprites"]["Sprite"];
		for (auto value : allSprites)
			materialListObject.sprites.push_back(value.asString());
		auto allSnapshots = value["Snapshots"]["Snapshot"];
		for (auto value : allSnapshots)
			materialListObject.snapshots.push_back(value.asString());
		materialList_.push_back(materialListObject);
	}

}

std::vector<GetEditingProjectMaterialsResult::Material> GetEditingProjectMaterialsResult::getMaterialList()const
{
	return materialList_;
}

