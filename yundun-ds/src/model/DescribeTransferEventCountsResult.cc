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

#include <alibabacloud/yundun-ds/model/DescribeTransferEventCountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeTransferEventCountsResult::DescribeTransferEventCountsResult() :
	ServiceResult()
{}

DescribeTransferEventCountsResult::DescribeTransferEventCountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTransferEventCountsResult::~DescribeTransferEventCountsResult()
{}

void DescribeTransferEventCountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransferEventCountListNode = value["TransferEventCountList"]["Transfer"];
	for (auto valueTransferEventCountListTransfer : allTransferEventCountListNode)
	{
		Transfer transferEventCountListObject;
		if(!valueTransferEventCountListTransfer["TotalCount"].isNull())
			transferEventCountListObject.totalCount = std::stol(valueTransferEventCountListTransfer["TotalCount"].asString());
		if(!valueTransferEventCountListTransfer["ProductCode"].isNull())
			transferEventCountListObject.productCode = valueTransferEventCountListTransfer["ProductCode"].asString();
		if(!valueTransferEventCountListTransfer["TargetProductCode"].isNull())
			transferEventCountListObject.targetProductCode = valueTransferEventCountListTransfer["TargetProductCode"].asString();
		transferEventCountList_.push_back(transferEventCountListObject);
	}

}

std::vector<DescribeTransferEventCountsResult::Transfer> DescribeTransferEventCountsResult::getTransferEventCountList()const
{
	return transferEventCountList_;
}

