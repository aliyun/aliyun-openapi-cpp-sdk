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

#include <alibabacloud/ecs/model/CreateDiagnosticReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateDiagnosticReportResult::CreateDiagnosticReportResult() :
	ServiceResult()
{}

CreateDiagnosticReportResult::CreateDiagnosticReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDiagnosticReportResult::~CreateDiagnosticReportResult()
{}

void CreateDiagnosticReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ReportId"].isNull())
		reportId_ = value["ReportId"].asString();

}

std::string CreateDiagnosticReportResult::getReportId()const
{
	return reportId_;
}

