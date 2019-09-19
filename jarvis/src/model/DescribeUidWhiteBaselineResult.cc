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

#include <alibabacloud/jarvis/model/DescribeUidWhiteBaselineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeUidWhiteBaselineResult::DescribeUidWhiteBaselineResult() :
	ServiceResult()
{}

DescribeUidWhiteBaselineResult::DescribeUidWhiteBaselineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUidWhiteBaselineResult::~DescribeUidWhiteBaselineResult()
{}

void DescribeUidWhiteBaselineResult::parse(const std::string &payload)
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
		if(!valueDataListData["OwnerAliUid"].isNull())
			dataListObject.ownerAliUid = std::stoi(valueDataListData["OwnerAliUid"].asString());
		if(!valueDataListData["SrcUid"].isNull())
			dataListObject.srcUid = std::stol(valueDataListData["SrcUid"].asString());
		if(!valueDataListData["Status"].isNull())
			dataListObject.status = valueDataListData["Status"].asString();
		if(!valueDataListData["Remark"].isNull())
			dataListObject.remark = valueDataListData["Remark"].asString();
		if(!valueDataListData["BeginTime"].isNull())
			dataListObject.beginTime = std::stoi(valueDataListData["BeginTime"].asString());
		if(!valueDataListData["RealEndTime"].isNull())
			dataListObject.realEndTime = std::stoi(valueDataListData["RealEndTime"].asString());
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

std::vector<DescribeUidWhiteBaselineResult::Data> DescribeUidWhiteBaselineResult::getDataList()const
{
	return dataList_;
}

DescribeUidWhiteBaselineResult::PageInfo DescribeUidWhiteBaselineResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeUidWhiteBaselineResult::getModule()const
{
	return module_;
}

