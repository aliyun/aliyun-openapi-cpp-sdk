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

#include <alibabacloud/accountlabel/model/QueryCustomerLabelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AccountLabel;
using namespace AlibabaCloud::AccountLabel::Model;

QueryCustomerLabelResult::QueryCustomerLabelResult() :
	ServiceResult()
{}

QueryCustomerLabelResult::QueryCustomerLabelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCustomerLabelResult::~QueryCustomerLabelResult()
{}

void QueryCustomerLabelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["CustomerLabel"];
	for (auto valueDataCustomerLabel : allDataNode)
	{
		CustomerLabel dataObject;
		if(!valueDataCustomerLabel["Label"].isNull())
			dataObject.label = valueDataCustomerLabel["Label"].asString();
		if(!valueDataCustomerLabel["LabelSeries"].isNull())
			dataObject.labelSeries = valueDataCustomerLabel["LabelSeries"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryCustomerLabelResult::getMessage()const
{
	return message_;
}

std::vector<QueryCustomerLabelResult::CustomerLabel> QueryCustomerLabelResult::getData()const
{
	return data_;
}

std::string QueryCustomerLabelResult::getCode()const
{
	return code_;
}

bool QueryCustomerLabelResult::getSuccess()const
{
	return success_;
}

