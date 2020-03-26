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
	auto allProductSkusNode = value["ProductSkus"]["ProductSku"];
	for (auto valueProductSkusProductSku : allProductSkusNode)
	{
		ProductSku productSkusObject;
		if(!valueProductSkusProductSku["Name"].isNull())
			productSkusObject.name = valueProductSkusProductSku["Name"].asString();
		if(!valueProductSkusProductSku["Code"].isNull())
			productSkusObject.code = valueProductSkusProductSku["Code"].asString();
		if(!valueProductSkusProductSku["ChargeType"].isNull())
			productSkusObject.chargeType = valueProductSkusProductSku["ChargeType"].asString();
		if(!valueProductSkusProductSku["Constraints"].isNull())
			productSkusObject.constraints = valueProductSkusProductSku["Constraints"].asString();
		if(!valueProductSkusProductSku["Hidden"].isNull())
			productSkusObject.hidden = valueProductSkusProductSku["Hidden"].asString() == "true";
		auto allOrderPeriodsNode = allProductSkusNode["OrderPeriods"]["OrderPeriod"];
		for (auto allProductSkusNodeOrderPeriodsOrderPeriod : allOrderPeriodsNode)
		{
			ProductSku::OrderPeriod orderPeriodsObject;
			if(!allProductSkusNodeOrderPeriodsOrderPeriod["Name"].isNull())
				orderPeriodsObject.name = allProductSkusNodeOrderPeriodsOrderPeriod["Name"].asString();
			if(!allProductSkusNodeOrderPeriodsOrderPeriod["PeriodType"].isNull())
				orderPeriodsObject.periodType = allProductSkusNodeOrderPeriodsOrderPeriod["PeriodType"].asString();
			productSkusObject.orderPeriods.push_back(orderPeriodsObject);
		}
		auto allModulesNode = allProductSkusNode["Modules"]["Module"];
		for (auto allProductSkusNodeModulesModule : allModulesNode)
		{
			ProductSku::Module modulesObject;
			if(!allProductSkusNodeModulesModule["Id"].isNull())
				modulesObject.id = allProductSkusNodeModulesModule["Id"].asString();
			if(!allProductSkusNodeModulesModule["Name"].isNull())
				modulesObject.name = allProductSkusNodeModulesModule["Name"].asString();
			if(!allProductSkusNodeModulesModule["Code"].isNull())
				modulesObject.code = allProductSkusNodeModulesModule["Code"].asString();
			auto allPropertiesNode = allModulesNode["Properties"]["Property"];
			for (auto allModulesNodePropertiesProperty : allPropertiesNode)
			{
				ProductSku::Module::Property propertiesObject;
				if(!allModulesNodePropertiesProperty["Name"].isNull())
					propertiesObject.name = allModulesNodePropertiesProperty["Name"].asString();
				if(!allModulesNodePropertiesProperty["Key"].isNull())
					propertiesObject.key = allModulesNodePropertiesProperty["Key"].asString();
				if(!allModulesNodePropertiesProperty["ShowType"].isNull())
					propertiesObject.showType = allModulesNodePropertiesProperty["ShowType"].asString();
				if(!allModulesNodePropertiesProperty["DisplayUnit"].isNull())
					propertiesObject.displayUnit = allModulesNodePropertiesProperty["DisplayUnit"].asString();
				auto allPropertyValuesNode = allPropertiesNode["PropertyValues"]["PropertyValue"];
				for (auto allPropertiesNodePropertyValuesPropertyValue : allPropertyValuesNode)
				{
					ProductSku::Module::Property::PropertyValue propertyValuesObject;
					if(!allPropertiesNodePropertyValuesPropertyValue["Value"].isNull())
						propertyValuesObject.value = allPropertiesNodePropertyValuesPropertyValue["Value"].asString();
					if(!allPropertiesNodePropertyValuesPropertyValue["DisplayName"].isNull())
						propertyValuesObject.displayName = allPropertiesNodePropertyValuesPropertyValue["DisplayName"].asString();
					if(!allPropertiesNodePropertyValuesPropertyValue["Type"].isNull())
						propertyValuesObject.type = allPropertiesNodePropertyValuesPropertyValue["Type"].asString();
					if(!allPropertiesNodePropertyValuesPropertyValue["Min"].isNull())
						propertyValuesObject.min = allPropertiesNodePropertyValuesPropertyValue["Min"].asString();
					if(!allPropertiesNodePropertyValuesPropertyValue["Max"].isNull())
						propertyValuesObject.max = allPropertiesNodePropertyValuesPropertyValue["Max"].asString();
					if(!allPropertiesNodePropertyValuesPropertyValue["Step"].isNull())
						propertyValuesObject.step = allPropertiesNodePropertyValuesPropertyValue["Step"].asString();
					if(!allPropertiesNodePropertyValuesPropertyValue["Remark"].isNull())
						propertyValuesObject.remark = allPropertiesNodePropertyValuesPropertyValue["Remark"].asString();
					propertiesObject.propertyValues.push_back(propertyValuesObject);
				}
				modulesObject.properties.push_back(propertiesObject);
			}
			productSkusObject.modules.push_back(modulesObject);
		}
		productSkus_.push_back(productSkusObject);
	}
	auto allProductExtrasNode = value["ProductExtras"]["ProductExtra"];
	for (auto valueProductExtrasProductExtra : allProductExtrasNode)
	{
		ProductExtra productExtrasObject;
		if(!valueProductExtrasProductExtra["Key"].isNull())
			productExtrasObject.key = valueProductExtrasProductExtra["Key"].asString();
		if(!valueProductExtrasProductExtra["Values"].isNull())
			productExtrasObject.values = valueProductExtrasProductExtra["Values"].asString();
		if(!valueProductExtrasProductExtra["Label"].isNull())
			productExtrasObject.label = valueProductExtrasProductExtra["Label"].asString();
		if(!valueProductExtrasProductExtra["Order"].isNull())
			productExtrasObject.order = std::stoi(valueProductExtrasProductExtra["Order"].asString());
		if(!valueProductExtrasProductExtra["Type"].isNull())
			productExtrasObject.type = valueProductExtrasProductExtra["Type"].asString();
		productExtras_.push_back(productExtrasObject);
	}
	auto shopInfoNode = value["ShopInfo"];
	if(!shopInfoNode["Id"].isNull())
		shopInfo_.id = std::stol(shopInfoNode["Id"].asString());
	if(!shopInfoNode["Name"].isNull())
		shopInfo_.name = shopInfoNode["Name"].asString();
	if(!shopInfoNode["Emails"].isNull())
		shopInfo_.emails = shopInfoNode["Emails"].asString();
	auto allWangWangsNode = shopInfoNode["WangWangs"]["WangWang"];
	for (auto shopInfoNodeWangWangsWangWang : allWangWangsNode)
	{
		ShopInfo::WangWang wangWangObject;
		if(!shopInfoNodeWangWangsWangWang["UserName"].isNull())
			wangWangObject.userName = shopInfoNodeWangWangsWangWang["UserName"].asString();
		if(!shopInfoNodeWangWangsWangWang["Remark"].isNull())
			wangWangObject.remark = shopInfoNodeWangWangsWangWang["Remark"].asString();
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
	if(!value["SupplierPk"].isNull())
		supplierPk_ = std::stol(value["SupplierPk"].asString());
	if(!value["FrontCategoryId"].isNull())
		frontCategoryId_ = std::stol(value["FrontCategoryId"].asString());

}

std::string DescribeProductResult::getStatus()const
{
	return status_;
}

long DescribeProductResult::getFrontCategoryId()const
{
	return frontCategoryId_;
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

long DescribeProductResult::getSupplierPk()const
{
	return supplierPk_;
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

