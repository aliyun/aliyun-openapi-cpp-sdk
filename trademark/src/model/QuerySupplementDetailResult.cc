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

#include <alibabacloud/trademark/model/QuerySupplementDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QuerySupplementDetailResult::QuerySupplementDetailResult() :
	ServiceResult()
{}

QuerySupplementDetailResult::QuerySupplementDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySupplementDetailResult::~QuerySupplementDetailResult()
{}

void QuerySupplementDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileTemplateUrls = value["FileTemplateUrls"]["FileTemplateUrls"];
	for (const auto &item : allFileTemplateUrls)
		fileTemplateUrls_.push_back(item.asString());
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["SerialNumber"].isNull())
		serialNumber_ = value["SerialNumber"].asString();
	if(!value["Type"].isNull())
		type_ = std::stoi(value["Type"].asString());
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["TmNumber"].isNull())
		tmNumber_ = value["TmNumber"].asString();
	if(!value["SendTime"].isNull())
		sendTime_ = std::stol(value["SendTime"].asString());
	if(!value["AcceptTime"].isNull())
		acceptTime_ = std::stol(value["AcceptTime"].asString());
	if(!value["SbjDeadTime"].isNull())
		sbjDeadTime_ = std::stol(value["SbjDeadTime"].asString());
	if(!value["AcceptDeadTime"].isNull())
		acceptDeadTime_ = std::stol(value["AcceptDeadTime"].asString());
	if(!value["OperateTime"].isNull())
		operateTime_ = std::stol(value["OperateTime"].asString());
	if(!value["UploadFileTemplateUrl"].isNull())
		uploadFileTemplateUrl_ = value["UploadFileTemplateUrl"].asString();
	if(!value["Content"].isNull())
		content_ = value["Content"].asString();

}

int QuerySupplementDetailResult::getStatus()const
{
	return status_;
}

long QuerySupplementDetailResult::getSendTime()const
{
	return sendTime_;
}

long QuerySupplementDetailResult::getSbjDeadTime()const
{
	return sbjDeadTime_;
}

std::string QuerySupplementDetailResult::getTmNumber()const
{
	return tmNumber_;
}

long QuerySupplementDetailResult::getOperateTime()const
{
	return operateTime_;
}

std::string QuerySupplementDetailResult::getUploadFileTemplateUrl()const
{
	return uploadFileTemplateUrl_;
}

int QuerySupplementDetailResult::getType()const
{
	return type_;
}

std::string QuerySupplementDetailResult::getSerialNumber()const
{
	return serialNumber_;
}

std::string QuerySupplementDetailResult::getContent()const
{
	return content_;
}

long QuerySupplementDetailResult::getAcceptDeadTime()const
{
	return acceptDeadTime_;
}

std::vector<std::string> QuerySupplementDetailResult::getFileTemplateUrls()const
{
	return fileTemplateUrls_;
}

long QuerySupplementDetailResult::getAcceptTime()const
{
	return acceptTime_;
}

long QuerySupplementDetailResult::getId()const
{
	return id_;
}

