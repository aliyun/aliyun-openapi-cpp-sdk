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

#include <alibabacloud/dcdn/model/DescribeDcdnUserBillHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnUserBillHistoryResult::DescribeDcdnUserBillHistoryResult() :
	ServiceResult()
{}

DescribeDcdnUserBillHistoryResult::DescribeDcdnUserBillHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnUserBillHistoryResult::~DescribeDcdnUserBillHistoryResult()
{}

void DescribeDcdnUserBillHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBillHistoryDataNode = value["BillHistoryData"]["BillHistoryDataItem"];
	for (auto valueBillHistoryDataBillHistoryDataItem : allBillHistoryDataNode)
	{
		BillHistoryDataItem billHistoryDataObject;
		if(!valueBillHistoryDataBillHistoryDataItem["Dimension"].isNull())
			billHistoryDataObject.dimension = valueBillHistoryDataBillHistoryDataItem["Dimension"].asString();
		if(!valueBillHistoryDataBillHistoryDataItem["BillType"].isNull())
			billHistoryDataObject.billType = valueBillHistoryDataBillHistoryDataItem["BillType"].asString();
		if(!valueBillHistoryDataBillHistoryDataItem["BillTime"].isNull())
			billHistoryDataObject.billTime = valueBillHistoryDataBillHistoryDataItem["BillTime"].asString();
		auto allBillingDataNode = allBillHistoryDataNode["BillingData"]["BillingDataItem"];
		for (auto allBillHistoryDataNodeBillingDataBillingDataItem : allBillingDataNode)
		{
			BillHistoryDataItem::BillingDataItem billingDataObject;
			if(!allBillHistoryDataNodeBillingDataBillingDataItem["ChargeType"].isNull())
				billingDataObject.chargeType = allBillHistoryDataNodeBillingDataBillingDataItem["ChargeType"].asString();
			if(!allBillHistoryDataNodeBillingDataBillingDataItem["CdnRegion"].isNull())
				billingDataObject.cdnRegion = allBillHistoryDataNodeBillingDataBillingDataItem["CdnRegion"].asString();
			if(!allBillHistoryDataNodeBillingDataBillingDataItem["Bandwidth"].isNull())
				billingDataObject.bandwidth = std::stof(allBillHistoryDataNodeBillingDataBillingDataItem["Bandwidth"].asString());
			if(!allBillHistoryDataNodeBillingDataBillingDataItem["Flow"].isNull())
				billingDataObject.flow = std::stof(allBillHistoryDataNodeBillingDataBillingDataItem["Flow"].asString());
			if(!allBillHistoryDataNodeBillingDataBillingDataItem["Count"].isNull())
				billingDataObject.count = std::stof(allBillHistoryDataNodeBillingDataBillingDataItem["Count"].asString());
			billHistoryDataObject.billingData.push_back(billingDataObject);
		}
		billHistoryData_.push_back(billHistoryDataObject);
	}

}

std::vector<DescribeDcdnUserBillHistoryResult::BillHistoryDataItem> DescribeDcdnUserBillHistoryResult::getBillHistoryData()const
{
	return billHistoryData_;
}

