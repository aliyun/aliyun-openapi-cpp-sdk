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

#include <alibabacloud/oceanbasepro/model/DescribeSqlAuditStatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeSqlAuditStatResult::DescribeSqlAuditStatResult() :
	ServiceResult()
{}

DescribeSqlAuditStatResult::DescribeSqlAuditStatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSqlAuditStatResult::~DescribeSqlAuditStatResult()
{}

void DescribeSqlAuditStatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["InstanceId"].isNull())
			dataObject.instanceId = valueDataDataItem["InstanceId"].asString();
		if(!valueDataDataItem["TenantId"].isNull())
			dataObject.tenantId = valueDataDataItem["TenantId"].asString();
		if(!valueDataDataItem["UserClientIp"].isNull())
			dataObject.userClientIp = valueDataDataItem["UserClientIp"].asString();
		if(!valueDataDataItem["UserName"].isNull())
			dataObject.userName = valueDataDataItem["UserName"].asString();
		if(!valueDataDataItem["DatabaseName"].isNull())
			dataObject.databaseName = valueDataDataItem["DatabaseName"].asString();
		if(!valueDataDataItem["SqlId"].isNull())
			dataObject.sqlId = valueDataDataItem["SqlId"].asString();
		if(!valueDataDataItem["TotalSucceed"].isNull())
			dataObject.totalSucceed = std::stol(valueDataDataItem["TotalSucceed"].asString());
		if(!valueDataDataItem["TotalFailed"].isNull())
			dataObject.totalFailed = std::stol(valueDataDataItem["TotalFailed"].asString());
		if(!valueDataDataItem["TotalAffectRows"].isNull())
			dataObject.totalAffectRows = std::stol(valueDataDataItem["TotalAffectRows"].asString());
		if(!valueDataDataItem["TotalScanRows"].isNull())
			dataObject.totalScanRows = std::stol(valueDataDataItem["TotalScanRows"].asString());
		if(!valueDataDataItem["TotalReturnRows"].isNull())
			dataObject.totalReturnRows = std::stol(valueDataDataItem["TotalReturnRows"].asString());
		if(!valueDataDataItem["AffectRows"].isNull())
			dataObject.affectRows = valueDataDataItem["AffectRows"].asString();
		if(!valueDataDataItem["ScanRows"].isNull())
			dataObject.scanRows = valueDataDataItem["ScanRows"].asString();
		if(!valueDataDataItem["ReturnRows"].isNull())
			dataObject.returnRows = valueDataDataItem["ReturnRows"].asString();
		if(!valueDataDataItem["ExecuteTime"].isNull())
			dataObject.executeTime = valueDataDataItem["ExecuteTime"].asString();
		if(!valueDataDataItem["SqlStatement"].isNull())
			dataObject.sqlStatement = valueDataDataItem["SqlStatement"].asString();
		if(!valueDataDataItem["OperatorType"].isNull())
			dataObject.operatorType = valueDataDataItem["OperatorType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeSqlAuditStatResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeSqlAuditStatResult::DataItem> DescribeSqlAuditStatResult::getData()const
{
	return data_;
}

