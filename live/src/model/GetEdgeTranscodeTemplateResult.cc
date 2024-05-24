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

#include <alibabacloud/live/model/GetEdgeTranscodeTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

GetEdgeTranscodeTemplateResult::GetEdgeTranscodeTemplateResult() :
	ServiceResult()
{}

GetEdgeTranscodeTemplateResult::GetEdgeTranscodeTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEdgeTranscodeTemplateResult::~GetEdgeTranscodeTemplateResult()
{}

void GetEdgeTranscodeTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto _templateNode = value["Template"];
	if(!_templateNode["Bitrate"].isNull())
		_template_.bitrate = _templateNode["Bitrate"].asString();
	if(!_templateNode["Codec"].isNull())
		_template_.codec = _templateNode["Codec"].asString();
	if(!_templateNode["CreateTime"].isNull())
		_template_.createTime = _templateNode["CreateTime"].asString();
	if(!_templateNode["Fps"].isNull())
		_template_.fps = _templateNode["Fps"].asString();
	if(!_templateNode["Gop"].isNull())
		_template_.gop = _templateNode["Gop"].asString();
	if(!_templateNode["Name"].isNull())
		_template_.name = _templateNode["Name"].asString();
	if(!_templateNode["Resolution"].isNull())
		_template_.resolution = _templateNode["Resolution"].asString();
	if(!_templateNode["TemplateId"].isNull())
		_template_.templateId = _templateNode["TemplateId"].asString();
	if(!_templateNode["Type"].isNull())
		_template_.type = _templateNode["Type"].asString();

}

GetEdgeTranscodeTemplateResult::_Template GetEdgeTranscodeTemplateResult::get_Template()const
{
	return _template_;
}

