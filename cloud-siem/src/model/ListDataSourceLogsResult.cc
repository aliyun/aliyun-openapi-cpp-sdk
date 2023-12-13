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

#include <alibabacloud/cloud-siem/model/ListDataSourceLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListDataSourceLogsResult::ListDataSourceLogsResult() :
	ServiceResult()
{}

ListDataSourceLogsResult::ListDataSourceLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataSourceLogsResult::~ListDataSourceLogsResult()
{}

void ListDataSourceLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SubUserId"].isNull())
		data_.subUserId = std::stol(dataNode["SubUserId"].asString());
	if(!dataNode["DataSourceInstanceId"].isNull())
		data_.dataSourceInstanceId = dataNode["DataSourceInstanceId"].asString();
	if(!dataNode["DataSourceInstanceName"].isNull())
		data_.dataSourceInstanceName = dataNode["DataSourceInstanceName"].asString();
	if(!dataNode["DataSourceInstanceRemark"].isNull())
		data_.dataSourceInstanceRemark = dataNode["DataSourceInstanceRemark"].asString();
	if(!dataNode["AccountId"].isNull())
		data_.accountId = dataNode["AccountId"].asString();
	if(!dataNode["CloudCode"].isNull())
		data_.cloudCode = dataNode["CloudCode"].asString();
	auto allDataSourceInstanceLogsNode = dataNode["DataSourceInstanceLogs"]["DataSourceInstanceLog"];
	for (auto dataNodeDataSourceInstanceLogsDataSourceInstanceLog : allDataSourceInstanceLogsNode)
	{
		Data::DataSourceInstanceLog dataSourceInstanceLogObject;
		if(!dataNodeDataSourceInstanceLogsDataSourceInstanceLog["LogInstanceId"].isNull())
			dataSourceInstanceLogObject.logInstanceId = dataNodeDataSourceInstanceLogsDataSourceInstanceLog["LogInstanceId"].asString();
		if(!dataNodeDataSourceInstanceLogsDataSourceInstanceLog["LogCode"].isNull())
			dataSourceInstanceLogObject.logCode = dataNodeDataSourceInstanceLogsDataSourceInstanceLog["LogCode"].asString();
		if(!dataNodeDataSourceInstanceLogsDataSourceInstanceLog["LogMdsCode"].isNull())
			dataSourceInstanceLogObject.logMdsCode = dataNodeDataSourceInstanceLogsDataSourceInstanceLog["LogMdsCode"].asString();
		if(!dataNodeDataSourceInstanceLogsDataSourceInstanceLog["TaskStatus"].isNull())
			dataSourceInstanceLogObject.taskStatus = std::stoi(dataNodeDataSourceInstanceLogsDataSourceInstanceLog["TaskStatus"].asString());
		auto allLogParamsNode = dataNodeDataSourceInstanceLogsDataSourceInstanceLog["LogParams"]["LogParam"];
		for (auto dataNodeDataSourceInstanceLogsDataSourceInstanceLogLogParamsLogParam : allLogParamsNode)
		{
			Data::DataSourceInstanceLog::LogParam logParamsObject;
			if(!dataNodeDataSourceInstanceLogsDataSourceInstanceLogLogParamsLogParam["ParaCode"].isNull())
				logParamsObject.paraCode = dataNodeDataSourceInstanceLogsDataSourceInstanceLogLogParamsLogParam["ParaCode"].asString();
			if(!dataNodeDataSourceInstanceLogsDataSourceInstanceLogLogParamsLogParam["ParaValue"].isNull())
				logParamsObject.paraValue = dataNodeDataSourceInstanceLogsDataSourceInstanceLogLogParamsLogParam["ParaValue"].asString();
			dataSourceInstanceLogObject.logParams.push_back(logParamsObject);
		}
		data_.dataSourceInstanceLogs.push_back(dataSourceInstanceLogObject);
	}

}

ListDataSourceLogsResult::Data ListDataSourceLogsResult::getData()const
{
	return data_;
}

