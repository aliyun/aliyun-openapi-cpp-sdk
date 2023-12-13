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

#include <alibabacloud/cloud-siem/model/DescribeDataSourceInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeDataSourceInstanceResult::DescribeDataSourceInstanceResult() :
	ServiceResult()
{}

DescribeDataSourceInstanceResult::DescribeDataSourceInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataSourceInstanceResult::~DescribeDataSourceInstanceResult()
{}

void DescribeDataSourceInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DataSourceInstanceId"].isNull())
		data_.dataSourceInstanceId = dataNode["DataSourceInstanceId"].asString();
	if(!dataNode["AccountId"].isNull())
		data_.accountId = dataNode["AccountId"].asString();
	if(!dataNode["CloudCode"].isNull())
		data_.cloudCode = dataNode["CloudCode"].asString();
	auto allDataSourceInstanceParamsNode = dataNode["DataSourceInstanceParams"]["DataSourceInstanceParam"];
	for (auto dataNodeDataSourceInstanceParamsDataSourceInstanceParam : allDataSourceInstanceParamsNode)
	{
		Data::DataSourceInstanceParam dataSourceInstanceParamObject;
		if(!dataNodeDataSourceInstanceParamsDataSourceInstanceParam["ParaCode"].isNull())
			dataSourceInstanceParamObject.paraCode = dataNodeDataSourceInstanceParamsDataSourceInstanceParam["ParaCode"].asString();
		if(!dataNodeDataSourceInstanceParamsDataSourceInstanceParam["ParaValue"].isNull())
			dataSourceInstanceParamObject.paraValue = dataNodeDataSourceInstanceParamsDataSourceInstanceParam["ParaValue"].asString();
		data_.dataSourceInstanceParams.push_back(dataSourceInstanceParamObject);
	}

}

DescribeDataSourceInstanceResult::Data DescribeDataSourceInstanceResult::getData()const
{
	return data_;
}

