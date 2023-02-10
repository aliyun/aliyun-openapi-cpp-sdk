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

#include <alibabacloud/sas/model/DescribeInstallCodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeInstallCodesResult::DescribeInstallCodesResult() :
	ServiceResult()
{}

DescribeInstallCodesResult::DescribeInstallCodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstallCodesResult::~DescribeInstallCodesResult()
{}

void DescribeInstallCodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstallCodesNode = value["InstallCodes"]["InstallCode"];
	for (auto valueInstallCodesInstallCode : allInstallCodesNode)
	{
		InstallCode installCodesObject;
		if(!valueInstallCodesInstallCode["OnlyImage"].isNull())
			installCodesObject.onlyImage = valueInstallCodesInstallCode["OnlyImage"].asString() == "true";
		if(!valueInstallCodesInstallCode["CaptchaCode"].isNull())
			installCodesObject.captchaCode = valueInstallCodesInstallCode["CaptchaCode"].asString();
		if(!valueInstallCodesInstallCode["GroupId"].isNull())
			installCodesObject.groupId = std::stol(valueInstallCodesInstallCode["GroupId"].asString());
		if(!valueInstallCodesInstallCode["GroupName"].isNull())
			installCodesObject.groupName = valueInstallCodesInstallCode["GroupName"].asString();
		if(!valueInstallCodesInstallCode["ExpiredDate"].isNull())
			installCodesObject.expiredDate = std::stol(valueInstallCodesInstallCode["ExpiredDate"].asString());
		if(!valueInstallCodesInstallCode["VendorName"].isNull())
			installCodesObject.vendorName = valueInstallCodesInstallCode["VendorName"].asString();
		if(!valueInstallCodesInstallCode["Os"].isNull())
			installCodesObject.os = valueInstallCodesInstallCode["Os"].asString();
		if(!valueInstallCodesInstallCode["Tag"].isNull())
			installCodesObject.tag = valueInstallCodesInstallCode["Tag"].asString();
		if(!valueInstallCodesInstallCode["Vendor"].isNull())
			installCodesObject.vendor = std::stoi(valueInstallCodesInstallCode["Vendor"].asString());
		if(!valueInstallCodesInstallCode["ProxyCluster"].isNull())
			installCodesObject.proxyCluster = valueInstallCodesInstallCode["ProxyCluster"].asString();
		installCodes_.push_back(installCodesObject);
	}

}

std::vector<DescribeInstallCodesResult::InstallCode> DescribeInstallCodesResult::getInstallCodes()const
{
	return installCodes_;
}

