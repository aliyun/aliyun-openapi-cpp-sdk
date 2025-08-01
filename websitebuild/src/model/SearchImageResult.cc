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

#include <alibabacloud/websitebuild/model/SearchImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

SearchImageResult::SearchImageResult() :
	ServiceResult()
{}

SearchImageResult::SearchImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchImageResult::~SearchImageResult()
{}

void SearchImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto imageResponseNode = value["ImageResponse"];
	if(!imageResponseNode["MaxResults"].isNull())
		imageResponse_.maxResults = std::stoi(imageResponseNode["MaxResults"].asString());
	if(!imageResponseNode["NextToken"].isNull())
		imageResponse_.nextToken = imageResponseNode["NextToken"].asString();
	auto allImageListNode = imageResponseNode["ImageList"]["image"];
	for (auto imageResponseNodeImageListimage : allImageListNode)
	{
		ImageResponse::Image imageObject;
		if(!imageResponseNodeImageListimage["ImageRatio"].isNull())
			imageObject.imageRatio = imageResponseNodeImageListimage["ImageRatio"].asString();
		if(!imageResponseNodeImageListimage["DescriptiveTones"].isNull())
			imageObject.descriptiveTones = imageResponseNodeImageListimage["DescriptiveTones"].asString();
		if(!imageResponseNodeImageListimage["OssKey"].isNull())
			imageObject.ossKey = imageResponseNodeImageListimage["OssKey"].asString();
		if(!imageResponseNodeImageListimage["ImageCategory"].isNull())
			imageObject.imageCategory = imageResponseNodeImageListimage["ImageCategory"].asString();
		if(!imageResponseNodeImageListimage["Height"].isNull())
			imageObject.height = std::stoi(imageResponseNodeImageListimage["Height"].asString());
		if(!imageResponseNodeImageListimage["QuantitativePalette"].isNull())
			imageObject.quantitativePalette = imageResponseNodeImageListimage["QuantitativePalette"].asString();
		if(!imageResponseNodeImageListimage["ImageUuid"].isNull())
			imageObject.imageUuid = imageResponseNodeImageListimage["ImageUuid"].asString();
		if(!imageResponseNodeImageListimage["Width"].isNull())
			imageObject.width = std::stoi(imageResponseNodeImageListimage["Width"].asString());
		if(!imageResponseNodeImageListimage["Url"].isNull())
			imageObject.url = imageResponseNodeImageListimage["Url"].asString();
		if(!imageResponseNodeImageListimage["TagsFromImage"].isNull())
			imageObject.tagsFromImage = imageResponseNodeImageListimage["TagsFromImage"].asString();
		imageResponse_.imageList.push_back(imageObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string SearchImageResult::getErrorMsg()const
{
	return errorMsg_;
}

SearchImageResult::ImageResponse SearchImageResult::getImageResponse()const
{
	return imageResponse_;
}

std::string SearchImageResult::getErrorCode()const
{
	return errorCode_;
}

std::string SearchImageResult::getSuccess()const
{
	return success_;
}

