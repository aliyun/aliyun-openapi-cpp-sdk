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

#include <alibabacloud/vod/model/GetImageInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetImageInfosResult::GetImageInfosResult() :
	ServiceResult()
{}

GetImageInfosResult::GetImageInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetImageInfosResult::~GetImageInfosResult()
{}

void GetImageInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageInfoNode = value["ImageInfo"]["Image"];
	for (auto valueImageInfoImage : allImageInfoNode)
	{
		Image imageInfoObject;
		if(!valueImageInfoImage["CreationTime"].isNull())
			imageInfoObject.creationTime = valueImageInfoImage["CreationTime"].asString();
		if(!valueImageInfoImage["StorageLocation"].isNull())
			imageInfoObject.storageLocation = valueImageInfoImage["StorageLocation"].asString();
		if(!valueImageInfoImage["Status"].isNull())
			imageInfoObject.status = valueImageInfoImage["Status"].asString();
		if(!valueImageInfoImage["CateId"].isNull())
			imageInfoObject.cateId = std::stol(valueImageInfoImage["CateId"].asString());
		if(!valueImageInfoImage["Tags"].isNull())
			imageInfoObject.tags = valueImageInfoImage["Tags"].asString();
		if(!valueImageInfoImage["RegionId"].isNull())
			imageInfoObject.regionId = valueImageInfoImage["RegionId"].asString();
		if(!valueImageInfoImage["ImageType"].isNull())
			imageInfoObject.imageType = valueImageInfoImage["ImageType"].asString();
		if(!valueImageInfoImage["CateName"].isNull())
			imageInfoObject.cateName = valueImageInfoImage["CateName"].asString();
		if(!valueImageInfoImage["Description"].isNull())
			imageInfoObject.description = valueImageInfoImage["Description"].asString();
		if(!valueImageInfoImage["AppId"].isNull())
			imageInfoObject.appId = valueImageInfoImage["AppId"].asString();
		if(!valueImageInfoImage["URL"].isNull())
			imageInfoObject.uRL = valueImageInfoImage["URL"].asString();
		if(!valueImageInfoImage["Title"].isNull())
			imageInfoObject.title = valueImageInfoImage["Title"].asString();
		if(!valueImageInfoImage["ImageId"].isNull())
			imageInfoObject.imageId = valueImageInfoImage["ImageId"].asString();
		if(!valueImageInfoImage["AuditStatus"].isNull())
			imageInfoObject.auditStatus = valueImageInfoImage["AuditStatus"].asString();
		auto mezzanineNode = value["Mezzanine"];
		if(!mezzanineNode["FileURL"].isNull())
			imageInfoObject.mezzanine.fileURL = mezzanineNode["FileURL"].asString();
		if(!mezzanineNode["OriginalFileName"].isNull())
			imageInfoObject.mezzanine.originalFileName = mezzanineNode["OriginalFileName"].asString();
		if(!mezzanineNode["Width"].isNull())
			imageInfoObject.mezzanine.width = std::stoi(mezzanineNode["Width"].asString());
		if(!mezzanineNode["Height"].isNull())
			imageInfoObject.mezzanine.height = std::stoi(mezzanineNode["Height"].asString());
		if(!mezzanineNode["FileSize"].isNull())
			imageInfoObject.mezzanine.fileSize = mezzanineNode["FileSize"].asString();
		imageInfo_.push_back(imageInfoObject);
	}
	auto allNonExistImageIds = value["NonExistImageIds"]["ImageId"];
	for (const auto &item : allNonExistImageIds)
		nonExistImageIds_.push_back(item.asString());

}

std::vector<std::string> GetImageInfosResult::getNonExistImageIds()const
{
	return nonExistImageIds_;
}

std::vector<GetImageInfosResult::Image> GetImageInfosResult::getImageInfo()const
{
	return imageInfo_;
}

