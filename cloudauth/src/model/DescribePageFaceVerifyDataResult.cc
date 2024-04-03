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

#include <alibabacloud/cloudauth/model/DescribePageFaceVerifyDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribePageFaceVerifyDataResult::DescribePageFaceVerifyDataResult() :
	ServiceResult()
{}

DescribePageFaceVerifyDataResult::DescribePageFaceVerifyDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePageFaceVerifyDataResult::~DescribePageFaceVerifyDataResult()
{}

void DescribePageFaceVerifyDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["Date"].isNull())
			itemsObject.date = valueItemsItemsItem["Date"].asString();
		if(!valueItemsItemsItem["TotalCount"].isNull())
			itemsObject.totalCount = valueItemsItemsItem["TotalCount"].asString();
		if(!valueItemsItemsItem["SuccessCount"].isNull())
			itemsObject.successCount = valueItemsItemsItem["SuccessCount"].asString();
		if(!valueItemsItemsItem["SceneId"].isNull())
			itemsObject.sceneId = valueItemsItemsItem["SceneId"].asString();
		if(!valueItemsItemsItem["SceneName"].isNull())
			itemsObject.sceneName = valueItemsItemsItem["SceneName"].asString();
		if(!valueItemsItemsItem["ProductCode"].isNull())
			itemsObject.productCode = valueItemsItemsItem["ProductCode"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["TotalPage"].isNull())
		totalPage_ = value["TotalPage"].asString();
	if(!value["CurrentPage"].isNull())
		currentPage_ = value["CurrentPage"].asString();

}

std::string DescribePageFaceVerifyDataResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribePageFaceVerifyDataResult::getMessage()const
{
	return message_;
}

std::string DescribePageFaceVerifyDataResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribePageFaceVerifyDataResult::getTotalPage()const
{
	return totalPage_;
}

std::string DescribePageFaceVerifyDataResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribePageFaceVerifyDataResult::ItemsItem> DescribePageFaceVerifyDataResult::getItems()const
{
	return items_;
}

std::string DescribePageFaceVerifyDataResult::getCode()const
{
	return code_;
}

std::string DescribePageFaceVerifyDataResult::getSuccess()const
{
	return success_;
}

