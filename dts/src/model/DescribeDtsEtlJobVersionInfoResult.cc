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

#include <alibabacloud/dts/model/DescribeDtsEtlJobVersionInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDtsEtlJobVersionInfoResult::DescribeDtsEtlJobVersionInfoResult() :
	ServiceResult()
{}

DescribeDtsEtlJobVersionInfoResult::DescribeDtsEtlJobVersionInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDtsEtlJobVersionInfoResult::~DescribeDtsEtlJobVersionInfoResult()
{}

void DescribeDtsEtlJobVersionInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDtsEtlJobVersionInfosNode = value["DtsEtlJobVersionInfos"]["DtsEtlJobVersionInfo"];
	for (auto valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo : allDtsEtlJobVersionInfosNode)
	{
		DtsEtlJobVersionInfo dtsEtlJobVersionInfosObject;
		if(!valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["Status"].isNull())
			dtsEtlJobVersionInfosObject.status = valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["Status"].asString();
		if(!valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["DtsJobName"].isNull())
			dtsEtlJobVersionInfosObject.dtsJobName = valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["DtsJobName"].asString();
		if(!valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["DtsJobId"].isNull())
			dtsEtlJobVersionInfosObject.dtsJobId = valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["DtsJobId"].asString();
		if(!valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["Version"].isNull())
			dtsEtlJobVersionInfosObject.version = std::stoi(valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["Version"].asString());
		if(!valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["DtsInstanceId"].isNull())
			dtsEtlJobVersionInfosObject.dtsInstanceId = valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["DtsInstanceId"].asString();
		if(!valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["CreateTime"].isNull())
			dtsEtlJobVersionInfosObject.createTime = valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["CreateTime"].asString();
		if(!valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["SafeCheckpoint"].isNull())
			dtsEtlJobVersionInfosObject.safeCheckpoint = valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["SafeCheckpoint"].asString();
		if(!valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["Creator"].isNull())
			dtsEtlJobVersionInfosObject.creator = valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["Creator"].asString();
		if(!valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["ModifyTime"].isNull())
			dtsEtlJobVersionInfosObject.modifyTime = valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["ModifyTime"].asString();
		if(!valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["CreatorName"].isNull())
			dtsEtlJobVersionInfosObject.creatorName = valueDtsEtlJobVersionInfosDtsEtlJobVersionInfo["CreatorName"].asString();
		dtsEtlJobVersionInfos_.push_back(dtsEtlJobVersionInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

int DescribeDtsEtlJobVersionInfoResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDtsEtlJobVersionInfoResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDtsEtlJobVersionInfoResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeDtsEtlJobVersionInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeDtsEtlJobVersionInfoResult::DtsEtlJobVersionInfo> DescribeDtsEtlJobVersionInfoResult::getDtsEtlJobVersionInfos()const
{
	return dtsEtlJobVersionInfos_;
}

std::string DescribeDtsEtlJobVersionInfoResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeDtsEtlJobVersionInfoResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeDtsEtlJobVersionInfoResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeDtsEtlJobVersionInfoResult::getSuccess()const
{
	return success_;
}

std::string DescribeDtsEtlJobVersionInfoResult::getErrCode()const
{
	return errCode_;
}

