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

#include <alibabacloud/trademark/model/DescirbeCombineTrademarkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

DescirbeCombineTrademarkResult::DescirbeCombineTrademarkResult() :
	ServiceResult()
{}

DescirbeCombineTrademarkResult::DescirbeCombineTrademarkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescirbeCombineTrademarkResult::~DescirbeCombineTrademarkResult()
{}

void DescirbeCombineTrademarkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Trademark"];
	for (auto valueDataTrademark : allDataNode)
	{
		Trademark dataObject;
		if(!valueDataTrademark["IndexId"].isNull())
			dataObject.indexId = valueDataTrademark["IndexId"].asString();
		if(!valueDataTrademark["Name"].isNull())
			dataObject.name = valueDataTrademark["Name"].asString();
		if(!valueDataTrademark["RegistrationNumber"].isNull())
			dataObject.registrationNumber = valueDataTrademark["RegistrationNumber"].asString();
		if(!valueDataTrademark["Classification"].isNull())
			dataObject.classification = valueDataTrademark["Classification"].asString();
		if(!valueDataTrademark["ApplyDate"].isNull())
			dataObject.applyDate = valueDataTrademark["ApplyDate"].asString();
		if(!valueDataTrademark["OwnerName"].isNull())
			dataObject.ownerName = valueDataTrademark["OwnerName"].asString();
		if(!valueDataTrademark["OwnerEnName"].isNull())
			dataObject.ownerEnName = valueDataTrademark["OwnerEnName"].asString();
		if(!valueDataTrademark["Image"].isNull())
			dataObject.image = valueDataTrademark["Image"].asString();
		if(!valueDataTrademark["PreAnnNumber"].isNull())
			dataObject.preAnnNumber = valueDataTrademark["PreAnnNumber"].asString();
		if(!valueDataTrademark["RegAnnNumber"].isNull())
			dataObject.regAnnNumber = valueDataTrademark["RegAnnNumber"].asString();
		if(!valueDataTrademark["PreAnnDate"].isNull())
			dataObject.preAnnDate = valueDataTrademark["PreAnnDate"].asString();
		if(!valueDataTrademark["RegAnnDate"].isNull())
			dataObject.regAnnDate = valueDataTrademark["RegAnnDate"].asString();
		if(!valueDataTrademark["LawFinalStatus"].isNull())
			dataObject.lawFinalStatus = valueDataTrademark["LawFinalStatus"].asString();
		if(!valueDataTrademark["LastProcedureStatus"].isNull())
			dataObject.lastProcedureStatus = valueDataTrademark["LastProcedureStatus"].asString();
		if(!valueDataTrademark["Share"].isNull())
			dataObject.share = valueDataTrademark["Share"].asString();
		if(!valueDataTrademark["OwnerAddress"].isNull())
			dataObject.ownerAddress = valueDataTrademark["OwnerAddress"].asString();
		if(!valueDataTrademark["OwnerEnAddress"].isNull())
			dataObject.ownerEnAddress = valueDataTrademark["OwnerEnAddress"].asString();
		if(!valueDataTrademark["ExclusiveDateLimit"].isNull())
			dataObject.exclusiveDateLimit = valueDataTrademark["ExclusiveDateLimit"].asString();
		if(!valueDataTrademark["Agency"].isNull())
			dataObject.agency = valueDataTrademark["Agency"].asString();
		if(!valueDataTrademark["ProductDescription"].isNull())
			dataObject.productDescription = valueDataTrademark["ProductDescription"].asString();
		if(!valueDataTrademark["SimilarGroup"].isNull())
			dataObject.similarGroup = valueDataTrademark["SimilarGroup"].asString();
		if(!valueDataTrademark["RegistrationType"].isNull())
			dataObject.registrationType = valueDataTrademark["RegistrationType"].asString();
		if(!valueDataTrademark["OnSale"].isNull())
			dataObject.onSale = std::stoi(valueDataTrademark["OnSale"].asString());
		if(!valueDataTrademark["Status"].isNull())
			dataObject.status = valueDataTrademark["Status"].asString();
		if(!valueDataTrademark["PriorityDate"].isNull())
			dataObject.priorityDate = valueDataTrademark["PriorityDate"].asString();
		if(!valueDataTrademark["IntlRegDate"].isNull())
			dataObject.intlRegDate = valueDataTrademark["IntlRegDate"].asString();
		if(!valueDataTrademark["SubsequentDesignationDate"].isNull())
			dataObject.subsequentDesignationDate = valueDataTrademark["SubsequentDesignationDate"].asString();
		if(!valueDataTrademark["FirstAnnoNumber"].isNull())
			dataObject.firstAnnoNumber = valueDataTrademark["FirstAnnoNumber"].asString();
		if(!valueDataTrademark["FirstAnnoType"].isNull())
			dataObject.firstAnnoType = valueDataTrademark["FirstAnnoType"].asString();
		if(!valueDataTrademark["SecondAnnoNumber"].isNull())
			dataObject.secondAnnoNumber = valueDataTrademark["SecondAnnoNumber"].asString();
		if(!valueDataTrademark["SecondAnnoType"].isNull())
			dataObject.secondAnnoType = valueDataTrademark["SecondAnnoType"].asString();
		auto allAnnouncementListNode = allDataNode["AnnouncementList"]["AnnouncementListItem"];
		for (auto allDataNodeAnnouncementListAnnouncementListItem : allAnnouncementListNode)
		{
			Trademark::AnnouncementListItem announcementListObject;
			if(!allDataNodeAnnouncementListAnnouncementListItem["AnnNumber"].isNull())
				announcementListObject.annNumber = allDataNodeAnnouncementListAnnouncementListItem["AnnNumber"].asString();
			if(!allDataNodeAnnouncementListAnnouncementListItem["AnnTypeCode"].isNull())
				announcementListObject.annTypeCode = allDataNodeAnnouncementListAnnouncementListItem["AnnTypeCode"].asString();
			if(!allDataNodeAnnouncementListAnnouncementListItem["AnnTypeName"].isNull())
				announcementListObject.annTypeName = allDataNodeAnnouncementListAnnouncementListItem["AnnTypeName"].asString();
			if(!allDataNodeAnnouncementListAnnouncementListItem["AnnDate"].isNull())
				announcementListObject.annDate = allDataNodeAnnouncementListAnnouncementListItem["AnnDate"].asString();
			if(!allDataNodeAnnouncementListAnnouncementListItem["ImageUrl"].isNull())
				announcementListObject.imageUrl = allDataNodeAnnouncementListAnnouncementListItem["ImageUrl"].asString();
			if(!allDataNodeAnnouncementListAnnouncementListItem["OriginalImageUrl"].isNull())
				announcementListObject.originalImageUrl = allDataNodeAnnouncementListAnnouncementListItem["OriginalImageUrl"].asString();
			dataObject.announcementList.push_back(announcementListObject);
		}
		auto allProceduresNode = allDataNode["Procedures"]["ProcedureList"];
		for (auto allDataNodeProceduresProcedureList : allProceduresNode)
		{
			Trademark::ProcedureList proceduresObject;
			if(!allDataNodeProceduresProcedureList["ProcedureCode"].isNull())
				proceduresObject.procedureCode = allDataNodeProceduresProcedureList["ProcedureCode"].asString();
			if(!allDataNodeProceduresProcedureList["ProcedureName"].isNull())
				proceduresObject.procedureName = allDataNodeProceduresProcedureList["ProcedureName"].asString();
			if(!allDataNodeProceduresProcedureList["ProcedureStep"].isNull())
				proceduresObject.procedureStep = allDataNodeProceduresProcedureList["ProcedureStep"].asString();
			if(!allDataNodeProceduresProcedureList["ProcedureResult"].isNull())
				proceduresObject.procedureResult = allDataNodeProceduresProcedureList["ProcedureResult"].asString();
			if(!allDataNodeProceduresProcedureList["ProcedureDate"].isNull())
				proceduresObject.procedureDate = allDataNodeProceduresProcedureList["ProcedureDate"].asString();
			dataObject.procedures.push_back(proceduresObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNumber"].isNull())
		totalItemNumber_ = std::stoi(value["TotalItemNumber"].asString());
	if(!value["CurrentPageNumber"].isNull())
		currentPageNumber_ = std::stoi(value["CurrentPageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNumber"].isNull())
		totalPageNumber_ = std::stoi(value["TotalPageNumber"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

}

int DescirbeCombineTrademarkResult::getTotalItemNumber()const
{
	return totalItemNumber_;
}

bool DescirbeCombineTrademarkResult::getPrePage()const
{
	return prePage_;
}

int DescirbeCombineTrademarkResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescirbeCombineTrademarkResult::Trademark> DescirbeCombineTrademarkResult::getData()const
{
	return data_;
}

int DescirbeCombineTrademarkResult::getCurrentPageNumber()const
{
	return currentPageNumber_;
}

int DescirbeCombineTrademarkResult::getTotalPageNumber()const
{
	return totalPageNumber_;
}

bool DescirbeCombineTrademarkResult::getNextPage()const
{
	return nextPage_;
}

