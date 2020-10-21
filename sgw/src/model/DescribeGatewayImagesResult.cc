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

#include <alibabacloud/sgw/model/DescribeGatewayImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayImagesResult::DescribeGatewayImagesResult() :
	ServiceResult()
{}

DescribeGatewayImagesResult::DescribeGatewayImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayImagesResult::~DescribeGatewayImagesResult()
{}

void DescribeGatewayImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["Name"].isNull())
			imagesObject.name = valueImagesImage["Name"].asString();
		if(!valueImagesImage["Description"].isNull())
			imagesObject.description = valueImagesImage["Description"].asString();
		if(!valueImagesImage["Size"].isNull())
			imagesObject.size = std::stol(valueImagesImage["Size"].asString());
		if(!valueImagesImage["ModifiedDate"].isNull())
			imagesObject.modifiedDate = valueImagesImage["ModifiedDate"].asString();
		if(!valueImagesImage["Version"].isNull())
			imagesObject.version = valueImagesImage["Version"].asString();
		if(!valueImagesImage["Title"].isNull())
			imagesObject.title = valueImagesImage["Title"].asString();
		if(!valueImagesImage["Type"].isNull())
			imagesObject.type = valueImagesImage["Type"].asString();
		if(!valueImagesImage["MD5"].isNull())
			imagesObject.mD5 = valueImagesImage["MD5"].asString();
		if(!valueImagesImage["Url"].isNull())
			imagesObject.url = valueImagesImage["Url"].asString();
		images_.push_back(imagesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeGatewayImagesResult::getMessage()const
{
	return message_;
}

std::vector<DescribeGatewayImagesResult::Image> DescribeGatewayImagesResult::getImages()const
{
	return images_;
}

std::string DescribeGatewayImagesResult::getCode()const
{
	return code_;
}

bool DescribeGatewayImagesResult::getSuccess()const
{
	return success_;
}

