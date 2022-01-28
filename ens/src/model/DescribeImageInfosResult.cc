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

#include <alibabacloud/ens/model/DescribeImageInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeImageInfosResult::DescribeImageInfosResult() :
	ServiceResult()
{}

DescribeImageInfosResult::DescribeImageInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageInfosResult::~DescribeImageInfosResult()
{}

void DescribeImageInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["Description"].isNull())
			imagesObject.description = valueImagesImage["Description"].asString();
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["ImageSize"].isNull())
			imagesObject.imageSize = valueImagesImage["ImageSize"].asString();
		if(!valueImagesImage["ImageVersion"].isNull())
			imagesObject.imageVersion = valueImagesImage["ImageVersion"].asString();
		if(!valueImagesImage["OSName"].isNull())
			imagesObject.oSName = valueImagesImage["OSName"].asString();
		if(!valueImagesImage["OSType"].isNull())
			imagesObject.oSType = valueImagesImage["OSType"].asString();
		images_.push_back(imagesObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::vector<DescribeImageInfosResult::Image> DescribeImageInfosResult::getImages()const
{
	return images_;
}

int DescribeImageInfosResult::getCode()const
{
	return code_;
}

