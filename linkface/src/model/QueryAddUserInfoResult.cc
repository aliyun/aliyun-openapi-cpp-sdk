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

#include <alibabacloud/linkface/model/QueryAddUserInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkFace;
using namespace AlibabaCloud::LinkFace::Model;

QueryAddUserInfoResult::QueryAddUserInfoResult() :
	ServiceResult()
{}

QueryAddUserInfoResult::QueryAddUserInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAddUserInfoResult::~QueryAddUserInfoResult()
{}

void QueryAddUserInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allCurrentFaceInfos = value["CurrentFaceInfos"]["CurrentFaceInfosItem"];
	for (auto value : allCurrentFaceInfos)
	{
		Data::CurrentFaceInfosItem currentFaceInfosItemObject;
		if(!value["UserId"].isNull())
			currentFaceInfosItemObject.userId = value["UserId"].asString();
		if(!value["ClientTag"].isNull())
			currentFaceInfosItemObject.clientTag = value["ClientTag"].asString();
		if(!value["Index"].isNull())
			currentFaceInfosItemObject.index = std::stoi(value["Index"].asString());
		data_.currentFaceInfos.push_back(currentFaceInfosItemObject);
	}
	auto allFailedFaceInfos = value["FailedFaceInfos"]["FailedFaceInfosItem"];
	for (auto value : allFailedFaceInfos)
	{
		Data::FailedFaceInfosItem failedFaceInfosItemObject;
		if(!value["UserId"].isNull())
			failedFaceInfosItemObject.userId = value["UserId"].asString();
		if(!value["ClientTag"].isNull())
			failedFaceInfosItemObject.clientTag = value["ClientTag"].asString();
		if(!value["Index"].isNull())
			failedFaceInfosItemObject.index = std::stoi(value["Index"].asString());
		data_.failedFaceInfos.push_back(failedFaceInfosItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryAddUserInfoResult::getMessage()const
{
	return message_;
}

QueryAddUserInfoResult::Data QueryAddUserInfoResult::getData()const
{
	return data_;
}

int QueryAddUserInfoResult::getCode()const
{
	return code_;
}

bool QueryAddUserInfoResult::getSuccess()const
{
	return success_;
}

