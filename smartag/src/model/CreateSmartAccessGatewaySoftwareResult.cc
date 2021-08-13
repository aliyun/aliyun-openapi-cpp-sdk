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

#include <alibabacloud/smartag/model/CreateSmartAccessGatewaySoftwareResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

CreateSmartAccessGatewaySoftwareResult::CreateSmartAccessGatewaySoftwareResult() :
	ServiceResult()
{}

CreateSmartAccessGatewaySoftwareResult::CreateSmartAccessGatewaySoftwareResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSmartAccessGatewaySoftwareResult::~CreateSmartAccessGatewaySoftwareResult()
{}

void CreateSmartAccessGatewaySoftwareResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();
	if(!value["SmartAGId"].isNull())
		smartAGId_ = value["SmartAGId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string CreateSmartAccessGatewaySoftwareResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string CreateSmartAccessGatewaySoftwareResult::getOrderId()const
{
	return orderId_;
}

std::string CreateSmartAccessGatewaySoftwareResult::getSmartAGId()const
{
	return smartAGId_;
}

