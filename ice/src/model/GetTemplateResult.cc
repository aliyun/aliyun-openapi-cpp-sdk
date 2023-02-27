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

#include <alibabacloud/ice/model/GetTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetTemplateResult::GetTemplateResult() :
	ServiceResult()
{}

GetTemplateResult::GetTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTemplateResult::~GetTemplateResult()
{}

void GetTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto _templateNode = value["Template"];
	if(!_templateNode["TemplateId"].isNull())
		_template_.templateId = _templateNode["TemplateId"].asString();
	if(!_templateNode["Name"].isNull())
		_template_.name = _templateNode["Name"].asString();
	if(!_templateNode["Type"].isNull())
		_template_.type = _templateNode["Type"].asString();
	if(!_templateNode["Config"].isNull())
		_template_.config = _templateNode["Config"].asString();
	if(!_templateNode["PreviewMedia"].isNull())
		_template_.previewMedia = _templateNode["PreviewMedia"].asString();
	if(!_templateNode["Status"].isNull())
		_template_.status = _templateNode["Status"].asString();
	if(!_templateNode["CreateSource"].isNull())
		_template_.createSource = _templateNode["CreateSource"].asString();
	if(!_templateNode["ModifiedSource"].isNull())
		_template_.modifiedSource = _templateNode["ModifiedSource"].asString();
	if(!_templateNode["PreviewMediaStatus"].isNull())
		_template_.previewMediaStatus = _templateNode["PreviewMediaStatus"].asString();
	if(!_templateNode["CreationTime"].isNull())
		_template_.creationTime = _templateNode["CreationTime"].asString();
	if(!_templateNode["ModifiedTime"].isNull())
		_template_.modifiedTime = _templateNode["ModifiedTime"].asString();
	if(!_templateNode["CoverURL"].isNull())
		_template_.coverURL = _templateNode["CoverURL"].asString();
	if(!_templateNode["ClipsParam"].isNull())
		_template_.clipsParam = _templateNode["ClipsParam"].asString();
	if(!_templateNode["RelatedMediaids"].isNull())
		_template_.relatedMediaids = _templateNode["RelatedMediaids"].asString();
	if(!_templateNode["ErrorCode"].isNull())
		_template_.errorCode = _templateNode["ErrorCode"].asString();
	if(!_templateNode["ErrorMessage"].isNull())
		_template_.errorMessage = _templateNode["ErrorMessage"].asString();

}

GetTemplateResult::_Template GetTemplateResult::get_Template()const
{
	return _template_;
}

