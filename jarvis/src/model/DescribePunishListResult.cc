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

#include <alibabacloud/jarvis/model/DescribePunishListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribePunishListResult::DescribePunishListResult() :
	ServiceResult()
{}

DescribePunishListResult::DescribePunishListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePunishListResult::~DescribePunishListResult()
{}

void DescribePunishListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDataList = value["DataList"]["Data"];
	for (auto value : allDataList)
	{
		Data dataListObject;
		if(!value["GmtCreate"].isNull())
			dataListObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["SrcPort"].isNull())
			dataListObject.srcPort = std::stoi(value["SrcPort"].asString());
		if(!value["FeedBack"].isNull())
			dataListObject.feedBack = std::stoi(value["FeedBack"].asString());
		if(!value["GmtExpire"].isNull())
			dataListObject.gmtExpire = value["GmtExpire"].asString();
		if(!value["PunishType"].isNull())
			dataListObject.punishType = value["PunishType"].asString();
		if(!value["DstIP"].isNull())
			dataListObject.dstIP = value["DstIP"].asString();
		if(!value["PunishResult"].isNull())
			dataListObject.punishResult = value["PunishResult"].asString();
		if(!value["RegionId"].isNull())
			dataListObject.regionId = value["RegionId"].asString();
		if(!value["DstPort"].isNull())
			dataListObject.dstPort = std::stoi(value["DstPort"].asString());
		if(!value["Protocol"].isNull())
			dataListObject.protocol = value["Protocol"].asString();
		if(!value["SrcIP"].isNull())
			dataListObject.srcIP = value["SrcIP"].asString();
		if(!value["Reason"].isNull())
			dataListObject.reason = value["Reason"].asString();
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

std::vector<DescribePunishListResult::Data> DescribePunishListResult::getDataList()const
{
	return dataList_;
}

DescribePunishListResult::PageInfo DescribePunishListResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribePunishListResult::getModule()const
{
	return module_;
}

