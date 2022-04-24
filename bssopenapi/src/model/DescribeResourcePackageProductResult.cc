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

#include <alibabacloud/bssopenapi/model/DescribeResourcePackageProductResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribeResourcePackageProductResult::DescribeResourcePackageProductResult() :
	ServiceResult()
{}

DescribeResourcePackageProductResult::DescribeResourcePackageProductResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourcePackageProductResult::~DescribeResourcePackageProductResult()
{}

void DescribeResourcePackageProductResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allResourcePackagesNode = dataNode["ResourcePackages"]["ResourcePackage"];
	for (auto dataNodeResourcePackagesResourcePackage : allResourcePackagesNode)
	{
		Data::ResourcePackage resourcePackageObject;
		if(!dataNodeResourcePackagesResourcePackage["ProductType"].isNull())
			resourcePackageObject.productType = dataNodeResourcePackagesResourcePackage["ProductType"].asString();
		if(!dataNodeResourcePackagesResourcePackage["Name"].isNull())
			resourcePackageObject.name = dataNodeResourcePackagesResourcePackage["Name"].asString();
		if(!dataNodeResourcePackagesResourcePackage["ProductCode"].isNull())
			resourcePackageObject.productCode = dataNodeResourcePackagesResourcePackage["ProductCode"].asString();
		auto allPackageTypesNode = dataNodeResourcePackagesResourcePackage["PackageTypes"]["PackageType"];
		for (auto dataNodeResourcePackagesResourcePackagePackageTypesPackageType : allPackageTypesNode)
		{
			Data::ResourcePackage::PackageType packageTypesObject;
			if(!dataNodeResourcePackagesResourcePackagePackageTypesPackageType["Code"].isNull())
				packageTypesObject.code = dataNodeResourcePackagesResourcePackagePackageTypesPackageType["Code"].asString();
			if(!dataNodeResourcePackagesResourcePackagePackageTypesPackageType["Name"].isNull())
				packageTypesObject.name = dataNodeResourcePackagesResourcePackagePackageTypesPackageType["Name"].asString();
			auto allPropertiesNode = dataNodeResourcePackagesResourcePackagePackageTypesPackageType["Properties"]["Property"];
			for (auto dataNodeResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty : allPropertiesNode)
			{
				Data::ResourcePackage::PackageType::Property propertiesObject;
				if(!dataNodeResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty["Name"].isNull())
					propertiesObject.name = dataNodeResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty["Name"].asString();
				if(!dataNodeResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty["Value"].isNull())
					propertiesObject.value = dataNodeResourcePackagesResourcePackagePackageTypesPackageTypePropertiesProperty["Value"].asString();
				packageTypesObject.properties.push_back(propertiesObject);
			}
			auto allSpecificationsNode = dataNodeResourcePackagesResourcePackagePackageTypesPackageType["Specifications"]["Specification"];
			for (auto dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification : allSpecificationsNode)
			{
				Data::ResourcePackage::PackageType::Specification specificationsObject;
				if(!dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification["Name"].isNull())
					specificationsObject.name = dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification["Name"].asString();
				if(!dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification["Value"].isNull())
					specificationsObject.value = dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification["Value"].asString();
				auto allAvailableDurationsNode = dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecification["AvailableDurations"]["AvailableDuration"];
				for (auto dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration : allAvailableDurationsNode)
				{
					Data::ResourcePackage::PackageType::Specification::AvailableDuration availableDurationsObject;
					if(!dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration["Value"].isNull())
						availableDurationsObject.value = std::stoi(dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration["Value"].asString());
					if(!dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration["Name"].isNull())
						availableDurationsObject.name = dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration["Name"].asString();
					if(!dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration["Unit"].isNull())
						availableDurationsObject.unit = dataNodeResourcePackagesResourcePackagePackageTypesPackageTypeSpecificationsSpecificationAvailableDurationsAvailableDuration["Unit"].asString();
					specificationsObject.availableDurations.push_back(availableDurationsObject);
				}
				packageTypesObject.specifications.push_back(specificationsObject);
			}
			resourcePackageObject.packageTypes.push_back(packageTypesObject);
		}
		data_.resourcePackages.push_back(resourcePackageObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());

}

std::string DescribeResourcePackageProductResult::getMessage()const
{
	return message_;
}

DescribeResourcePackageProductResult::Data DescribeResourcePackageProductResult::getData()const
{
	return data_;
}

long DescribeResourcePackageProductResult::getOrderId()const
{
	return orderId_;
}

std::string DescribeResourcePackageProductResult::getCode()const
{
	return code_;
}

bool DescribeResourcePackageProductResult::getSuccess()const
{
	return success_;
}

