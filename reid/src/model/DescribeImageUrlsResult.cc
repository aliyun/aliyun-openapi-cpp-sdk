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

#include <alibabacloud/reid/model/DescribeImageUrlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

DescribeImageUrlsResult::DescribeImageUrlsResult() :
	ServiceResult()
{}

DescribeImageUrlsResult::DescribeImageUrlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageUrlsResult::~DescribeImageUrlsResult()
{}

void DescribeImageUrlsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUrlsNode = value["Urls"]["ImageUrl"];
	for (auto valueUrlsImageUrl : allUrlsNode)
	{
		ImageUrl urlsObject;
		if(!valueUrlsImageUrl["ObjectKey"].isNull())
			urlsObject.objectKey = valueUrlsImageUrl["ObjectKey"].asString();
		if(!valueUrlsImageUrl["Url"].isNull())
			urlsObject.url = valueUrlsImageUrl["Url"].asString();
		urls_.push_back(urlsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeImageUrlsResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<DescribeImageUrlsResult::ImageUrl> DescribeImageUrlsResult::getUrls()const
{
	return urls_;
}

std::string DescribeImageUrlsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DescribeImageUrlsResult::getSuccess()const
{
	return success_;
}

