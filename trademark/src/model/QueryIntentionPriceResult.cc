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

#include <alibabacloud/trademark/model/QueryIntentionPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryIntentionPriceResult::QueryIntentionPriceResult() :
	ServiceResult()
{}

QueryIntentionPriceResult::QueryIntentionPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryIntentionPriceResult::~QueryIntentionPriceResult()
{}

void QueryIntentionPriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["TmProduces"];
	for (auto valueDataTmProduces : allDataNode)
	{
		TmProduces dataObject;
		if(!valueDataTmProduces["BizId"].isNull())
			dataObject.bizId = valueDataTmProduces["BizId"].asString();
		if(!valueDataTmProduces["MaterialName"].isNull())
			dataObject.materialName = valueDataTmProduces["MaterialName"].asString();
		if(!valueDataTmProduces["TmIcon"].isNull())
			dataObject.tmIcon = valueDataTmProduces["TmIcon"].asString();
		if(!valueDataTmProduces["TmName"].isNull())
			dataObject.tmName = valueDataTmProduces["TmName"].asString();
		if(!valueDataTmProduces["TmNumber"].isNull())
			dataObject.tmNumber = valueDataTmProduces["TmNumber"].asString();
		if(!valueDataTmProduces["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataTmProduces["CreateTime"].asString());
		if(!valueDataTmProduces["Type"].isNull())
			dataObject.type = std::stoi(valueDataTmProduces["Type"].asString());
		if(!valueDataTmProduces["Status"].isNull())
			dataObject.status = std::stoi(valueDataTmProduces["Status"].asString());
		if(!valueDataTmProduces["OrderPrice"].isNull())
			dataObject.orderPrice = std::stof(valueDataTmProduces["OrderPrice"].asString());
		if(!valueDataTmProduces["MaterialId"].isNull())
			dataObject.materialId = valueDataTmProduces["MaterialId"].asString();
		if(!valueDataTmProduces["LoaUrl"].isNull())
			dataObject.loaUrl = valueDataTmProduces["LoaUrl"].asString();
		if(!valueDataTmProduces["Note"].isNull())
			dataObject.note = valueDataTmProduces["Note"].asString();
		if(!valueDataTmProduces["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataTmProduces["UpdateTime"].asString());
		if(!valueDataTmProduces["SupplementStatus"].isNull())
			dataObject.supplementStatus = std::stoi(valueDataTmProduces["SupplementStatus"].asString());
		if(!valueDataTmProduces["SupplementId"].isNull())
			dataObject.supplementId = std::stol(valueDataTmProduces["SupplementId"].asString());
		if(!valueDataTmProduces["TotalPrice"].isNull())
			dataObject.totalPrice = std::stof(valueDataTmProduces["TotalPrice"].asString());
		if(!valueDataTmProduces["ServicePrice"].isNull())
			dataObject.servicePrice = std::stof(valueDataTmProduces["ServicePrice"].asString());
		auto allThirdClassificationNode = allDataNode["ThirdClassification"]["ThirdClassifications"];
		for (auto allDataNodeThirdClassificationThirdClassifications : allThirdClassificationNode)
		{
			TmProduces::ThirdClassifications thirdClassificationObject;
			if(!allDataNodeThirdClassificationThirdClassifications["ClassificationCode"].isNull())
				thirdClassificationObject.classificationCode = allDataNodeThirdClassificationThirdClassifications["ClassificationCode"].asString();
			if(!allDataNodeThirdClassificationThirdClassifications["ClassificationName"].isNull())
				thirdClassificationObject.classificationName = allDataNodeThirdClassificationThirdClassifications["ClassificationName"].asString();
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

int QueryIntentionPriceResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryIntentionPriceResult::getPageSize()const
{
	return pageSize_;
}

int QueryIntentionPriceResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryIntentionPriceResult::TmProduces> QueryIntentionPriceResult::getData()const
{
	return data_;
}

int QueryIntentionPriceResult::getTotalItemNum()const
{
	return totalItemNum_;
}

