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

#include <alibabacloud/pvtz/model/UpdateRecordRemarkRequest.h>

using AlibabaCloud::Pvtz::Model::UpdateRecordRemarkRequest;

UpdateRecordRemarkRequest::UpdateRecordRemarkRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "UpdateRecordRemark")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateRecordRemarkRequest::~UpdateRecordRemarkRequest()
{}

std::string UpdateRecordRemarkRequest::getRemark()const
{
	return remark_;
}

void UpdateRecordRemarkRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

long UpdateRecordRemarkRequest::getRecordId()const
{
	return recordId_;
}

void UpdateRecordRemarkRequest::setRecordId(long recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", std::to_string(recordId));
}

std::string UpdateRecordRemarkRequest::getUserClientIp()const
{
	return userClientIp_;
}

void UpdateRecordRemarkRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string UpdateRecordRemarkRequest::getLang()const
{
	return lang_;
}

void UpdateRecordRemarkRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

