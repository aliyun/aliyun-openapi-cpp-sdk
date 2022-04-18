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

#include <alibabacloud/sddp/model/DescribeDataLimitDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataLimitDetailResult::DescribeDataLimitDetailResult() :
	ServiceResult()
{}

DescribeDataLimitDetailResult::DescribeDataLimitDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataLimitDetailResult::~DescribeDataLimitDetailResult()
{}

void DescribeDataLimitDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataLimitNode = value["DataLimit"];
	if(!dataLimitNode["LocalName"].isNull())
		dataLimit_.localName = dataLimitNode["LocalName"].asString();
	if(!dataLimitNode["CheckStatus"].isNull())
		dataLimit_.checkStatus = std::stoi(dataLimitNode["CheckStatus"].asString());
	if(!dataLimitNode["Connector"].isNull())
		dataLimit_.connector = dataLimitNode["Connector"].asString();
	if(!dataLimitNode["Port"].isNull())
		dataLimit_.port = std::stoi(dataLimitNode["Port"].asString());
	if(!dataLimitNode["CheckStatusName"].isNull())
		dataLimit_.checkStatusName = dataLimitNode["CheckStatusName"].asString();
	if(!dataLimitNode["RegionId"].isNull())
		dataLimit_.regionId = dataLimitNode["RegionId"].asString();
	if(!dataLimitNode["ParentId"].isNull())
		dataLimit_.parentId = dataLimitNode["ParentId"].asString();
	if(!dataLimitNode["ResourceType"].isNull())
		dataLimit_.resourceType = std::stol(dataLimitNode["ResourceType"].asString());
	if(!dataLimitNode["LogStoreDay"].isNull())
		dataLimit_.logStoreDay = std::stoi(dataLimitNode["LogStoreDay"].asString());
	if(!dataLimitNode["GmtCreate"].isNull())
		dataLimit_.gmtCreate = std::stol(dataLimitNode["GmtCreate"].asString());
	if(!dataLimitNode["ResourceTypeCode"].isNull())
		dataLimit_.resourceTypeCode = dataLimitNode["ResourceTypeCode"].asString();
	if(!dataLimitNode["UserName"].isNull())
		dataLimit_.userName = dataLimitNode["UserName"].asString();
	if(!dataLimitNode["Id"].isNull())
		dataLimit_.id = std::stol(dataLimitNode["Id"].asString());
	if(!dataLimitNode["AuditStatus"].isNull())
		dataLimit_.auditStatus = std::stoi(dataLimitNode["AuditStatus"].asString());

}

DescribeDataLimitDetailResult::DataLimit DescribeDataLimitDetailResult::getDataLimit()const
{
	return dataLimit_;
}

