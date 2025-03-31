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

#include <alibabacloud/cloud-siem/model/DescribeCloudSiemEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeCloudSiemEventsResult::DescribeCloudSiemEventsResult() :
	ServiceResult()
{}

DescribeCloudSiemEventsResult::DescribeCloudSiemEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudSiemEventsResult::~DescribeCloudSiemEventsResult()
{}

void DescribeCloudSiemEventsResult::parse(const std::string &payload)
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
		if(!dataNodeResponseDataResponseDataItem["GmtCreate"].isNull())
			responseDataItemObject.gmtCreate = dataNodeResponseDataResponseDataItem["GmtCreate"].asString();
		if(!dataNodeResponseDataResponseDataItem["GmtModified"].isNull())
			responseDataItemObject.gmtModified = dataNodeResponseDataResponseDataItem["GmtModified"].asString();
		if(!dataNodeResponseDataResponseDataItem["Aliuid"].isNull())
			responseDataItemObject.aliuid = std::stol(dataNodeResponseDataResponseDataItem["Aliuid"].asString());
		if(!dataNodeResponseDataResponseDataItem["AlertNum"].isNull())
			responseDataItemObject.alertNum = std::stoi(dataNodeResponseDataResponseDataItem["AlertNum"].asString());
		if(!dataNodeResponseDataResponseDataItem["AssetNum"].isNull())
			responseDataItemObject.assetNum = std::stoi(dataNodeResponseDataResponseDataItem["AssetNum"].asString());
		if(!dataNodeResponseDataResponseDataItem["IncidentUuid"].isNull())
			responseDataItemObject.incidentUuid = dataNodeResponseDataResponseDataItem["IncidentUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["IncidentName"].isNull())
			responseDataItemObject.incidentName = dataNodeResponseDataResponseDataItem["IncidentName"].asString();
		if(!dataNodeResponseDataResponseDataItem["IncidentNameEn"].isNull())
			responseDataItemObject.incidentNameEn = dataNodeResponseDataResponseDataItem["IncidentNameEn"].asString();
		if(!dataNodeResponseDataResponseDataItem["Description"].isNull())
			responseDataItemObject.description = dataNodeResponseDataResponseDataItem["Description"].asString();
		if(!dataNodeResponseDataResponseDataItem["DescriptionEn"].isNull())
			responseDataItemObject.descriptionEn = dataNodeResponseDataResponseDataItem["DescriptionEn"].asString();
		if(!dataNodeResponseDataResponseDataItem["ThreatLevel"].isNull())
			responseDataItemObject.threatLevel = dataNodeResponseDataResponseDataItem["ThreatLevel"].asString();
		if(!dataNodeResponseDataResponseDataItem["ThreatScore"].isNull())
			responseDataItemObject.threatScore = std::stof(dataNodeResponseDataResponseDataItem["ThreatScore"].asString());
		if(!dataNodeResponseDataResponseDataItem["ExtContent"].isNull())
			responseDataItemObject.extContent = dataNodeResponseDataResponseDataItem["ExtContent"].asString();
		if(!dataNodeResponseDataResponseDataItem["Status"].isNull())
			responseDataItemObject.status = std::stoi(dataNodeResponseDataResponseDataItem["Status"].asString());
		if(!dataNodeResponseDataResponseDataItem["ReferAccount"].isNull())
			responseDataItemObject.referAccount = dataNodeResponseDataResponseDataItem["ReferAccount"].asString();
		if(!dataNodeResponseDataResponseDataItem["IncidentType"].isNull())
			responseDataItemObject.incidentType = dataNodeResponseDataResponseDataItem["IncidentType"].asString();
		if(!dataNodeResponseDataResponseDataItem["RuleId"].isNull())
			responseDataItemObject.ruleId = dataNodeResponseDataResponseDataItem["RuleId"].asString();
		if(!dataNodeResponseDataResponseDataItem["Remark"].isNull())
			responseDataItemObject.remark = dataNodeResponseDataResponseDataItem["Remark"].asString();
		auto allAttckStagesNode = dataNodeResponseDataResponseDataItem["AttckStages"]["AttckStage"];
		for (auto dataNodeResponseDataResponseDataItemAttckStagesAttckStage : allAttckStagesNode)
		{
			Data::ResponseDataItem::AttckStage attckStagesObject;
			if(!dataNodeResponseDataResponseDataItemAttckStagesAttckStage["TacticId"].isNull())
				attckStagesObject.tacticId = dataNodeResponseDataResponseDataItemAttckStagesAttckStage["TacticId"].asString();
			if(!dataNodeResponseDataResponseDataItemAttckStagesAttckStage["TacticName"].isNull())
				attckStagesObject.tacticName = dataNodeResponseDataResponseDataItemAttckStagesAttckStage["TacticName"].asString();
			if(!dataNodeResponseDataResponseDataItemAttckStagesAttckStage["AlertNum"].isNull())
				attckStagesObject.alertNum = std::stoi(dataNodeResponseDataResponseDataItemAttckStagesAttckStage["AlertNum"].asString());
			responseDataItemObject.attckStages.push_back(attckStagesObject);
		}
		auto allDataSources = value["DataSources"]["DataSource"];
		for (auto value : allDataSources)
			responseDataItemObject.dataSources.push_back(value.asString());
		auto allAttCkLabels = value["AttCkLabels"]["AttCkLabel"];
		for (auto value : allAttCkLabels)
			responseDataItemObject.attCkLabels.push_back(value.asString());
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

std::string DescribeCloudSiemEventsResult::getMessage()const
{
	return message_;
}

DescribeCloudSiemEventsResult::Data DescribeCloudSiemEventsResult::getData()const
{
	return data_;
}

int DescribeCloudSiemEventsResult::getCode()const
{
	return code_;
}

bool DescribeCloudSiemEventsResult::getSuccess()const
{
	return success_;
}

