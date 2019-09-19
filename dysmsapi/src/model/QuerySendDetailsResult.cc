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
	auto allSmsSendDetailDTOsNode = value["SmsSendDetailDTOs"]["SmsSendDetailDTO"];
	for (auto valueSmsSendDetailDTOsSmsSendDetailDTO : allSmsSendDetailDTOsNode)
	{
		SmsSendDetailDTO smsSendDetailDTOsObject;
		if(!valueSmsSendDetailDTOsSmsSendDetailDTO["PhoneNum"].isNull())
			smsSendDetailDTOsObject.phoneNum = valueSmsSendDetailDTOsSmsSendDetailDTO["PhoneNum"].asString();
		if(!valueSmsSendDetailDTOsSmsSendDetailDTO["SendStatus"].isNull())
			smsSendDetailDTOsObject.sendStatus = std::stol(valueSmsSendDetailDTOsSmsSendDetailDTO["SendStatus"].asString());
		if(!valueSmsSendDetailDTOsSmsSendDetailDTO["ErrCode"].isNull())
			smsSendDetailDTOsObject.errCode = valueSmsSendDetailDTOsSmsSendDetailDTO["ErrCode"].asString();
		if(!valueSmsSendDetailDTOsSmsSendDetailDTO["TemplateCode"].isNull())
			smsSendDetailDTOsObject.templateCode = valueSmsSendDetailDTOsSmsSendDetailDTO["TemplateCode"].asString();
		if(!valueSmsSendDetailDTOsSmsSendDetailDTO["Content"].isNull())
			smsSendDetailDTOsObject.content = valueSmsSendDetailDTOsSmsSendDetailDTO["Content"].asString();
		if(!valueSmsSendDetailDTOsSmsSendDetailDTO["SendDate"].isNull())
			smsSendDetailDTOsObject.sendDate = valueSmsSendDetailDTOsSmsSendDetailDTO["SendDate"].asString();
		if(!valueSmsSendDetailDTOsSmsSendDetailDTO["ReceiveDate"].isNull())
			smsSendDetailDTOsObject.receiveDate = valueSmsSendDetailDTOsSmsSendDetailDTO["ReceiveDate"].asString();
		if(!valueSmsSendDetailDTOsSmsSendDetailDTO["OutId"].isNull())
			smsSendDetailDTOsObject.outId = valueSmsSendDetailDTOsSmsSendDetailDTO["OutId"].asString();
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

