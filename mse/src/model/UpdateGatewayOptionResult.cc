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

#include <alibabacloud/mse/model/UpdateGatewayOptionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

UpdateGatewayOptionResult::UpdateGatewayOptionResult() :
	ServiceResult()
{}

UpdateGatewayOptionResult::UpdateGatewayOptionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateGatewayOptionResult::~UpdateGatewayOptionResult()
{}

void UpdateGatewayOptionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EnableHardwareAcceleration"].isNull())
		data_.enableHardwareAcceleration = dataNode["EnableHardwareAcceleration"].asString() == "true";
	if(!dataNode["DisableHttp2Alpn"].isNull())
		data_.disableHttp2Alpn = dataNode["DisableHttp2Alpn"].asString() == "true";
	if(!dataNode["EnableWaf"].isNull())
		data_.enableWaf = dataNode["EnableWaf"].asString() == "true";
	auto traceDetailsNode = dataNode["TraceDetails"];
	if(!traceDetailsNode["TraceEnabled"].isNull())
		data_.traceDetails.traceEnabled = traceDetailsNode["TraceEnabled"].asString() == "true";
	if(!traceDetailsNode["Sample"].isNull())
		data_.traceDetails.sample = std::stol(traceDetailsNode["Sample"].asString());
	auto logConfigDetailsNode = dataNode["LogConfigDetails"];
	if(!logConfigDetailsNode["LogEnabled"].isNull())
		data_.logConfigDetails.logEnabled = logConfigDetailsNode["LogEnabled"].asString() == "true";
	if(!logConfigDetailsNode["ProjectName"].isNull())
		data_.logConfigDetails.projectName = logConfigDetailsNode["ProjectName"].asString();
	if(!logConfigDetailsNode["LogStoreName"].isNull())
		data_.logConfigDetails.logStoreName = logConfigDetailsNode["LogStoreName"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateGatewayOptionResult::getMessage()const
{
	return message_;
}

int UpdateGatewayOptionResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

UpdateGatewayOptionResult::Data UpdateGatewayOptionResult::getData()const
{
	return data_;
}

int UpdateGatewayOptionResult::getCode()const
{
	return code_;
}

bool UpdateGatewayOptionResult::getSuccess()const
{
	return success_;
}

