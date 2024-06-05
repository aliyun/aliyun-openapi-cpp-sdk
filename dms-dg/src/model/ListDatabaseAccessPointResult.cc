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

#include <alibabacloud/dms-dg/model/ListDatabaseAccessPointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_dg;
using namespace AlibabaCloud::Dms_dg::Model;

ListDatabaseAccessPointResult::ListDatabaseAccessPointResult() :
	ServiceResult()
{}

ListDatabaseAccessPointResult::ListDatabaseAccessPointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDatabaseAccessPointResult::~ListDatabaseAccessPointResult()
{}

void ListDatabaseAccessPointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDbInstanceAccessPointListNode = value["DbInstanceAccessPointList"]["DbInstanceAccessPoint"];
	for (auto valueDbInstanceAccessPointListDbInstanceAccessPoint : allDbInstanceAccessPointListNode)
	{
		DbInstanceAccessPoint dbInstanceAccessPointListObject;
		if(!valueDbInstanceAccessPointListDbInstanceAccessPoint["AccessAddr"].isNull())
			dbInstanceAccessPointListObject.accessAddr = valueDbInstanceAccessPointListDbInstanceAccessPoint["AccessAddr"].asString();
		if(!valueDbInstanceAccessPointListDbInstanceAccessPoint["AccessPort"].isNull())
			dbInstanceAccessPointListObject.accessPort = std::stoi(valueDbInstanceAccessPointListDbInstanceAccessPoint["AccessPort"].asString());
		if(!valueDbInstanceAccessPointListDbInstanceAccessPoint["DbInstanceId"].isNull())
			dbInstanceAccessPointListObject.dbInstanceId = valueDbInstanceAccessPointListDbInstanceAccessPoint["DbInstanceId"].asString();
		if(!valueDbInstanceAccessPointListDbInstanceAccessPoint["GmtCreate"].isNull())
			dbInstanceAccessPointListObject.gmtCreate = std::stol(valueDbInstanceAccessPointListDbInstanceAccessPoint["GmtCreate"].asString());
		if(!valueDbInstanceAccessPointListDbInstanceAccessPoint["GmtModified"].isNull())
			dbInstanceAccessPointListObject.gmtModified = std::stol(valueDbInstanceAccessPointListDbInstanceAccessPoint["GmtModified"].asString());
		if(!valueDbInstanceAccessPointListDbInstanceAccessPoint["RouterId"].isNull())
			dbInstanceAccessPointListObject.routerId = valueDbInstanceAccessPointListDbInstanceAccessPoint["RouterId"].asString();
		if(!valueDbInstanceAccessPointListDbInstanceAccessPoint["VpcAzoneId"].isNull())
			dbInstanceAccessPointListObject.vpcAzoneId = valueDbInstanceAccessPointListDbInstanceAccessPoint["VpcAzoneId"].asString();
		if(!valueDbInstanceAccessPointListDbInstanceAccessPoint["VpcId"].isNull())
			dbInstanceAccessPointListObject.vpcId = valueDbInstanceAccessPointListDbInstanceAccessPoint["VpcId"].asString();
		if(!valueDbInstanceAccessPointListDbInstanceAccessPoint["VswitchId"].isNull())
			dbInstanceAccessPointListObject.vswitchId = valueDbInstanceAccessPointListDbInstanceAccessPoint["VswitchId"].asString();
		dbInstanceAccessPointList_.push_back(dbInstanceAccessPointListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<ListDatabaseAccessPointResult::DbInstanceAccessPoint> ListDatabaseAccessPointResult::getDbInstanceAccessPointList()const
{
	return dbInstanceAccessPointList_;
}

std::string ListDatabaseAccessPointResult::getErrorMsg()const
{
	return errorMsg_;
}

int ListDatabaseAccessPointResult::getCount()const
{
	return count_;
}

std::string ListDatabaseAccessPointResult::getCode()const
{
	return code_;
}

std::string ListDatabaseAccessPointResult::getSuccess()const
{
	return success_;
}

