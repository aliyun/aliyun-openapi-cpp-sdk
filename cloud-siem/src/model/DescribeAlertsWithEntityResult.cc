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

#include <alibabacloud/cloud-siem/model/DescribeAlertsWithEntityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeAlertsWithEntityResult::DescribeAlertsWithEntityResult() :
	ServiceResult()
{}

DescribeAlertsWithEntityResult::DescribeAlertsWithEntityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlertsWithEntityResult::~DescribeAlertsWithEntityResult()
{}

void DescribeAlertsWithEntityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allResponseDataNode = dataNode["ResponseData"]["ResponseDataItem"];
	for (auto dataNodeResponseDataResponseDataItem : allResponseDataNode)
	{
		Data::ResponseDataItem responseDataItemObject;
		if(!dataNodeResponseDataResponseDataItem["Id"].isNull())
			responseDataItemObject.id = std::stol(dataNodeResponseDataResponseDataItem["Id"].asString());
		if(!dataNodeResponseDataResponseDataItem["GmtCreate"].isNull())
			responseDataItemObject.gmtCreate = dataNodeResponseDataResponseDataItem["GmtCreate"].asString();
		if(!dataNodeResponseDataResponseDataItem["GmtModified"].isNull())
			responseDataItemObject.gmtModified = dataNodeResponseDataResponseDataItem["GmtModified"].asString();
		if(!dataNodeResponseDataResponseDataItem["MainUserId"].isNull())
			responseDataItemObject.mainUserId = std::stol(dataNodeResponseDataResponseDataItem["MainUserId"].asString());
		if(!dataNodeResponseDataResponseDataItem["IncidentUuid"].isNull())
			responseDataItemObject.incidentUuid = dataNodeResponseDataResponseDataItem["IncidentUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertUuid"].isNull())
			responseDataItemObject.alertUuid = dataNodeResponseDataResponseDataItem["AlertUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["LogTime"].isNull())
			responseDataItemObject.logTime = dataNodeResponseDataResponseDataItem["LogTime"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertSrcProd"].isNull())
			responseDataItemObject.alertSrcProd = dataNodeResponseDataResponseDataItem["AlertSrcProd"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertTitle"].isNull())
			responseDataItemObject.alertTitle = dataNodeResponseDataResponseDataItem["AlertTitle"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertTitleEn"].isNull())
			responseDataItemObject.alertTitleEn = dataNodeResponseDataResponseDataItem["AlertTitleEn"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertType"].isNull())
			responseDataItemObject.alertType = dataNodeResponseDataResponseDataItem["AlertType"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertTypeEn"].isNull())
			responseDataItemObject.alertTypeEn = dataNodeResponseDataResponseDataItem["AlertTypeEn"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertTypeCode"].isNull())
			responseDataItemObject.alertTypeCode = dataNodeResponseDataResponseDataItem["AlertTypeCode"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertName"].isNull())
			responseDataItemObject.alertName = dataNodeResponseDataResponseDataItem["AlertName"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertNameEn"].isNull())
			responseDataItemObject.alertNameEn = dataNodeResponseDataResponseDataItem["AlertNameEn"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertNameCode"].isNull())
			responseDataItemObject.alertNameCode = dataNodeResponseDataResponseDataItem["AlertNameCode"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertLevel"].isNull())
			responseDataItemObject.alertLevel = dataNodeResponseDataResponseDataItem["AlertLevel"].asString();
		if(!dataNodeResponseDataResponseDataItem["AssetList"].isNull())
			responseDataItemObject.assetList = dataNodeResponseDataResponseDataItem["AssetList"].asString();
		if(!dataNodeResponseDataResponseDataItem["OccurTime"].isNull())
			responseDataItemObject.occurTime = dataNodeResponseDataResponseDataItem["OccurTime"].asString();
		if(!dataNodeResponseDataResponseDataItem["StartTime"].isNull())
			responseDataItemObject.startTime = dataNodeResponseDataResponseDataItem["StartTime"].asString();
		if(!dataNodeResponseDataResponseDataItem["EndTime"].isNull())
			responseDataItemObject.endTime = dataNodeResponseDataResponseDataItem["EndTime"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertSrcProdModule"].isNull())
			responseDataItemObject.alertSrcProdModule = dataNodeResponseDataResponseDataItem["AlertSrcProdModule"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertDesc"].isNull())
			responseDataItemObject.alertDesc = dataNodeResponseDataResponseDataItem["AlertDesc"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertDescEn"].isNull())
			responseDataItemObject.alertDescEn = dataNodeResponseDataResponseDataItem["AlertDescEn"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertDescCode"].isNull())
			responseDataItemObject.alertDescCode = dataNodeResponseDataResponseDataItem["AlertDescCode"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertDetail"].isNull())
			responseDataItemObject.alertDetail = dataNodeResponseDataResponseDataItem["AlertDetail"].asString();
		if(!dataNodeResponseDataResponseDataItem["LogUuid"].isNull())
			responseDataItemObject.logUuid = dataNodeResponseDataResponseDataItem["LogUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["EntityList"].isNull())
			responseDataItemObject.entityList = dataNodeResponseDataResponseDataItem["EntityList"].asString();
		if(!dataNodeResponseDataResponseDataItem["AttCk"].isNull())
			responseDataItemObject.attCk = dataNodeResponseDataResponseDataItem["AttCk"].asString();
		if(!dataNodeResponseDataResponseDataItem["SubUserId"].isNull())
			responseDataItemObject.subUserId = std::stol(dataNodeResponseDataResponseDataItem["SubUserId"].asString());
		if(!dataNodeResponseDataResponseDataItem["SubUserName"].isNull())
			responseDataItemObject.subUserName = dataNodeResponseDataResponseDataItem["SubUserName"].asString();
		if(!dataNodeResponseDataResponseDataItem["CloudCode"].isNull())
			responseDataItemObject.cloudCode = dataNodeResponseDataResponseDataItem["CloudCode"].asString();
		if(!dataNodeResponseDataResponseDataItem["IsDefend"].isNull())
			responseDataItemObject.isDefend = dataNodeResponseDataResponseDataItem["IsDefend"].asString();
		auto allAlertInfoListNode = dataNodeResponseDataResponseDataItem["AlertInfoList"]["AlertInfoListItem"];
		for (auto dataNodeResponseDataResponseDataItemAlertInfoListAlertInfoListItem : allAlertInfoListNode)
		{
			Data::ResponseDataItem::AlertInfoListItem alertInfoListObject;
			if(!dataNodeResponseDataResponseDataItemAlertInfoListAlertInfoListItem["Key"].isNull())
				alertInfoListObject.key = dataNodeResponseDataResponseDataItemAlertInfoListAlertInfoListItem["Key"].asString();
			if(!dataNodeResponseDataResponseDataItemAlertInfoListAlertInfoListItem["KeyName"].isNull())
				alertInfoListObject.keyName = dataNodeResponseDataResponseDataItemAlertInfoListAlertInfoListItem["KeyName"].asString();
			if(!dataNodeResponseDataResponseDataItemAlertInfoListAlertInfoListItem["Values"].isNull())
				alertInfoListObject.values = dataNodeResponseDataResponseDataItemAlertInfoListAlertInfoListItem["Values"].asString();
			responseDataItemObject.alertInfoList.push_back(alertInfoListObject);
		}
		data_.responseData.push_back(responseDataItemObject);
	}
	auto pageInfoNode = dataNode["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		data_.pageInfo.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		data_.pageInfo.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		data_.pageInfo.totalCount = std::stol(pageInfoNode["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeAlertsWithEntityResult::getMessage()const
{
	return message_;
}

DescribeAlertsWithEntityResult::Data DescribeAlertsWithEntityResult::getData()const
{
	return data_;
}

int DescribeAlertsWithEntityResult::getCode()const
{
	return code_;
}

bool DescribeAlertsWithEntityResult::getSuccess()const
{
	return success_;
}

