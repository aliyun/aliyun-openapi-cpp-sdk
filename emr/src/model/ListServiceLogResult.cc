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

#include <alibabacloud/emr/model/ListServiceLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListServiceLogResult::ListServiceLogResult() :
	ServiceResult()
{}

ListServiceLogResult::ListServiceLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceLogResult::~ListServiceLogResult()
{}

void ListServiceLogResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allLogFileList = value["LogFileList"]["LogFile"];
	for (auto value : allLogFileList)
	{
		LogFile logFileListObject;
		if(!value["FileName"].isNull())
			logFileListObject.fileName = value["FileName"].asString();
		if(!value["Size"].isNull())
			logFileListObject.size = std::stol(value["Size"].asString());
		if(!value["HostName"].isNull())
			logFileListObject.hostName = value["HostName"].asString();
		if(!value["LastModified"].isNull())
			logFileListObject.lastModified = std::stol(value["LastModified"].asString());
		logFileList_.push_back(logFileListObject);
	}

}

std::vector<ListServiceLogResult::LogFile> ListServiceLogResult::getLogFileList()const
{
	return logFileList_;
}

