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

#include <alibabacloud/cloud-siem/model/DescribeDataSourceParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeDataSourceParametersResult::DescribeDataSourceParametersResult() :
	ServiceResult()
{}

DescribeDataSourceParametersResult::DescribeDataSourceParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataSourceParametersResult::~DescribeDataSourceParametersResult()
{}

void DescribeDataSourceParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["DataSourceType"].isNull())
			dataObject.dataSourceType = valueDataDataItem["DataSourceType"].asString();
		if(!valueDataDataItem["ParaLevel"].isNull())
			dataObject.paraLevel = std::stoi(valueDataDataItem["ParaLevel"].asString());
		if(!valueDataDataItem["ParaCode"].isNull())
			dataObject.paraCode = valueDataDataItem["ParaCode"].asString();
		if(!valueDataDataItem["ParaName"].isNull())
			dataObject.paraName = valueDataDataItem["ParaName"].asString();
		if(!valueDataDataItem["ParaType"].isNull())
			dataObject.paraType = valueDataDataItem["ParaType"].asString();
		if(!valueDataDataItem["Required"].isNull())
			dataObject.required = std::stoi(valueDataDataItem["Required"].asString());
		if(!valueDataDataItem["FormatCheck"].isNull())
			dataObject.formatCheck = valueDataDataItem["FormatCheck"].asString();
		if(!valueDataDataItem["Title"].isNull())
			dataObject.title = valueDataDataItem["Title"].asString();
		if(!valueDataDataItem["Hit"].isNull())
			dataObject.hit = valueDataDataItem["Hit"].asString();
		if(!valueDataDataItem["DefaultValue"].isNull())
			dataObject.defaultValue = valueDataDataItem["DefaultValue"].asString();
		if(!valueDataDataItem["Disabled"].isNull())
			dataObject.disabled = valueDataDataItem["Disabled"].asString() == "true";
		if(!valueDataDataItem["CanEditted"].isNull())
			dataObject.canEditted = std::stoi(valueDataDataItem["CanEditted"].asString());
		if(!valueDataDataItem["CloudCode"].isNull())
			dataObject.cloudCode = valueDataDataItem["CloudCode"].asString();
		auto allParamValueNode = valueDataDataItem["ParamValue"]["ParamValueItem"];
		for (auto valueDataDataItemParamValueParamValueItem : allParamValueNode)
		{
			DataItem::ParamValueItem paramValueObject;
			if(!valueDataDataItemParamValueParamValueItem["Label"].isNull())
				paramValueObject.label = valueDataDataItemParamValueParamValueItem["Label"].asString();
			if(!valueDataDataItemParamValueParamValueItem["Value"].isNull())
				paramValueObject.value = valueDataDataItemParamValueParamValueItem["Value"].asString();
			dataObject.paramValue.push_back(paramValueObject);
		}
		data_.push_back(dataObject);
	}

}

std::vector<DescribeDataSourceParametersResult::DataItem> DescribeDataSourceParametersResult::getData()const
{
	return data_;
}

