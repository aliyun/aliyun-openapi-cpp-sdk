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

#include <alibabacloud/market/model/DescribeProductResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeProductResult::DescribeProductResult() :
	ServiceResult()
{}

DescribeProductResult::DescribeProductResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProductResult::~DescribeProductResult()
{}

void DescribeProductResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProductSkus = value["ProductSkus"]["ProductSku"];
	for (auto value : allProductSkus)
	{
		ProductSku productSkusObject;
		if(!value["Name"].isNull())
			productSkusObject.name = value["Name"].asString();
		if(!value["Code"].isNull())
			productSkusObject.code = value["Code"].asString();
		if(!value["ChargeType"].isNull())
			productSkusObject.chargeType = value["ChargeType"].asString();
		if(!value["Constraints"].isNull())
			productSkusObject.constraints = value["Constraints"].asString();
		if(!value["Hidden"].isNull())
			productSkusObject.hidden = value["Hidden"].asString() == "true";
		auto allOrderPeriods = value["OrderPeriods"]["OrderPeriod"];
		for (auto value : allOrderPeriods)
		{
			ProductSku::OrderPeriod orderPeriodsObject;
			if(!value["Name"].isNull())
				orderPeriodsObject.name = value["Name"].asString();
			if(!value["PeriodType"].isNull())
				orderPeriodsObject.periodType = value["PeriodType"].asString();
			productSkusObject.orderPeriods.push_back(orderPeriodsObject);
		}
		auto allModules = value["Modules"]["Module"];
		for (auto value : allModules)
		{
			ProductSku::Module modulesObject;
			if(!value["Id"].isNull())
				modulesObject.id = value["Id"].asString();
			if(!value["Name"].isNull())
				modulesObject.name = value["Name"].asString();
			if(!value["Code"].isNull())
				modulesObject.code = value["Code"].asString();
			auto allProperties = value["Properties"]["Property"];
			for (auto value : allProperties)
			{
				ProductSku::Module::Property propertiesObject;
				if(!value["Name"].isNull())
					propertiesObject.name = value["Name"].asString();
				if(!value["Key"].isNull())
					propertiesObject.key = value["Key"].asString();
				if(!value["ShowType"].isNull())
					propertiesObject.showType = value["ShowType"].asString();
				if(!value["DisplayUnit"].isNull())
					propertiesObject.displayUnit = value["DisplayUnit"].asString();
				auto allPropertyValues = value["PropertyValues"]["PropertyValue"];
				for (auto value : allPropertyValues)
				{
					ProductSku::Module::Property::PropertyValue propertyValuesObject;
					if(!value["Value"].isNull())
						propertyValuesObject.value = value["Value"].asString();
					if(!value["DisplayName"].isNull())
						propertyValuesObject.displayName = value["DisplayName"].asString();
					if(!value["Type"].isNull())
						propertyValuesObject.type = value["Type"].asString();
					if(!value["Min"].isNull())
						propertyValuesObject.min = value["Min"].asString();
					if(!value["Max"].isNull())
						propertyValuesObject.max = value["Max"].asString();
					if(!value["Step"].isNull())
						propertyValuesObject.step = value["Step"].asString();
					if(!value["Remark"].isNull())
						propertyValuesObject.remark = value["Remark"].asString();
					propertiesObject.propertyValues.push_back(propertyValuesObject);
				}
				modulesObject.properties.push_back(propertiesObject);
			}
			productSkusObject.modules.push_back(modulesObject);
		}
		productSkus_.push_back(productSkusObject);
	}
	auto allProductExtras = value["ProductExtras"]["ProductExtra"];
	for (auto value : allProductExtras)
	{
		ProductExtra productExtrasObject;
		if(!value["Key"].isNull())
			productExtrasObject.key = value["Key"].asString();
		if(!value["Values"].isNull())
			productExtrasObject.values = value["Values"].asString();
		if(!value["Label"].isNull())
			productExtrasObject.label = value["Label"].asString();
		if(!value["Order"].isNull())
			productExtrasObject.order = std::stoi(value["Order"].asString());
		if(!value["Type"].isNull())
			productExtrasObject.type = value["Type"].asString();
		productExtras_.push_back(productExtrasObject);
	}
	auto shopInfoNode = value["ShopInfo"];
	if(!shopInfoNode["Id"].isNull())
		shopInfo_.id = std::stol(shopInfoNode["Id"].asString());
	if(!shopInfoNode["Name"].isNull())
		shopInfo_.name = shopInfoNode["Name"].asString();
	if(!shopInfoNode["Emails"].isNull())
		shopInfo_.emails = shopInfoNode["Emails"].asString();
	auto allWangWangs = value["WangWangs"]["WangWang"];
	for (auto value : allWangWangs)
	{
		ShopInfo::WangWang wangWangObject;
		if(!value["UserName"].isNull())
			wangWangObject.userName = value["UserName"].asString();
		if(!value["Remark"].isNull())
			wangWangObject.remark = value["Remark"].asString();
		shopInfo_.wangWangs.push_back(wangWangObject);
	}
		auto allTelephones = shopInfoNode["Telephones"]["Telephone"];
		for (auto value : allTelephones)
			shopInfo_.telephones.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["PicUrl"].isNull())
		picUrl_ = value["PicUrl"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ShortDescription"].isNull())
		shortDescription_ = value["ShortDescription"].asString();
	if(!value["UseCount"].isNull())
		useCount_ = std::stol(value["UseCount"].asString());
	if(!value["Score"].isNull())
		score_ = std::stof(value["Score"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["AuditStatus"].isNull())
		auditStatus_ = value["AuditStatus"].asString();
	if(!value["AuditFailMsg"].isNull())
		auditFailMsg_ = value["AuditFailMsg"].asString();
	if(!value["AuditTime"].isNull())
		auditTime_ = std::stol(value["AuditTime"].asString());
	if(!value["GmtCreated"].isNull())
		gmtCreated_ = std::stol(value["GmtCreated"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());

}

std::string DescribeProductResult::getStatus()const
{
	return status_;
}

std::string DescribeProductResult::getDescription()const
{
	return description_;
}

DescribeProductResult::ShopInfo DescribeProductResult::getShopInfo()const
{
	return shopInfo_;
}

std::vector<DescribeProductResult::ProductSku> DescribeProductResult::getProductSkus()const
{
	return productSkus_;
}

long DescribeProductResult::getUseCount()const
{
	return useCount_;
}

long DescribeProductResult::getGmtModified()const
{
	return gmtModified_;
}

long DescribeProductResult::getGmtCreated()const
{
	return gmtCreated_;
}

std::string DescribeProductResult::getCode()const
{
	return code_;
}

std::string DescribeProductResult::getName()const
{
	return name_;
}

std::string DescribeProductResult::getShortDescription()const
{
	return shortDescription_;
}

std::string DescribeProductResult::getType()const
{
	return type_;
}

float DescribeProductResult::getScore()const
{
	return score_;
}

std::string DescribeProductResult::getAuditStatus()const
{
	return auditStatus_;
}

std::string DescribeProductResult::getAuditFailMsg()const
{
	return auditFailMsg_;
}

std::vector<DescribeProductResult::ProductExtra> DescribeProductResult::getProductExtras()const
{
	return productExtras_;
}

long DescribeProductResult::getAuditTime()const
{
	return auditTime_;
}

std::string DescribeProductResult::getPicUrl()const
{
	return picUrl_;
}

