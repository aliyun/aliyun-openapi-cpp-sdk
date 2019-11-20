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

#include <alibabacloud/jarvis/model/DescribeCpmcPunishListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeCpmcPunishListResult::DescribeCpmcPunishListResult() :
	ServiceResult()
{}

DescribeCpmcPunishListResult::DescribeCpmcPunishListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCpmcPunishListResult::~DescribeCpmcPunishListResult()
{}

void DescribeCpmcPunishListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataListNode = value["DataList"]["Data"];
	for (auto valueDataListData : allDataListNode)
	{
		Data dataListObject;
		if(!valueDataListData["GmtCreate"].isNull())
			dataListObject.gmtCreate = valueDataListData["GmtCreate"].asString();
		if(!valueDataListData["SrcPort"].isNull())
			dataListObject.srcPort = std::stoi(valueDataListData["SrcPort"].asString());
		if(!valueDataListData["FeedBack"].isNull())
			dataListObject.feedBack = std::stoi(valueDataListData["FeedBack"].asString());
		if(!valueDataListData["GmtExpire"].isNull())
			dataListObject.gmtExpire = valueDataListData["GmtExpire"].asString();
		if(!valueDataListData["PunishType"].isNull())
			dataListObject.punishType = valueDataListData["PunishType"].asString();
		if(!valueDataListData["DstIP"].isNull())
			dataListObject.dstIP = valueDataListData["DstIP"].asString();
		if(!valueDataListData["PunishResult"].isNull())
			dataListObject.punishResult = valueDataListData["PunishResult"].asString();
		if(!valueDataListData["RegionId"].isNull())
			dataListObject.regionId = valueDataListData["RegionId"].asString();
		if(!valueDataListData["Direction"].isNull())
			dataListObject.direction = valueDataListData["Direction"].asString();
		if(!valueDataListData["DstPort"].isNull())
			dataListObject.dstPort = std::stoi(valueDataListData["DstPort"].asString());
		if(!valueDataListData["Protocol"].isNull())
			dataListObject.protocol = valueDataListData["Protocol"].asString();
		if(!valueDataListData["SrcIP"].isNull())
			dataListObject.srcIP = valueDataListData["SrcIP"].asString();
		if(!valueDataListData["Reason"].isNull())
			dataListObject.reason = valueDataListData["Reason"].asString();
		if(!valueDataListData["Description"].isNull())
			dataListObject.description = valueDataListData["Description"].asString();
		dataList_.push_back(dataListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["total"].isNull())
		pageInfo_.total = std::stoi(pageInfoNode["total"].asString());
	if(!pageInfoNode["pageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["pageSize"].asString());
	if(!pageInfoNode["currentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["currentPage"].asString());
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();

}

std::vector<DescribeCpmcPunishListResult::Data> DescribeCpmcPunishListResult::getDataList()const
{
	return dataList_;
}

DescribeCpmcPunishListResult::PageInfo DescribeCpmcPunishListResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeCpmcPunishListResult::getModule()const
{
	return module_;
}

