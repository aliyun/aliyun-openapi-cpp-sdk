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

#include <alibabacloud/live/model/DescribeLiveProducerUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveProducerUsageDataResult::DescribeLiveProducerUsageDataResult() :
	ServiceResult()
{}

DescribeLiveProducerUsageDataResult::DescribeLiveProducerUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveProducerUsageDataResult::~DescribeLiveProducerUsageDataResult()
{}

void DescribeLiveProducerUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBillProducerDataNode = value["BillProducerData"]["BillProducerDataItem"];
	for (auto valueBillProducerDataBillProducerDataItem : allBillProducerDataNode)
	{
		BillProducerDataItem billProducerDataObject;
		if(!valueBillProducerDataBillProducerDataItem["DomainName"].isNull())
			billProducerDataObject.domainName = valueBillProducerDataBillProducerDataItem["DomainName"].asString();
		if(!valueBillProducerDataBillProducerDataItem["Instance"].isNull())
			billProducerDataObject.instance = valueBillProducerDataBillProducerDataItem["Instance"].asString();
		if(!valueBillProducerDataBillProducerDataItem["OutputHdDuration"].isNull())
			billProducerDataObject.outputHdDuration = std::stol(valueBillProducerDataBillProducerDataItem["OutputHdDuration"].asString());
		if(!valueBillProducerDataBillProducerDataItem["OutputLdDuration"].isNull())
			billProducerDataObject.outputLdDuration = std::stol(valueBillProducerDataBillProducerDataItem["OutputLdDuration"].asString());
		if(!valueBillProducerDataBillProducerDataItem["OutputSdDuration"].isNull())
			billProducerDataObject.outputSdDuration = std::stol(valueBillProducerDataBillProducerDataItem["OutputSdDuration"].asString());
		if(!valueBillProducerDataBillProducerDataItem["Region"].isNull())
			billProducerDataObject.region = valueBillProducerDataBillProducerDataItem["Region"].asString();
		if(!valueBillProducerDataBillProducerDataItem["TimeStamp"].isNull())
			billProducerDataObject.timeStamp = valueBillProducerDataBillProducerDataItem["TimeStamp"].asString();
		if(!valueBillProducerDataBillProducerDataItem["TranHdDuration"].isNull())
			billProducerDataObject.tranHdDuration = std::stol(valueBillProducerDataBillProducerDataItem["TranHdDuration"].asString());
		if(!valueBillProducerDataBillProducerDataItem["TranLdDuration"].isNull())
			billProducerDataObject.tranLdDuration = std::stol(valueBillProducerDataBillProducerDataItem["TranLdDuration"].asString());
		if(!valueBillProducerDataBillProducerDataItem["TranSdDuration"].isNull())
			billProducerDataObject.tranSdDuration = std::stol(valueBillProducerDataBillProducerDataItem["TranSdDuration"].asString());
		if(!valueBillProducerDataBillProducerDataItem["Type"].isNull())
			billProducerDataObject.type = valueBillProducerDataBillProducerDataItem["Type"].asString();
		billProducerData_.push_back(billProducerDataObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::vector<DescribeLiveProducerUsageDataResult::BillProducerDataItem> DescribeLiveProducerUsageDataResult::getBillProducerData()const
{
	return billProducerData_;
}

std::string DescribeLiveProducerUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLiveProducerUsageDataResult::getStartTime()const
{
	return startTime_;
}

