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

#include <alibabacloud/ivision/model/QuickTestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

QuickTestResult::QuickTestResult() :
	ServiceResult()
{}

QuickTestResult::QuickTestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuickTestResult::~QuickTestResult()
{}

void QuickTestResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto quickTestResultNode = value["QuickTestResult"];
	if(!quickTestResultNode["PredictId"].isNull())
		quickTestResult_.predictId = quickTestResultNode["PredictId"].asString();
	if(!quickTestResultNode["ProjectId"].isNull())
		quickTestResult_.projectId = quickTestResultNode["ProjectId"].asString();
	if(!quickTestResultNode["IterationId"].isNull())
		quickTestResult_.iterationId = quickTestResultNode["IterationId"].asString();
	if(!quickTestResultNode["DataUrl"].isNull())
		quickTestResult_.dataUrl = quickTestResultNode["DataUrl"].asString();
	if(!quickTestResultNode["PredictTime"].isNull())
		quickTestResult_.predictTime = quickTestResultNode["PredictTime"].asString();
	if(!quickTestResultNode["Status"].isNull())
		quickTestResult_.status = quickTestResultNode["Status"].asString();
	if(!quickTestResultNode["Code"].isNull())
		quickTestResult_.code = quickTestResultNode["Code"].asString();
	if(!quickTestResultNode["Message"].isNull())
		quickTestResult_.message = quickTestResultNode["Message"].asString();
	if(!quickTestResultNode["PredictResult"].isNull())
		quickTestResult_.predictResult = quickTestResultNode["PredictResult"].asString();

}

QuickTestResult::QuickTestResult QuickTestResult::getQuickTestResult()const
{
	return quickTestResult_;
}

