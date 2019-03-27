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

#include <alibabacloud/dysmsapi/model/QuerySendDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

QuerySendDetailsResult::QuerySendDetailsResult() :
	ServiceResult()
{}

QuerySendDetailsResult::QuerySendDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySendDetailsResult::~QuerySendDetailsResult()
{}

void QuerySendDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSmsSendDetailDTOs = value["SmsSendDetailDTOs"]["SmsSendDetailDTO"];
	for (auto value : allSmsSendDetailDTOs)
	{
		SmsSendDetailDTO smsSendDetailDTOsObject;
		if(!value["PhoneNum"].isNull())
			smsSendDetailDTOsObject.phoneNum = value["PhoneNum"].asString();
		if(!value["SendStatus"].isNull())
			smsSendDetailDTOsObject.sendStatus = std::stol(value["SendStatus"].asString());
		if(!value["ErrCode"].isNull())
			smsSendDetailDTOsObject.errCode = value["ErrCode"].asString();
		if(!value["TemplateCode"].isNull())
			smsSendDetailDTOsObject.templateCode = value["TemplateCode"].asString();
		if(!value["Content"].isNull())
			smsSendDetailDTOsObject.content = value["Content"].asString();
		if(!value["SendDate"].isNull())
			smsSendDetailDTOsObject.sendDate = value["SendDate"].asString();
		if(!value["ReceiveDate"].isNull())
			smsSendDetailDTOsObject.receiveDate = value["ReceiveDate"].asString();
		if(!value["OutId"].isNull())
			smsSendDetailDTOsObject.outId = value["OutId"].asString();
		smsSendDetailDTOs_.push_back(smsSendDetailDTOsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string QuerySendDetailsResult::getTotalCount()const
{
	return totalCount_;
}

std::string QuerySendDetailsResult::getMessage()const
{
	return message_;
}

std::string QuerySendDetailsResult::getCode()const
{
	return code_;
}

std::vector<QuerySendDetailsResult::SmsSendDetailDTO> QuerySendDetailsResult::getSmsSendDetailDTOs()const
{
	return smsSendDetailDTOs_;
}

