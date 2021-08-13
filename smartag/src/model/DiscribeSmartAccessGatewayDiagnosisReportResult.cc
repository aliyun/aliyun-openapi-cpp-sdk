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

#include <alibabacloud/smartag/model/DiscribeSmartAccessGatewayDiagnosisReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DiscribeSmartAccessGatewayDiagnosisReportResult::DiscribeSmartAccessGatewayDiagnosisReportResult() :
	ServiceResult()
{}

DiscribeSmartAccessGatewayDiagnosisReportResult::DiscribeSmartAccessGatewayDiagnosisReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DiscribeSmartAccessGatewayDiagnosisReportResult::~DiscribeSmartAccessGatewayDiagnosisReportResult()
{}

void DiscribeSmartAccessGatewayDiagnosisReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto diagnoseResultNode = value["DiagnoseResult"];
	if(!diagnoseResultNode["Percent"].isNull())
		diagnoseResult_.percent = std::stoi(diagnoseResultNode["Percent"].asString());
	if(!diagnoseResultNode["SN"].isNull())
		diagnoseResult_.sN = diagnoseResultNode["SN"].asString();
	if(!diagnoseResultNode["DiagnoseId"].isNull())
		diagnoseResult_.diagnoseId = diagnoseResultNode["DiagnoseId"].asString();
	if(!diagnoseResultNode["State"].isNull())
		diagnoseResult_.state = diagnoseResultNode["State"].asString();
	if(!diagnoseResultNode["UserLevel"].isNull())
		diagnoseResult_.userLevel = diagnoseResultNode["UserLevel"].asString();
	if(!diagnoseResultNode["BoxVersion"].isNull())
		diagnoseResult_.boxVersion = diagnoseResultNode["BoxVersion"].asString();
	if(!diagnoseResultNode["InstanceId"].isNull())
		diagnoseResult_.instanceId = diagnoseResultNode["InstanceId"].asString();
	if(!diagnoseResultNode["BoxType"].isNull())
		diagnoseResult_.boxType = diagnoseResultNode["BoxType"].asString();
	if(!diagnoseResultNode["MonitorVersion"].isNull())
		diagnoseResult_.monitorVersion = diagnoseResultNode["MonitorVersion"].asString();
	if(!diagnoseResultNode["FinishedNumber"].isNull())
		diagnoseResult_.finishedNumber = std::stoi(diagnoseResultNode["FinishedNumber"].asString());
	if(!diagnoseResultNode["UId"].isNull())
		diagnoseResult_.uId = diagnoseResultNode["UId"].asString();
	if(!diagnoseResultNode["EndTime"].isNull())
		diagnoseResult_.endTime = std::stoi(diagnoseResultNode["EndTime"].asString());
	if(!diagnoseResultNode["StartTime"].isNull())
		diagnoseResult_.startTime = std::stoi(diagnoseResultNode["StartTime"].asString());
	if(!diagnoseResultNode["Parameters"].isNull())
		diagnoseResult_.parameters = diagnoseResultNode["Parameters"].asString();
	if(!diagnoseResultNode["StoreType"].isNull())
		diagnoseResult_.storeType = diagnoseResultNode["StoreType"].asString();
	if(!diagnoseResultNode["ReportSLSSuccess"].isNull())
		diagnoseResult_.reportSLSSuccess = std::stoi(diagnoseResultNode["ReportSLSSuccess"].asString());
	if(!diagnoseResultNode["TotalNumber"].isNull())
		diagnoseResult_.totalNumber = std::stoi(diagnoseResultNode["TotalNumber"].asString());
	auto allDetailsNode = diagnoseResultNode["Details"]["Detail"];
	for (auto diagnoseResultNodeDetailsDetail : allDetailsNode)
	{
		DiagnoseResult::Detail detailObject;
		if(!diagnoseResultNodeDetailsDetail["Type"].isNull())
			detailObject.type = diagnoseResultNodeDetailsDetail["Type"].asString();
		auto allItemsNode = diagnoseResultNodeDetailsDetail["Items"]["Item"];
		for (auto diagnoseResultNodeDetailsDetailItemsItem : allItemsNode)
		{
			DiagnoseResult::Detail::Item itemsObject;
			if(!diagnoseResultNodeDetailsDetailItemsItem["Type"].isNull())
				itemsObject.type = diagnoseResultNodeDetailsDetailItemsItem["Type"].asString();
			if(!diagnoseResultNodeDetailsDetailItemsItem["EndTime"].isNull())
				itemsObject.endTime = std::stol(diagnoseResultNodeDetailsDetailItemsItem["EndTime"].asString());
			if(!diagnoseResultNodeDetailsDetailItemsItem["StartTime"].isNull())
				itemsObject.startTime = std::stol(diagnoseResultNodeDetailsDetailItemsItem["StartTime"].asString());
			if(!diagnoseResultNodeDetailsDetailItemsItem["ItemName"].isNull())
				itemsObject.itemName = diagnoseResultNodeDetailsDetailItemsItem["ItemName"].asString();
			if(!diagnoseResultNodeDetailsDetailItemsItem["Level"].isNull())
				itemsObject.level = diagnoseResultNodeDetailsDetailItemsItem["Level"].asString();
			auto cNNode = value["CN"];
			if(!cNNode["ItemName"].isNull())
				itemsObject.cN.itemName = cNNode["ItemName"].asString();
			if(!cNNode["ItemLevel"].isNull())
				itemsObject.cN.itemLevel = cNNode["ItemLevel"].asString();
			if(!cNNode["ItemType"].isNull())
				itemsObject.cN.itemType = cNNode["ItemType"].asString();
				auto allAdvice = cNNode["Advice"]["Advice"];
				for (auto value : allAdvice)
					itemsObject.cN.advice.push_back(value.asString());
				auto allDetails2 = cNNode["Details"]["Detail"];
				for (auto value : allDetails2)
					itemsObject.cN.details2.push_back(value.asString());
			auto eNNode = value["EN"];
			if(!eNNode["ItemName"].isNull())
				itemsObject.eN.itemName = eNNode["ItemName"].asString();
			if(!eNNode["ItemLevel"].isNull())
				itemsObject.eN.itemLevel = eNNode["ItemLevel"].asString();
			if(!eNNode["ItemType"].isNull())
				itemsObject.eN.itemType = eNNode["ItemType"].asString();
				auto allAdvice3 = eNNode["Advice"]["Advice"];
				for (auto value : allAdvice3)
					itemsObject.eN.advice3.push_back(value.asString());
				auto allDetails4 = eNNode["Details"]["Detail"];
				for (auto value : allDetails4)
					itemsObject.eN.details4.push_back(value.asString());
			detailObject.items.push_back(itemsObject);
		}
		auto statistics1Node = value["Statistics"];
		if(!statistics1Node["Warning"].isNull())
			detailObject.statistics1.warning = std::stoi(statistics1Node["Warning"].asString());
		if(!statistics1Node["Error"].isNull())
			detailObject.statistics1.error = std::stoi(statistics1Node["Error"].asString());
		if(!statistics1Node["Total"].isNull())
			detailObject.statistics1.total = std::stoi(statistics1Node["Total"].asString());
		if(!statistics1Node["Info"].isNull())
			detailObject.statistics1.info = std::stoi(statistics1Node["Info"].asString());
		diagnoseResult_.details.push_back(detailObject);
	}
	auto levelNode = diagnoseResultNode["Level"];
	if(!levelNode["Configuration"].isNull())
		diagnoseResult_.level.configuration = levelNode["Configuration"].asString();
	if(!levelNode["Total"].isNull())
		diagnoseResult_.level.total = levelNode["Total"].asString();
	if(!levelNode["Biz"].isNull())
		diagnoseResult_.level.biz = levelNode["Biz"].asString();
	auto statisticsNode = diagnoseResultNode["Statistics"];
	if(!statisticsNode["Warning"].isNull())
		diagnoseResult_.statistics.warning = std::stoi(statisticsNode["Warning"].asString());
	if(!statisticsNode["Error"].isNull())
		diagnoseResult_.statistics.error = std::stoi(statisticsNode["Error"].asString());
	if(!statisticsNode["Total"].isNull())
		diagnoseResult_.statistics.total = std::stoi(statisticsNode["Total"].asString());
	if(!statisticsNode["Info"].isNull())
		diagnoseResult_.statistics.info = std::stoi(statisticsNode["Info"].asString());

}

DiscribeSmartAccessGatewayDiagnosisReportResult::DiagnoseResult DiscribeSmartAccessGatewayDiagnosisReportResult::getDiagnoseResult()const
{
	return diagnoseResult_;
}

