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

#include <alibabacloud/market/model/DescribeLicenseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeLicenseResult::DescribeLicenseResult() :
	ServiceResult()
{}

DescribeLicenseResult::DescribeLicenseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLicenseResult::~DescribeLicenseResult()
{}

void DescribeLicenseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto licenseNode = value["License"];
	if(!licenseNode["LicenseStatus"].isNull())
		license_.licenseStatus = licenseNode["LicenseStatus"].asString();
	if(!licenseNode["LicenseCode"].isNull())
		license_.licenseCode = licenseNode["LicenseCode"].asString();
	if(!licenseNode["InstanceId"].isNull())
		license_.instanceId = licenseNode["InstanceId"].asString();
	if(!licenseNode["CreateTime"].isNull())
		license_.createTime = licenseNode["CreateTime"].asString();
	if(!licenseNode["ExpiredTime"].isNull())
		license_.expiredTime = licenseNode["ExpiredTime"].asString();
	if(!licenseNode["ActivateTime"].isNull())
		license_.activateTime = licenseNode["ActivateTime"].asString();
	if(!licenseNode["ProductSkuId"].isNull())
		license_.productSkuId = licenseNode["ProductSkuId"].asString();
	if(!licenseNode["ProductCode"].isNull())
		license_.productCode = licenseNode["ProductCode"].asString();
	if(!licenseNode["ProductName"].isNull())
		license_.productName = licenseNode["ProductName"].asString();
	if(!licenseNode["SupplierName"].isNull())
		license_.supplierName = licenseNode["SupplierName"].asString();
	auto allExtendArray = value["ExtendArray"]["LicenseAttribute"];
	for (auto value : allExtendArray)
	{
		License::LicenseAttribute licenseAttributeObject;
		if(!value["Code"].isNull())
			licenseAttributeObject.code = value["Code"].asString();
		if(!value["Value"].isNull())
			licenseAttributeObject.value = value["Value"].asString();
		license_.extendArray.push_back(licenseAttributeObject);
	}
	auto extendInfoNode = licenseNode["ExtendInfo"];
	if(!extendInfoNode["AliUid"].isNull())
		license_.extendInfo.aliUid = std::stol(extendInfoNode["AliUid"].asString());
	if(!extendInfoNode["Email"].isNull())
		license_.extendInfo.email = extendInfoNode["Email"].asString();
	if(!extendInfoNode["Mobile"].isNull())
		license_.extendInfo.mobile = extendInfoNode["Mobile"].asString();
	if(!extendInfoNode["AccountQuantity"].isNull())
		license_.extendInfo.accountQuantity = std::stol(extendInfoNode["AccountQuantity"].asString());

}

DescribeLicenseResult::License DescribeLicenseResult::getLicense()const
{
	return license_;
}

