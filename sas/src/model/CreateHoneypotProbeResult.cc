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

#include <alibabacloud/sas/model/CreateHoneypotProbeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

CreateHoneypotProbeResult::CreateHoneypotProbeResult() :
	ServiceResult()
{}

CreateHoneypotProbeResult::CreateHoneypotProbeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateHoneypotProbeResult::~CreateHoneypotProbeResult()
{}

void CreateHoneypotProbeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto honeypotProbeNode = value["HoneypotProbe"];
	if(!honeypotProbeNode["ProbeId"].isNull())
		honeypotProbe_.probeId = honeypotProbeNode["ProbeId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CreateHoneypotProbeResult::getMessage()const
{
	return message_;
}

int CreateHoneypotProbeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateHoneypotProbeResult::HoneypotProbe CreateHoneypotProbeResult::getHoneypotProbe()const
{
	return honeypotProbe_;
}

std::string CreateHoneypotProbeResult::getCode()const
{
	return code_;
}

bool CreateHoneypotProbeResult::getSuccess()const
{
	return success_;
}

