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
	auto allResourcePackages = value["ResourcePackages"]["ResourcePackage"];
	for (auto value : allResourcePackages)
	{
		Data::ResourcePackage resourcePackageObject;
		if(!value["ProductCode"].isNull())
			resourcePackageObject.productCode = value["ProductCode"].asString();
		if(!value["ProductType"].isNull())
			resourcePackageObject.productType = value["ProductType"].asString();
		if(!value["Name"].isNull())
			resourcePackageObject.name = value["Name"].asString();
		auto allPackageTypes = value["PackageTypes"]["PackageType"];
		for (auto value : allPackageTypes)
		{
			Data::ResourcePackage::PackageType packageTypesObject;
			if(!value["Name"].isNull())
				packageTypesObject.name = value["Name"].asString();
			if(!value["Code"].isNull())
				packageTypesObject.code = value["Code"].asString();
			auto allProperties = value["Properties"]["Property"];
			for (auto value : allProperties)
			{
				Data::ResourcePackage::PackageType::Property propertiesObject;
				if(!value["Name"].isNull())
					propertiesObject.name = value["Name"].asString();
				if(!value["Value"].isNull())
					propertiesObject.value = value["Value"].asString();
				packageTypesObject.properties.push_back(propertiesObject);
			}
			auto allSpecifications = value["Specifications"]["Specification"];
			for (auto value : allSpecifications)
			{
				Data::ResourcePackage::PackageType::Specification specificationsObject;
				if(!value["Name"].isNull())
					specificationsObject.name = value["Name"].asString();
				if(!value["Value"].isNull())
					specificationsObject.value = value["Value"].asString();
				auto allAvailableDurations = value["AvailableDurations"]["AvailableDuration"];
				for (auto value : allAvailableDurations)
				{
					Data::ResourcePackage::PackageType::Specification::AvailableDuration availableDurationsObject;
					if(!value["Name"].isNull())
						availableDurationsObject.name = value["Name"].asString();
					if(!value["Value"].isNull())
						availableDurationsObject.value = std::stoi(value["Value"].asString());
					if(!value["Unit"].isNull())
						availableDurationsObject.unit = value["Unit"].asString();
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

