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

#include <alibabacloud/itag/model/ListDatasetFieldsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

ListDatasetFieldsResult::ListDatasetFieldsResult() :
	ServiceResult()
{}

ListDatasetFieldsResult::ListDatasetFieldsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDatasetFieldsResult::~ListDatasetFieldsResult()
{}

void ListDatasetFieldsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ITagDatasetField"];
	for (auto valueResultITagDatasetField : allResultNode)
	{
		ITagDatasetField resultObject;
		if(!valueResultITagDatasetField["FieldName"].isNull())
			resultObject.fieldName = valueResultITagDatasetField["FieldName"].asString();
		if(!valueResultITagDatasetField["Type"].isNull())
			resultObject.type = valueResultITagDatasetField["Type"].asString();
		if(!valueResultITagDatasetField["Sensitive"].isNull())
			resultObject.sensitive = valueResultITagDatasetField["Sensitive"].asString() == "true";
		if(!valueResultITagDatasetField["Classify"].isNull())
			resultObject.classify = valueResultITagDatasetField["Classify"].asString();
		if(!valueResultITagDatasetField["Exif"].isNull())
			resultObject.exif = valueResultITagDatasetField["Exif"].asString();
		if(!valueResultITagDatasetField["sortKey"].isNull())
			resultObject.sortKey = valueResultITagDatasetField["sortKey"].asString() == "true";
		if(!valueResultITagDatasetField["FieldDesc"].isNull())
			resultObject.fieldDesc = valueResultITagDatasetField["FieldDesc"].asString();
		if(!valueResultITagDatasetField["FieldClassify"].isNull())
			resultObject.fieldClassify = valueResultITagDatasetField["FieldClassify"].asString();
		if(!valueResultITagDatasetField["Alias"].isNull())
			resultObject.alias = valueResultITagDatasetField["Alias"].asString();
		if(!valueResultITagDatasetField["FieldType"].isNull())
			resultObject.fieldType = valueResultITagDatasetField["FieldType"].asString();
		result_.push_back(resultObject);
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

std::string ListDatasetFieldsResult::getMsg()const
{
	return msg_;
}

bool ListDatasetFieldsResult::getSucc()const
{
	return succ_;
}

std::string ListDatasetFieldsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDatasetFieldsResult::getErrInfo()const
{
	return errInfo_;
}

std::string ListDatasetFieldsResult::getCode()const
{
	return code_;
}

std::vector<ListDatasetFieldsResult::ITagDatasetField> ListDatasetFieldsResult::getResult()const
{
	return result_;
}

