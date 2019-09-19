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

#include <alibabacloud/jarvis/model/DescribeUidWhiteListGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeUidWhiteListGroupResult::DescribeUidWhiteListGroupResult() :
	ServiceResult()
{}

DescribeUidWhiteListGroupResult::DescribeUidWhiteListGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUidWhiteListGroupResult::~DescribeUidWhiteListGroupResult()
{}

void DescribeUidWhiteListGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataListNode = value["DataList"]["Data"];
	for (auto valueDataListData : allDataListNode)
	{
		Data dataListObject;
		if(!valueDataListData["Status"].isNull())
			dataListObject.status = valueDataListData["Status"].asString();
		if(!valueDataListData["GmtCreate"].isNull())
			dataListObject.gmtCreate = valueDataListData["GmtCreate"].asString();
		if(!valueDataListData["GmtRealExpire"].isNull())
			dataListObject.gmtRealExpire = valueDataListData["GmtRealExpire"].asString();
		if(!valueDataListData["SrcUid"].isNull())
			dataListObject.srcUid = valueDataListData["SrcUid"].asString();
		if(!valueDataListData["AutoConfig"].isNull())
			dataListObject.autoConfig = std::stoi(valueDataListData["AutoConfig"].asString());
		if(!valueDataListData["GroupId"].isNull())
			dataListObject.groupId = std::stoi(valueDataListData["GroupId"].asString());
		auto allItemsNode = allDataListNode["Items"]["Item"];
		for (auto allDataListNodeItemsItem : allItemsNode)
		{
			Data::Item itemsObject;
			if(!allDataListNodeItemsItem["IP"].isNull())
				itemsObject.iP = allDataListNodeItemsItem["IP"].asString();
			if(!allDataListNodeItemsItem["RegionId"].isNull())
				itemsObject.regionId = allDataListNodeItemsItem["RegionId"].asString();
			dataListObject.items.push_back(itemsObject);
		}
		dataList_.push_back(dataListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["total"].isNull())
		pageInfo_.total = std::stoi(pageInfoNode["total"].asString());
	if(!pageInfoNode["pageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["pageSize"].asString());
	if(!pageInfoNode["currentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["currentPage"].asString());
	auto allProductList = value["ProductList"]["ProductList"];
	for (const auto &item : allProductList)
		productList_.push_back(item.asString());
	if(!value["module"].isNull())
		module_ = value["module"].asString();

}

std::vector<std::string> DescribeUidWhiteListGroupResult::getProductList()const
{
	return productList_;
}

std::vector<DescribeUidWhiteListGroupResult::Data> DescribeUidWhiteListGroupResult::getDataList()const
{
	return dataList_;
}

DescribeUidWhiteListGroupResult::PageInfo DescribeUidWhiteListGroupResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeUidWhiteListGroupResult::getModule()const
{
	return module_;
}

