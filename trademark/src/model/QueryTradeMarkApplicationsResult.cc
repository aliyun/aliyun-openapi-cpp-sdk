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

#include <alibabacloud/trademark/model/QueryTradeMarkApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryTradeMarkApplicationsResult::QueryTradeMarkApplicationsResult() :
	ServiceResult()
{}

QueryTradeMarkApplicationsResult::QueryTradeMarkApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTradeMarkApplicationsResult::~QueryTradeMarkApplicationsResult()
{}

void QueryTradeMarkApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["TmProduces"];
	for (auto value : allData)
	{
		TmProduces dataObject;
		if(!value["BizId"].isNull())
			dataObject.bizId = value["BizId"].asString();
		if(!value["OrderId"].isNull())
			dataObject.orderId = value["OrderId"].asString();
		if(!value["MaterialName"].isNull())
			dataObject.materialName = value["MaterialName"].asString();
		if(!value["TmIcon"].isNull())
			dataObject.tmIcon = value["TmIcon"].asString();
		if(!value["TmName"].isNull())
			dataObject.tmName = value["TmName"].asString();
		if(!value["TmNumber"].isNull())
			dataObject.tmNumber = value["TmNumber"].asString();
		if(!value["CreateTime"].isNull())
			dataObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["Type"].isNull())
			dataObject.type = std::stoi(value["Type"].asString());
		if(!value["Status"].isNull())
			dataObject.status = std::stoi(value["Status"].asString());
		if(!value["UserId"].isNull())
			dataObject.userId = value["UserId"].asString();
		if(!value["OrderPrice"].isNull())
			dataObject.orderPrice = std::stof(value["OrderPrice"].asString());
		if(!value["MaterialId"].isNull())
			dataObject.materialId = std::stol(value["MaterialId"].asString());
		if(!value["LoaUrl"].isNull())
			dataObject.loaUrl = value["LoaUrl"].asString();
		if(!value["Note"].isNull())
			dataObject.note = value["Note"].asString();
		if(!value["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(value["UpdateTime"].asString());
		if(!value["SupplementStatus"].isNull())
			dataObject.supplementStatus = std::stoi(value["SupplementStatus"].asString());
		if(!value["SupplementId"].isNull())
			dataObject.supplementId = std::stol(value["SupplementId"].asString());
		auto allThirdClassification = value["ThirdClassification"]["ThirdClassifications"];
		for (auto value : allThirdClassification)
		{
			TmProduces::ThirdClassifications thirdClassificationObject;
			if(!value["ClassificationCode"].isNull())
				thirdClassificationObject.classificationCode = value["ClassificationCode"].asString();
			if(!value["ClassificationName"].isNull())
				thirdClassificationObject.classificationName = value["ClassificationName"].asString();
			dataObject.thirdClassification.push_back(thirdClassificationObject);
		}
		auto firstClassificationNode = value["FirstClassification"];
		if(!firstClassificationNode["ClassificationCode"].isNull())
			dataObject.firstClassification.classificationCode = firstClassificationNode["ClassificationCode"].asString();
		if(!firstClassificationNode["ClassificationName"].isNull())
			dataObject.firstClassification.classificationName = firstClassificationNode["ClassificationName"].asString();
		auto renewResponseNode = value["RenewResponse"];
		if(!renewResponseNode["Name"].isNull())
			dataObject.renewResponse.name = renewResponseNode["Name"].asString();
		if(!renewResponseNode["EngName"].isNull())
			dataObject.renewResponse.engName = renewResponseNode["EngName"].asString();
		if(!renewResponseNode["Address"].isNull())
			dataObject.renewResponse.address = renewResponseNode["Address"].asString();
		if(!renewResponseNode["EngAddress"].isNull())
			dataObject.renewResponse.engAddress = renewResponseNode["EngAddress"].asString();
		if(!renewResponseNode["RegisterTime"].isNull())
			dataObject.renewResponse.registerTime = std::stol(renewResponseNode["RegisterTime"].asString());
		if(!renewResponseNode["SubmitSbjtime"].isNull())
			dataObject.renewResponse.submitSbjtime = std::stol(renewResponseNode["SubmitSbjtime"].asString());
		auto allFlags = value["Flags"]["Flags"];
		for (auto value : allFlags)
			dataObject.flags.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());

}

int QueryTradeMarkApplicationsResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryTradeMarkApplicationsResult::getPageSize()const
{
	return pageSize_;
}

int QueryTradeMarkApplicationsResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryTradeMarkApplicationsResult::TmProduces> QueryTradeMarkApplicationsResult::getData()const
{
	return data_;
}

int QueryTradeMarkApplicationsResult::getTotalItemNum()const
{
	return totalItemNum_;
}

