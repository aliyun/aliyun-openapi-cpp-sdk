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

#include <alibabacloud/oos/model/GetOpsItemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

GetOpsItemResult::GetOpsItemResult() :
	ServiceResult()
{}

GetOpsItemResult::GetOpsItemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOpsItemResult::~GetOpsItemResult()
{}

void GetOpsItemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto opsItemNode = value["OpsItem"];
	if(!opsItemNode["OpsItemId"].isNull())
		opsItem_.opsItemId = opsItemNode["OpsItemId"].asString();
	if(!opsItemNode["CreateDate"].isNull())
		opsItem_.createDate = opsItemNode["CreateDate"].asString();
	if(!opsItemNode["UpdateDate"].isNull())
		opsItem_.updateDate = opsItemNode["UpdateDate"].asString();
	if(!opsItemNode["Title"].isNull())
		opsItem_.title = opsItemNode["Title"].asString();
	if(!opsItemNode["Status"].isNull())
		opsItem_.status = opsItemNode["Status"].asString();
	if(!opsItemNode["Severity"].isNull())
		opsItem_.severity = opsItemNode["Severity"].asString();
	if(!opsItemNode["Category"].isNull())
		opsItem_.category = opsItemNode["Category"].asString();
	if(!opsItemNode["Source"].isNull())
		opsItem_.source = opsItemNode["Source"].asString();
	if(!opsItemNode["Priority"].isNull())
		opsItem_.priority = std::stoi(opsItemNode["Priority"].asString());
	if(!opsItemNode["Tags"].isNull())
		opsItem_.tags = opsItemNode["Tags"].asString();
	if(!opsItemNode["DedupString"].isNull())
		opsItem_.dedupString = opsItemNode["DedupString"].asString();
	if(!opsItemNode["ResourceGroupId"].isNull())
		opsItem_.resourceGroupId = opsItemNode["ResourceGroupId"].asString();
	if(!opsItemNode["Description"].isNull())
		opsItem_.description = opsItemNode["Description"].asString();
	if(!opsItemNode["CreateBy"].isNull())
		opsItem_.createBy = opsItemNode["CreateBy"].asString();
	if(!opsItemNode["LastModifiedBy"].isNull())
		opsItem_.lastModifiedBy = opsItemNode["LastModifiedBy"].asString();
	if(!opsItemNode["Attributes"].isNull())
		opsItem_.attributes = opsItemNode["Attributes"].asString();
		auto allSolutions = opsItemNode["Solutions"]["Solution"];
		for (auto value : allSolutions)
			opsItem_.solutions.push_back(value.asString());
		auto allResources = opsItemNode["Resources"]["Resource"];
		for (auto value : allResources)
			opsItem_.resources.push_back(value.asString());

}

GetOpsItemResult::OpsItem GetOpsItemResult::getOpsItem()const
{
	return opsItem_;
}

