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
		if(!dataNodeResourcePackagesResourcePackage["ProductCode"].isNull())
			resourcePackageObject.productCode = dataNodeResourcePackagesResourcePackage["ProductCode"].asString();
		if(!dataNodeResourcePackagesResourcePackage["ProductType"].isNull())
			resourcePackageObject.productType = dataNodeResourcePackagesResourcePackage["ProductType"].asString();
		if(!dataNodeResourcePackagesResourcePackage["Name"].isNull())
			resourcePackageObject.name = dataNodeResourcePackagesResourcePackage["Name"].asString();
		auto allPackageTypesNode = allResourcePackagesNode["PackageTypes"]["PackageType"];
		for (auto allResourcePackagesNodePackageTypesPackageType : allPackageTypesNode)
		{
			Data::ResourcePackage::PackageType packageTypesObject;
			if(!allResourcePackagesNodePackageTypesPackageType["Name"].isNull())
				packageTypesObject.name = allResourcePackagesNodePackageTypesPackageType["Name"].asString();
			if(!allResourcePackagesNodePackageTypesPackageType["Code"].isNull())
				packageTypesObject.code = allResourcePackagesNodePackageTypesPackageType["Code"].asString();
			auto allPropertiesNode = allPackageTypesNode["Properties"]["Property"];
			for (auto allPackageTypesNodePropertiesProperty : allPropertiesNode)
			{
				Data::ResourcePackage::PackageType::Property propertiesObject;
				if(!allPackageTypesNodePropertiesProperty["Name"].isNull())
					propertiesObject.name = allPackageTypesNodePropertiesProperty["Name"].asString();
				if(!allPackageTypesNodePropertiesProperty["Value"].isNull())
					propertiesObject.value = allPackageTypesNodePropertiesProperty["Value"].asString();
				packageTypesObject.properties.push_back(propertiesObject);
			}
			auto allSpecificationsNode = allPackageTypesNode["Specifications"]["Specification"];
			for (auto allPackageTypesNodeSpecificationsSpecification : allSpecificationsNode)
			{
				Data::ResourcePackage::PackageType::Specification specificationsObject;
				if(!allPackageTypesNodeSpecificationsSpecification["Name"].isNull())
					specificationsObject.name = allPackageTypesNodeSpecificationsSpecification["Name"].asString();
				if(!allPackageTypesNodeSpecificationsSpecification["Value"].isNull())
					specificationsObject.value = allPackageTypesNodeSpecificationsSpecification["Value"].asString();
				auto allAvailableDurationsNode = allSpecificationsNode["AvailableDurations"]["AvailableDuration"];
				for (auto allSpecificationsNodeAvailableDurationsAvailableDuration : allAvailableDurationsNode)
				{
					Data::ResourcePackage::PackageType::Specification::AvailableDuration availableDurationsObject;
					if(!allSpecificationsNodeAvailableDurationsAvailableDuration["Name"].isNull())
						availableDurationsObject.name = allSpecificationsNodeAvailableDurationsAvailableDuration["Name"].asString();
					if(!allSpecificationsNodeAvailableDurationsAvailableDuration["Value"].isNull())
						availableDurationsObject.value = std::stoi(allSpecificationsNodeAvailableDurationsAvailableDuration["Value"].asString());
					if(!allSpecificationsNodeAvailableDurationsAvailableDuration["Unit"].isNull())
						availableDurationsObject.unit = allSpecificationsNodeAvailableDurationsAvailableDuration["Unit"].asString();
					specificationsObject.availableDurations.push_back(availableDurationsObject);
				}
				packageTypesObject.specifications.push_back(specificationsObject);
			}
			resourcePackageObject.packageTypes.push_back(packageTypesObject);
		}
		data_.resourcePackages.push_back(resourcePackageObject);
	}
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

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

