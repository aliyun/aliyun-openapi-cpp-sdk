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

#include <alibabacloud/itag/model/PageViewDatasetProxyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

PageViewDatasetProxyResult::PageViewDatasetProxyResult() :
	ServiceResult()
{}

PageViewDatasetProxyResult::PageViewDatasetProxyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageViewDatasetProxyResult::~PageViewDatasetProxyResult()
{}

void PageViewDatasetProxyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stol(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stol(resultNode["PageSize"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stol(resultNode["Total"].asString());
	if(!resultNode["TotalPage"].isNull())
		result_.totalPage = std::stol(resultNode["TotalPage"].asString());
	auto allListNode = resultNode["List"]["ListItem"];
	for (auto resultNodeListListItem : allListNode)
	{
		Result::ListItem listItemObject;
		if(!resultNodeListListItem["GmtCreate"].isNull())
			listItemObject.gmtCreate = resultNodeListListItem["GmtCreate"].asString();
		if(!resultNodeListListItem["GmtModified"].isNull())
			listItemObject.gmtModified = resultNodeListListItem["GmtModified"].asString();
		if(!resultNodeListListItem["Name"].isNull())
			listItemObject.name = resultNodeListListItem["Name"].asString();
		if(!resultNodeListListItem["Description"].isNull())
			listItemObject.description = resultNodeListListItem["Description"].asString();
		if(!resultNodeListListItem["Source"].isNull())
			listItemObject.source = resultNodeListListItem["Source"].asString();
		if(!resultNodeListListItem["SourceBizId"].isNull())
			listItemObject.sourceBizId = resultNodeListListItem["SourceBizId"].asString();
		if(!resultNodeListListItem["ProxyTarget"].isNull())
			listItemObject.proxyTarget = resultNodeListListItem["ProxyTarget"].asString();
		if(!resultNodeListListItem["ProxyConfigs"].isNull())
			listItemObject.proxyConfigs = resultNodeListListItem["ProxyConfigs"].asString();
		if(!resultNodeListListItem["SafetyLevel"].isNull())
			listItemObject.safetyLevel = std::stol(resultNodeListListItem["SafetyLevel"].asString());
		if(!resultNodeListListItem["sharedMode"].isNull())
			listItemObject.sharedMode = resultNodeListListItem["sharedMode"].asString();
		if(!resultNodeListListItem["TotalNum"].isNull())
			listItemObject.totalNum = std::stol(resultNodeListListItem["TotalNum"].asString());
		if(!resultNodeListListItem["TntInstId"].isNull())
			listItemObject.tntInstId = resultNodeListListItem["TntInstId"].asString();
		if(!resultNodeListListItem["Status"].isNull())
			listItemObject.status = std::stol(resultNodeListListItem["Status"].asString());
		if(!resultNodeListListItem["RunMsg"].isNull())
			listItemObject.runMsg = resultNodeListListItem["RunMsg"].asString();
		auto creatorNode = value["Creator"];
		if(!creatorNode["UserId"].isNull())
			listItemObject.creator.userId = creatorNode["UserId"].asString();
		if(!creatorNode["UserName"].isNull())
			listItemObject.creator.userName = creatorNode["UserName"].asString();
		if(!creatorNode["AccountType"].isNull())
			listItemObject.creator.accountType = creatorNode["AccountType"].asString();
		if(!creatorNode["AccountNo"].isNull())
			listItemObject.creator.accountNo = creatorNode["AccountNo"].asString();
		auto modifierNode = value["Modifier"];
		if(!modifierNode["UserId"].isNull())
			listItemObject.modifier.userId = modifierNode["UserId"].asString();
		if(!modifierNode["UserName"].isNull())
			listItemObject.modifier.userName = modifierNode["UserName"].asString();
		if(!modifierNode["AccountType"].isNull())
			listItemObject.modifier.accountType = modifierNode["AccountType"].asString();
		if(!modifierNode["AccountNo"].isNull())
			listItemObject.modifier.accountNo = modifierNode["AccountNo"].asString();
		auto schemaNode = value["Schema"];
		auto allFieldsNode = schemaNode["Fields"]["FieldsItem"];
		for (auto schemaNodeFieldsFieldsItem : allFieldsNode)
		{
			Result::ListItem::Schema::FieldsItem fieldsItemObject;
			if(!schemaNodeFieldsFieldsItem["FieldName"].isNull())
				fieldsItemObject.fieldName = schemaNodeFieldsFieldsItem["FieldName"].asString();
			if(!schemaNodeFieldsFieldsItem["Type"].isNull())
				fieldsItemObject.type = schemaNodeFieldsFieldsItem["Type"].asString();
			if(!schemaNodeFieldsFieldsItem["Sensitive"].isNull())
				fieldsItemObject.sensitive = schemaNodeFieldsFieldsItem["Sensitive"].asString() == "true";
			if(!schemaNodeFieldsFieldsItem["Classify"].isNull())
				fieldsItemObject.classify = schemaNodeFieldsFieldsItem["Classify"].asString();
			if(!schemaNodeFieldsFieldsItem["Exif"].isNull())
				fieldsItemObject.exif = schemaNodeFieldsFieldsItem["Exif"].asString();
			if(!schemaNodeFieldsFieldsItem["sortKey"].isNull())
				fieldsItemObject.sortKey = schemaNodeFieldsFieldsItem["sortKey"].asString() == "true";
			if(!schemaNodeFieldsFieldsItem["FieldDesc"].isNull())
				fieldsItemObject.fieldDesc = schemaNodeFieldsFieldsItem["FieldDesc"].asString();
			if(!schemaNodeFieldsFieldsItem["FieldClassify"].isNull())
				fieldsItemObject.fieldClassify = schemaNodeFieldsFieldsItem["FieldClassify"].asString();
			if(!schemaNodeFieldsFieldsItem["Alias"].isNull())
				fieldsItemObject.alias = schemaNodeFieldsFieldsItem["Alias"].asString();
			if(!schemaNodeFieldsFieldsItem["FieldType"].isNull())
				fieldsItemObject.fieldType = schemaNodeFieldsFieldsItem["FieldType"].asString();
			listItemObject.schema.fields.push_back(fieldsItemObject);
		}
		result_.list.push_back(listItemObject);
	}
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

std::string PageViewDatasetProxyResult::getMsg()const
{
	return msg_;
}

bool PageViewDatasetProxyResult::getSucc()const
{
	return succ_;
}

std::string PageViewDatasetProxyResult::getErrorCode()const
{
	return errorCode_;
}

std::string PageViewDatasetProxyResult::getErrInfo()const
{
	return errInfo_;
}

std::string PageViewDatasetProxyResult::getCode()const
{
	return code_;
}

PageViewDatasetProxyResult::Result PageViewDatasetProxyResult::getResult()const
{
	return result_;
}

