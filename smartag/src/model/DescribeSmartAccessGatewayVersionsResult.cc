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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewayVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSmartAccessGatewayVersionsResult::DescribeSmartAccessGatewayVersionsResult() :
	ServiceResult()
{}

DescribeSmartAccessGatewayVersionsResult::DescribeSmartAccessGatewayVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSmartAccessGatewayVersionsResult::~DescribeSmartAccessGatewayVersionsResult()
{}

void DescribeSmartAccessGatewayVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmartAGVersionsNode = value["SmartAGVersions"]["SmartAGVersion"];
	for (auto valueSmartAGVersionsSmartAGVersion : allSmartAGVersionsNode)
	{
		SmartAGVersion smartAGVersionsObject;
		if(!valueSmartAGVersionsSmartAGVersion["Type"].isNull())
			smartAGVersionsObject.type = valueSmartAGVersionsSmartAGVersion["Type"].asString();
		if(!valueSmartAGVersionsSmartAGVersion["CreateTime"].isNull())
			smartAGVersionsObject.createTime = std::stol(valueSmartAGVersionsSmartAGVersion["CreateTime"].asString());
		if(!valueSmartAGVersionsSmartAGVersion["VersionName"].isNull())
			smartAGVersionsObject.versionName = valueSmartAGVersionsSmartAGVersion["VersionName"].asString();
		if(!valueSmartAGVersionsSmartAGVersion["VersionCode"].isNull())
			smartAGVersionsObject.versionCode = valueSmartAGVersionsSmartAGVersion["VersionCode"].asString();
		smartAGVersions_.push_back(smartAGVersionsObject);
	}

}

std::vector<DescribeSmartAccessGatewayVersionsResult::SmartAGVersion> DescribeSmartAccessGatewayVersionsResult::getSmartAGVersions()const
{
	return smartAGVersions_;
}

