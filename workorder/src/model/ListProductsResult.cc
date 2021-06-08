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

#include <alibabacloud/workorder/model/ListProductsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Workorder;
using namespace AlibabaCloud::Workorder::Model;

ListProductsResult::ListProductsResult() :
	ServiceResult()
{}

ListProductsResult::ListProductsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProductsResult::~ListProductsResult()
{}

void ListProductsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["DirectoryName"].isNull())
			dataObject.directoryName = valueDataDataItem["DirectoryName"].asString();
		if(!valueDataDataItem["DirectoryId"].isNull())
			dataObject.directoryId = std::stol(valueDataDataItem["DirectoryId"].asString());
		auto allProductListNode = valueDataDataItem["ProductList"]["ProductListItem"];
		for (auto valueDataDataItemProductListProductListItem : allProductListNode)
		{
			DataItem::ProductListItem productListObject;
			if(!valueDataDataItemProductListProductListItem["ProductId"].isNull())
				productListObject.productId = std::stol(valueDataDataItemProductListProductListItem["ProductId"].asString());
			if(!valueDataDataItemProductListProductListItem["ProductName"].isNull())
				productListObject.productName = valueDataDataItemProductListProductListItem["ProductName"].asString();
			dataObject.productList.push_back(productListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListProductsResult::getMessage()const
{
	return message_;
}

std::vector<ListProductsResult::DataItem> ListProductsResult::getData()const
{
	return data_;
}

int ListProductsResult::getCode()const
{
	return code_;
}

bool ListProductsResult::getSuccess()const
{
	return success_;
}

