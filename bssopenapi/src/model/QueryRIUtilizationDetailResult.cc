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

#include <alibabacloud/bssopenapi/model/QueryRIUtilizationDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryRIUtilizationDetailResult::QueryRIUtilizationDetailResult() :
	ServiceResult()
{}

QueryRIUtilizationDetailResult::QueryRIUtilizationDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRIUtilizationDetailResult::~QueryRIUtilizationDetailResult()
{}

void QueryRIUtilizationDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stol(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allDetailListNode = dataNode["DetailList"]["DetailListItem"];
	for (auto dataNodeDetailListDetailListItem : allDetailListNode)
	{
		Data::DetailListItem detailListItemObject;
		if(!dataNodeDetailListDetailListItem["DeductedCommodityCode"].isNull())
			detailListItemObject.deductedCommodityCode = dataNodeDetailListDetailListItem["DeductedCommodityCode"].asString();
		if(!dataNodeDetailListDetailListItem["DeductedProductDetail"].isNull())
			detailListItemObject.deductedProductDetail = dataNodeDetailListDetailListItem["DeductedProductDetail"].asString();
		if(!dataNodeDetailListDetailListItem["DeductedInstanceId"].isNull())
			detailListItemObject.deductedInstanceId = dataNodeDetailListDetailListItem["DeductedInstanceId"].asString();
		if(!dataNodeDetailListDetailListItem["DeductFactorTotal"].isNull())
			detailListItemObject.deductFactorTotal = std::stof(dataNodeDetailListDetailListItem["DeductFactorTotal"].asString());
		if(!dataNodeDetailListDetailListItem["DeductQuantity"].isNull())
			detailListItemObject.deductQuantity = std::stof(dataNodeDetailListDetailListItem["DeductQuantity"].asString());
		if(!dataNodeDetailListDetailListItem["DeductHours"].isNull())
			detailListItemObject.deductHours = dataNodeDetailListDetailListItem["DeductHours"].asString();
		if(!dataNodeDetailListDetailListItem["DeductDate"].isNull())
			detailListItemObject.deductDate = dataNodeDetailListDetailListItem["DeductDate"].asString();
		if(!dataNodeDetailListDetailListItem["RIInstanceId"].isNull())
			detailListItemObject.rIInstanceId = dataNodeDetailListDetailListItem["RIInstanceId"].asString();
		if(!dataNodeDetailListDetailListItem["InstanceSpec"].isNull())
			detailListItemObject.instanceSpec = dataNodeDetailListDetailListItem["InstanceSpec"].asString();
		data_.detailList.push_back(detailListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryRIUtilizationDetailResult::getMessage()const
{
	return message_;
}

QueryRIUtilizationDetailResult::Data QueryRIUtilizationDetailResult::getData()const
{
	return data_;
}

std::string QueryRIUtilizationDetailResult::getCode()const
{
	return code_;
}

bool QueryRIUtilizationDetailResult::getSuccess()const
{
	return success_;
}

