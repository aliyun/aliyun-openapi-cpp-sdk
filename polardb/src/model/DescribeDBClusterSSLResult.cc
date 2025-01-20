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

#include <alibabacloud/polardb/model/DescribeDBClusterSSLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterSSLResult::DescribeDBClusterSSLResult() :
	ServiceResult()
{}

DescribeDBClusterSSLResult::DescribeDBClusterSSLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterSSLResult::~DescribeDBClusterSSLResult()
{}

void DescribeDBClusterSSLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["SSLExpireTime"].isNull())
			itemsObject.sSLExpireTime = valueItemsItem["SSLExpireTime"].asString();
		if(!valueItemsItem["SSLEnabled"].isNull())
			itemsObject.sSLEnabled = valueItemsItem["SSLEnabled"].asString();
		if(!valueItemsItem["SSLConnectionString"].isNull())
			itemsObject.sSLConnectionString = valueItemsItem["SSLConnectionString"].asString();
		if(!valueItemsItem["DBEndpointId"].isNull())
			itemsObject.dBEndpointId = valueItemsItem["DBEndpointId"].asString();
		if(!valueItemsItem["CAType"].isNull())
			itemsObject.cAType = valueItemsItem["CAType"].asString();
		if(!valueItemsItem["ServerCert"].isNull())
			itemsObject.serverCert = valueItemsItem["ServerCert"].asString();
		if(!valueItemsItem["ServerKey"].isNull())
			itemsObject.serverKey = valueItemsItem["ServerKey"].asString();
		if(!valueItemsItem["ClientCACert"].isNull())
			itemsObject.clientCACert = valueItemsItem["ClientCACert"].asString();
		if(!valueItemsItem["ClientCrl"].isNull())
			itemsObject.clientCrl = valueItemsItem["ClientCrl"].asString();
		if(!valueItemsItem["ACL"].isNull())
			itemsObject.aCL = valueItemsItem["ACL"].asString();
		if(!valueItemsItem["SSLAutoRotate"].isNull())
			itemsObject.sSLAutoRotate = valueItemsItem["SSLAutoRotate"].asString();
		auto allAllowedACLs = value["AllowedACLs"]["allowedACLs"];
		for (auto value : allAllowedACLs)
			itemsObject.allowedACLs.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	auto allSupportAdvancedSSLFeatureEndpointTypes = value["SupportAdvancedSSLFeatureEndpointTypes"]["supportAdvancedSSLFeatureEndpointType"];
	for (const auto &item : allSupportAdvancedSSLFeatureEndpointTypes)
		supportAdvancedSSLFeatureEndpointTypes_.push_back(item.asString());
	if(!value["SSLAutoRotate"].isNull())
		sSLAutoRotate_ = value["SSLAutoRotate"].asString();

}

std::vector<std::string> DescribeDBClusterSSLResult::getSupportAdvancedSSLFeatureEndpointTypes()const
{
	return supportAdvancedSSLFeatureEndpointTypes_;
}

std::string DescribeDBClusterSSLResult::getSSLAutoRotate()const
{
	return sSLAutoRotate_;
}

std::vector<DescribeDBClusterSSLResult::Item> DescribeDBClusterSSLResult::getItems()const
{
	return items_;
}

