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

#include <alibabacloud/market/model/DescribeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeInstanceResult::DescribeInstanceResult() :
	ServiceResult()
{}

DescribeInstanceResult::DescribeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceResult::~DescribeInstanceResult()
{}

void DescribeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModules = value["Modules"]["Module"];
	for (auto value : allModules)
	{
		Module modulesObject;
		if(!value["Id"].isNull())
			modulesObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			modulesObject.name = value["Name"].asString();
		if(!value["Code"].isNull())
			modulesObject.code = value["Code"].asString();
		auto allProperties = value["Properties"]["Property"];
		for (auto value : allProperties)
		{
			Module::Property propertiesObject;
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
				Module::Property::PropertyValue propertyValuesObject;
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
		modules_.push_back(modulesObject);
	}
	auto relationalDataNode = value["RelationalData"];
	if(!relationalDataNode["ServiceStatus"].isNull())
		relationalData_.serviceStatus = relationalDataNode["ServiceStatus"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = std::stol(value["InstanceId"].asString());
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());
	if(!value["SupplierName"].isNull())
		supplierName_ = value["SupplierName"].asString();
	if(!value["ProductCode"].isNull())
		productCode_ = value["ProductCode"].asString();
	if(!value["ProductSkuCode"].isNull())
		productSkuCode_ = value["ProductSkuCode"].asString();
	if(!value["ProductName"].isNull())
		productName_ = value["ProductName"].asString();
	if(!value["ProductType"].isNull())
		productType_ = value["ProductType"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["BeganOn"].isNull())
		beganOn_ = std::stol(value["BeganOn"].asString());
	if(!value["EndOn"].isNull())
		endOn_ = std::stol(value["EndOn"].asString());
	if(!value["CreatedOn"].isNull())
		createdOn_ = std::stol(value["CreatedOn"].asString());
	if(!value["ExtendJson"].isNull())
		extendJson_ = value["ExtendJson"].asString();
	if(!value["HostJson"].isNull())
		hostJson_ = value["HostJson"].asString();
	if(!value["AppJson"].isNull())
		appJson_ = value["AppJson"].asString();
	if(!value["ComponentJson"].isNull())
		componentJson_ = value["ComponentJson"].asString();
	if(!value["Constraints"].isNull())
		constraints_ = value["Constraints"].asString();

}

std::string DescribeInstanceResult::getStatus()const
{
	return status_;
}

std::string DescribeInstanceResult::getProductName()const
{
	return productName_;
}

long DescribeInstanceResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeInstanceResult::getProductCode()const
{
	return productCode_;
}

long DescribeInstanceResult::getEndOn()const
{
	return endOn_;
}

std::vector<DescribeInstanceResult::Module> DescribeInstanceResult::getModules()const
{
	return modules_;
}

DescribeInstanceResult::RelationalData DescribeInstanceResult::getRelationalData()const
{
	return relationalData_;
}

std::string DescribeInstanceResult::getProductType()const
{
	return productType_;
}

std::string DescribeInstanceResult::getAppJson()const
{
	return appJson_;
}

long DescribeInstanceResult::getOrderId()const
{
	return orderId_;
}

std::string DescribeInstanceResult::getConstraints()const
{
	return constraints_;
}

std::string DescribeInstanceResult::getExtendJson()const
{
	return extendJson_;
}

std::string DescribeInstanceResult::getSupplierName()const
{
	return supplierName_;
}

std::string DescribeInstanceResult::getComponentJson()const
{
	return componentJson_;
}

std::string DescribeInstanceResult::getProductSkuCode()const
{
	return productSkuCode_;
}

long DescribeInstanceResult::getCreatedOn()const
{
	return createdOn_;
}

std::string DescribeInstanceResult::getHostJson()const
{
	return hostJson_;
}

long DescribeInstanceResult::getBeganOn()const
{
	return beganOn_;
}

