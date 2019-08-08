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

#include <alibabacloud/trademark/model/QueryTradeMarkApplicationsByIntentionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryTradeMarkApplicationsByIntentionResult::QueryTradeMarkApplicationsByIntentionResult() :
	ServiceResult()
{}

QueryTradeMarkApplicationsByIntentionResult::QueryTradeMarkApplicationsByIntentionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTradeMarkApplicationsByIntentionResult::~QueryTradeMarkApplicationsByIntentionResult()
{}

void QueryTradeMarkApplicationsByIntentionResult::parse(const std::string &payload)
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
		if(!value["OrderPrice"].isNull())
			dataObject.orderPrice = std::stof(value["OrderPrice"].asString());
		if(!value["MaterialId"].isNull())
			dataObject.materialId = value["MaterialId"].asString();
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
		if(!value["TotalPrice"].isNull())
			dataObject.totalPrice = std::stof(value["TotalPrice"].asString());
		if(!value["ServicePrice"].isNull())
			dataObject.servicePrice = std::stof(value["ServicePrice"].asString());
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

int QueryTradeMarkApplicationsByIntentionResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryTradeMarkApplicationsByIntentionResult::getPageSize()const
{
	return pageSize_;
}

int QueryTradeMarkApplicationsByIntentionResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryTradeMarkApplicationsByIntentionResult::TmProduces> QueryTradeMarkApplicationsByIntentionResult::getData()const
{
	return data_;
}

int QueryTradeMarkApplicationsByIntentionResult::getTotalItemNum()const
{
	return totalItemNum_;
}

