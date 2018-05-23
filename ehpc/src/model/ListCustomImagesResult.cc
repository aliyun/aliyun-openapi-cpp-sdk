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

#include <alibabacloud/ehpc/model/ListCustomImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListCustomImagesResult::ListCustomImagesResult() :
	ServiceResult()
{}

ListCustomImagesResult::ListCustomImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomImagesResult::~ListCustomImagesResult()
{}

void ListCustomImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allImages = value["Images"]["ImageInfo"];
	for (auto value : allImages)
	{
		ImageInfo imagesObject;
		if(!value["Uid"].isNull())
			imagesObject.uid = value["Uid"].asString();
		if(!value["ImageId"].isNull())
			imagesObject.imageId = value["ImageId"].asString();
		if(!value["ImageName"].isNull())
			imagesObject.imageName = value["ImageName"].asString();
		if(!value["ImageOwnerAlias"].isNull())
			imagesObject.imageOwnerAlias = value["ImageOwnerAlias"].asString();
		if(!value["Description"].isNull())
			imagesObject.description = value["Description"].asString();
		if(!value["Status"].isNull())
			imagesObject.status = value["Status"].asString();
		if(!value["ProductCode"].isNull())
			imagesObject.productCode = value["ProductCode"].asString();
		if(!value["SkuCode"].isNull())
			imagesObject.skuCode = value["SkuCode"].asString();
		if(!value["PricingCycle"].isNull())
			imagesObject.pricingCycle = value["PricingCycle"].asString();
		if(!value["PostInstallScript"].isNull())
			imagesObject.postInstallScript = value["PostInstallScript"].asString();
		auto baseOsTagNode = value["BaseOsTag"];
		if(!baseOsTagNode["OsTag"].isNull())
			imagesObject.baseOsTag.osTag = baseOsTagNode["OsTag"].asString();
		if(!baseOsTagNode["Platform"].isNull())
			imagesObject.baseOsTag.platform = baseOsTagNode["Platform"].asString();
		if(!baseOsTagNode["Version"].isNull())
			imagesObject.baseOsTag.version = baseOsTagNode["Version"].asString();
		if(!baseOsTagNode["Architecture"].isNull())
			imagesObject.baseOsTag.architecture = baseOsTagNode["Architecture"].asString();
		images_.push_back(imagesObject);
	}

}

std::vector<ListCustomImagesResult::ImageInfo> ListCustomImagesResult::getImages()const
{
	return images_;
}

