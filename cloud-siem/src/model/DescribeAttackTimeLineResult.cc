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

#include <alibabacloud/cloud-siem/model/DescribeAttackTimeLineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeAttackTimeLineResult::DescribeAttackTimeLineResult() :
	ServiceResult()
{}

DescribeAttackTimeLineResult::DescribeAttackTimeLineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAttackTimeLineResult::~DescribeAttackTimeLineResult()
{}

void DescribeAttackTimeLineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["AssetName"].isNull())
			dataObject.assetName = valueDataDataItem["AssetName"].asString();
		if(!valueDataDataItem["AlertTime"].isNull())
			dataObject.alertTime = std::stol(valueDataDataItem["AlertTime"].asString());
		if(!valueDataDataItem["AssetId"].isNull())
			dataObject.assetId = valueDataDataItem["AssetId"].asString();
		if(!valueDataDataItem["IncidentUuid"].isNull())
			dataObject.incidentUuid = valueDataDataItem["IncidentUuid"].asString();
		if(!valueDataDataItem["AlertUuid"].isNull())
			dataObject.alertUuid = valueDataDataItem["AlertUuid"].asString();
		if(!valueDataDataItem["LogTime"].isNull())
			dataObject.logTime = valueDataDataItem["LogTime"].asString();
		if(!valueDataDataItem["AlertSrcProd"].isNull())
			dataObject.alertSrcProd = valueDataDataItem["AlertSrcProd"].asString();
		if(!valueDataDataItem["AlertTitle"].isNull())
			dataObject.alertTitle = valueDataDataItem["AlertTitle"].asString();
		if(!valueDataDataItem["AlertLevel"].isNull())
			dataObject.alertLevel = valueDataDataItem["AlertLevel"].asString();
		if(!valueDataDataItem["AssetList"].isNull())
			dataObject.assetList = valueDataDataItem["AssetList"].asString();
		if(!valueDataDataItem["AlertSrcProdModule"].isNull())
			dataObject.alertSrcProdModule = valueDataDataItem["AlertSrcProdModule"].asString();
		if(!valueDataDataItem["AttCk"].isNull())
			dataObject.attCk = valueDataDataItem["AttCk"].asString();
		if(!valueDataDataItem["CloudCode"].isNull())
			dataObject.cloudCode = valueDataDataItem["CloudCode"].asString();
		if(!valueDataDataItem["AlertTitleEn"].isNull())
			dataObject.alertTitleEn = valueDataDataItem["AlertTitleEn"].asString();
		if(!valueDataDataItem["AlertType"].isNull())
			dataObject.alertType = valueDataDataItem["AlertType"].asString();
		if(!valueDataDataItem["AlertTypeEn"].isNull())
			dataObject.alertTypeEn = valueDataDataItem["AlertTypeEn"].asString();
		if(!valueDataDataItem["AlertTypeCode"].isNull())
			dataObject.alertTypeCode = valueDataDataItem["AlertTypeCode"].asString();
		if(!valueDataDataItem["AlertName"].isNull())
			dataObject.alertName = valueDataDataItem["AlertName"].asString();
		if(!valueDataDataItem["AlertNameEn"].isNull())
			dataObject.alertNameEn = valueDataDataItem["AlertNameEn"].asString();
		if(!valueDataDataItem["AlertNameCode"].isNull())
			dataObject.alertNameCode = valueDataDataItem["AlertNameCode"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeAttackTimeLineResult::getMessage()const
{
	return message_;
}

std::vector<DescribeAttackTimeLineResult::DataItem> DescribeAttackTimeLineResult::getData()const
{
	return data_;
}

int DescribeAttackTimeLineResult::getCode()const
{
	return code_;
}

bool DescribeAttackTimeLineResult::getSuccess()const
{
	return success_;
}

