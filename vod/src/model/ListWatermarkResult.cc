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

#include <alibabacloud/vod/model/ListWatermarkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListWatermarkResult::ListWatermarkResult() :
	ServiceResult()
{}

ListWatermarkResult::ListWatermarkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWatermarkResult::~ListWatermarkResult()
{}

void ListWatermarkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allWatermarkInfos = value["WatermarkInfos"]["WatermarkInfo"];
	for (auto value : allWatermarkInfos)
	{
		WatermarkInfo watermarkInfosObject;
		if(!value["CreationTime"].isNull())
			watermarkInfosObject.creationTime = value["CreationTime"].asString();
		if(!value["Type"].isNull())
			watermarkInfosObject.type = value["Type"].asString();
		if(!value["IsDefault"].isNull())
			watermarkInfosObject.isDefault = value["IsDefault"].asString();
		if(!value["WatermarkId"].isNull())
			watermarkInfosObject.watermarkId = value["WatermarkId"].asString();
		if(!value["Name"].isNull())
			watermarkInfosObject.name = value["Name"].asString();
		if(!value["FileUrl"].isNull())
			watermarkInfosObject.fileUrl = value["FileUrl"].asString();
		if(!value["WatermarkConfig"].isNull())
			watermarkInfosObject.watermarkConfig = value["WatermarkConfig"].asString();
		watermarkInfos_.push_back(watermarkInfosObject);
	}

}

std::vector<ListWatermarkResult::WatermarkInfo> ListWatermarkResult::getWatermarkInfos()const
{
	return watermarkInfos_;
}

