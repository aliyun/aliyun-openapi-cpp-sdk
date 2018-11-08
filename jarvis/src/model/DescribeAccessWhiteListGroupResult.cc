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

#include <alibabacloud/jarvis/model/DescribeAccessWhiteListGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeAccessWhiteListGroupResult::DescribeAccessWhiteListGroupResult() :
	ServiceResult()
{}

DescribeAccessWhiteListGroupResult::DescribeAccessWhiteListGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessWhiteListGroupResult::~DescribeAccessWhiteListGroupResult()
{}

void DescribeAccessWhiteListGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDataList = value["DataList"]["Data"];
	for (auto value : allDataList)
	{
		Data dataListObject;
		if(!value["Status"].isNull())
			dataListObject.status = value["Status"].asString();
		if(!value["GmtCreate"].isNull())
			dataListObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtRealExpire"].isNull())
			dataListObject.gmtRealExpire = value["GmtRealExpire"].asString();
		if(!value["SrcIP"].isNull())
			dataListObject.srcIP = value["SrcIP"].asString();
		if(!value["AutoConfig"].isNull())
			dataListObject.autoConfig = std::stoi(value["AutoConfig"].asString());
		if(!value["GroupId"].isNull())
			dataListObject.groupId = std::stoi(value["GroupId"].asString());
		auto allItems = value["Items"]["Item"];
		for (auto value : allItems)
		{
			Data::Item itemsObject;
			if(!value["IP"].isNull())
				itemsObject.iP = value["IP"].asString();
			if(!value["RegionId"].isNull())
				itemsObject.regionId = value["RegionId"].asString();
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
	if(!value["module"].isNull())
		module_ = value["module"].asString();

}

std::vector<DescribeAccessWhiteListGroupResult::Data> DescribeAccessWhiteListGroupResult::getDataList()const
{
	return dataList_;
}

DescribeAccessWhiteListGroupResult::PageInfo DescribeAccessWhiteListGroupResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeAccessWhiteListGroupResult::getModule()const
{
	return module_;
}

