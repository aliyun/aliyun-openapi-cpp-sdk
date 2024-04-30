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

#include <alibabacloud/dcdn/model/DescribeDcdnUserBillTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnUserBillTypeResult::DescribeDcdnUserBillTypeResult() :
	ServiceResult()
{}

DescribeDcdnUserBillTypeResult::DescribeDcdnUserBillTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnUserBillTypeResult::~DescribeDcdnUserBillTypeResult()
{}

void DescribeDcdnUserBillTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBillTypeDataNode = value["BillTypeData"]["BillTypeDataItem"];
	for (auto valueBillTypeDataBillTypeDataItem : allBillTypeDataNode)
	{
		BillTypeDataItem billTypeDataObject;
		if(!valueBillTypeDataBillTypeDataItem["EndTime"].isNull())
			billTypeDataObject.endTime = valueBillTypeDataBillTypeDataItem["EndTime"].asString();
		if(!valueBillTypeDataBillTypeDataItem["StartTime"].isNull())
			billTypeDataObject.startTime = valueBillTypeDataBillTypeDataItem["StartTime"].asString();
		if(!valueBillTypeDataBillTypeDataItem["BillingCycle"].isNull())
			billTypeDataObject.billingCycle = valueBillTypeDataBillTypeDataItem["BillingCycle"].asString();
		if(!valueBillTypeDataBillTypeDataItem["Product"].isNull())
			billTypeDataObject.product = valueBillTypeDataBillTypeDataItem["Product"].asString();
		if(!valueBillTypeDataBillTypeDataItem["BillType"].isNull())
			billTypeDataObject.billType = valueBillTypeDataBillTypeDataItem["BillType"].asString();
		if(!valueBillTypeDataBillTypeDataItem["Dimension"].isNull())
			billTypeDataObject.dimension = valueBillTypeDataBillTypeDataItem["Dimension"].asString();
		billTypeData_.push_back(billTypeDataObject);
	}

}

std::vector<DescribeDcdnUserBillTypeResult::BillTypeDataItem> DescribeDcdnUserBillTypeResult::getBillTypeData()const
{
	return billTypeData_;
}

