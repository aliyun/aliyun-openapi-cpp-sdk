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

#include <alibabacloud/jarvis/model/DescribeCdnIpListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeCdnIpListResult::DescribeCdnIpListResult() :
	ServiceResult()
{}

DescribeCdnIpListResult::DescribeCdnIpListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnIpListResult::~DescribeCdnIpListResult()
{}

void DescribeCdnIpListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataListNode = value["DataList"]["Data"];
	for (auto valueDataListData : allDataListNode)
	{
		Data dataListObject;
		if(!valueDataListData["Id"].isNull())
			dataListObject.id = std::stoi(valueDataListData["Id"].asString());
		if(!valueDataListData["VendorAliuid"].isNull())
			dataListObject.vendorAliuid = std::stoi(valueDataListData["VendorAliuid"].asString());
		if(!valueDataListData["IpSeg"].isNull())
			dataListObject.ipSeg = valueDataListData["IpSeg"].asString();
		if(!valueDataListData["State"].isNull())
			dataListObject.state = std::stoi(valueDataListData["State"].asString());
		if(!valueDataListData["CreateTime"].isNull())
			dataListObject.createTime = valueDataListData["CreateTime"].asString();
		if(!valueDataListData["UpdateTime"].isNull())
			dataListObject.updateTime = valueDataListData["UpdateTime"].asString();
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

std::vector<DescribeCdnIpListResult::Data> DescribeCdnIpListResult::getDataList()const
{
	return dataList_;
}

DescribeCdnIpListResult::PageInfo DescribeCdnIpListResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeCdnIpListResult::getModule()const
{
	return module_;
}

