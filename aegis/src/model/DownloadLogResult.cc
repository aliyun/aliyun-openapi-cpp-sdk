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

#include <alibabacloud/aegis/model/DownloadLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DownloadLogResult::DownloadLogResult() :
	ServiceResult()
{}

DownloadLogResult::DownloadLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DownloadLogResult::~DownloadLogResult()
{}

void DownloadLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStackTraceNode = value["StackTrace"]["StackTraceItem"];
	for (auto valueStackTraceStackTraceItem : allStackTraceNode)
	{
		StackTraceItem stackTraceObject;
		if(!valueStackTraceStackTraceItem["FileName"].isNull())
			stackTraceObject.fileName = valueStackTraceStackTraceItem["FileName"].asString();
		if(!valueStackTraceStackTraceItem["NativeMethod"].isNull())
			stackTraceObject.nativeMethod = valueStackTraceStackTraceItem["NativeMethod"].asString() == "true";
		if(!valueStackTraceStackTraceItem["MethodName"].isNull())
			stackTraceObject.methodName = valueStackTraceStackTraceItem["MethodName"].asString();
		if(!valueStackTraceStackTraceItem["ClassName"].isNull())
			stackTraceObject.className = valueStackTraceStackTraceItem["ClassName"].asString();
		if(!valueStackTraceStackTraceItem["LineNumber"].isNull())
			stackTraceObject.lineNumber = std::stoi(valueStackTraceStackTraceItem["LineNumber"].asString());
		stackTrace_.push_back(stackTraceObject);
	}
	auto allSuppressed = value["Suppressed"]["StringItem"];
	for (const auto &item : allSuppressed)
		suppressed_.push_back(item.asString());

}

std::vector<DownloadLogResult::StackTraceItem> DownloadLogResult::getStackTrace()const
{
	return stackTrace_;
}

std::vector<std::string> DownloadLogResult::getSuppressed()const
{
	return suppressed_;
}

