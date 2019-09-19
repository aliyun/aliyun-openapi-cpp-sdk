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

#include <alibabacloud/lubancloud/model/BuyOriginPicturesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lubancloud;
using namespace AlibabaCloud::Lubancloud::Model;

BuyOriginPicturesResult::BuyOriginPicturesResult() :
	ServiceResult()
{}

BuyOriginPicturesResult::BuyOriginPicturesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BuyOriginPicturesResult::~BuyOriginPicturesResult()
{}

void BuyOriginPicturesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPicturesNode = value["Pictures"]["Picture"];
	for (auto valuePicturesPicture : allPicturesNode)
	{
		Picture picturesObject;
		if(!valuePicturesPicture["Id"].isNull())
			picturesObject.id = std::stol(valuePicturesPicture["Id"].asString());
		if(!valuePicturesPicture["OriginalPictureUrl"].isNull())
			picturesObject.originalPictureUrl = valuePicturesPicture["OriginalPictureUrl"].asString();
		pictures_.push_back(picturesObject);
	}

}

std::vector<BuyOriginPicturesResult::Picture> BuyOriginPicturesResult::getPictures()const
{
	return pictures_;
}

