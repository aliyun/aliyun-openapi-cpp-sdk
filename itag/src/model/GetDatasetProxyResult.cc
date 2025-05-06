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

#include <alibabacloud/itag/model/GetDatasetProxyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetDatasetProxyResult::GetDatasetProxyResult() :
	ServiceResult()
{}

GetDatasetProxyResult::GetDatasetProxyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDatasetProxyResult::~GetDatasetProxyResult()
{}

void GetDatasetProxyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = resultNode["Id"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["Source"].isNull())
		result_.source = resultNode["Source"].asString();
	if(!resultNode["SourceBizId"].isNull())
		result_.sourceBizId = resultNode["SourceBizId"].asString();
	if(!resultNode["ProxyTarget"].isNull())
		result_.proxyTarget = resultNode["ProxyTarget"].asString();
	if(!resultNode["ProxyConfigs"].isNull())
		result_.proxyConfigs = resultNode["ProxyConfigs"].asString();
	if(!resultNode["SafetyLevel"].isNull())
		result_.safetyLevel = std::stoi(resultNode["SafetyLevel"].asString());
	if(!resultNode["SharedMode"].isNull())
		result_.sharedMode = resultNode["SharedMode"].asString();
	if(!resultNode["TotalNum"].isNull())
		result_.totalNum = std::stol(resultNode["TotalNum"].asString());
	if(!resultNode["TntInstId"].isNull())
		result_.tntInstId = resultNode["TntInstId"].asString();
	if(!resultNode["Status"].isNull())
		result_.status = std::stoi(resultNode["Status"].asString());
	if(!resultNode["RunMsg"].isNull())
		result_.runMsg = resultNode["RunMsg"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = resultNode["GmtModified"].asString();
	if(!resultNode["SortKey"].isNull())
		result_.sortKey = resultNode["SortKey"].asString();
	auto schemaNode = resultNode["Schema"];
	auto allFieldsNode = schemaNode["Fields"]["ITagDatasetField"];
	for (auto schemaNodeFieldsITagDatasetField : allFieldsNode)
	{
		Result::Schema::ITagDatasetField iTagDatasetFieldObject;
		if(!schemaNodeFieldsITagDatasetField["FieldName"].isNull())
			iTagDatasetFieldObject.fieldName = schemaNodeFieldsITagDatasetField["FieldName"].asString();
		if(!schemaNodeFieldsITagDatasetField["Type"].isNull())
			iTagDatasetFieldObject.type = schemaNodeFieldsITagDatasetField["Type"].asString();
		if(!schemaNodeFieldsITagDatasetField["Sensitive"].isNull())
			iTagDatasetFieldObject.sensitive = schemaNodeFieldsITagDatasetField["Sensitive"].asString() == "true";
		if(!schemaNodeFieldsITagDatasetField["Classify"].isNull())
			iTagDatasetFieldObject.classify = schemaNodeFieldsITagDatasetField["Classify"].asString();
		if(!schemaNodeFieldsITagDatasetField["Exif"].isNull())
			iTagDatasetFieldObject.exif = schemaNodeFieldsITagDatasetField["Exif"].asString();
		if(!schemaNodeFieldsITagDatasetField["sortKey"].isNull())
			iTagDatasetFieldObject.sortKey = schemaNodeFieldsITagDatasetField["sortKey"].asString() == "true";
		if(!schemaNodeFieldsITagDatasetField["FieldDesc"].isNull())
			iTagDatasetFieldObject.fieldDesc = schemaNodeFieldsITagDatasetField["FieldDesc"].asString();
		if(!schemaNodeFieldsITagDatasetField["FieldClassify"].isNull())
			iTagDatasetFieldObject.fieldClassify = schemaNodeFieldsITagDatasetField["FieldClassify"].asString();
		if(!schemaNodeFieldsITagDatasetField["Alias"].isNull())
			iTagDatasetFieldObject.alias = schemaNodeFieldsITagDatasetField["Alias"].asString();
		if(!schemaNodeFieldsITagDatasetField["FieldType"].isNull())
			iTagDatasetFieldObject.fieldType = schemaNodeFieldsITagDatasetField["FieldType"].asString();
		result_.schema.fields.push_back(iTagDatasetFieldObject);
	}
	auto creatorNode = resultNode["Creator"];
	if(!creatorNode["UserId"].isNull())
		result_.creator.userId = creatorNode["UserId"].asString();
	if(!creatorNode["UserName"].isNull())
		result_.creator.userName = creatorNode["UserName"].asString();
	if(!creatorNode["AccountType"].isNull())
		result_.creator.accountType = creatorNode["AccountType"].asString();
	if(!creatorNode["AccountNo"].isNull())
		result_.creator.accountNo = creatorNode["AccountNo"].asString();
	auto modifierNode = resultNode["Modifier"];
	if(!modifierNode["UserId"].isNull())
		result_.modifier.userId = modifierNode["UserId"].asString();
	if(!modifierNode["UserName"].isNull())
		result_.modifier.userName = modifierNode["UserName"].asString();
	if(!modifierNode["AccountType"].isNull())
		result_.modifier.accountType = modifierNode["AccountType"].asString();
	if(!modifierNode["AccountNo"].isNull())
		result_.modifier.accountNo = modifierNode["AccountNo"].asString();
		auto allFieldTypes = resultNode["FieldTypes"]["String"];
		for (auto value : allFieldTypes)
			result_.fieldTypes.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetDatasetProxyResult::getMsg()const
{
	return msg_;
}

bool GetDatasetProxyResult::getSucc()const
{
	return succ_;
}

std::string GetDatasetProxyResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDatasetProxyResult::getErrInfo()const
{
	return errInfo_;
}

std::string GetDatasetProxyResult::getCode()const
{
	return code_;
}

GetDatasetProxyResult::Result GetDatasetProxyResult::getResult()const
{
	return result_;
}

