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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCloudHcRiskItemsNode = value["CloudHcRiskItems"]["CloudHcRiskItem"];
	for (auto valueCloudHcRiskItemsCloudHcRiskItem : allCloudHcRiskItemsNode)
	{
		CloudHcRiskItem cloudHcRiskItemsObject;
		if(!valueCloudHcRiskItemsCloudHcRiskItem["Level"].isNull())
			cloudHcRiskItemsObject.level = valueCloudHcRiskItemsCloudHcRiskItem["Level"].asString();
		if(!valueCloudHcRiskItemsCloudHcRiskItem["CheckItem"].isNull())
			cloudHcRiskItemsObject.checkItem = valueCloudHcRiskItemsCloudHcRiskItem["CheckItem"].asString();
		if(!valueCloudHcRiskItemsCloudHcRiskItem["AffectCount"].isNull())
			cloudHcRiskItemsObject.affectCount = std::stoi(valueCloudHcRiskItemsCloudHcRiskItem["AffectCount"].asString());
		if(!valueCloudHcRiskItemsCloudHcRiskItem["Pass"].isNull())
			cloudHcRiskItemsObject.pass = valueCloudHcRiskItemsCloudHcRiskItem["Pass"].asString() == "true";
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

