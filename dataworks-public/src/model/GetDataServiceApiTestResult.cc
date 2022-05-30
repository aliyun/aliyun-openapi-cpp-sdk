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

#include <alibabacloud/dataworks-public/model/GetDataServiceApiTestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDataServiceApiTestResult::GetDataServiceApiTestResult() :
	ServiceResult()
{}

GetDataServiceApiTestResult::GetDataServiceApiTestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataServiceApiTestResult::~GetDataServiceApiTestResult()
{}

void GetDataServiceApiTestResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ApiId"].isNull())
		data_.apiId = std::stol(dataNode["ApiId"].asString());
	if(!dataNode["ParamMap"].isNull())
		data_.paramMap = dataNode["ParamMap"].asString();
	if(!dataNode["RetCode"].isNull())
		data_.retCode = std::stol(dataNode["RetCode"].asString());
	if(!dataNode["RetResult"].isNull())
		data_.retResult = dataNode["RetResult"].asString();
	if(!dataNode["DebugInfo"].isNull())
		data_.debugInfo = dataNode["DebugInfo"].asString();
	if(!dataNode["CostTime"].isNull())
		data_.costTime = dataNode["CostTime"].asString();
	if(!dataNode["NodesDebugInfo"].isNull())
		data_.nodesDebugInfo = dataNode["NodesDebugInfo"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();

}

GetDataServiceApiTestResult::Data GetDataServiceApiTestResult::getData()const
{
	return data_;
}

