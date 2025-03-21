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

#include <alibabacloud/eiam/model/GetInstanceLicenseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetInstanceLicenseResult::GetInstanceLicenseResult() :
	ServiceResult()
{}

GetInstanceLicenseResult::GetInstanceLicenseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceLicenseResult::~GetInstanceLicenseResult()
{}

void GetInstanceLicenseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto licenseNode = value["License"];
	if(!licenseNode["LicenseId"].isNull())
		license_.licenseId = licenseNode["LicenseId"].asString();
	if(!licenseNode["LicenseStatus"].isNull())
		license_.licenseStatus = licenseNode["LicenseStatus"].asString();
	if(!licenseNode["LicenseChargeType"].isNull())
		license_.licenseChargeType = licenseNode["LicenseChargeType"].asString();
	if(!licenseNode["LicenseConfigJson"].isNull())
		license_.licenseConfigJson = licenseNode["LicenseConfigJson"].asString();
	if(!licenseNode["LicenseCreateTime"].isNull())
		license_.licenseCreateTime = std::stol(licenseNode["LicenseCreateTime"].asString());
	if(!licenseNode["PurchaseChannel"].isNull())
		license_.purchaseChannel = licenseNode["PurchaseChannel"].asString();
	if(!licenseNode["PurchaseInstanceId"].isNull())
		license_.purchaseInstanceId = licenseNode["PurchaseInstanceId"].asString();
	if(!licenseNode["Edition"].isNull())
		license_.edition = licenseNode["Edition"].asString();
	if(!licenseNode["UserQuota"].isNull())
		license_.userQuota = std::stol(licenseNode["UserQuota"].asString());
	if(!licenseNode["StartTime"].isNull())
		license_.startTime = std::stol(licenseNode["StartTime"].asString());
	if(!licenseNode["EndTime"].isNull())
		license_.endTime = std::stol(licenseNode["EndTime"].asString());

}

GetInstanceLicenseResult::License GetInstanceLicenseResult::getLicense()const
{
	return license_;
}

