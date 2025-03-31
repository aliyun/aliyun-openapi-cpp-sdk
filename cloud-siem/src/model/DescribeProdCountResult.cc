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

#include <alibabacloud/cloud-siem/model/DescribeProdCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeProdCountResult::DescribeProdCountResult() :
	ServiceResult()
{}

DescribeProdCountResult::DescribeProdCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProdCountResult::~DescribeProdCountResult()
{}

void DescribeProdCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AliyunProdCount"].isNull())
		data_.aliyunProdCount = std::stoi(dataNode["AliyunProdCount"].asString());
	if(!dataNode["HcloudProdCount"].isNull())
		data_.hcloudProdCount = std::stoi(dataNode["HcloudProdCount"].asString());
	if(!dataNode["QcloudProdCount"].isNull())
		data_.qcloudProdCount = std::stoi(dataNode["QcloudProdCount"].asString());
	if(!dataNode["IdcProdCount"].isNull())
		data_.idcProdCount = std::stoi(dataNode["IdcProdCount"].asString());
	if(!dataNode["AliyunImportedCount"].isNull())
		data_.aliyunImportedCount = std::stoi(dataNode["AliyunImportedCount"].asString());
	if(!dataNode["HcloudImportedCount"].isNull())
		data_.hcloudImportedCount = std::stoi(dataNode["HcloudImportedCount"].asString());
	if(!dataNode["QcloudImportedCount"].isNull())
		data_.qcloudImportedCount = std::stoi(dataNode["QcloudImportedCount"].asString());
	if(!dataNode["IdcImportedCount"].isNull())
		data_.idcImportedCount = std::stoi(dataNode["IdcImportedCount"].asString());

}

DescribeProdCountResult::Data DescribeProdCountResult::getData()const
{
	return data_;
}

