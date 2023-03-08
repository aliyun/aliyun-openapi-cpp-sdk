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

#include <alibabacloud/adb/model/PreloadSparkAppMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

PreloadSparkAppMetricsResult::PreloadSparkAppMetricsResult() :
	ServiceResult()
{}

PreloadSparkAppMetricsResult::PreloadSparkAppMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PreloadSparkAppMetricsResult::~PreloadSparkAppMetricsResult()
{}

void PreloadSparkAppMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["AttemptId"].isNull())
		data_.attemptId = dataNode["AttemptId"].asString();
	if(!dataNode["Finished"].isNull())
		data_.finished = dataNode["Finished"].asString() == "true";
	if(!dataNode["EventLogPath"].isNull())
		data_.eventLogPath = dataNode["EventLogPath"].asString();
	auto scanMetricsNode = dataNode["ScanMetrics"];
	if(!scanMetricsNode["OutputRowsCount"].isNull())
		data_.scanMetrics.outputRowsCount = std::stol(scanMetricsNode["OutputRowsCount"].asString());
	if(!scanMetricsNode["TotalReadFileSizeInByte"].isNull())
		data_.scanMetrics.totalReadFileSizeInByte = std::stol(scanMetricsNode["TotalReadFileSizeInByte"].asString());

}

PreloadSparkAppMetricsResult::Data PreloadSparkAppMetricsResult::getData()const
{
	return data_;
}

