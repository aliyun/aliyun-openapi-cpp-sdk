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

#include <alibabacloud/sas/model/GetFileDetectApiInvokeInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetFileDetectApiInvokeInfoResult::GetFileDetectApiInvokeInfoResult() :
	ServiceResult()
{}

GetFileDetectApiInvokeInfoResult::GetFileDetectApiInvokeInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFileDetectApiInvokeInfoResult::~GetFileDetectApiInvokeInfoResult()
{}

void GetFileDetectApiInvokeInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AuthCount"].isNull())
		data_.authCount = std::stol(dataNode["AuthCount"].asString());
	if(!dataNode["RemainAuthCount"].isNull())
		data_.remainAuthCount = std::stol(dataNode["RemainAuthCount"].asString());
	if(!dataNode["FlowRate"].isNull())
		data_.flowRate = std::stoi(dataNode["FlowRate"].asString());
	if(!dataNode["TimeUnit"].isNull())
		data_.timeUnit = dataNode["TimeUnit"].asString();
	if(!dataNode["Expire"].isNull())
		data_.expire = std::stol(dataNode["Expire"].asString());
	if(!dataNode["SaleVersion"].isNull())
		data_.saleVersion = std::stoi(dataNode["SaleVersion"].asString());

}

GetFileDetectApiInvokeInfoResult::Data GetFileDetectApiInvokeInfoResult::getData()const
{
	return data_;
}

