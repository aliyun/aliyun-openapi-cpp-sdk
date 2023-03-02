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

#include <alibabacloud/iot/model/CreateDownloadDataJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

CreateDownloadDataJobResult::CreateDownloadDataJobResult() :
	ServiceResult()
{}

CreateDownloadDataJobResult::CreateDownloadDataJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDownloadDataJobResult::~CreateDownloadDataJobResult()
{}

void CreateDownloadDataJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CsvUrl"].isNull())
		data_.csvUrl = dataNode["CsvUrl"].asString();
	if(!dataNode["LongJobId"].isNull())
		data_.longJobId = dataNode["LongJobId"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["AsyncExecute"].isNull())
		data_.asyncExecute = dataNode["AsyncExecute"].asString() == "true";
	if(!dataNode["CsvFileName"].isNull())
		data_.csvFileName = dataNode["CsvFileName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

CreateDownloadDataJobResult::Data CreateDownloadDataJobResult::getData()const
{
	return data_;
}

std::string CreateDownloadDataJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string CreateDownloadDataJobResult::getCode()const
{
	return code_;
}

bool CreateDownloadDataJobResult::getSuccess()const
{
	return success_;
}

