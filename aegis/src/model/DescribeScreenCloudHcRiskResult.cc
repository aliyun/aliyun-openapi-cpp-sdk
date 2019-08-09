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

#include <alibabacloud/aegis/model/DescribeScreenCloudHcRiskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenCloudHcRiskResult::DescribeScreenCloudHcRiskResult() :
	ServiceResult()
{}

DescribeScreenCloudHcRiskResult::DescribeScreenCloudHcRiskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenCloudHcRiskResult::~DescribeScreenCloudHcRiskResult()
{}

void DescribeScreenCloudHcRiskResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCloudHcRiskItems = value["CloudHcRiskItems"]["CloudHcRiskItem"];
	for (auto value : allCloudHcRiskItems)
	{
		CloudHcRiskItem cloudHcRiskItemsObject;
		if(!value["Level"].isNull())
			cloudHcRiskItemsObject.level = value["Level"].asString();
		if(!value["CheckItem"].isNull())
			cloudHcRiskItemsObject.checkItem = value["CheckItem"].asString();
		if(!value["AffectCount"].isNull())
			cloudHcRiskItemsObject.affectCount = std::stoi(value["AffectCount"].asString());
		if(!value["Pass"].isNull())
			cloudHcRiskItemsObject.pass = value["Pass"].asString() == "true";
		cloudHcRiskItems_.push_back(cloudHcRiskItemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeScreenCloudHcRiskResult::CloudHcRiskItem> DescribeScreenCloudHcRiskResult::getCloudHcRiskItems()const
{
	return cloudHcRiskItems_;
}

bool DescribeScreenCloudHcRiskResult::getSuccess()const
{
	return success_;
}

