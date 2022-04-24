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

#include <alibabacloud/bssopenapi/model/QueryDPUtilizationDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryDPUtilizationDetailResult::QueryDPUtilizationDetailResult() :
	ServiceResult()
{}

QueryDPUtilizationDetailResult::QueryDPUtilizationDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDPUtilizationDetailResult::~QueryDPUtilizationDetailResult()
{}

void QueryDPUtilizationDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allDetailListNode = dataNode["DetailList"]["DetailListItem"];
	for (auto dataNodeDetailListDetailListItem : allDetailListNode)
	{
		Data::DetailListItem detailListItemObject;
		if(!dataNodeDetailListDetailListItem["DeductedInstanceId"].isNull())
			detailListItemObject.deductedInstanceId = dataNodeDetailListDetailListItem["DeductedInstanceId"].asString();
		if(!dataNodeDetailListDetailListItem["InstanceId"].isNull())
			detailListItemObject.instanceId = dataNodeDetailListDetailListItem["InstanceId"].asString();
		if(!dataNodeDetailListDetailListItem["DeductHours"].isNull())
			detailListItemObject.deductHours = std::stof(dataNodeDetailListDetailListItem["DeductHours"].asString());
		if(!dataNodeDetailListDetailListItem["ShareUid"].isNull())
			detailListItemObject.shareUid = std::stol(dataNodeDetailListDetailListItem["ShareUid"].asString());
		if(!dataNodeDetailListDetailListItem["DeductDate"].isNull())
			detailListItemObject.deductDate = dataNodeDetailListDetailListItem["DeductDate"].asString();
		if(!dataNodeDetailListDetailListItem["InstanceSpec"].isNull())
			detailListItemObject.instanceSpec = dataNodeDetailListDetailListItem["InstanceSpec"].asString();
		if(!dataNodeDetailListDetailListItem["DeductedCommodityCode"].isNull())
			detailListItemObject.deductedCommodityCode = dataNodeDetailListDetailListItem["DeductedCommodityCode"].asString();
		if(!dataNodeDetailListDetailListItem["DeductedProductDetail"].isNull())
			detailListItemObject.deductedProductDetail = dataNodeDetailListDetailListItem["DeductedProductDetail"].asString();
		if(!dataNodeDetailListDetailListItem["DeductMeasure"].isNull())
			detailListItemObject.deductMeasure = std::stof(dataNodeDetailListDetailListItem["DeductMeasure"].asString());
		if(!dataNodeDetailListDetailListItem["Region"].isNull())
			detailListItemObject.region = dataNodeDetailListDetailListItem["Region"].asString();
		if(!dataNodeDetailListDetailListItem["DeductQuantity"].isNull())
			detailListItemObject.deductQuantity = std::stof(dataNodeDetailListDetailListItem["DeductQuantity"].asString());
		if(!dataNodeDetailListDetailListItem["DeductFactorTotal"].isNull())
			detailListItemObject.deductFactorTotal = std::stof(dataNodeDetailListDetailListItem["DeductFactorTotal"].asString());
		if(!dataNodeDetailListDetailListItem["ResCode"].isNull())
			detailListItemObject.resCode = dataNodeDetailListDetailListItem["ResCode"].asString();
		if(!dataNodeDetailListDetailListItem["Uid"].isNull())
			detailListItemObject.uid = std::stol(dataNodeDetailListDetailListItem["Uid"].asString());
		data_.detailList.push_back(detailListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryDPUtilizationDetailResult::getMessage()const
{
	return message_;
}

QueryDPUtilizationDetailResult::Data QueryDPUtilizationDetailResult::getData()const
{
	return data_;
}

std::string QueryDPUtilizationDetailResult::getCode()const
{
	return code_;
}

bool QueryDPUtilizationDetailResult::getSuccess()const
{
	return success_;
}

