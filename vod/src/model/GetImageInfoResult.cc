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

#include <alibabacloud/vod/model/GetImageInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetImageInfoResult::GetImageInfoResult() :
	ServiceResult()
{}

GetImageInfoResult::GetImageInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetImageInfoResult::~GetImageInfoResult()
{}

void GetImageInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto imageInfoNode = value["ImageInfo"];
	if(!imageInfoNode["CreationTime"].isNull())
		imageInfo_.creationTime = imageInfoNode["CreationTime"].asString();
	if(!imageInfoNode["StorageLocation"].isNull())
		imageInfo_.storageLocation = imageInfoNode["StorageLocation"].asString();
	if(!imageInfoNode["Status"].isNull())
		imageInfo_.status = imageInfoNode["Status"].asString();
	if(!imageInfoNode["CateId"].isNull())
		imageInfo_.cateId = std::stol(imageInfoNode["CateId"].asString());
	if(!imageInfoNode["Tags"].isNull())
		imageInfo_.tags = imageInfoNode["Tags"].asString();
	if(!imageInfoNode["RegionId"].isNull())
		imageInfo_.regionId = imageInfoNode["RegionId"].asString();
	if(!imageInfoNode["ImageType"].isNull())
		imageInfo_.imageType = imageInfoNode["ImageType"].asString();
	if(!imageInfoNode["CateName"].isNull())
		imageInfo_.cateName = imageInfoNode["CateName"].asString();
	if(!imageInfoNode["Description"].isNull())
		imageInfo_.description = imageInfoNode["Description"].asString();
	if(!imageInfoNode["AppId"].isNull())
		imageInfo_.appId = imageInfoNode["AppId"].asString();
	if(!imageInfoNode["URL"].isNull())
		imageInfo_.uRL = imageInfoNode["URL"].asString();
	if(!imageInfoNode["Title"].isNull())
		imageInfo_.title = imageInfoNode["Title"].asString();
	if(!imageInfoNode["ImageId"].isNull())
		imageInfo_.imageId = imageInfoNode["ImageId"].asString();
	if(!imageInfoNode["AuditStatus"].isNull())
		imageInfo_.auditStatus = imageInfoNode["AuditStatus"].asString();
	auto mezzanineNode = imageInfoNode["Mezzanine"];
	if(!mezzanineNode["FileURL"].isNull())
		imageInfo_.mezzanine.fileURL = mezzanineNode["FileURL"].asString();
	if(!mezzanineNode["OriginalFileName"].isNull())
		imageInfo_.mezzanine.originalFileName = mezzanineNode["OriginalFileName"].asString();
	if(!mezzanineNode["Width"].isNull())
		imageInfo_.mezzanine.width = std::stoi(mezzanineNode["Width"].asString());
	if(!mezzanineNode["Height"].isNull())
		imageInfo_.mezzanine.height = std::stoi(mezzanineNode["Height"].asString());
	if(!mezzanineNode["FileSize"].isNull())
		imageInfo_.mezzanine.fileSize = mezzanineNode["FileSize"].asString();

}

GetImageInfoResult::ImageInfo GetImageInfoResult::getImageInfo()const
{
	return imageInfo_;
}

