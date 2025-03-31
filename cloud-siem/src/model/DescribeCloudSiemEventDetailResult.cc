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

#include <alibabacloud/cloud-siem/model/DescribeCloudSiemEventDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeCloudSiemEventDetailResult::DescribeCloudSiemEventDetailResult() :
	ServiceResult()
{}

DescribeCloudSiemEventDetailResult::DescribeCloudSiemEventDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudSiemEventDetailResult::~DescribeCloudSiemEventDetailResult()
{}

void DescribeCloudSiemEventDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["Aliuid"].isNull())
		data_.aliuid = std::stol(dataNode["Aliuid"].asString());
	if(!dataNode["AlertNum"].isNull())
		data_.alertNum = std::stoi(dataNode["AlertNum"].asString());
	if(!dataNode["AssetNum"].isNull())
		data_.assetNum = std::stoi(dataNode["AssetNum"].asString());
	if(!dataNode["IncidentUuid"].isNull())
		data_.incidentUuid = dataNode["IncidentUuid"].asString();
	if(!dataNode["IncidentName"].isNull())
		data_.incidentName = dataNode["IncidentName"].asString();
	if(!dataNode["IncidentNameEn"].isNull())
		data_.incidentNameEn = dataNode["IncidentNameEn"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["DescriptionEn"].isNull())
		data_.descriptionEn = dataNode["DescriptionEn"].asString();
	if(!dataNode["ThreatLevel"].isNull())
		data_.threatLevel = dataNode["ThreatLevel"].asString();
	if(!dataNode["ThreatScore"].isNull())
		data_.threatScore = std::stof(dataNode["ThreatScore"].asString());
	if(!dataNode["ExtContent"].isNull())
		data_.extContent = dataNode["ExtContent"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["ReferAccount"].isNull())
		data_.referAccount = dataNode["ReferAccount"].asString();
	if(!dataNode["IncidentType"].isNull())
		data_.incidentType = dataNode["IncidentType"].asString();
	if(!dataNode["RuleId"].isNull())
		data_.ruleId = dataNode["RuleId"].asString();
	if(!dataNode["Remark"].isNull())
		data_.remark = dataNode["Remark"].asString();
	auto allAttckStagesNode = dataNode["AttckStages"]["AttckStage"];
	for (auto dataNodeAttckStagesAttckStage : allAttckStagesNode)
	{
		Data::AttckStage attckStageObject;
		if(!dataNodeAttckStagesAttckStage["TacticId"].isNull())
			attckStageObject.tacticId = dataNodeAttckStagesAttckStage["TacticId"].asString();
		if(!dataNodeAttckStagesAttckStage["TacticName"].isNull())
			attckStageObject.tacticName = dataNodeAttckStagesAttckStage["TacticName"].asString();
		if(!dataNodeAttckStagesAttckStage["AlertNum"].isNull())
			attckStageObject.alertNum = std::stoi(dataNodeAttckStagesAttckStage["AlertNum"].asString());
		data_.attckStages.push_back(attckStageObject);
	}
		auto allDataSources = dataNode["DataSources"]["DataSource"];
		for (auto value : allDataSources)
			data_.dataSources.push_back(value.asString());
		auto allAttCkLabels = dataNode["AttCkLabels"]["AttCkLabel"];
		for (auto value : allAttCkLabels)
			data_.attCkLabels.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeCloudSiemEventDetailResult::getMessage()const
{
	return message_;
}

DescribeCloudSiemEventDetailResult::Data DescribeCloudSiemEventDetailResult::getData()const
{
	return data_;
}

int DescribeCloudSiemEventDetailResult::getCode()const
{
	return code_;
}

bool DescribeCloudSiemEventDetailResult::getSuccess()const
{
	return success_;
}

