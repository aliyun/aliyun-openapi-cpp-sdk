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

#include <alibabacloud/jarvis/model/DescribeResetRecordListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeResetRecordListResult::DescribeResetRecordListResult() :
	ServiceResult()
{}

DescribeResetRecordListResult::DescribeResetRecordListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResetRecordListResult::~DescribeResetRecordListResult()
{}

void DescribeResetRecordListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDataList = value["DataList"]["Data"];
	for (auto value : allDataList)
	{
		Data dataListObject;
		if(!value["PunishType"].isNull())
			dataListObject.punishType = value["PunishType"].asString();
		if(!value["DstIP"].isNull())
			dataListObject.dstIP = value["DstIP"].asString();
		if(!value["PunishResult"].isNull())
			dataListObject.punishResult = value["PunishResult"].asString();
		if(!value["DstPort"].isNull())
			dataListObject.dstPort = std::stoi(value["DstPort"].asString());
		if(!value["SrcIP"].isNull())
			dataListObject.srcIP = value["SrcIP"].asString();
		if(!value["PunishCount"].isNull())
			dataListObject.punishCount = std::stoi(value["PunishCount"].asString());
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

std::vector<DescribeResetRecordListResult::Data> DescribeResetRecordListResult::getDataList()const
{
	return dataList_;
}

DescribeResetRecordListResult::PageInfo DescribeResetRecordListResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeResetRecordListResult::getModule()const
{
	return module_;
}

